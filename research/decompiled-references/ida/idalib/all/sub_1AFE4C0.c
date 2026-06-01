__int64 __fastcall sub_1AFE4C0(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rsi
  char v19; // al
  __int64 result; // rax
  unsigned int v21; // eax
  __int64 v22; // r9
  __m128i *v23; // r12
  __int64 v24; // rsi
  unsigned __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r14d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD v33[8]; // [rsp+8h] [rbp-40h] BYREF

  v11 = sub_19146F0((__int64)a1, a2, (__int64)a3, (__int64)a4, a5, a6, a7, a8);
  v16 = *a3;
  v17 = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*a3 )
  {
    v23 = (__m128i *)a1[68];
    v24 = sub_6F3470(*(_QWORD *)(a1[31] + 17504LL), a4, a5);
    v25 = sub_1AEC6A0((__int64)a1, v24, v17, 1, v23, 1, a7, a8);
    v29 = sub_C00A40(v17, v24, v26, v27, v28);
    v33[0] = *(_QWORD *)(v25 + 48);
    v32 = sub_C1BEF0((__int64)v33, v24, v30, v31);
    v16 = sub_1AE9760((__int64)a1, v25, v32, v29);
    *a3 = v16;
  }
  v18 = v16;
  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) != 0 )
    return sub_19146F0((__int64)a1, (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL), v12, v13, v14, v15, a7, a8);
  v19 = *(_BYTE *)(v17 + 1);
  if ( (v19 & 0x38) != 0 )
    return sub_19146F0((__int64)a1, (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL), v12, v13, v14, v15, a7, a8);
  if ( (v19 & 6) == 0 )
    return sub_19146F0((__int64)a1, (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL), v12, v13, v14, v15, a7, a8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
    return sub_19146F0((__int64)a1, (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL), v12, v13, v14, v15, a7, a8);
  v21 = sub_C00A40(v17, v16, v12, v13, v14);
  v18 = sub_19249E0((__int64)a1, v21, 5u, v16, 0, v22, a7, a8);
  result = 1;
  if ( v18 > 1 )
    return sub_19146F0((__int64)a1, (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL), v12, v13, v14, v15, a7, a8);
  return result;
}
