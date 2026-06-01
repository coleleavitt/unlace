/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461F20
// Address: 0x0000000000461F20

//----- (0000000000461F20) ----------------------------------------------------
__int64 __fastcall sub_461F20(__int64 a1, __int64 *a2)
{
  __int64 v4; // x20
  __int64 (__fastcall *v5)(__int64, __int64 *, unsigned int *); // x3
  __int64 *i; // x1
  int v7; // w21
  int v8; // w22
  char *v9; // x0
  unsigned __int64 v10; // x25
  __int64 v11; // x26
  char *v12; // x24
  int v13; // w0
  int (__fastcall *v14)(__int64, _QWORD, _QWORD, void *, _QWORD); // x22
  unsigned int v15; // w0
  char *v16; // x0
  unsigned int v17; // w22
  unsigned __int64 v18; // x21
  __int64 v19; // x20
  char *v20; // x2
  void *v21; // x0
  void *v23; // x0
  signed __int64 n; // [xsp+68h] [xbp-58h]
  unsigned int v25; // [xsp+7Ch] [xbp-44h] BYREF
  void *v26; // [xsp+80h] [xbp-40h] BYREF
  unsigned __int64 v27; // [xsp+88h] [xbp-38h]
  __int64 v28; // [xsp+90h] [xbp-30h]
  int v29; // [xsp+98h] [xbp-28h] BYREF
  void *ptr; // [xsp+A0h] [xbp-20h]
  signed __int64 v31; // [xsp+A8h] [xbp-18h]
  __int64 v32; // [xsp+B0h] [xbp-10h]

  v4 = sub_461B70();
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v4 + 488LL);
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_8;
  for ( i = *(__int64 **)(a1 + 8); ; i = &qword_4B2D48 )
  {
    v7 = v5(v4, i, &v25);
    if ( v7 < 0 )
      goto LABEL_6;
    v8 = *(_QWORD *)(v4 + 680);
    if ( !*(_QWORD *)(v4 + 680) )
      break;
    if ( v7 < v8 )
      goto LABEL_10;
LABEL_6:
    if ( !under_debugger )
      sub_492270(30056);
    __break(0x3E8u);
LABEL_8:
    ;
  }
  v8 = *(_DWORD *)(v4 + 776);
  if ( v7 >= v8 )
    goto LABEL_6;
LABEL_10:
  v26 = nullptr;
  v27 = 0;
  v28 = 0;
  v29 = -2;
  ptr = (void *)-1LL;
  v31 = 0;
  v32 = 0;
  v9 = (char *)sub_491288((__int64)&v26, nullptr, v8, 0x20u);
  v10 = v27;
  v26 = v9;
  if ( v27 < v8 )
  {
    v11 = 32 * v27;
    while ( 1 )
    {
      v12 = &v9[v11];
      *(_DWORD *)&v9[v11] = -2;
      *((_QWORD *)v12 + 1) = 0;
      *((_QWORD *)v12 + 2) = 0;
      *((_QWORD *)v12 + 3) = 0;
      if ( &v9[v11] != (char *)&v29 )
      {
        v13 = v29;
        if ( v29 < -1 )
        {
          *((_QWORD *)v12 + 1) = ptr;
        }
        else
        {
          *((_QWORD *)v12 + 1) = 0;
          *((_QWORD *)v12 + 2) = 0;
          n = v31;
          if ( v31 )
          {
            v23 = sub_491248(v31);
            *((_QWORD *)v12 + 1) = v23;
            *((_QWORD *)v12 + 3) = n;
            memcpy(v23, ptr, n);
            v13 = v29;
            *((_QWORD *)v12 + 2) = n;
          }
        }
        *(_DWORD *)v12 = v13;
      }
      ++v10;
      v11 += 32;
      if ( v10 == v8 )
        break;
      v9 = (char *)v26;
    }
  }
  v27 = v8;
  if ( v29 >= -1 && ptr )
  {
    v31 = 0;
    j__free(ptr);
  }
  v14 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, void *, _QWORD))(*(_QWORD *)v4 + 224LL);
  v15 = sub_461B80();
  if ( v14(v4, v15, v25, v26, 0) <= 0 )
  {
    v17 = sub_4325E8(a2, "failed to read register value");
    v16 = (char *)v26;
  }
  else
  {
    v16 = (char *)v26;
    v17 = 0;
    a2[1] = *((_QWORD *)v26 + 4 * v7 + 1);
  }
  if ( v16 )
  {
    v18 = v27;
    if ( v27 )
    {
      v19 = 0;
      do
      {
        v20 = &v16[32 * v19];
        if ( *(int *)v20 >= -1 )
        {
          v21 = *((void **)v20 + 1);
          if ( v21 )
          {
            *((_QWORD *)v20 + 2) = 0;
            j__free(v21);
          }
        }
        ++v19;
        v16 = (char *)v26;
      }
      while ( v18 != v19 );
    }
    v27 = 0;
    j__free(v16);
  }
  return v17;
}
// 461F78: variable 'v5' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
