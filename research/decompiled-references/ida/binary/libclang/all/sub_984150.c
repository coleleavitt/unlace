void __fastcall sub_984150(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rdi
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  unsigned int v24; // eax
  char v25; // dl
  unsigned int v26; // eax
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  void *v31; // rcx
  char v32; // [rsp+1Eh] [rbp-AAh] BYREF
  char v33; // [rsp+1Fh] [rbp-A9h] BYREF
  void *v34; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-A0h]
  void *v36; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-90h]
  char v38; // [rsp+3Ch] [rbp-8Ch]
  void *v39; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-80h]
  void *v41; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v42; // [rsp+58h] [rbp-70h]
  char v43; // [rsp+5Ch] [rbp-6Ch]
  void *v44; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-60h]
  char v46; // [rsp+6Ch] [rbp-5Ch]
  void *v47; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v48; // [rsp+78h] [rbp-50h]
  void *v49; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v50; // [rsp+88h] [rbp-40h]

  v5 = sub_8CA760(
         *(__int64 **)(a1 + 192),
         *(_QWORD *)(*(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3)) + 8LL));
  v6 = *(unsigned __int8 *)(a3 + 3);
  v7 = *(__int64 **)(a1 + 192);
  v8 = v5;
  v49 = (void *)v5;
  v9 = sub_8CA760(v7, *(_QWORD *)(*(_QWORD *)(v6 + a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + 8) + 8LL));
  v10 = *(unsigned __int8 *)(a3 + 3);
  v11 = *(__int64 **)(a1 + 192);
  v12 = v9;
  v49 = (void *)v9;
  v13 = sub_8CA760(v11, *(_QWORD *)(*(_QWORD *)(v10 + a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + 16) + 8LL));
  v14 = v13;
  v49 = (void *)v13;
  v15 = sub_A24BE0(13);
  v16 = ((sub_A24BE0(v14) + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v17 = sub_A24BE0(v12);
  sub_97E960((__int64)&v34, *(_QWORD *)(a1 + 184), v12, v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v18 = sub_A24BE0(13);
  v19 = ((sub_A24BE0(v12) + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v20 = ((sub_A24BE0(v14) + 7) & 0xFFFFFFFFFFFFFFF8LL) + v19;
  v21 = sub_A24BE0(v8);
  sub_97E960((__int64)&v36, *(_QWORD *)(a1 + 184), v8, v20 + ((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v22 = sub_A24BE0(13);
  v23 = sub_A24BE0(v14);
  sub_97E960(
    (__int64)&v39,
    *(_QWORD *)(a1 + 184),
    v8,
    ((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v24 = v37;
  v42 = 1;
  v41 = nullptr;
  v43 = 0;
  v45 = 1;
  v44 = nullptr;
  v46 = 0;
  if ( v37 <= 0x40 )
  {
    v31 = v36;
    v25 = v38;
    v45 = v37;
    v44 = v36;
    v46 = v38;
  }
  else
  {
    sub_2585EA0(&v44, &v36);
    v25 = v38;
    v46 = v38;
    if ( v42 > 0x40 || (v24 = v37, v37 > 0x40) )
    {
      sub_2585EA0(&v41, &v36);
      v25 = v38;
      goto LABEL_5;
    }
    v31 = v36;
  }
  v41 = v31;
  v42 = v24;
LABEL_5:
  v43 = v25;
  v32 = 0;
  v33 = 0;
  if ( a2 <= 0x78 )
  {
    sub_258AE00(&v47, &v36, &v34, &v32);
    sub_258AE00(&v49, &v47, &v39, &v33);
    if ( v45 <= 0x40 )
      goto LABEL_7;
  }
  else
  {
    sub_258B020(&v47, &v36, &v34, &v32);
    sub_258B020(&v49, &v47, &v39, &v33);
    if ( v45 <= 0x40 )
      goto LABEL_7;
  }
  if ( v44 )
    operator delete[](v44);
LABEL_7:
  v44 = v49;
  v26 = v50;
  v50 = 0;
  v45 = v26;
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  v27 = (unsigned __int8)(v33 | v32);
  if ( v42 > 0x40 )
  {
    *(_QWORD *)v41 = v27;
    memset((char *)v41 + 8, 0, 8 * (unsigned int)(((unsigned __int64)v42 + 63) >> 6) - 8);
  }
  else
  {
    v28 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v42) & v27);
    if ( !v42 )
      v28 = nullptr;
    v41 = v28;
  }
  v29 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v30 = sub_B167E0(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(unsigned __int8 *)(a3 + 3)
                                            + a3
                                            + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0)
                                            + 8
                                            + 24)
                                + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          56);
  v49 = (void *)sub_8CA760(*(__int64 **)(a1 + 192), v30);
  sub_983BA0(v29, (unsigned int)v49, (__int64)&v41);
  sub_A1DB00(v29);
  sub_97E3E0(a1, (__int64)&v44, *(_QWORD *)(a3 + 8));
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v40 > 0x40 && v39 )
    operator delete[](v39);
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  if ( v35 > 0x40 )
  {
    if ( v34 )
      operator delete[](v34);
  }
}

