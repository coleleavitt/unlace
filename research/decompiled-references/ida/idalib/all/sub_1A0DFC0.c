void __fastcall sub_1A0DFC0(_QWORD *a1, _DWORD *a2, unsigned __int64 a3, double a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rax
  int v17; // r15d
  __int64 v18; // rsi
  _BYTE *v19; // rax
  char *v20; // rbp
  char *v21; // r12
  _BYTE *i; // rax
  __int64 v23; // rsi
  unsigned int v24; // ecx
  __int64 v25; // rdi
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  _QWORD *v30; // r14
  _QWORD *v31; // rbp
  _QWORD *v32; // rdi
  _QWORD *v33; // r13
  _QWORD *v34; // r12
  char *v35; // rdi
  size_t v36; // rax
  size_t v37; // rax
  __int64 v38; // [rsp+18h] [rbp-1FE0h]
  __int64 v39; // [rsp+18h] [rbp-1FE0h]
  unsigned __int64 v40; // [rsp+38h] [rbp-1FC0h] BYREF
  char v41; // [rsp+47h] [rbp-1FB1h] BYREF
  __int64 *v42; // [rsp+48h] [rbp-1FB0h] BYREF
  _BYTE *v43; // [rsp+50h] [rbp-1FA8h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-1FA0h]
  _BYTE *v45; // [rsp+70h] [rbp-1F88h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-1F80h] BYREF
  unsigned __int64 v47; // [rsp+80h] [rbp-1F78h]
  _BYTE *v48; // [rsp+100h] [rbp-1EF8h] BYREF
  __int64 v49; // [rsp+108h] [rbp-1EF0h]
  _BYTE v50[2688]; // [rsp+110h] [rbp-1EE8h] BYREF
  void *v51; // [rsp+B90h] [rbp-1468h]
  __int64 v52; // [rsp+B98h] [rbp-1460h]
  int v53; // [rsp+BA0h] [rbp-1458h]
  char v54; // [rsp+BA4h] [rbp-1454h]
  _QWORD v55[17]; // [rsp+BA8h] [rbp-1450h] BYREF
  int v56; // [rsp+C30h] [rbp-13C8h]
  __int64 v57; // [rsp+C38h] [rbp-13C0h]
  __int64 v58; // [rsp+C40h] [rbp-13B8h]
  void *ptr; // [rsp+C48h] [rbp-13B0h]
  __int64 v60; // [rsp+C50h] [rbp-13A8h]
  _BYTE v61[32]; // [rsp+C58h] [rbp-13A0h] BYREF
  __int64 *v62; // [rsp+C78h] [rbp-1380h]
  __int64 v63; // [rsp+C80h] [rbp-1378h]
  _QWORD v64[2]; // [rsp+C88h] [rbp-1370h] BYREF
  unsigned int v65; // [rsp+C98h] [rbp-1360h]
  int v66; // [rsp+C9Ch] [rbp-135Ch]
  __int64 v67; // [rsp+CA0h] [rbp-1358h]
  char v68; // [rsp+CA8h] [rbp-1350h]
  int v69; // [rsp+CACh] [rbp-134Ch]
  int v70; // [rsp+1FB0h] [rbp-48h]

  v4 = *(_QWORD *)(a3 + 8);
  v40 = a3;
  v5 = *(_QWORD *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  if ( *(_BYTE *)(*(_QWORD *)v5 + 16LL) != 48 )
    return;
  v8 = sub_1A0B650(a2, a3, a4);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(a1[33] + 32LL), 0x1A7Au, v8, a1[33], v9, v10) == 1 )
    return;
  v52 = 16;
  v53 = 0;
  v48 = v50;
  v49 = 0x1000000000LL;
  v51 = v55;
  ptr = v61;
  v60 = 0x400000000LL;
  v54 = 1;
  v55[16] = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v62 = v64;
  v63 = 0;
  v64[0] = 0;
  v64[1] = 1;
  v65 = v8;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v15 = sub_F60F10(v6, 6778, v11, v12, v13, v14);
  v16 = sub_1A3D890(a1, v15);
  v17 = sub_1A0AAD0(
          (__int64)a1,
          v8,
          (__int64)&v40,
          1,
          (__int64)&v48,
          *(_QWORD *)(v40 + 8),
          v16,
          (__int64)&v42,
          0,
          1,
          0,
          0,
          0,
          1);
  sub_168B9B0((__int64)&v45, (__int64)(a1 + 1), 6778);
  sub_AE9DF0(&v45, v17, 2u);
  sub_AE9DF0(&v45, (int)*a2, 2u);
  v18 = *(_QWORD *)(v40 + 8);
  sub_AE9DF0(&v45, v18, 8u);
  v19 = (_BYTE *)sub_EEC8C0(v40, v18, a4);
  LOBYTE(v44) = 1;
  v43 = v19;
  sub_AEC610((__int64 *)&v45, (__int64 *)&v43);
  sub_1582CA0((__int64)&v43, &v45);
  if ( v45 && v46 )
    sub_1580C40(v46, (unsigned __int64)v45);
  if ( v17 == 1 )
  {
    v37 = j__strlen(&byte_22F0C30);
    LODWORD(v45) = v8;
    v39 = v37;
    sub_1582CA0((__int64)&v46, &v43);
    sub_1C022A0(
      (unsigned int)&v48,
      (unsigned int)&v45,
      (_DWORD)a1,
      0,
      (unsigned int)&v40,
      1,
      (__int64)&byte_22F0C30,
      v39,
      0,
      (__int64)sub_16A7620,
      (__int64)&v41);
    goto LABEL_45;
  }
  if ( v17 )
  {
    if ( v17 != 2 )
    {
      if ( v17 == 3 )
      {
        sub_168CDE0((__int64)&v45, a1 + 1, v8, (__int64)&v43, 0);
        sub_15F7200(&v45);
        sub_18F5080((__int64)a1, *v42);
      }
      goto LABEL_11;
    }
    v36 = j__strlen(&byte_22F0C30);
    LODWORD(v45) = v8;
    v38 = v36;
    sub_1582CA0((__int64)&v46, &v43);
    sub_1C022A0(
      (unsigned int)&v48,
      (unsigned int)&v45,
      (_DWORD)a1,
      2,
      (unsigned int)&v40,
      1,
      (__int64)&byte_22F0C30,
      v38,
      0,
      (__int64)sub_16A7620,
      (__int64)&v41);
LABEL_45:
    if ( v46 && v47 )
      sub_1580C40(v47, v46);
    goto LABEL_11;
  }
  sub_1660BC0(a1, v8, *v42, v42[1], (__int64)a2, (__int64)&v43);
