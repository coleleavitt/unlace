__int64 __fastcall sub_619540(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // [rsp+20h] [rbp-38h] BYREF
  __m128i v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v4 = sub_B0CC40(a2);
  v5 = sub_B0D8A0(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL));
  result = 0;
  if ( v5 )
  {
    sub_639CF0(&v11, v5, *a3, *a1);
    return sub_619180((__int64)a1, v5, v7, v8, v9, v10, (__int128)_mm_load_si128(&v11), (__int128)_mm_load_si128(v12));
  }
  return result;
}

