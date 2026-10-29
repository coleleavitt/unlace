__int64 __fastcall sub_AF77D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v8; // rax
  unsigned __int8 v9; // r12
  __int64 v10; // rax
  char v11; // r12
  int v12; // r12d
  char v13; // r12
  char v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rdx
  char v18; // r12
  char v19; // r12
  __int64 v20; // r14
  __int64 v21; // rdx
  char v22; // al
  char v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // al
  char v27; // r12
  char v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  bool v41; // al
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD v44[6]; // [rsp+0h] [rbp-30h] BYREF

  v3 = *(_BYTE *)(a2 + 80) & 0x7F;
  if ( (_BYTE)v3 != (*(_BYTE *)(a3 + 80) & 0x7F) )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 26 )
    v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v3);
  v9 = *(_BYTE *)(v8 + 18);
  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (v9 >> 3) & 3;
  if ( *(_BYTE *)(v10 + 16) == 26 )
  {
    if ( ((*(_BYTE *)(v10 + 18) >> 3) & 3) != v11 )
      return 0;
  }
  else if ( ((*(_BYTE *)(sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v3) + 18) >> 3) & 3) != v11 )
  {
    return 0;
  }
  if ( ((*(_BYTE *)(a2 + 29) >> 5) & 3) != ((*(_BYTE *)(a3 + 29) >> 5) & 3) )
    return 0;
  v12 = sub_B77890(a2);
  if ( v12 != (unsigned int)sub_B77890(a3) )
    return 0;
  v13 = sub_B979F0(a2);
  if ( v13 != (unsigned __int8)sub_B979F0(a3) )
    return 0;
  v14 = sub_B98200(a2);
  if ( v14 != (unsigned __int8)sub_B98200(a3) )
    return 0;
  v16 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(v16 + 16);
  if ( (unsigned int)(v17 - 25) > 1 )
  {
    v43 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v17, v15);
    v16 = v43;
    if ( *(_BYTE *)(v43 + 16) == 26 )
      goto LABEL_48;
  }
  else if ( (_BYTE)v17 == 26 )
  {
LABEL_16:
    v18 = *(_BYTE *)(v16 + 18) >> 5;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    goto LABEL_49;
  v43 = sub_F63050(v16, a2, v17, v15);
LABEL_48:
  if ( v43 )
    goto LABEL_16;
LABEL_49:
  v18 = 0;
LABEL_17:
  v19 = v18 & 1;
  v20 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(unsigned __int8 *)(v20 + 16);
  if ( (unsigned int)(v21 - 25) > 1 )
  {
    v42 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v21, v15);
    v20 = v42;
    if ( *(_BYTE *)(v42 + 16) == 26 )
      goto LABEL_43;
    goto LABEL_41;
  }
  if ( (_BYTE)v21 != 26 )
  {
LABEL_41:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_44;
    v42 = sub_F63050(v20, a2, v21, v15);
LABEL_43:
    if ( v42 )
      goto LABEL_19;
LABEL_44:
    v22 = 0;
    goto LABEL_20;
  }
LABEL_19:
  v22 = *(_BYTE *)(v20 + 18) >> 5;
LABEL_20:
  if ( (v22 & 1) != v19 )
    return 0;
  v23 = sub_AED540(a2, a2, v21, v15);
  if ( v23 != (unsigned __int8)sub_AED540(a3, a2, v24, v25) )
    return 0;
  v26 = sub_AED5B0(a2);
  if ( v26 != sub_AED5B0(a3) )
    return 0;
  if ( ((*(_QWORD *)(a2 + 80) & 0x80000LL) != 0) != ((*(_QWORD *)(a3 + 80) & 0x80000LL) != 0) )
    return 0;
  if ( ((*(_QWORD *)(a2 + 80) & 0x2000000LL) != 0) != ((*(_QWORD *)(a3 + 80) & 0x2000000LL) != 0) )
    return 0;
  v27 = *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 82);
  if ( ((v27 & 0x40) != 0) != ((*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) + 82) & 0x40) != 0) )
    return 0;
  v28 = *(_BYTE *)(a2 + 28);
  if ( (v28 & 0x7F) == 0x26 )
  {
    v44[0] = sub_AF7790();
    v29 = sub_AF7790();
    if ( (unsigned __int8)sub_B974A0(v44, v29) )
    {
      v28 = *(_BYTE *)(a2 + 28);
      goto LABEL_29;
    }
    return 0;
  }
LABEL_29:
  if ( (v28 & 0x7F) == 0x25 )
  {
    v44[0] = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 168);
    v30 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) + 168);
    if ( !(unsigned __int8)sub_B974A0(v44, v30) )
      return 0;
    v33 = sub_AED600(a3, v30, v31, v32);
    v36 = sub_AED600(a2, v30, v34, v35);
    if ( !(unsigned __int8)sub_AF1C90(a1, v36, v33) )
      return 0;
  }
  v37 = *(_QWORD *)(a3 + 40);
  v38 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v38 = 0;
  if ( (v37 & 7) != 0 )
  {
    v40 = 0;
  }
  else
  {
    v39 = v37 & 0xFFFFFFFFFFFFFFF8LL;
    v40 = v39;
    if ( v39 && v38 )
    {
      v41 = sub_AEB2F0(v38, v39);
      goto LABEL_38;
    }
  }
  v41 = v38 == v40;
LABEL_38:
  if ( !v41 )
    return 0;
  return sub_AF1C90(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48));
}
