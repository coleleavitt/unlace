void __fastcall sub_1808170(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[184]; // [rsp+0h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 82) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 && *(_BYTE *)(a2 + 81) >> 5 != 1 )
    {
      sub_168B9F0((__int64)v15, a1 + 1, a3[1].m128i_u32[2], 0x1B31u, 0);
      sub_15F7200(v15);
    }
    v8 = (_QWORD *)a1[31];
    v9 = v8[294];
    v8[304] += 40LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8[295] >= (unsigned __int64)&v10[2].m128i_u64[1] && v9 )
      v8[294] = (char *)v10 + 40;
    else
      v10 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, a5, a6);
    sub_B131B0(v10, a1[31], a3);
    sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
  }
  else
  {
    sub_168B9F0((__int64)v15, a1 + 1, a3[1].m128i_u32[2], 0x1B30u, 0);
    sub_15F7200(v15);
  }
}
