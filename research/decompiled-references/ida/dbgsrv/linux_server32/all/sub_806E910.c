/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806E910
// Address: 0x0806E910

//----- (0806E910) --------------------------------------------------------
int __cdecl sub_806E910(int a1, __m128i **a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i *v5; // eax
  __m128i si128; // xmm0

  if ( *(__int64 *)a3 > 0 && *(_QWORD *)(a3 + 16) )
  {
    v3 = HIDWORD(a3) + *(_QWORD *)a3;
    if ( (unsigned __int64)HIDWORD(a3) < *(_QWORD *)(a3 + 16) )
    {
      return sub_806E590(a1, (int)a2, v3);
    }
    else
    {
      sub_805ED10(a2, "bad offset %08x", (_DWORD)v3);
      return 0;
    }
  }
  else
  {
    v5 = *a2;
    if ( (unsigned int)a2[2] <= 0x11 )
    {
      v5 = (__m128i *)sub_80CF920((int)a2, v5, 0x12u, 1u);
      *a2 = v5;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_80DE1B0);
    a2[1] = (__m128i *)18;
    v5[1].m128i_i8[0] = 125;
    *v5 = si128;
    (*a2)[1].m128i_i8[1] = 0;
    return 0;
  }
}
// 80DE1B0: using guessed type __int128 xmmword_80DE1B0;
