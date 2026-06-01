__int64 __fastcall ZSTD_findFrameCompressedSize(char *a1, unsigned __int64 a2)
{
  __m128i v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  sub_621C0(&v3, a1, a2, 0);
  return v3.m128i_i64[1];
}

