void __fastcall sub_15C75D0(__int64 a1, _WORD *a2, unsigned int a3, __int64 a4, unsigned int a5, double a6)
{
  unsigned int v7; // r13d
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // r12
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned int *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int16 v22; // ax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int16 v25; // ax
  __int64 v26; // [rsp+20h] [rbp-168h] BYREF
  _WORD *v27[2]; // [rsp+28h] [rbp-160h] BYREF
  char i; // [rsp+3Eh] [rbp-14Ah] BYREF
  bool v29; // [rsp+3Fh] [rbp-149h] BYREF
  void *v30; // [rsp+40h] [rbp-148h] BYREF
  __int64 v31; // [rsp+48h] [rbp-140h]
  _BYTE v32[48]; // [rsp+50h] [rbp-138h] BYREF
  void *ptr; // [rsp+80h] [rbp-108h] BYREF
  __int64 v34; // [rsp+88h] [rbp-100h]
  _BYTE v35[48]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-C8h] BYREF
  _WORD **v37; // [rsp+C8h] [rbp-C0h]
  bool *v38; // [rsp+D0h] [rbp-B8h]
  __int64 *v39; // [rsp+D8h] [rbp-B0h]

  v7 = a5;
  v8 = *(_BYTE *)(a1 + 8) == 0;
  v27[0] = a2;
  v26 = a4;
  if ( !v8 && a3 == a5 )
    return;
  if ( a3 == a5 )
  {
    i = 0;
    v30 = v32;
    v31 = 0xA00000000LL;
    ptr = v35;
    v34 = 0xA00000000LL;
LABEL_43:
    if ( i )
      return;
    v25 = *v27[0];
    v36 = a1;
    v37 = v27;
    v38 = &v29;
    v29 = (v25 & 0x1FF) == 256;
    v39 = &v26;
LABEL_29:
    if ( (_DWORD)v34 )
      sub_15C5580((__int64)&v36, 6717, (unsigned int *)&ptr, a6);
    goto LABEL_31;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = a3;
  v11 = a5;
  do
  {
    while ( (unsigned int)v10 < v11 )
    {
      v11 = *(_DWORD *)(v9 + 16LL * v11);
      if ( v11 == (_DWORD)v10 )
        goto LABEL_7;
    }
    LODWORD(v10) = *(_DWORD *)(v9 + 16 * v10);
  }
  while ( (_DWORD)v10 != v11 );
LABEL_7:
  for ( i = 0; v11 != a3; a3 = *v13 )
  {
    v12 = 16LL * a3;
    v13 = (unsigned int *)(v9 + v12);
    v14 = *(unsigned int *)(v9 + v12 + 8);
    if ( (_DWORD)v14 )
    {
      v15 = *(_QWORD *)a1;
      if ( !i )
      {
        sub_15C3760(v15, v27[0], v26, &i, a6);
        v15 = *(_QWORD *)a1;
        v13 = (unsigned int *)(v12 + *(_QWORD *)(a1 + 16));
        v14 = v13[2];
      }
      sub_168B9F0(&v36, v15 + 8, v13[3], v14, 0);
      sub_15F7200(&v36);
      v9 = *(_QWORD *)(a1 + 16);
      v13 = (unsigned int *)(v9 + v12);
    }
  }
  v31 = 0xA00000000LL;
  v30 = v32;
  ptr = v35;
  v34 = 0xA00000000LL;
  if ( v11 == v7 )
    goto LABEL_43;
  do
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)a1;
      v17 = (unsigned int *)(v9 + 16LL * v7);
      v19 = 16LL * v7;
      v18 = v17[1];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 || (_DWORD)v18 != 6320 )
        break;
      v20 = (unsigned int)v31;
      v21 = (unsigned int)v31 + 1LL;
      if ( v21 > HIDWORD(v31) )
      {
        sub_2237220(&v30, v32, v21, 4);
        v20 = (unsigned int)v31;
      }
      *((_DWORD *)v30 + v20) = v7;
      v9 = *(_QWORD *)(a1 + 16);
      LODWORD(v31) = v31 + 1;
      v7 = *(_DWORD *)(v9 + 16LL * v7);
      if ( v11 == v7 )
        goto LABEL_27;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 8) == 0 && (_DWORD)v18 == 6319 )
    {
      v23 = (unsigned int)v34;
      v24 = (unsigned int)v34 + 1LL;
      if ( v24 > HIDWORD(v34) )
      {
        sub_2237220(&ptr, v35, v24, 4);
        v23 = (unsigned int)v34;
      }
      *((_DWORD *)ptr + v23) = v7;
      v9 = *(_QWORD *)(a1 + 16);
      LODWORD(v34) = v34 + 1;
      v17 = (unsigned int *)(v9 + v19);
    }
    else if ( (_DWORD)v18 )
    {
      if ( !i )
      {
        sub_15C3760(v16, v27[0], v26, &i, a6);
        v16 = *(_QWORD *)a1;
        v17 = (unsigned int *)(v19 + *(_QWORD *)(a1 + 16));
        v18 = v17[1];
      }
      sub_168B9F0(&v36, v16 + 8, v17[3], v18, 0);
      sub_15F7200(&v36);
      v9 = *(_QWORD *)(a1 + 16);
      v17 = (unsigned int *)(v9 + v19);
    }
    v7 = *v17;
  }
  while ( v11 != *v17 );
LABEL_27:
  if ( i )
    goto LABEL_31;
  v22 = *v27[0];
  v36 = a1;
  v37 = v27;
  v38 = &v29;
  v29 = (v22 & 0x1FF) == 256;
  v39 = &v26;
  if ( !(_DWORD)v31 )
    goto LABEL_29;
  sub_15C5580((__int64)&v36, 6770, (unsigned int *)&v30, a6);
LABEL_31:
  if ( ptr != v35 )
    free(ptr);
  if ( v30 != v32 )
    free(v30);
}
