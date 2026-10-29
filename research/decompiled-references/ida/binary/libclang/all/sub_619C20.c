__int64 __fastcall sub_619C20(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  __m128i v15; // [rsp+30h] [rbp-48h] BYREF
  __m128i v16; // [rsp+40h] [rbp-38h] BYREF
  __m128i v17[2]; // [rsp+50h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFFCLL;
  sub_639270(&v14, v3, a1[6], *a1, *(_QWORD *)((char *)a1 + 84));
  result = sub_619180((__int64)a1, v3, v4, v5, v6, v7, (__int128)_mm_load_si128(&v14), (__int128)_mm_load_si128(&v15));
  if ( !(_BYTE)result )
  {
    v9 = *(_QWORD *)(a2 + 48);
    if ( v9 )
    {
      sub_639270(&v16, v9, a1[6], *a1, *(_QWORD *)((char *)a1 + 84));
      return sub_619180(
               (__int64)a1,
               v9,
               v10,
               v11,
               v12,
               v13,
               (__int128)_mm_load_si128(&v16),
               (__int128)_mm_load_si128(v17));
    }
  }
  return result;
}

