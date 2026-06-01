__int64 __fastcall sub_61AFA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v13; // [rsp+20h] [rbp-38h] BYREF
  __m128i v14[2]; // [rsp+30h] [rbp-28h] BYREF

  result = sub_61AC60(a1, *(_QWORD *)(a2 + 56), a3, a4, a5, a6);
  if ( !(_BYTE)result )
  {
    v8 = *(_QWORD *)(a2 + 64);
    if ( v8 )
    {
      sub_639270(&v13, v8, a2, *a1, *(_QWORD *)((char *)a1 + 84));
      return sub_619180(
               (__int64)a1,
               v8,
               v9,
               v10,
               v11,
               v12,
               (__int128)_mm_load_si128(&v13),
               (__int128)_mm_load_si128(v14));
    }
  }
  return result;
}

