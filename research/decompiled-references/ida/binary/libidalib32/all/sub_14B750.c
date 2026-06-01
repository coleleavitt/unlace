__int64 sub_14B750()
{
  unsigned __int64 v0; // xmm0_8
  int v1; // ebp
  __int64 v2; // rbx
  unsigned int v4; // [rsp+18h] [rbp-30h] BYREF
  unsigned int v5; // [rsp+1Ch] [rbp-2Ch] BYREF
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161360(0, &v4, &v5) )
  {
    sub_15D870(0);
    v0 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(v5)).m128i_u64[0];
  }
  else
  {
    v4 = -1;
    v0 = -1;
    v5 = -1;
  }
  v1 = qword_251700;
  v2 = qalloc_or_throw();
  v6[0] = v0;
  sub_14B500(v2, v6);
  sub_14AF20(v2, v1);
  return 1;
}

