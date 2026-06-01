__int64 __fastcall sub_984600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rdi
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  char v22; // r14
  __int64 *v23; // rbp
  int v24; // r15d
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // ebp
  unsigned int v29; // eax
  __int64 v30; // rdx
  void *v31; // rcx
  unsigned int v32; // eax
  void *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  char *v36; // rax
  unsigned int v37; // [rsp+10h] [rbp-C8h]
  __int64 v38; // [rsp+18h] [rbp-C0h]
  unsigned int v39; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+28h] [rbp-B0h]
  unsigned int v41; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v42; // [rsp+30h] [rbp-A8h]
  unsigned int v43; // [rsp+30h] [rbp-A8h]
  void *v44; // [rsp+30h] [rbp-A8h]
  void *v45; // [rsp+38h] [rbp-A0h]
  char v46; // [rsp+4Fh] [rbp-89h] BYREF
  void *v47; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-80h]
  char v49; // [rsp+5Ch] [rbp-7Ch]
  void *v50; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+68h] [rbp-70h]
  char v52; // [rsp+6Ch] [rbp-6Ch]
  void *v53; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v54; // [rsp+78h] [rbp-60h]
  char v55; // [rsp+7Ch] [rbp-5Ch]
  void *v56; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+88h] [rbp-50h]
  char v58; // [rsp+8Ch] [rbp-4Ch]
  void *v59; // [rsp+90h] [rbp-48h] BYREF
  unsigned int v60; // [rsp+98h] [rbp-40h]
  char v61; // [rsp+9Ch] [rbp-3Ch]

  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !*(_DWORD *)(v5 + 48) )
  {
    v6 = *(_QWORD *)(v5 + 24);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 32);
      result = 0;
      if ( *(_BYTE *)(v7 + 52) )
        return result;
    }
  }
  v9 = *(_DWORD *)(a2 + 504);
  v10 = sub_8CA760(
          *(__int64 **)(a1 + 192),
          *(_QWORD *)(*(_QWORD *)(*(unsigned __int8 *)(a3 + 3) + a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + 8)
                    + 8LL));
  v11 = *(unsigned __int8 *)(a3 + 3);
  v12 = *(__int64 **)(a1 + 192);
  v13 = v10;
  v59 = (void *)v10;
  v14 = sub_8CA760(v12, *(_QWORD *)(*(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + v11) + 8LL));
  v37 = v14;
  v59 = (void *)v14;
  v15 = sub_A24BE0(13);
  v16 = sub_A24BE0(v13);
  sub_97E960(
    (__int64)&v47,
    *(_QWORD *)(a1 + 184),
    v13,
    ((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v17 = sub_A24BE0(13);
  v18 = ((sub_A24BE0(v13) + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v19 = sub_A24BE0(v37);
  v20 = *(_QWORD *)(a1 + 184);
  sub_97E960((__int64)&v50, v20, v37, v18 + ((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL));
  v38 = sub_B167E0(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(unsigned __int8 *)(a3 + 3)
                                            + a3
                                            + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0)
                                            + 8
                                            + 16)
                                + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          v20);
  v21 = sub_8CA760(*(__int64 **)(a1 + 192), v38);
  v55 = 0;
  v39 = v21;
  v59 = (void *)v21;
  v54 = 1;
  v53 = nullptr;
  if ( v9 == 1248 || v9 == 115 || v9 == 934 )
  {
    v22 = v52;
    v23 = (__int64 *)(v38 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v52 )
    {
      v22 = v49;
      v24 = 1;
      if ( !v49 )
        goto LABEL_9;
      v24 = (unsigned __int8)sub_B10310(*v23);
      v22 = v24 ^ 1;
      if ( v52 )
        goto LABEL_9;
    }
    else
    {
      v24 = v9 == 1248 || v9 == 115 || v9 == 934;
    }
    if ( !v49 )
      v24 &= (unsigned __int8)sub_B10310(*v23) ^ 1;
LABEL_9:
    v42 = v51;
    v40 = v48;
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v26 = sub_6F6DE0(v25, *v23);
    v27 = v42;
    if ( v42 < v40 )
      v27 = v40;
    if ( v27 < v26 )
      LODWORD(v27) = v26;
    v28 = v27 + v24;
    if ( v52 )
      sub_2587E20(&v59, &v50, v28);
    else
      sub_2587E80(&v59, &v50, v28);
    v29 = v60;
    v30 = v28;
    v31 = v59;
    if ( v51 > 0x40 && v50 )
    {
      v45 = v59;
      v43 = v60;
      operator delete[](v50);
      v31 = v45;
      v29 = v43;
      v30 = v28;
    }
    v50 = v31;
    v51 = v29;
    v52 = v22;
    if ( v49 )
      sub_2587E20(&v59, &v47, v30);
    else
      sub_2587E80(&v59, &v47, v30);
    v32 = v60;
    v33 = v59;
    if ( v48 > 0x40 && v47 )
    {
      v44 = v59;
      v41 = v60;
      operator delete[](v47);
      v33 = v44;
      v32 = v41;
    }
    v47 = v33;
    v48 = v32;
    v49 = v22;
    v60 = v28;
    if ( v28 > 0x40 )
      sub_2585A50(&v59, 0, 0);
    else
      v59 = nullptr;
    v61 = v22;
    if ( v54 > 0x40 && v53 )
    {
      operator delete[](v53);
      v22 = v61;
    }
    v55 = v22;
    v53 = v59;
    v54 = v60;
    if ( v9 <= 0x4A0 )
    {
      if ( v9 != 115 )
        goto LABEL_30;
      goto LABEL_69;
    }
    goto LABEL_47;
  }
  if ( v9 > 0x4A0 )
  {
    if ( v9 <= 0x57E )
    {
      if ( v9 > 0x57B )
      {
LABEL_30:
        if ( v52 )
          sub_258F590(&v59, &v50, &v47, &v46);
        else
          sub_258C220(&v59, &v50, &v47, &v46);
        if ( v54 > 0x40 && v53 )
          operator delete[](v53);
        v53 = v59;
        v54 = v60;
        if ( v9 != 1248 && v9 != 115 && v9 != 934 )
          goto LABEL_53;
        goto LABEL_36;
      }
      goto LABEL_69;
    }
  }
  else if ( v9 <= 0x49D )
  {
    if ( v9 > 0x45A || v9 <= 0x457 )
      goto LABEL_30;
LABEL_69:
    if ( v52 )
      sub_258AE00(&v59, &v50, &v47, &v46);
    else
      sub_258ACC0(&v59, &v50, &v47, &v46);
    goto LABEL_49;
  }
LABEL_47:
  if ( v52 )
    sub_258B020(&v59, &v50, &v47, &v46);
  else
    sub_258AF00(&v59, &v50, &v47, &v46);
LABEL_49:
  if ( v54 > 0x40 && v53 )
    operator delete[](v53);
  v53 = v59;
  v54 = v60;
  if ( v9 != 1248 && v9 != 115 )
    goto LABEL_53;
LABEL_36:
  v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v35 = (unsigned int)sub_6F6DE0(v34, *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v55 )
  {
    sub_2587E20(&v59, &v53, v35);
    v58 = 1;
  }
  else
  {
    sub_2587E80(&v59, &v53, v35);
    v58 = 0;
  }
  v57 = v60;
  v56 = v59;
  v58 = sub_B10310(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL)) ^ 1;
  if ( (unsigned int)sub_804370((__int64 *)&v56, (__int64 *)&v53) )
    v46 = 1;
  if ( v54 <= 0x40 && v57 <= 0x40 )
  {
    v54 = v57;
    v53 = v56;
    v55 = v58;
  }
  else
  {
    sub_2585EA0(&v53, &v56);
    v55 = v58;
    if ( v57 > 0x40 && v56 )
      operator delete[](v56);
  }
LABEL_53:
  sub_983BA0(v5, v39, (__int64)&v53);
  sub_A1DB00(v5);
  v36 = (char *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *v36 = v46;
  if ( v54 > 0x40 && v53 )
    operator delete[](v53);
  if ( v51 > 0x40 && v50 )
    operator delete[](v50);
  if ( v48 > 0x40 )
  {
    if ( v47 )
      operator delete[](v47);
  }
  return 1;
}

