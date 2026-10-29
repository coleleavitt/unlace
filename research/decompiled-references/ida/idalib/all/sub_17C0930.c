void __fastcall sub_17C0930(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  char v10; // al
  size_t v11; // rax
  __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rdx
  size_t v15; // rsi
  char v16; // al
  size_t v17; // rax
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  _BYTE *v22; // rdi
  __int64 *v23; // r12
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r12
  _BYTE *v28; // rax
  __int64 v29; // rdx
  size_t v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // rax
  __int64 v34; // rax
  _BYTE *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // rax
  _QWORD *v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  __int64 v45; // [rsp+8h] [rbp-150h]
  unsigned __int64 v46; // [rsp+8h] [rbp-150h]
  unsigned __int64 v47; // [rsp+8h] [rbp-150h]
  __int64 v48; // [rsp+8h] [rbp-150h]
  __int64 v49; // [rsp+8h] [rbp-150h]
  int v50; // [rsp+10h] [rbp-148h]
  __int64 v52; // [rsp+18h] [rbp-140h]
  __int64 v53; // [rsp+18h] [rbp-140h]
  bool v54; // [rsp+2Fh] [rbp-129h] BYREF
  void *v55; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v56; // [rsp+38h] [rbp-120h]
  _QWORD v57[2]; // [rsp+40h] [rbp-118h] BYREF
  void *v58; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v59[12]; // [rsp+58h] [rbp-100h] BYREF
  char v60; // [rsp+64h] [rbp-F4h]
  void *v61; // [rsp+68h] [rbp-F0h]
  __int64 v62; // [rsp+70h] [rbp-E8h]
  _BYTE v63[24]; // [rsp+78h] [rbp-E0h] BYREF
  void *v64; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+98h] [rbp-C0h]
  void *v66; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-B0h]
  unsigned __int8 *v68; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-A0h]
  __int16 v70; // [rsp+C0h] [rbp-98h]
  __int64 v71; // [rsp+C8h] [rbp-90h]
  __int16 v72; // [rsp+D0h] [rbp-88h]
  __int64 v73; // [rsp+D8h] [rbp-80h]
  __int16 v74; // [rsp+E0h] [rbp-78h]
  __int64 v75; // [rsp+E8h] [rbp-70h]
  __int16 v76; // [rsp+F0h] [rbp-68h]
  __int64 v77; // [rsp+F8h] [rbp-60h]
  char v78; // [rsp+108h] [rbp-50h]
  unsigned int v79; // [rsp+110h] [rbp-48h]
  char v80; // [rsp+114h] [rbp-44h]

  v7 = *(_DWORD *)(a2 + 64);
  v8 = a1[30];
  LOBYTE(v57[0]) = 0;
  v50 = v7;
  v55 = v57;
  v9 = a1[29];
  v56 = 0;
  v10 = *(_BYTE *)(v9 + 1);
  if ( v10 < 0 )
  {
    LOWORD(v58) = 174;
    *(_QWORD *)v59 = 0;
    v28 = (_BYTE *)sub_145F790(v8, v50, &v58, 1);
    v64 = &v66;
    sub_179C260(&v64, v28, (__int64)&v28[v29]);
    sub_A0AAD0((__int64)&v55, &v64);
    if ( v64 != &v66 )
      operator delete(v64);
    v15 = v56;
    if ( v56 )
      goto LABEL_9;
    v8 = a1[30];
    v10 = *(_BYTE *)(a1[29] + 1);
  }
  v45 = v8 + 552;
  if ( (v10 & 0x10) != 0 )
  {
    v53 = v8;
    LOWORD(v64) = 20;
    LOWORD(v66) = 20;
    v65 = 0;
    v67 = 0;
    v30 = j__strlen("clang");
    v31 = sub_6F3470(v45, "clang", v30);
    v71 = 0;
    v69 = v31;
    v70 = 72;
    v32 = a1[30];
    LOWORD(v68) = 5;
    v48 = v32;
    v33 = j__strlen("require_constant_initialization");
    v34 = sub_6F3470(v48 + 552, "require_constant_initialization", v33);
    v76 = 21;
    v72 = 5;
    v74 = 21;
    v73 = v34;
    v75 = 0;
    v77 = 0;
    v35 = (_BYTE *)sub_145F790(v53, v50, &v64, 7);
    v58 = &v59[8];
    sub_179C260(&v58, v35, (__int64)&v35[v36]);
    sub_A0AAD0((__int64)&v55, &v58);
    if ( v58 != &v59[8] )
      operator delete(v58);
    v15 = v56;
    if ( v56 )
      goto LABEL_9;
    v8 = a1[30];
    v45 = v8 + 552;
  }
  v52 = v8;
  LOWORD(v68) = 23;
  LOWORD(v66) = 22;
  LOWORD(v64) = 189;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v11 = j__strlen("require_constant_initialization");
  v12 = sub_6F3470(v45, "require_constant_initialization", v11);
  v74 = 23;
  v70 = 5;
  v72 = 23;
  v71 = v12;
  v73 = 0;
  v75 = 0;
  v13 = (_BYTE *)sub_145F790(v52, v50, &v64, 6);
  v58 = &v59[8];
  sub_179C260(&v58, v13, (__int64)&v13[v14]);
  sub_A0AAD0((__int64)&v55, &v58);
  if ( v58 != &v59[8] )
    operator delete(v58);
  v15 = v56;
  if ( !v56 )
  {
    v16 = *(_BYTE *)(a1[29] + 1);
    if ( v16 < 0 )
    {
      v44 = j__strlen("constinit");
      sub_99BDC0(&v55, 0, 0, "constinit", v44);
      v15 = v56;
      if ( v56 )
        goto LABEL_9;
      v16 = *(_BYTE *)(a1[29] + 1);
    }
    if ( (v16 & 0x10) == 0
      || (v43 = j__strlen("[[clang::require_constant_initialization]]"),
          sub_99BDC0(&v55, 0, 0, "[[clang::require_constant_initialization]]", v43),
          (v15 = v56) == 0) )
    {
      v17 = j__strlen("__attribute__((require_constant_initialization))");
      sub_99BDC0(&v55, 0, 0, "__attribute__((require_constant_initialization))", v17);
      v15 = v56;
    }
  }
