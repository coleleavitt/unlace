char __fastcall sub_1629840(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  int v5; // r13d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // r13
  __int64 *v13; // r12
  __int64 *v14; // rbp
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r14
  _QWORD *v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  int v31; // edx
  __int64 v32; // rdx
  char result; // al
  unsigned __int64 v34; // rax
  int v35; // r13d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rdx
  char v47; // al
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-70h]
  __int64 v54; // [rsp+8h] [rbp-70h]
  __int64 v55; // [rsp+8h] [rbp-70h]
  __int64 v56; // [rsp+10h] [rbp-68h]
  unsigned __int64 v57; // [rsp+18h] [rbp-60h]
  _QWORD v58[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v5 = *(_DWORD *)(((__int64 (*)(void))sub_168B6E0)() + 176);
  if ( v5 == *(_DWORD *)(sub_168B6E0(a1) + 184)
    && (v35 = *(_DWORD *)(sub_168B6E0(a1) + 180), v35 == *(_DWORD *)(sub_168B6E0(a1) + 188))
    || (a2 = 1, v6 = sub_15F1640(*a1, 1), (v9 = v6) == 0) )
  {
    v12 = 0;
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 26 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) != 26 )
      goto LABEL_5;
    v10 = sub_F63050(v10, 1, v11, v8);
    if ( !v10 )
      goto LABEL_5;
    v11 = *(unsigned __int8 *)(v10 + 19);
    if ( (v11 & 0x40) == 0 )
      goto LABEL_5;
LABEL_29:
    v8 = *(unsigned __int16 *)(v10 + 22);
    v11 = (((char)v11 >> 5) & 4) + 8 * v8 + 48;
    v34 = (v10 + v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v34 + 1) & 4) != 0 && (*(_BYTE *)(v34 + 8) & 2) != 0 )
      return 0;
    goto LABEL_5;
  }
  v11 = *(unsigned __int8 *)(v10 + 19);
  if ( (v11 & 0x40) != 0 )
    goto LABEL_29;
LABEL_5:
  a2 = 1;
  v12 = sub_B7B300(v9, 1, v11, v8);
LABEL_6:
  v13 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *v14;
  v16 = *(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v16;
  if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 13 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v21) = *(_BYTE *)(v20 + 16);
    goto LABEL_13;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57 <= 1 )
    goto LABEL_8;
  v20 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(unsigned __int8 *)(v20 + 16);
  v7 = (unsigned int)(v21 - 57);
  if ( (unsigned int)v7 > 1 )
    goto LABEL_13;
  v15 = sub_F63050(*v14, a2, v7, v20);
  if ( v15 )
  {
LABEL_8:
    v18 = (_QWORD *)sub_168B6C0(a1);
    v19 = (*(_BYTE *)(v15 + 18) >> 3) & 0xF;
    if ( v19 == 7 )
    {
      result = ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 100;
    }
    else
    {
      if ( v19 != 6 )
      {
        a2 = *v14;
        if ( ((*(_BYTE *)(v15 + 18) >> 3) & 0xF) != 0 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          LOBYTE(v21) = *(_BYTE *)(v20 + 16);
          goto LABEL_13;
        }
        v55 = (__int64)v18;
        v39 = sub_A97D20((__int64)v18, a2);
        v40 = (_QWORD *)v55;
        v41 = v39;
        v42 = *(_QWORD *)(v55 + 2320);
        if ( v12 )
          v43 = *(unsigned int *)(v42 + 184);
        else
          v43 = *(unsigned int *)(v42 + 176);
        v44 = v43 << 7;
        v7 = (*(_WORD *)(v17 + 18) >> 3) & 0x1FF;
        if ( (_DWORD)v7 == 103 || (_DWORD)v7 == 100 )
        {
          v57 = v44;
          v56 = v41;
          v51 = sub_A97D20(v55, *(_QWORD *)(*(_QWORD *)(v55 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
          v41 = v56;
          a2 = v51;
          v40 = (_QWORD *)v55;
          v7 = v57 % v51;
          v44 = v57 / v51;
        }
        if ( v41 == v44 )
        {
          sub_A649E0((__int64)v58, v40, v17);
          v45 = *(_QWORD *)&byte_8[v58[0] & 0xFFFFFFFFFFFFFFF0LL];
          v46 = *(_QWORD *)&byte_8[*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL];
          v47 = v45 | LOBYTE(v58[0]);
          a2 = v45 & 0xFFFFFFFFFFFFFFF8LL;
          v48 = v46 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v46 | (unsigned __int8)*(_QWORD *)(v15 + 32)) & 7;
          LOBYTE(v46) = v47;
          result = 1;
          v7 = a2 | v46 & 7;
          if ( v48 == v7 )
            return result;
        }
        goto LABEL_36;
      }
      a2 = (unsigned __int64)v18;
      v49 = sub_F583D0(*v13, v18);
      v50 = *(_QWORD *)&byte_8[*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL];
      v7 = v50 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v50 | (unsigned __int8)*(_QWORD *)(v15 + 32)) & 7;
      result = v7 == v49;
    }
    if ( result )
      return result;
  }
LABEL_36:
  v20 = *(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v21) = *(_BYTE *)(v20 + 16);
LABEL_13:
  if ( (_BYTE)v21 != 13 )
    return 0;
  v22 = *v13;
  if ( (unsigned int)*(unsigned __int8 *)(*v13 + 16) - 57 > 1 )
  {
    v54 = v20;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
      return 0;
    v36 = sub_F63050(v22, a2, v7, v20);
    v20 = v54;
    v22 = v36;
    if ( !v36 )
      return 0;
  }
  v53 = v20;
  v23 = (_QWORD *)sub_168B6C0(a1);
  v24 = (*(_BYTE *)(v22 + 18) >> 3) & 0xF;
  if ( v24 == 7 )
    return ((*(_WORD *)(v53 + 18) >> 3) & 0x1FF) == 100;
  if ( v24 == 6 )
  {
    v37 = sub_F583D0(*v14, v23);
    v38 = *(_QWORD *)&byte_8[*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL];
    return (v38 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v38 | (unsigned __int8)*(_QWORD *)(v22 + 32)) & 7) == v37;
  }
  if ( ((*(_BYTE *)(v22 + 18) >> 3) & 0xF) != 0 )
    return 0;
  v25 = sub_A97D20((__int64)v23, *v13);
  v26 = v53;
  v27 = v25;
  v28 = v23[290];
  v29 = v12 ? *(unsigned int *)(v28 + 184) : *(unsigned int *)(v28 + 176);
  v30 = v29 << 7;
  v31 = (*(_WORD *)(v53 + 18) >> 3) & 0x1FF;
  if ( v31 == 100 || v31 == 103 )
  {
    v52 = sub_A97D20((__int64)v23, *(_QWORD *)(v23[2331] & 0xFFFFFFFFFFFFFFF0LL));
    v26 = v53;
    v30 /= v52;
  }
  if ( v27 != v30 )
    return 0;
  sub_A649E0((__int64)v58, v23, v26);
  v32 = *(_QWORD *)&byte_8[*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  result = 1;
  if ( (v32 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v32 | (unsigned __int8)*(_QWORD *)(v22 + 32)) & 7) != (*(_QWORD *)&byte_8[v58[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v58[0] & 0xFFFFFFFFFFFFFFF0LL] | LOBYTE(v58[0])) & 7) )
    return 0;
  return result;
}
