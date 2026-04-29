unsigned __int64 __fastcall sub_2B27D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+10h] [rbp-28h]
  __m128i v9; // [rsp+18h] [rbp-20h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v8 = 103;
    v4 = *(_QWORD *)(a1 + 1504);
    v7[0] = off_4B4FD0;
    v5 = *(_QWORD *)(v4 + 96);
    v7[1] = v3;
    v9 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)a3);
    sub_2B0E40(v5, (__int64)v7, (a2 - v3) << 6);
  }
  return v10 - __readfsqword(0x28u);
}
