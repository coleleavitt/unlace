__int64 __fastcall sub_7CA4E0(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  __int32 v7; // edx
  __int64 result; // rax
  __m128i v9; // xmm0
  __m128i v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  __m128i v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-28h]

  sub_7F15F0(a1 + 160);
  v6 = *(_QWORD *)(a1 + 24);
  v10.m128i_i64[1] = a3;
  LODWORD(v11) = 3;
  v7 = *(_DWORD *)(v6 + 3612);
  result = *(unsigned int *)(*(_QWORD *)(v6 + 3288) + 4LL * a2);
  v10.m128i_i32[0] = v7;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v12.m128i_i32[0] = v7;
      v12.m128i_i64[1] = a3;
      v13 = 3;
      if ( !v7 && !*(_BYTE *)(v6 + 3832) )
      {
        result = *(_QWORD *)(v6 + 3296) + 24LL * (a2 >> 1);
        if ( *(_DWORD *)result )
        {
          v9 = _mm_load_si128(&v12);
          *(_DWORD *)(result + 16) = 3;
          *(__m128i *)result = v9;
        }
      }
    }
    else if ( (_DWORD)result == -1 )
    {
      v10.m128i_i32[0] = v7;
      v10.m128i_i64[1] = a3;
      LODWORD(v11) = 3;
      return sub_11B4C90(v6, a2 ^ 1, v7, a2, v4, v5, (__int128)_mm_load_si128(&v10), 3);
    }
  }
  else
  {
    v10.m128i_i64[1] = a3;
    v10.m128i_i32[0] = v7;
    LODWORD(v11) = 3;
    return sub_11C3360(v6, a2, v7, a2, v4, v5, (__int128)_mm_load_si128(&v10), v11);
  }
  return result;
}

