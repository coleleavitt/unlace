/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95D28
// Address: 0x0000000000095D28

//----- (0000000000095D28) ----------------------------------------------------
__int64 __fastcall sub_95D28(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // x23
  char *v5; // x0
  __int64 v6; // x24
  __int64 v7; // x25
  __int64 v8; // x27
  char *v9; // x26
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x0
  char *v13; // x8
  __int64 v14; // x19
  unsigned __int64 v15; // x20
  __int64 v16; // x21
  unsigned __int64 v17; // x23
  void *v18; // x0
  char *v19; // x24
  void *ptr; // [xsp+0h] [xbp-70h] BYREF
  unsigned __int64 v22; // [xsp+8h] [xbp-68h]
  unsigned __int64 v23; // [xsp+10h] [xbp-60h]
  __int64 v24; // [xsp+18h] [xbp-58h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v22 = 0;
  v23 = 0;
  ptr = nullptr;
  v3 = a2[1];
  if ( v3 )
  {
    v5 = (char *)qalloc_or_throw(24 * v3);
    v6 = 0;
    v7 = 1;
    ptr = v5;
    v23 = v3;
    while ( 1 )
    {
      v8 = *a2;
      v9 = &v5[v6];
      *((_QWORD *)v9 + 1) = 0;
      *((_QWORD *)v9 + 2) = 0;
      *(_QWORD *)v9 = 0;
      v10 = *(_QWORD *)(v8 + v6 + 8);
      if ( v10 )
      {
        v11 = qalloc_or_throw(*(_QWORD *)(v8 + v6 + 8));
        *(_QWORD *)v9 = v11;
        *((_QWORD *)v9 + 2) = v10;
        memcpy(v11, *(const void **)(v8 + v6), v10);
        *((_QWORD *)v9 + 1) = v10;
      }
      if ( v3 == v7 )
        break;
      v5 = (char *)ptr;
      ++v7;
      v6 += 24;
    }
    v22 = v3;
  }
  v12 = sub_95E90(a1, (__int64 *)&ptr);
  v13 = (char *)ptr;
  v14 = v12;
  if ( ptr )
  {
    v15 = v22;
    if ( v22 )
    {
      v16 = 0;
      v17 = 1;
      v18 = *(void **)ptr;
      if ( *(_QWORD *)ptr )
        goto LABEL_13;
      while ( v17 < v15 )
      {
        v13 = (char *)ptr;
        ++v17;
        v16 += 24;
        v18 = *(void **)((char *)ptr + v16);
        if ( v18 )
        {
LABEL_13:
          v19 = &v13[v16];
          *(_QWORD *)&v13[v16 + 8] = 0;
          qfree(v18);
          *(_QWORD *)v19 = 0;
          *((_QWORD *)v19 + 2) = 0;
        }
      }
      v13 = (char *)ptr;
    }
    v22 = 0;
    qfree(v13);
    ptr = nullptr;
    v23 = 0;
  }
  return v14;
}
