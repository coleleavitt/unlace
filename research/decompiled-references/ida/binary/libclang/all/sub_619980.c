__int64 __fastcall sub_619980(__m128i *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __m128i v9; // [rsp+20h] [rbp-38h] BYREF
  __m128i v10[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 88);
  if ( !v3 )
    return sub_618260(a1, a2);
  sub_639C80(&v9, v3, *(unsigned int *)(a2 + 24), a1->m128i_i64[0]);
  result = sub_619180((__int64)a1, v3, v4, v5, v6, v7, (__int128)_mm_load_si128(&v9), (__int128)_mm_load_si128(v10));
  if ( !(_BYTE)result )
    return sub_618260(a1, a2);
  return result;
}

