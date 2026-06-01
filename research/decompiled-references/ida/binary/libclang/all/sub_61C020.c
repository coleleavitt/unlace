__int64 __fastcall sub_61C020(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BOOL4 v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // [rsp+20h] [rbp-38h] BYREF
  __m128i v15[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = sub_61BF20(a1, a2, a3, a4, a5, a6);
  if ( v6 )
    return v6;
  v8 = sub_77BC00(a2);
  if ( !v8 )
    return v6;
  v9 = v8;
  sub_639270(&v14, v8, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
  return (unsigned int)sub_619180(
                         (__int64)a1,
                         v9,
                         v10,
                         v11,
                         v12,
                         v13,
                         (__int128)_mm_load_si128(&v14),
                         (__int128)_mm_load_si128(v15));
}

