__int64 __fastcall sub_619810(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i v8; // [rsp+20h] [rbp-28h] BYREF
  __m128i v9; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  if ( !v2 )
    return 0;
  sub_639270(&v8, v2, a1[6], *a1, 0);
  return sub_619180((__int64)a1, v2, v3, v4, v5, v6, (__int128)_mm_load_si128(&v8), (__int128)_mm_load_si128(&v9));
}

