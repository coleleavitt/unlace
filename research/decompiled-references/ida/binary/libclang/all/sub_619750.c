__int64 __fastcall sub_619750(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  __m128i v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a1;
  v4 = *a3;
  v5 = sub_B07AF0(a2);
  sub_639C80(&v11, v5, v4, v3);
  return sub_619180((__int64)a1, v5, v6, v7, v8, v9, (__int128)_mm_load_si128(&v11), (__int128)_mm_load_si128(v12));
}

