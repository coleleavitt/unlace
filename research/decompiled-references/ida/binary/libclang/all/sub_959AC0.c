__int64 __fastcall sub_959AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v9; // eax
  unsigned int v10; // r13d
  void *v11; // r15
  int v12; // r15d
  unsigned int v13; // r14d
  char v14; // al
  unsigned __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  unsigned int v19; // ecx
  char v20; // r14
  unsigned __int64 v21; // rdi
  int v22; // eax
  bool v23; // al
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // r13
  bool v31; // bl
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  bool v35; // al
  _BOOL8 v36; // rbx
  unsigned __int64 v37; // r13
  __int64 v38; // rbx
  __int64 v39; // rax
  void *v40; // rax
  unsigned __int8 **v41; // rax
  unsigned __int8 **v42; // rbx
  __int64 v43; // rsi
  int v44; // eax
  unsigned __int64 v45; // rdx
  int v46; // r14d
  __int64 v47; // rax
  unsigned __int64 v48; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v49; // [rsp+0h] [rbp-F8h]
  unsigned int v50; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v51; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v52; // [rsp+8h] [rbp-F0h]
  char v53; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v54; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v55; // [rsp+10h] [rbp-E8h]
  __int64 v56; // [rsp+18h] [rbp-E0h] BYREF
  char v57; // [rsp+2Bh] [rbp-CDh] BYREF
  int v58; // [rsp+2Ch] [rbp-CCh] BYREF
  unsigned __int64 v59; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-C0h] BYREF
  void *v61; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 *v62; // [rsp+48h] [rbp-B0h]
  __int64 v63; // [rsp+50h] [rbp-A8h]
  __int64 *v64; // [rsp+58h] [rbp-A0h]
  __int64 v65; // [rsp+60h] [rbp-98h]
  unsigned __int64 *v66; // [rsp+68h] [rbp-90h]
  char *v67; // [rsp+70h] [rbp-88h]
  void *v68; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-70h]

  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(unsigned __int8 *)(a3 + 19);
  v56 = a2;
  v69 = v9;
  if ( v9 <= 0x40 )
  {
    v11 = *(void **)a3;
LABEL_3:
    LOBYTE(v10) = v11 == nullptr;
    goto LABEL_4;
  }
  sub_2585B30(&v68);
  v10 = (v10 & 0x20) == 0;
  v11 = v68;
  BYTE4(v62) = v10;
  LODWORD(v62) = v69;
  v61 = v68;
  if ( v69 <= 0x40 )
    goto LABEL_3;
  v50 = v69;
  LOBYTE(v10) = (unsigned int)sub_2587400(&v61) == v50;
  if ( !v11 )
  {
LABEL_4:
    if ( !(_BYTE)v10 )
      goto LABEL_5;
LABEL_33:
    v29 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v29, a4);
    return 1;
  }
  operator delete[](v11);
  if ( (_BYTE)v10 )
    goto LABEL_33;
