__int64 __fastcall sub_7EA180(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = a1[324];
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = a1[1];
  v7 = sub_7E9510(a1, 0xFFFFFFFF, *(_DWORD *)(a3 + 32), a2, a3 + 48);
  sub_7CA4E0(v6, a4, v7);
  v8 = a1[2];
  v10[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 36) ^ 1u), _mm_cvtsi32_si128(a4)).m128i_u64[0];
  return sub_7D4840(v8, 2u, (__int64)v10, 0);
}

