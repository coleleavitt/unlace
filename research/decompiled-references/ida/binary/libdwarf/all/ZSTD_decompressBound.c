__int64 __fastcall ZSTD_decompressBound(char *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v3 = a2;
  v4 = 0;
  while ( 1 )
  {
    sub_621C0(&v6, a1, v3, 0);
    if ( v6.m128i_i64[1] > 0xFFFFFFFFFFFFFF88LL || v7 == -2 )
      break;
    a1 += v6.m128i_i64[1];
    v4 += v7;
    v3 -= v6.m128i_u64[1];
    if ( !v3 )
      return v4;
  }
  return -2;
}