LABEL_9:
  v18 = j__strlen(" ");
  if ( v18 > 0x7FFFFFFFFFFFFFFFLL - v15 )
    std::__throw_length_error("basic_string::append");
  v19 = v55;
  v20 = v18 + v15;
  if ( v55 == v57 )
    v21 = 15;
  else
    v21 = v57[0];
  if ( v20 > v21 )
  {
    v47 = v18 + v15;
    sub_998B30((__int64)&v55, v15, 0, " ", v18);
    v19 = v55;
    v20 = v47;
  }
  else if ( v18 )
  {
    v22 = (char *)v55 + v15;
    if ( v18 == 1 )
    {
      *v22 = 32;
      v19 = v55;
    }
    else
    {
      v46 = v18 + v15;
      memcpy(v22, " ", v18);
      v19 = v55;
      v20 = v46;
    }
  }
  v23 = a1 + 1;
  v56 = v20;
  v19[v20] = 0;
  if ( a4 )
  {
    sub_168B9F0((__int64)&v64, v23, *(_DWORD *)(a2 + 24), 0x1590u, 0);
    if ( v78 )
    {
      sub_AE9DF0(&v68, a2, 0xAu);
    }
    else if ( v80 )
    {
      v37 = sub_168B9E0(&v64);
      v41 = v66;
      if ( v66 )
      {
        v49 = v37;
        v41 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v66 + 32LL))(v66);
        v37 = v49;
      }
      v58 = v41;
      v42 = sub_1587BC0(v37, (__int64 *)&v58, v37, v38, v39, v40);
      sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v79 + 8), a2, 0xAu);
    }
    sub_9EC740((__int64)&v58, v50, v55, v56, 0);
    sub_1589170((__int64)&v64, &v58);
    if ( v61 != v63 )
      operator delete(v61);
    sub_15F7200(&v64);
    sub_168B9F0((__int64)&v64, v23, *(_DWORD *)(a3 + 24), 0x16D8u, 0);
    sub_15F7200(&v64);
  }
  else
  {
    if ( (*(_BYTE *)(a3 + 34) & 0xF0) == 0xF0 )
      v24 = sub_FA77D0(a3);
    else
      v24 = *(_BYTE *)(a3 + 34) >> 4;
    sub_168B9F0((__int64)&v64, v23, *(_DWORD *)(a3 + 24), v24 == 0 ? 3495 : 7331, 0);
    v25 = *(_DWORD *)(a3 + 24);
    v61 = v63;
    *(_QWORD *)&v59[4] = 0;
    v60 = 0;
    v62 = 0;
    v63[0] = 0;
    v63[16] = 0;
    LODWORD(v58) = v25;
    HIDWORD(v58) = v25;
    v59[0] = 1;
    sub_1589170((__int64)&v64, &v58);
    if ( v61 != v63 )
      operator delete(v61);
    sub_15F7200(&v64);
    sub_168B9F0((__int64)&v64, v23, *(_DWORD *)(a2 + 24), 0x16D7u, 0);
    if ( (*(_BYTE *)(a3 + 34) & 0xF0) == 0xF0 )
      v26 = sub_FA77D0(a3);
    else
      v26 = *(_BYTE *)(a3 + 34) >> 4;
    v54 = v26 == 0;
    v27 = sub_1588420((__int64)&v64, (unsigned __int8 *)&v54);
    sub_9EC740((__int64)&v58, v50, v55, v56, 0);
    sub_1589170(v27, &v58);
    if ( v61 != v63 )
      operator delete(v61);
    sub_15F7200(&v64);
  }
  if ( v55 != v57 )
    operator delete(v55);
}
