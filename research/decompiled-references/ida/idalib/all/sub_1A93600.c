__int64 __fastcall sub_1A93600(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, double a5, double a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // al
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v42; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v46[25]; // [rsp+30h] [rbp-C8h] BYREF

  v9 = sub_168B6C0((__int64)a1);
  if ( !a3 )
    return 0;
  v11 = *(_QWORD *)(a3 + 80);
  v12 = v9;
  v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 43 <= 1
    || (v37 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v37 <= 1)
    && (v13 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF0LL), a2, v37, v10)) != 0 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v13 + 32);
      if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v14 = v11 & 0xFFFFFFFFFFFFFFF0LL;
        v13 = *(_QWORD *)v14;
        v15 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v14 + 16LL) - 43;
        if ( (unsigned int)v15 <= 1 )
          break;
        v16 = sub_F63050(v13, a2, v15, v10);
        v11 = *(_QWORD *)(v16 + 32);
        if ( (*(_BYTE *)(v16 + 18) & 0x10) == 0 )
          goto LABEL_6;
      }
    }
  }
LABEL_6:
  v42 = v11;
  v17 = *(_QWORD *)(a2 + 56);
  v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43 <= 1
    || (v36 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v36 <= 1)
    && (v18 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF0LL), a2, v36, v10)) != 0 )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v18 + 32);
      if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v19 = v17 & 0xFFFFFFFFFFFFFFF0LL;
        v18 = *(_QWORD *)v19;
        v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43;
        if ( (unsigned int)v20 <= 1 )
          break;
        v21 = sub_F63050(v18, a2, v20, v10);
        v17 = *(_QWORD *)(v21 + 32);
        if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v46[0] = v17;
  v43 = sub_F64D20(v46);
  v22 = (__int64 *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = v42 & 0xFFFFFFFFFFFFFFF0LL;
  v24 = *(_QWORD *)&byte_8[v43 & 0xFFFFFFFFFFFFFFF0LL];
  v25 = v24 | v43;
  v26 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v26 | v25 & 7) == (*(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v42) & 7) )
    return 0;
  v27 = *v22;
  if ( *(_BYTE *)(*v22 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      goto LABEL_17;
    v27 = sub_F63050(*v22, v22, v27, v23);
    if ( !v27 )
      goto LABEL_17;
    v23 = v42 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v28 = *(_QWORD *)v23;
  if ( *(_BYTE *)(*(_QWORD *)v23 + 16LL) == 34
    || (v41 = v27, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34)
    && (v30 = sub_F63050(v28, v28, v27, v23), v27 = v41, (v28 = v30) != 0) )
  {
    if ( (unsigned __int8)sub_AABC90(v12, v28, v27, v23, v26) )
      return 0;
    goto LABEL_14;
  }
LABEL_17:
  v31 = sub_18D3BF0(*a1, a4, v42, v43, a5, a6);
  if ( v31 > 9 || ((1LL << v31) & 0x203) == 0 )
  {
    sub_168B9F0((__int64)v46, a1, a4, 0x12EFu, 0);
    v44 = *(_QWORD *)(a2 + 40);
    v38 = sub_15894B0((__int64)v46, &v44);
    v39 = sub_1605D30(v38, (__int64 *)&v43);
    v45 = *(_QWORD *)(a3 + 40);
    v40 = sub_19D6730(v39, &v45);
    sub_1605D30(v40, (__int64 *)&v42);
    goto LABEL_32;
  }
  v34 = *(_QWORD *)(*(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v34 == (*(_QWORD *)&byte_8[v43 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
             | ((unsigned __int8)*(_QWORD *)&byte_8[v43 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v43) & 7)
    || !sub_F610C0(
          *(_QWORD *)(*(_QWORD *)&byte_8[v43 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a4,
          v34,
          v31,
          v32,
          v33) )
  {
    return 0;
  }
LABEL_14:
  sub_168B9F0((__int64)v46, a1, a4, 0x1954u, 0);
  v44 = *(_QWORD *)(a2 + 40);
  v29 = sub_15894B0((__int64)v46, &v44);
  v45 = *(_QWORD *)(a3 + 40);
  sub_19D6730(v29, &v45);
LABEL_32:
  sub_15F7200(v46);
  sub_168B9F0((__int64)v46, a1, *(_DWORD *)(a3 + 24), 0x67u, 0);
  sub_15F7200(v46);
  return 1;
}
