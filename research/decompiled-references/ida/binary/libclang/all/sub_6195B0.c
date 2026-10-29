__int64 __fastcall sub_6195B0(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  __m128i v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  sub_639CF0(&v9, v3, *a3, *a1);
  return sub_619180((__int64)a1, v3, v4, v5, v6, v7, (__int128)_mm_load_si128(&v9), (__int128)_mm_load_si128(&v10));
}

