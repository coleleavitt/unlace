const char *__fastcall sub_105F8B0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __m128i si128; // xmm0
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  const char *result; // rax

  sub_102D220(a1, a2, a3);
  *(_DWORD *)(a1 + 512) = 1;
  *(_QWORD *)a1 = &unk_2C27EE8;
  *(_OWORD *)(a1 + 516) = 0;
  *(_QWORD *)(a1 + 584) = &unk_2B584C0;
  *(_OWORD *)(a1 + 532) = 0;
  *(_OWORD *)(a1 + 548) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9640);
  *(_QWORD *)(a1 + 592) = a1 + 608;
  *(_BYTE *)(a1 + 580) = 0;
  *(_BYTE *)(a1 + 581) = 0;
  *(_BYTE *)(a1 + 582) = 0;
  *(__m128i *)(a1 + 564) = si128;
  sub_105E920((_QWORD *)(a1 + 592), (_BYTE *)"aapcs", (__int64)"");
  v5 = *(unsigned int *)(a1 + 260);
  if ( (_DWORD)v5 == 12 )
  {
    *(_DWORD *)(a1 + 168) = 9;
    *(_DWORD *)(a1 + 140) = 9;
  }
  else
  {
    if ( (unsigned int)v5 > 0x1F || (v6 = 4160750114LL, !_bittest64(&v6, v5)) && (_DWORD)v5 != 11 )
      *(_DWORD *)(a1 + 152) = 6;
    *(_DWORD *)(a1 + 168) = 7;
    *(_DWORD *)(a1 + 140) = 7;
  }
  *(_BYTE *)(a1 + 279) = 1;
  *(_QWORD *)(a1 + 352) = &unk_25222C0;
  *(_WORD *)(a1 + 276) = 257;
  *(_BYTE *)(a1 + 285) = 1;
  if ( (unsigned __int8)sub_22B7EA0(a2) )
  {
    v7 = *(_BYTE *)(a1 + 40) == 0;
    *(_WORD *)(a1 + 8) = 16448;
    *(_WORD *)(a1 + 30) = 16448;
    if ( !v7 )
      goto LABEL_7;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 40) == 0;
    *(_WORD *)(a1 + 8) = 8224;
    *(_WORD *)(a1 + 30) = 8224;
    if ( !v7 )
      goto LABEL_7;
  }
  *(_BYTE *)(a1 + 40) = 1;
LABEL_7:
  *(_DWORD *)(a1 + 36) = 128;
  *(_WORD *)(a1 + 62) = 128;
  *(_WORD *)(a1 + 24) = -32640;
  *(_DWORD *)(a1 + 68) = 128;
  *(_WORD *)(a1 + 286) = -32640;
  *(_QWORD *)(a1 + 112) = sub_21F90C0();
  *(_WORD *)(a1 + 18) = 4112;
  v8 = sub_21F9090();
  *(_BYTE *)(a1 + 393) |= 0x13u;
  *(_QWORD *)(a1 + 88) = v8;
  result = (const char *)a2[2].m128i_u32[3];
  *(_BYTE *)(a1 + 275) = 1;
  *(_BYTE *)(a1 + 184) |= 4u;
  *(_DWORD *)(a1 + 192) = 128;
  *(_DWORD *)(a1 + 340) = 5;
  if ( (_DWORD)result == 7 )
  {
    *(_QWORD *)(a1 + 328) = &unk_22FA43B;
    return (const char *)&unk_22FA43B;
  }
  else if ( !(_DWORD)result )
  {
    result = (const char *)&unk_22FA43B;
    if ( *(_DWORD *)(a3 + 192) != 4 )
      result = "mcount";
    *(_QWORD *)(a1 + 328) = result;
  }
  return result;
}
