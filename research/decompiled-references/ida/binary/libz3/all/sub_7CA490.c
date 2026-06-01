__int64 __fastcall sub_7CA490(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  __int32 v7; // eax
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 24);
  v9.m128i_i64[1] = a2;
  v7 = *(_DWORD *)(v6 + 3612);
  LODWORD(v10) = 3;
  v9.m128i_i32[0] = v7;
  return sub_11B4C90(v6, -2, a3, a4, a5, a6, (__int128)_mm_load_si128(&v9), 3);
}

