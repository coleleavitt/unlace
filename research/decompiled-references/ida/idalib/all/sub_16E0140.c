void __fastcall sub_16E0140(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v11; // rax
  int v12; // edx
  char v13; // dl
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // r15d
  char *v17; // rax
  char *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // r15d
  char *v22; // rax
  char *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 *v28; // r15
  unsigned int v29; // eax
  char *v30; // rax
  __int64 v31; // rbp
  char *v32; // rax
  size_t v33; // r8
  char *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  _BYTE *v40; // rax
  _QWORD *v41; // rax
  _BYTE *v44; // [rsp+3Ch] [rbp-16Ch]
  char v45; // [rsp+44h] [rbp-164h]
  __int64 v46; // [rsp+48h] [rbp-160h]
  int v47; // [rsp+50h] [rbp-158h]
  _BYTE *v48; // [rsp+54h] [rbp-154h]
  int v49; // [rsp+5Ch] [rbp-14Ch]
  _BYTE v50[32]; // [rsp+60h] [rbp-148h] BYREF
  _BYTE *v51; // [rsp+80h] [rbp-128h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-120h]
  _BYTE *v53; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v54[12]; // [rsp+A8h] [rbp-100h]
  char v55; // [rsp+B4h] [rbp-F4h]
  void *v56; // [rsp+B8h] [rbp-F0h]
  __int64 v57; // [rsp+C0h] [rbp-E8h]
  _BYTE v58[24]; // [rsp+C8h] [rbp-E0h] BYREF
  _BYTE *v59; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v60; // [rsp+E8h] [rbp-C0h]
  unsigned __int8 *v61; // [rsp+100h] [rbp-A8h] BYREF
  char v62; // [rsp+158h] [rbp-50h]
  unsigned int v63; // [rsp+160h] [rbp-48h]
  char v64; // [rsp+164h] [rbp-44h]

  v11 = *(unsigned int *)(a2 + 8);
  v12 = 1;
  if ( (unsigned int)v11 <= 0xC )
    v12 = dword_26403C0[v11];
  v44 = (_BYTE *)sub_16B5B90(a1, *(_QWORD *)a2, v12);
  v45 = v13;
  sub_C9E280((__int64)v50, (__int64 *)a2);
  if ( v50[16] )
  {
    v19 = sub_16B5B90(a1, a4, a5);
    v49 = v20;
    v48 = (_BYTE *)v19;
    v21 = sub_16B5B40(a1, *(_QWORD *)a2);
    sub_168B9B0((__int64)&v53, *(_QWORD *)(a1 + 8) + 8LL, a6);
    v22 = sub_C9D9B0(a2);
    sub_16B7630(&v53, (__int64)v22);
    v23 = sub_C9DAF0(a3);
    sub_16B7630(&v53, (__int64)v23);
    sub_1582CA0((__int64)&v59, &v53);
    v24 = *(unsigned int *)(a1 + 80);
    v25 = *(_QWORD *)(a1 + 64);
    LODWORD(v52) = v49;
    v26 = *(_QWORD *)(a1 + 8);
    v51 = v48;
    sub_16DE8D0(
      v26,
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(v25 + 8 * v24),
      (__int64)&v59,
      v21,
      a7,
      v27,
      (__int64)v48,
      v49,
      nullptr,
      0);
    if ( v59 && (_QWORD)v60 )
      sub_1580C40(v60, (unsigned __int64)v59);
    if ( v53 && *(_QWORD *)v54 )
      sub_1580C40(*(unsigned __int64 *)v54, (unsigned __int64)v53);
    v28 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
    v29 = sub_16B5B40(a1, *(_QWORD *)a2);
    sub_168B9F0((__int64)&v59, v28, v29, 0x1766u, 0);
    v30 = sub_C9D9B0((__int64)v50);
    v31 = (__int64)v30;
    if ( v62 )
    {
      sub_16B7630(&v61, (__int64)v30);
    }
    else if ( v64 )
    {
      v39 = sub_168B9E0(&v59);
      v40 = *((_BYTE **)&v60 + 1);
      if ( *((_QWORD *)&v60 + 1) )
        v40 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v60 + 1) + 32LL))(*((_QWORD *)&v60 + 1));
      v53 = v40;
      v41 = sub_1587BC0(v39, (__int64 *)&v53, v35, v36, v37, v38);
      sub_16B7630((unsigned __int8 **)(*v41 + 32LL * v63 + 8), v31);
    }
    v32 = sub_C9D9B0((__int64)v50);
    v33 = 0;
    v34 = v32;
    if ( v32 )
      v33 = j__strlen(v32);
    sub_16BA3D0((__int64)&v53, (__int64)v44, v45, v34, v33);
    sub_1589170((__int64)&v59, &v53);
    if ( v56 != v58 )
      operator delete(v56);
    sub_15F7200(&v59);
  }
  else
  {
    v53 = nullptr;
    v54[0] = 0;
    *(_QWORD *)&v54[4] = 0;
    v55 = 0;
    v56 = v58;
    v57 = 0;
    v58[0] = 0;
    v58[16] = 0;
    if ( a6 == 6929 )
    {
      *(_QWORD *)((char *)&v60 + 4) = 0;
      BYTE12(v60) = 0;
      v51 = v44;
      LOBYTE(v52) = v45;
      v59 = v44;
      LOBYTE(v60) = v45;
      v53 = v44;
      v54[0] = v45;
    }
    v14 = sub_16B5B90(a1, a4, a5);
    v47 = v15;
    v46 = v14;
    v16 = sub_16B5B40(a1, *(_QWORD *)a2);
    sub_168B9B0((__int64)&v51, *(_QWORD *)(a1 + 8) + 8LL, a6);
    v17 = sub_C9D9B0(a2);
    sub_16B7630(&v51, (__int64)v17);
    v18 = sub_C9DAF0(a3);
    sub_16B7630(&v51, (__int64)v18);
    sub_1582CA0((__int64)&v59, &v51);
    sub_16DE8D0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v59,
      v16,
      a7,
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      v46,
      v47,
      (char *)&v53,
      1);
    if ( v59 && (_QWORD)v60 )
      sub_1580C40(v60, (unsigned __int64)v59);
    if ( v51 && v52 )
      sub_1580C40(v52, (unsigned __int64)v51);
    if ( v56 != v58 )
      operator delete(v56);
  }
}
