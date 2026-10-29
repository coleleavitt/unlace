__int64 __fastcall sub_16EF760(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  bool v4; // r14
  int v5; // r12d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  int v9; // edx
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // ax
  unsigned int v16; // eax
  char v17; // r15
  unsigned int v18; // r13d
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rsi
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r12d
  unsigned __int64 v32; // rbp
  __int64 v33; // rcx
  unsigned int v34; // eax
  bool v35; // al
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 *v38; // rsi
  unsigned int v39; // ecx
  unsigned int v40; // eax
  char v41; // r15
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // [rsp+8h] [rbp-100h]
  unsigned int v53; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v54; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v55[2]; // [rsp+20h] [rbp-E8h] BYREF
  char v56; // [rsp+30h] [rbp-D8h]
  _BYTE v57[120]; // [rsp+40h] [rbp-C8h] BYREF
  char v58; // [rsp+B8h] [rbp-50h]

  v4 = 1;
  v5 = a2;
  v7 = *(_QWORD *)(a3 + 32);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
  v9 = *(_DWORD *)(v8 + 248);
  v10 = *(_DWORD *)(v8 + 260);
  if ( ((v9 - 3) & 0xFFFFFFFD) == 0 )
  {
    if ( v10 != 15 )
      v4 = v10 == 14;
    goto LABEL_4;
  }
  if ( v10 != 15 )
    v4 = v10 == 14;
  if ( v9 == 38 )
  {
LABEL_4:
    v11 = sub_15F1640(a1, 0);
    if ( v11 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 25;
      if ( (unsigned int)v14 > 1 )
        v13 = sub_F63050(v13, 0, v14, v12);
      v15 = (*(_WORD *)(v13 + 20) >> 2) & 0x3F;
      if ( (_DWORD)a2 != 935 )
      {
        if ( (v15 != 7 || !v4) && (v15 != 6 || v4) )
          goto LABEL_18;
        v16 = sub_EEB7E0(v7, 0, a4);
        sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), v16, 0x1531u, 0);
        LOBYTE(v55[0]) = !v4;
        v17 = *(_BYTE *)(sub_1588420((__int64)v57, (unsigned __int8 *)v55) + 120);
        sub_15F7200(v57);
        goto LABEL_11;
      }
      if ( v15 == 7 )
      {
LABEL_41:
        v36 = sub_EEB7E0(v7, 0, a4);
        sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), v36, 0x107Cu, 0);
        v17 = v58;
        sub_15F7200(v57);
LABEL_11:
        if ( v17 )
          return 1;
        goto LABEL_18;
      }
      v35 = v15 != 6;
    }
    else
    {
      if ( (_DWORD)a2 != 935 )
        goto LABEL_18;
      v35 = 1;
    }
    if ( v4 || !v35 )
    {
LABEL_19:
      if ( !(unsigned __int8)sub_16EC930(a1, a3, 2u, a4) )
        goto LABEL_20;
      return 1;
    }
    goto LABEL_41;
  }
  if ( (_DWORD)a2 == 935 )
  {
    v40 = sub_EEB7E0(v7, a2, a4);
    sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), v40, 0xD2Cu, 0);
    v41 = v58;
    sub_15F7200(v57);
    if ( v41 )
      return 1;
    goto LABEL_19;
  }
LABEL_18:
  if ( (_DWORD)a2 != 205 )
    goto LABEL_19;
  if ( (unsigned __int8)sub_16EC5F0(a1, a3, 1u, a4) || (unsigned __int8)sub_16EF380(a1, a3, 2u, a4) )
    return 1;
LABEL_20:
  if ( (unsigned __int8)sub_16BBD70(a1, a3) )
    return 1;
  v20 = v7;
  v18 = sub_16B6120(a1, v7, &v54, a4);
  if ( (_BYTE)v18 )
    return 1;
  if ( v5 == 205 && *(_DWORD *)(a3 + 16) <= 1u )
  {
    v37 = sub_C00A40(a3, v20, v21, v22, v23);
    v38 = (__int64 *)(a1 + 8);
    v39 = 6639;
    goto LABEL_43;
  }
  v24 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 40);
  v25 = sub_BFD550(v24);
  sub_C3EB00((__int64)v55, v24, *(_QWORD *)(a1 + 248), nullptr, v26, v27);
  if ( v56 )
  {
    if ( (**(_BYTE **)(a1 + 232) & 8) != 0 )
    {
      v24 = 0;
      v42 = sub_AC43F0((__int64)v55, nullptr);
      if ( v5 != 205 )
      {
        if ( v42 )
        {
          v46 = sub_C00A40(a3, 0, v43, v44, v45);
          sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), v46, 0x19EFu, 0);
          sub_15F7200(v57);
          sub_98E4B0((__int64)v55);
          return v18;
        }
      }
    }
  }
  sub_98E4B0((__int64)v55);
  v55[0] = 0;
  if ( (*(_WORD *)v25 & 0x1FF) != 0x47 )
    goto LABEL_42;
  v29 = *(_QWORD *)(v25 + 16);
  if ( (*(_BYTE *)(v29 + 28) & 0x7F) != 0x2B )
    goto LABEL_42;
  v30 = *(_QWORD *)(v29 + 48);
  v24 = v54;
  v55[0] = v30;
  v31 = *(_DWORD *)(v29 + 24);
  if ( (*(_BYTE *)(v29 + 96) & 7) == 5 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    if ( v54 == v29 )
    {
      v53 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 > 1 )
      {
        v53 = 2;
        goto LABEL_33;
      }
      goto LABEL_32;
    }
    goto LABEL_42;
  }
  if ( v54 != v29 )
  {
LABEL_42:
    v37 = sub_EEB7E0(*(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 40), v24, a4);
    v38 = (__int64 *)(a1 + 8);
    v39 = 7348;
LABEL_43:
    sub_168B9F0((__int64)v57, v38, v37, v39, 0);
    sub_15F7200(v57);
    return v18;
  }
  v32 = v55[0] & 0xFFFFFFFFFFFFFFF0LL;
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v33 = *(unsigned __int8 *)(v24 + 16);
  if ( (unsigned int)(v33 - 43) <= 1 || (_BYTE)v33 == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) == 0x1E1 )
  {
LABEL_31:
    v53 = 0;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
       - 43 > 1 )
    {
LABEL_33:
      v34 = sub_EEB7E0(v25, v24, a4);
      sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), v34, 0x1D7Bu, 0);
      sub_1588370((__int64)v57, &v53);
      sub_15F7200(v57);
      sub_168B9F0((__int64)v57, (__int64 *)(a1 + 8), v31, 0x1876u, 0);
      sub_1605D30((__int64)v57, v55);
      sub_15F7200(v57);
      return v18;
    }
LABEL_32:
    v53 = 1;
    goto LABEL_33;
  }
  v24 = v55[0];
  v52 = v55[0];
  if ( sub_A62E10(*(_QWORD *)(a1 + 248), v55[0], v55[0], v33, v28) )
  {
    v50 = (__int64 *)(*(_QWORD *)(*(_QWORD *)v32 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v50 + 16) != 47
      || (v51 = sub_F60F10(*v50, v24, v52, v47, v48, v49)) == nullptr
      || (v24 = v51[17], !sub_AAC110(*(_QWORD *)(a1 + 248), v24, v52, 0)) )
    {
      v32 = v55[0] & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_31;
    }
  }
  return v18;
}
