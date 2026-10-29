__int64 __fastcall sub_177D2F0(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int16 *v8; // rsi
  __int64 v10; // rax
  int v11; // r12d
  unsigned __int16 *v13; // r13
  __int64 v14; // rax
  int v15; // r9d
  __m128i v16; // xmm0
  int v17; // edx
  int v18; // esi
  int v19; // r8d
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+10h] [rbp-58h]
  __m128i v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+30h] [rbp-38h]

  v8 = nullptr;
  if ( (*(_WORD *)a2 & 0x200) != 0 )
    v8 = *(unsigned __int16 **)(a2 + 24);
  v10 = sub_177B9C0(a1, v8, 0, a3, a5, a6, a7);
  v11 = v10;
  if ( v10 == 1 )
    return 1;
  v13 = *(unsigned __int16 **)(a2 + 8LL * (((*(_QWORD *)a2 & 0x200) != 0) + ((*(_QWORD *)a2 & 0x400) != 0)) + 24);
  v14 = sub_EEE140((_QWORD *)a2);
  sub_175C5C0((__int64)&v26, a1, *(_DWORD *)(a2 + 4), v14, v13, 2u);
  if ( (_BYTE)v27 )
    return 1;
  v16 = _mm_load_si128(&v26);
  v17 = *(_DWORD *)(a2 + 16);
  v18 = *(_DWORD *)(a2 + 4);
  v28 = v16;
  v19 = *(_DWORD *)(a2 + 20);
  v20 = *a1;
  v29 = v27;
  v24 = sub_1C396C0(v20, v18, v17, v11 & 0xFFFFFFFE, v19, v15, v16.m128i_i64[0], v16.m128i_i64[1]);
  if ( v24 == 1 )
    return 1;
  v25 = sub_177B9C0(
          a1,
          *(unsigned __int16 **)(a2
                               + 8LL
                               * (((*(_QWORD *)a2 & 0x200) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x400) != 0) + 1)
                               + 24),
          0,
          *(double *)v16.m128i_i64,
          v21,
          v22,
          v23);
  if ( v25 == 1 )
    return 1;
  else
    return sub_1C50070(*a1, *(unsigned int *)(a2 + 4), v24 & 0xFFFFFFFFFFFFFFFELL, v25 & 0xFFFFFFFFFFFFFFFELL);
}
