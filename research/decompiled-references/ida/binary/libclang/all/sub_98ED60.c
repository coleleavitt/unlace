__int64 __fastcall sub_98ED60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v7; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  char v13; // dl
  unsigned int v14; // eax
  unsigned int v15; // r13d
  bool v16; // dl
  void *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r13d
  void *v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  void *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // eax
  unsigned __int64 v30; // rax
  _BOOL8 v31; // [rsp+10h] [rbp-D8h]
  __int64 v32; // [rsp+18h] [rbp-D0h]
  bool v33; // [rsp+18h] [rbp-D0h]
  int v34; // [rsp+28h] [rbp-C0h]
  unsigned int v35; // [rsp+28h] [rbp-C0h]
  unsigned int v36; // [rsp+2Ch] [rbp-BCh]
  void *v37; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-B0h]
  void *v39; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-A0h]
  void *v41; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+58h] [rbp-90h]
  void *v43; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-80h]
  void *v45; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v46; // [rsp+78h] [rbp-70h]
  void *v47; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+88h] [rbp-60h]
  char v49; // [rsp+8Ch] [rbp-5Ch]
  void *v50; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+98h] [rbp-50h]
  void *v52; // [rsp+A0h] [rbp-48h] BYREF
  unsigned int v53; // [rsp+A8h] [rbp-40h]
  char v54; // [rsp+ACh] [rbp-3Ch]

  if ( *(_DWORD *)(a4 + 16) != 4 )
    return 0;
  v7 = *(unsigned __int8 *)(a4 + 3);
  v10 = 8LL * ((*(_BYTE *)(a4 + 2) & 8) != 0) + 8;
  v11 = a4 + v7;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + v7 + v10) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_BYTE *)(v12 + 16);
  if ( v13 == 13 )
  {
    if ( (((*(_WORD *)(v12 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
      goto LABEL_6;
    return 0;
  }
  if ( v13 != 46 )
  {
    if ( v13 == 10 )
      goto LABEL_6;
    return 0;
  }
  v27 = sub_B14A40(v12);
  if ( (*(_BYTE *)(v27 + 74) & 1) == 0 && *(_QWORD *)(v27 + 128) <= 7u || *(char *)(sub_B14A40(v12) + 76) < 0 )
    return 0;
  v10 = 8LL * ((*(_BYTE *)(a4 + 2) & 8) != 0) + 8;
  v11 = a4 + *(unsigned __int8 *)(a4 + 3);
LABEL_6:
  if ( !sub_6B3140(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + v11 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) )
    return 0;
  LOBYTE(v14) = sub_6B3140(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(unsigned __int8 *)(a4 + 3)
                                                             + a4
                                                             + 8LL * ((*(_BYTE *)(a4 + 2) & 8) != 0)
                                                             + 8
                                                             + 16)
                                                 + 8LL)
                                     & 0xFFFFFFFFFFFFFFF0LL));
  v4 = v14;
  if ( !(_BYTE)v14 )
    return 0;
  v34 = *(_DWORD *)(a3 + 504);
  sub_98E490((__int64)&v37, a2, 0);
  sub_98E490((__int64)&v39, a2, 1u);
  sub_98E490((__int64)&v41, a2, 2u);
  v15 = v40;
  v16 = v34 == 3575 || v34 == 1505;
  v35 = v38;
  if ( v38 > 0x40 )
  {
    v33 = v16;
    v28 = sub_2587400(&v37);
    v16 = v33;
    v31 = 1;
    if ( v35 - v28 > 0x40 )
      goto LABEL_11;
    v17 = *(void **)v37;
  }
  else
  {
    v17 = v37;
  }
  v31 = v17 != nullptr;
LABEL_11:
  if ( v16 )
  {
    sub_2587D60(&v50, &v41);
    sub_2586300(&v50, v31);
    v18 = v51;
    v51 = 0;
    v53 = v18;
    v52 = v50;
    sub_2587D60(&v47, &v39);
  }
  else
  {
    sub_2587D60(&v50, &v41);
    sub_2586300(&v50, v31);
    v29 = v51;
    v51 = 0;
    v53 = v29;
    v52 = v50;
    sub_2587D60(&v47, &v39);
    if ( v53 > 0x40 )
    {
      sub_25869C0(&v52, &v39);
    }
    else
    {
      v30 = 0;
      if ( v53 )
        v30 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v53;
      v52 = (void *)(v30 & ~(unsigned __int64)v52);
    }
    sub_25860D0(&v52);
  }
  sub_2586200(&v52, &v47);
  v19 = v53;
  v53 = 0;
  v44 = v19;
  v43 = v52;
  if ( v48 > 0x40 )
  {
    if ( v47 )
    {
      operator delete[](v47);
      if ( v53 > 0x40 )
      {
        if ( v52 )
          operator delete[](v52);
      }
    }
  }
  if ( v51 > 0x40 && v50 )
    operator delete[](v50);
  sub_2586ED0(&v45, &v43, v15, 0);
  sub_2586ED0(&v52, &v43, 1, v15);
  v20 = v53;
  v21 = v52;
  v22 = *(_QWORD *)(a1 + 184);
  v49 = 1;
  v48 = v53;
  v47 = v52;
  v32 = sub_A1A5A0(v22, 56);
  v23 = sub_B167E0(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(unsigned __int8 *)(a4 + 3)
                                            + a4
                                            + 8LL * ((*(_BYTE *)(a4 + 2) & 8) != 0)
                                            + 8
                                            + 24)
                                + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          56);
  v52 = (void *)sub_8CA760(*(__int64 **)(a1 + 192), v23);
  v24 = (unsigned int)v52;
  v25 = v46;
  v51 = v46;
  if ( v46 > 0x40 )
  {
    v36 = (unsigned int)v52;
    sub_2585B30(&v50);
    v25 = v51;
    v24 = v36;
    v26 = v50;
  }
  else
  {
    v26 = v45;
    v50 = v45;
  }
  v52 = v26;
  v53 = v25;
  v51 = 0;
  v54 = 1;
  sub_983BA0(v32, v24, (__int64)&v52);
  if ( v53 > 0x40 && v52 )
    operator delete[](v52);
  if ( v51 > 0x40 && v50 )
    operator delete[](v50);
  sub_97E3E0(a1, (__int64)&v47, *(_QWORD *)(a4 + 8));
  if ( v20 > 0x40 && v21 )
    operator delete[](v21);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v40 > 0x40 && v39 )
    operator delete[](v39);
  if ( v35 > 0x40 && v37 )
    operator delete[](v37);
  return v4;
}