LABEL_5:
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, v56, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v56, a4) )
  {
    return v10;
  }
  v12 = *(_DWORD *)(a4 + 48);
  v13 = *(_DWORD *)(a3 + 8);
  if ( v12 == 1 )
  {
    v30 = sub_8E55C0((__int64 *)a4);
    if ( v13 <= 0x40 )
      v31 = *(_QWORD *)a3 == 0;
    else
      v31 = (unsigned int)sub_2587400(a3) == v13;
    v32 = v30 - (sub_8E9110(a4) & -(__int64)!v31);
    v33 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v34 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v33 = 0;
    *(_DWORD *)(v33 + 48) = 1;
    *(_QWORD *)(v33 + 32) = v32;
    *(_QWORD *)(v33 + 24) = v34;
    *(_OWORD *)(v33 + 8) = 0;
    return 1;
  }
  if ( v12 == 2 )
  {
    if ( v13 <= 0x40 )
      v35 = *(_QWORD *)a3 == 0;
    else
      v35 = (unsigned int)sub_2587400(a3) == v13;
    v36 = !v35;
    v37 = 0xFFFFFFFFLL - v36;
    if ( (unsigned __int8)sub_8E9400(a4) || (v37 = *(_QWORD *)a4 - v36, v37 > 1) )
    {
      v68 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), v56);
      v41 = (unsigned __int8 **)sub_A2E1B0(a1, &v68, 2179, 0);
      v42 = v41;
      if ( v41 )
      {
        sub_8D6E40(v41, v37);
        sub_8D6BF0(v42, 1);
        sub_8D6BF0(v42, 0);
      }
    }
    v38 = *(_QWORD *)(a4 + 24);
    v39 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    *(_QWORD *)v39 = v37;
    *(_DWORD *)(v39 + 48) = 2;
    *(_QWORD *)(v39 + 24) = v38;
    *(_QWORD *)(v39 + 32) = 0;
    *(_BYTE *)(v39 + 40) = 1;
    *(_OWORD *)(v39 + 8) = 0;
    return 1;
  }
  v48 = (unsigned int)sub_8E9270(a4);
  v59 = v48;
  v14 = sub_8E9400(a4);
  v15 = v48;
  if ( !v14 )
    v15 = sub_8E92E0(a4);
  v60 = v15;
  v62 = &v60;
  v64 = &v56;
  v66 = &v59;
  v57 = 0;
  v61 = (void *)a3;
  v63 = a1;
  v65 = a4;
  v67 = &v57;
  if ( v12 )
    goto LABEL_24;
  if ( v13 <= 0x40 )
  {
    v17 = *(_QWORD *)a3 != 0;
    if ( (*(_BYTE *)(a3 + 19) & 0x20) == 0 )
    {
      if ( v15 >= (*(_QWORD *)a3 != 0) )
      {
        v19 = *(_DWORD *)(a3 + 8);
        v20 = 0;
        goto LABEL_20;
      }
LABEL_57:
      v52 = v15;
      v17 = 1;
      sub_959800((__int64)&v61);
      v15 = v52;
      goto LABEL_19;
    }
    v40 = *(void **)a3;
    if ( _bittest64((const __int64 *)&v40, v13 - 1) )
    {
      v20 = *(_BYTE *)(a3 + 19) & 0x20;
      v17 = 1;
      v19 = *(_DWORD *)(a3 + 8);
      goto LABEL_20;
    }
LABEL_56:
    if ( v60 >= v17 )
      goto LABEL_19;
    goto LABEL_57;
  }
  v53 = *(_BYTE *)(a3 + 19) & 0x20;
  v51 = v15;
  v16 = sub_2587400(a3);
  v69 = v13;
  v17 = v16 != v13;
  sub_2585B30(&v68);
  v15 = v51;
  if ( !v53 )
  {
    if ( v69 <= 0x40 )
      goto LABEL_56;
    goto LABEL_54;
  }
  v18 = 1LL << ((unsigned __int8)v69 - 1);
  if ( v69 <= 0x40 )
  {
    if ( ((unsigned __int64)v68 & v18) != 0 )
      goto LABEL_19;
    goto LABEL_56;
  }
  if ( (*((_QWORD *)v68 + ((v69 - 1) >> 6)) & v18) == 0 )
  {
LABEL_54:
    if ( v68 )
    {
      operator delete[](v68);
      v15 = v51;
    }
    goto LABEL_56;
  }
  if ( v68 )
  {
    operator delete[](v68);
    v15 = v51;
  }
LABEL_19:
  v19 = *(_DWORD *)(a3 + 8);
  v20 = *(_BYTE *)(a3 + 19) & 0x20;
  v69 = v19;
  if ( v19 <= 0x40 )
  {
LABEL_20:
    v21 = *(_QWORD *)a3;
    if ( !v20 )
      goto LABEL_21;
    v43 = 1LL << ((unsigned __int8)v19 - 1);
    goto LABEL_73;
  }
  v54 = v15;
  sub_2585B30(&v68);
  v21 = (unsigned __int64)v68;
  if ( v20 )
  {
    v15 = v54;
    v43 = 1LL << ((unsigned __int8)v69 - 1);
    if ( v69 <= 0x40 )
    {
LABEL_73:
      if ( (v21 & v43) == 0 )
        goto LABEL_21;
      goto LABEL_63;
    }
    if ( (*((_QWORD *)v68 + ((v69 - 1) >> 6)) & v43) != 0 )
    {
      if ( v68 )
      {
        operator delete[](v68);
        v15 = v54;
      }
LABEL_63:
      v55 = v15;
      v58 = *(_DWORD *)(a3 + 16);
      sub_256F750(&v68, &v58);
      v44 = sub_256EFC0(a3, &v68);
      v45 = v55;
      v46 = v44;
      if ( v69 > 0x40 && v68 )
      {
        operator delete[](v68);
        v45 = v55;
      }
      if ( !v46 || v48 - v45 < -(__int64)v17 )
        sub_959800((__int64)&v61);
      goto LABEL_21;
    }
  }
  else if ( v69 <= 0x40 )
  {
    goto LABEL_21;
  }
  if ( v68 )
    operator delete[](v68);
LABEL_21:
  if ( !v57 || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v15 = v60;
    v13 = *(_DWORD *)(a3 + 8);
LABEL_24:
    if ( v13 <= 0x40 )
    {
      v23 = *(_QWORD *)a3 == 0;
    }
    else
    {
      v49 = v15;
      v22 = sub_2587400(a3);
      v15 = v49;
      v23 = v13 == v22;
    }
    v24 = *(_QWORD *)(a1 + 184);
    v25 = v15 - !v23;
    if ( v25 || !(unsigned __int8)sub_8E9400(a4) )
    {
      v26 = v25;
      v10 = 1;
      sub_8E61F0((__int64)&v68, a4, v26);
      v27 = sub_A1A4E0(v24, 56);
      sub_A1C070(v27, &v68);
      sub_A1C0C0(&v68);
      return v10;
    }
    v47 = sub_A1A4E0(v24, 56);
    sub_A1BFA0(v47, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    return 1;
  }
  return v10;
}

