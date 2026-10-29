__int64 __fastcall sub_944110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v9; // eax
  unsigned int v10; // r13d
  void *v11; // r15
  int v12; // ecx
  unsigned int v13; // r14d
  unsigned __int64 v14; // r15
  char v15; // al
  int v16; // ecx
  unsigned __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // eax
  int v22; // r14d
  unsigned int v23; // ecx
  char v24; // r14
  unsigned __int64 v25; // rdi
  int v26; // eax
  bool v27; // al
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // r13
  bool v36; // bl
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  bool v40; // bl
  bool v41; // bl
  unsigned __int64 v42; // rbx
  __int64 v43; // rbp
  __int64 v44; // rax
  unsigned __int8 **v45; // rax
  unsigned __int8 **v46; // r13
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // [rsp+8h] [rbp-100h]
  unsigned __int64 v50; // [rsp+8h] [rbp-100h]
  unsigned __int64 v51; // [rsp+8h] [rbp-100h]
  unsigned int v52; // [rsp+8h] [rbp-100h]
  unsigned __int64 v53; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v54; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v55; // [rsp+10h] [rbp-F8h]
  char v56; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v57; // [rsp+18h] [rbp-F0h]
  __int64 v58; // [rsp+28h] [rbp-E0h] BYREF
  char v59; // [rsp+3Bh] [rbp-CDh] BYREF
  int v60; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v61; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-C0h] BYREF
  void *v63; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 *v64; // [rsp+58h] [rbp-B0h]
  __int64 v65; // [rsp+60h] [rbp-A8h]
  __int64 *v66; // [rsp+68h] [rbp-A0h]
  __int64 v67; // [rsp+70h] [rbp-98h]
  unsigned __int64 *v68; // [rsp+78h] [rbp-90h]
  char *v69; // [rsp+80h] [rbp-88h]
  void *v70; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v71; // [rsp+98h] [rbp-70h]

  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(unsigned __int8 *)(a3 + 19);
  v58 = a2;
  v71 = v9;
  if ( v9 <= 0x40 )
  {
    v11 = *(void **)a3;
LABEL_3:
    LOBYTE(v10) = v11 == nullptr;
    goto LABEL_4;
  }
  sub_2585B30(&v70);
  v10 = (v10 & 0x20) == 0;
  v11 = v70;
  BYTE4(v64) = v10;
  LODWORD(v64) = v71;
  v63 = v70;
  if ( v71 <= 0x40 )
    goto LABEL_3;
  v52 = v71;
  LOBYTE(v10) = (unsigned int)sub_2587400(&v63) == v52;
  if ( !v11 )
  {
LABEL_4:
    if ( !(_BYTE)v10 )
      goto LABEL_5;
LABEL_41:
    v33 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v33, a4);
    return 1;
  }
  operator delete[](v11);
  if ( (_BYTE)v10 )
    goto LABEL_41;
