/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F68C
// Address: 0x000000010002F68C

//----- (000000010002F68C) ----------------------------------------------------
__int64 __fastcall sub_10002F68C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // x24
  __int64 v7; // x26
  const char *v8; // x22
  __int64 v9; // x23
  const char *v10; // x0
  int v11; // w0
  const char *v12; // x1
  __int64 v13; // x20
  __int64 v14; // x19
  int v15; // w21
  size_t v16; // x23
  _QWORD *v17; // x22
  size_t v18; // x26
  unsigned __int64 v19; // x8
  size_t v20; // x22
  void *v21; // x1
  __int64 v22; // x24
  char *v23; // x1
  size_t v24; // x22
  void *v26; // [xsp+0h] [xbp-80h] BYREF
  __int64 v27; // [xsp+8h] [xbp-78h]
  unsigned __int64 v28; // [xsp+10h] [xbp-70h]
  void *v29; // [xsp+18h] [xbp-68h] BYREF
  size_t v30; // [xsp+20h] [xbp-60h]
  size_t v31; // [xsp+28h] [xbp-58h]
  int v32; // [xsp+30h] [xbp-50h]

  v6 = a1 + 8;
  v7 = *(_QWORD *)(a1 + 8);
  if ( !v7 )
    goto LABEL_19;
  v8 = *(_QWORD *)(a3 + 8) ? *(const char **)a3 : &byte_10007AE40;
  v9 = a1 + 8;
  do
  {
    if ( *(_QWORD *)(v7 + 40) )
      v10 = *(const char **)(v7 + 32);
    else
      v10 = &byte_10007AE40;
    v11 = strcmp(v10, v8);
    if ( v11 >= 0 )
      v9 = v7;
    v7 = *(_QWORD *)(v7 + (((unsigned int)v11 >> 28) & 8));
  }
  while ( v7 );
  if ( v9 == v6
    || (*(_QWORD *)(v9 + 40) ? (v12 = *(const char **)(v9 + 32)) : (v12 = &byte_10007AE40), strcmp(v8, v12) < 0) )
  {
LABEL_19:
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    v16 = *(_QWORD *)(a1 + 40);
    if ( v16 )
    {
      v17 = qalloc_or_throw(*(_QWORD *)(a1 + 40));
      v26 = v17;
      v28 = v16;
      memcpy(v17, *(const void **)(a1 + 32), v16);
      v27 = v16;
    }
    else
    {
      v17 = nullptr;
    }
    if ( v16 )
      v18 = v16 - 1;
    else
      v18 = 0;
    if ( v16 < v18 + 2 )
    {
      v17 = qvector_reserve(&v26, v17, v18 + 2, 1u);
      v26 = v17;
    }
    v27 = v18 + 2;
    *((_BYTE *)v17 + v18) = 46;
    *((_BYTE *)v26 + v18 + 1) = 0;
    v19 = *(_QWORD *)(a3 + 8);
    if ( v19 )
      v20 = v19 - 1;
    else
      v20 = 0;
    if ( v19 >= 2 )
    {
      v21 = v26;
      if ( v27 )
        v22 = v27 - 1;
      else
        v22 = 0;
      if ( v28 < v22 + v20 + 1 )
      {
        v21 = qvector_reserve(&v26, v26, v22 + v20 + 1, 1u);
        v26 = v21;
      }
      v27 = v22 + v20 + 1;
      *((_BYTE *)v21 + v22 + v20) = 0;
      memcpy((char *)v26 + v22, *(const void **)a3, v20);
    }
    if ( v27 )
      v23 = (char *)v26;
    else
      v23 = &byte_10007AE40;
    v15 = sub_10002ECAC(a2, v23);
    v29 = nullptr;
    v30 = 0;
    v31 = 0;
    v24 = *(_QWORD *)(a3 + 8);
    if ( v24 )
    {
      v29 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
      v31 = v24;
      memcpy(v29, *(const void **)a3, v24);
      v30 = v24;
    }
    v32 = v15;
    sub_10003103C((__int64 **)a1, (__int64)&v29, (__int64)&v29);
    if ( v29 )
    {
      v30 = 0;
      qfree(v29);
    }
    if ( v26 )
    {
      v27 = 0;
      qfree(v26);
    }
  }
  else
  {
    v13 = *(int *)(v9 + 56);
    v14 = *(_QWORD *)(*a2 + 8 * v13);
    v15 = -1;
    if ( !*(_DWORD *)(v14 + 136) )
    {
      sub_10002EE1C(v14);
      *(_DWORD *)(v14 + 136) = -1;
      return (int)v13;
    }
  }
  return v15;
}
// 10007AE40: using guessed type char byte_10007AE40;
