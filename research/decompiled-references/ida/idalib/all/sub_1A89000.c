__int64 __fastcall sub_1A89000(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v24[184]; // [rsp+20h] [rbp-B8h] BYREF

  v9 = (__int64)a3;
  v10 = sub_19146F0(*a1, a3, (__int64)a3, a4, a5, a6, a7, a8);
  if ( v10 == 1 )
    return 1;
  v13 = v10 & 0xFFFFFFFFFFFFFFFELL;
  v22 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v14 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
    goto LABEL_7;
  v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v14 == 34 )
    goto LABEL_7;
  if ( *(_BYTE *)(v15 + 16) == 42
    || (_BYTE)v14 == 42 && (v15 = sub_F63050(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), v9, v14, v11)) != 0 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B3 )
      goto LABEL_7;
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) == 0 || (unsigned __int8)sub_1E63CF0(*a1, a2, v22, 1, 3966) )
    goto LABEL_16;
  v9 = v13;
  v20 = sub_1BFF9E0(*a1, v13);
  if ( v20 == 1 )
    return 1;
  if ( v20 )
  {
    v13 = v20 & 0xFFFFFFFFFFFFFFFELL;
LABEL_7:
    v17 = *a1;
    v18 = sub_C00A40(v13, v9, v14, v11, v12);
    return sub_19B4A30(v17, v13, v18, 0, 0, 0, a7, a8);
  }
LABEL_16:
  sub_168B9F0((__int64)v24, a1, a2, 0x1127u, 0);
  v21 = sub_1605D30((__int64)v24, &v22);
  v23 = sub_EEC8C0(v13, (__int64)&v22, *(double *)a7.m128_u64);
  sub_1587DB0(v21, &v23);
  sub_15F7200(v24);
  return 1;
}