LABEL_5:
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, v58, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v58, a4) )
  {
    return v10;
  }
  v12 = *(_DWORD *)(a4 + 48);
  v13 = *(_DWORD *)(a3 + 8);
  if ( v12 == 1 )
  {
    v35 = sub_8E55C0((__int64 *)a4);
    if ( v13 <= 0x40 )
      v36 = *(_QWORD *)a3 == 0;
    else
      v36 = (unsigned int)sub_2587400(a3) == v13;
    v37 = sub_8E9110(a4) & -(__int64)!v36;
    v38 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v39 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v38 = 0;
    *(_DWORD *)(v38 + 48) = 1;
    *(_QWORD *)(v38 + 32) = v35 + v37;
    *(_QWORD *)(v38 + 24) = v39;
    *(_OWORD *)(v38 + 8) = 0;
    return 1;
  }
  if ( v12 == 2 )
  {
    if ( v13 <= 0x40 )
      v40 = *(_QWORD *)a3 == 0;
    else
      v40 = (unsigned int)sub_2587400(a3) == v13;
    v41 = !v40;
    if ( (unsigned __int8)sub_8E9400(a4) )
    {
      v42 = v41 + 0xFFFFFFFFLL;
    }
    else
    {
      v42 = *(_QWORD *)a4 + v41;
      if ( v42 <= 1 )
      {
LABEL_53:
        v43 = *(_QWORD *)(a4 + 24);
        v44 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
        *(_QWORD *)v44 = v42;
        *(_DWORD *)(v44 + 48) = 2;
        *(_QWORD *)(v44 + 24) = v43;
        *(_QWORD *)(v44 + 32) = 0;
        *(_BYTE *)(v44 + 40) = 1;
        *(_OWORD *)(v44 + 8) = 0;
        return 1;
      }
    }
    v70 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), v58);
    v45 = (unsigned __int8 **)sub_A2E1B0(a1, &v70, 2179, 0);
    v46 = v45;
    if ( v45 )
    {
      sub_8D6E40(v45, v42);
      sub_8D6BF0(v46, 1);
      sub_8D6BF0(v46, 0);
    }
    goto LABEL_53;
  }
  v49 = *(_DWORD *)(a4 + 48);
  v14 = (unsigned int)sub_8E9270(a4);
  v61 = v14;
  v15 = sub_8E9400(a4);
  v16 = v49;
  v17 = v14;
  if ( !v15 )
  {
    v34 = sub_8E92E0(a4);
    v16 = v49;
    v17 = v34;
  }
  v62 = v17;
  v64 = &v62;
  v66 = &v58;
  v68 = &v61;
  v59 = 0;
  v63 = (void *)a3;
  v65 = a1;
  v67 = a4;
  v69 = &v59;
  if ( v16 )
    goto LABEL_32;
  if ( v13 <= 0x40 )
  {
    v19 = *(_QWORD *)a3;
    v50 = *(_QWORD *)a3 != 0;
    if ( (*(_BYTE *)(a3 + 19) & 0x20) == 0 )
    {
      v23 = *(_DWORD *)(a3 + 8);
      v24 = 0;
      goto LABEL_26;
    }
    v20 = 1LL << ((unsigned __int8)v13 - 1);
    goto LABEL_57;
  }
  v56 = *(_BYTE *)(a3 + 19) & 0x20;
  v53 = v17;
  v18 = sub_2587400(a3);
  v71 = v13;
  v50 = v18 != v13;
  sub_2585B30(&v70);
  v17 = v53;
  v19 = (unsigned __int64)v70;
  if ( !v56 )
  {
    if ( v71 <= 0x40 )
      goto LABEL_25;
    goto LABEL_63;
  }
  v20 = 1LL << ((unsigned __int8)v71 - 1);
  if ( v71 <= 0x40 )
  {
LABEL_57:
    if ( (v19 & v20) == 0 )
      goto LABEL_25;
    goto LABEL_19;
  }
  if ( (*((_QWORD *)v70 + ((v71 - 1) >> 6)) & v20) != 0 )
  {
    if ( v70 )
    {
      operator delete[](v70);
      v17 = v53;
    }
LABEL_19:
    v57 = v17;
    v60 = *(_DWORD *)(a3 + 16);
    sub_256F750(&v70, &v60);
    v21 = sub_256EFC0(a3, &v70);
    v17 = v57;
    v22 = v21;
    if ( v71 > 0x40 && v70 )
    {
      operator delete[](v70);
      v17 = v57;
    }
    if ( !v22 || v62 < -(__int64)v50 )
    {
      v54 = v17;
      sub_943E50((__int64)&v63);
      v17 = v54;
    }
    goto LABEL_25;
  }
LABEL_63:
  if ( v70 )
  {
    operator delete[](v70);
    v17 = v53;
  }
LABEL_25:
  v23 = *(_DWORD *)(a3 + 8);
  v24 = *(_BYTE *)(a3 + 19) & 0x20;
  v71 = v23;
  if ( v23 <= 0x40 )
  {
LABEL_26:
    v25 = *(_QWORD *)a3;
    if ( !v24 )
      goto LABEL_27;
    v47 = 1LL << ((unsigned __int8)v23 - 1);
LABEL_74:
    if ( (v25 & v47) != 0 )
      goto LABEL_29;
    goto LABEL_27;
  }
  v55 = v17;
  sub_2585B30(&v70);
  v17 = v55;
  v25 = (unsigned __int64)v70;
  if ( !v24 )
  {
    if ( v71 <= 0x40 )
    {
LABEL_27:
      if ( v14 - v17 < v50 )
        sub_943E50((__int64)&v63);
      goto LABEL_29;
    }
    goto LABEL_71;
  }
  v47 = 1LL << ((unsigned __int8)v71 - 1);
  if ( v71 <= 0x40 )
    goto LABEL_74;
  if ( (*((_QWORD *)v70 + ((v71 - 1) >> 6)) & v47) == 0 )
  {
LABEL_71:
    if ( v70 )
    {
      operator delete[](v70);
      v17 = v55;
    }
    goto LABEL_27;
  }
  if ( v70 )
    operator delete[](v70);
LABEL_29:
  if ( !v59 || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v17 = v62;
    v13 = *(_DWORD *)(a3 + 8);
LABEL_32:
    if ( v13 <= 0x40 )
    {
      v27 = *(_QWORD *)a3 == 0;
    }
    else
    {
      v51 = v17;
      v26 = sub_2587400(a3);
      v17 = v51;
      v27 = v13 == v26;
    }
    v28 = *(_QWORD *)(a1 + 184);
    v29 = !v27 + v17;
    if ( v29 || !(unsigned __int8)sub_8E9400(a4) )
    {
      v30 = v29;
      v10 = 1;
      sub_8E61F0((__int64)&v70, a4, v30);
      v31 = sub_A1A4E0(v28, 56);
      sub_A1C070(v31, &v70);
      sub_A1C0C0(&v70);
      return v10;
    }
    v48 = sub_A1A4E0(v28, 56);
    sub_A1BFA0(v48, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    return 1;
  }
  return v10;
}

