/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54AF8
// Address: 0x0000000000054AF8

//----- (0000000000054AF8) ----------------------------------------------------
void __fastcall sub_54AF8(pthread_mutex_t *a1, __int64 a2)
{
  char *v3; // x8
  char *align; // x0
  char *v5; // x8
  __int128 v6; // q1
  char *v7; // x0
  unsigned __int64 v8; // x19
  __int64 v9; // x21
  unsigned __int64 v10; // x22
  void *v11; // x8
  char *v12; // x23
  void *v13; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v14; // [xsp+8h] [xbp-98h]
  __int64 v15; // [xsp+10h] [xbp-90h]
  void *v16; // [xsp+18h] [xbp-88h]
  unsigned __int64 v17; // [xsp+20h] [xbp-80h]
  __int64 v18; // [xsp+28h] [xbp-78h]
  void *ptr; // [xsp+30h] [xbp-70h]
  __int64 v20; // [xsp+38h] [xbp-68h]
  __int64 v21; // [xsp+40h] [xbp-60h]
  _BYTE v22[25]; // [xsp+48h] [xbp-58h]
  __int64 v23; // [xsp+68h] [xbp-38h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_54A14((__int64)&v13, a2);
  v3 = (char *)*(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v3 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    align = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v3 + 1), 0x68u);
    v3 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
  }
  v5 = &align[104 * (_QWORD)v3];
  *(_QWORD *)v5 = v13;
  v13 = nullptr;
  *((_QWORD *)v5 + 1) = v14;
  v14 = 0;
  *((_QWORD *)v5 + 2) = v15;
  v15 = 0;
  *((_QWORD *)v5 + 3) = v16;
  v16 = nullptr;
  *((_QWORD *)v5 + 4) = v17;
  v17 = 0;
  *((_QWORD *)v5 + 5) = v18;
  v18 = 0;
  *((_QWORD *)v5 + 6) = ptr;
  ptr = nullptr;
  *((_QWORD *)v5 + 7) = v20;
  v20 = 0;
  *((_QWORD *)v5 + 8) = v21;
  v6 = *(_OWORD *)v22;
  v21 = 0;
  *(_OWORD *)(v5 + 81) = *(_OWORD *)&v22[9];
  *(_OWORD *)(v5 + 72) = v6;
  ++*(&a1->__align + 1);
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
    ptr = nullptr;
    v21 = 0;
  }
  v7 = (char *)v16;
  if ( v16 )
  {
    v8 = v17;
    if ( v17 )
    {
      v9 = 0;
      v10 = 1;
      v11 = *(void **)v16;
      if ( *(_QWORD *)v16 )
        goto LABEL_11;
      while ( v10 < v8 )
      {
        v7 = (char *)v16;
        ++v10;
        v9 += 40;
        v11 = *(void **)((char *)v16 + v9);
        if ( v11 )
        {
LABEL_11:
          v12 = &v7[v9];
          *(_QWORD *)&v7[v9 + 8] = 0;
          qfree(v11);
          *(_QWORD *)v12 = 0;
          *((_QWORD *)v12 + 2) = 0;
        }
      }
      v7 = (char *)v16;
    }
    v17 = 0;
    qfree(v7);
    v16 = nullptr;
    v18 = 0;
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
}