LABEL_11:
  if ( v43 && v44 )
    sub_1580C40(v44, (unsigned __int64)v43);
  sub_1BD27A0(&v48);
  v20 = (char *)ptr;
  v21 = (char *)ptr + 8 * (unsigned int)v60;
  if ( ptr != v21 )
  {
    for ( i = ptr; ; i = ptr )
    {
      v23 = 0x40000000000LL;
      v24 = (unsigned int)((v20 - i) >> 3) >> 7;
      if ( v24 <= 0x1D )
        v23 = 4096LL << v24;
      v25 = *(_QWORD *)v20;
      v20 += 8;
      operator delete(v25, v23, 16);
      if ( v21 == v20 )
        break;
    }
  }
  v26 = v62;
  v27 = &v62[2 * (unsigned int)v63];
  if ( v62 != v27 )
  {
    do
    {
      v28 = v26[1];
      v29 = *v26;
      v26 += 2;
      operator delete(v29, v28, 16);
    }
    while ( v27 != v26 );
    v27 = v62;
  }
  if ( v27 != v64 )
    free(v27);
  if ( ptr != v61 )
    free(ptr);
  if ( !v54 )
    free(v51);
  v30 = v48;
  v31 = &v48[168 * (unsigned int)v49];
  if ( v48 != (_BYTE *)v31 )
  {
    do
    {
      while ( 1 )
      {
        v31 -= 21;
        v32 = (_QWORD *)v31[8];
        v33 = (_QWORD *)v31[9];
        v34 = v32;
        if ( v33 != v32 )
        {
          do
          {
            while ( 1 )
            {
              v35 = (char *)v34[3];
              if ( v35 == (char *)(v34 + 5) )
                break;
              operator delete(v35);
              v34 += 8;
              if ( v33 == v34 )
                goto LABEL_33;
            }
            v34 += 8;
          }
          while ( v33 != v34 );
LABEL_33:
          v32 = (_QWORD *)v31[8];
        }
        if ( !v32 )
          break;
        operator delete(v32);
        if ( v30 == v31 )
          goto LABEL_36;
      }
    }
    while ( v30 != v31 );
LABEL_36:
    v31 = v48;
  }
  if ( v31 != (_QWORD *)v50 )
    free(v31);
}
