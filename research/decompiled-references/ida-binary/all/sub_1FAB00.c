__int64 __fastcall sub_1FAB00(__m128i *a1, const char *a2)
{
  __int64 v2; // rbx
  int v3; // edx
  char v4; // al
  __int64 result; // rax
  __m128i v6; // xmm0
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = (__int64)a2;
  v3 = strncmp(a2, "IN-SYNC ", 8u);
  v4 = 0;
  if ( !v3 )
  {
    v2 = (__int64)(a2 + 8);
    v4 = 1;
  }
  v8 = v4;
  v7 = 0;
  result = sub_1FA9F0(&v7, v2, 0.0);
  if ( (_BYTE)result )
  {
    v6 = _mm_load_si128(&v7);
    a1[1].m128i_i8[0] = v8;
    *a1 = v6;
  }
  return result;
}
