__int64 __fastcall sub_61C790(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  __m128i v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a2 + 32);
  if ( (*(_BYTE *)(v5 + 60) & 4) != 0 )
  {
    result = sub_61C6C0(a1, v5 + 80);
    if ( (_BYTE)result )
      return result;
    v5 = *(_QWORD *)(a2 + 32);
  }
  sub_639CF0(&v11, v5, *a3, *a1);
  return sub_619180((__int64)a1, v5, v7, v8, v9, v10, (__int128)_mm_load_si128(&v11), (__int128)_mm_load_si128(v12));
}

