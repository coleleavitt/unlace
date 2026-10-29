_QWORD *__fastcall sub_21D1830(_QWORD *a1)
{
  _OWORD *v1; // rax
  void *v2; // rdx
  _OWORD *v3; // rbx
  __m128i si128; // xmm0
  _QWORD *result; // rax

  v1 = (_OWORD *)operator new(0x5B8u);
  v2 = (char *)v1 + 40;
  v3 = v1;
  *v1 = 0;
  v1 = (_OWORD *)((char *)v1 + 296);
  *((_QWORD *)v1 - 35) = v2;
  *((_QWORD *)v1 - 34) = v2;
  *((_QWORD *)v3 + 4) = v1;
  memset(v2, 0, 0x100u);
  *((_QWORD *)v3 + 37) = v3 + 20;
  *((_QWORD *)v3 + 39) = v3 + 36;
  *((_QWORD *)v3 + 38) = v3 + 20;
  memset(v3 + 20, 0, 0x100u);
  *(_OWORD *)((char *)v3 + 808) = 0;
  *((_QWORD *)v3 + 72) = (char *)v3 + 600;
  *((_QWORD *)v3 + 73) = (char *)v3 + 600;
  *((_QWORD *)v3 + 74) = (char *)v3 + 664;
  *((_QWORD *)v3 + 83) = v3 + 43;
  *((_QWORD *)v3 + 84) = v3 + 43;
  *((_QWORD *)v3 + 85) = v3 + 45;
  *((_QWORD *)v3 + 90) = (char *)v3 + 744;
  *((_QWORD *)v3 + 91) = (char *)v3 + 744;
  *((_QWORD *)v3 + 92) = (char *)v3 + 776;
  *((_WORD *)v3 + 388) = 1;
  *(_OWORD *)((char *)v3 + 600) = 0;
  *(_OWORD *)((char *)v3 + 616) = 0;
  *(_OWORD *)((char *)v3 + 632) = 0;
  *(_OWORD *)((char *)v3 + 648) = 0;
  v3[43] = 0;
  v3[44] = 0;
  *(_OWORD *)((char *)v3 + 744) = 0;
  *(_OWORD *)((char *)v3 + 760) = 0;
  *((_BYTE *)v3 + 778) = 0;
  *((_QWORD *)v3 + 98) = -1;
  *((_QWORD *)v3 + 99) = 0;
  *((_DWORD *)v3 + 200) = 0;
  *((_QWORD *)v3 + 103) = (char *)v3 + 840;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *((_QWORD *)v3 + 104) = 0x400000000LL;
  *((_QWORD *)v3 + 109) = (char *)v3 + 888;
  *((_QWORD *)v3 + 110) = 0;
  *(__m128i *)((char *)v3 + 888) = si128;
  sub_2222F10((char *)v3 + 904, 6);
  result = (_QWORD *)v3 + 119;
  *((_WORD *)v3 + 468) = 256;
  *(_OWORD *)((char *)v3 + 920) = 0;
  *((_QWORD *)v3 + 118) = 1;
  if ( (char *)v3 + 1464 != (char *)v3 + 952 )
  {
    do
    {
      *result = -4096;
      result += 2;
    }
    while ( (_QWORD *)((char *)v3 + 1464) != result );
  }
  *a1 = v3;
  return result;
}
