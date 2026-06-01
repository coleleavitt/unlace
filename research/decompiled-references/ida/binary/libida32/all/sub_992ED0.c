__int64 __fastcall sub_992ED0(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  __int64 v4; // rdi
  __int64 result; // rax
  _WORD *v6; // rcx
  __m128i si128; // xmm0

  v2 = *(__m128i **)(a2 + 32);
  v4 = a2;
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 > 0x19u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384C50);
    qmemcpy(&v2[1], "OriginID: ", 10);
    *v2 = si128;
    *(_QWORD *)(a2 + 32) += 26LL;
  }
  else
  {
    v4 = sub_22581D0(a2, "ReturnOfOrigin (OriginID: ", 26);
  }
  result = sub_2257BD0(v4, *(unsigned int *)(a1 + 12));
  v6 = *(_WORD **)(result + 32);
  if ( *(_QWORD *)(result + 24) - (_QWORD)v6 <= 1u )
    return sub_22581D0(result, ")\n", 2);
  *v6 = 2601;
  *(_QWORD *)(result + 32) += 2LL;
  return result;
}

