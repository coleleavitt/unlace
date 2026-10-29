unsigned __int64 __fastcall sub_685D50(__int64 a1)
{
  __m128i v1; // xmm0
  _WORD *v2; // rbx
  unsigned __int16 v3; // dx
  _DWORD vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  int vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0[0] = 0;
  copy_argloc(vars0, a1);
  v1 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16));
  v2 = (_WORD *)(a1 - 24);
  vars10 = _mm_cvtsi128_si32(v1);
  if ( (unsigned __int16)_mm_extract_epi16(v1, 0) < *(_WORD *)(a1 - 8) )
  {
    while ( 1 )
    {
      copy_argloc(v2 + 12, v2);
      v3 = *(v2 - 4);
      v2[20] = v2[8];
      v2[21] = v2[9];
      if ( (unsigned __int16)vars10 >= v3 )
        break;
      v2 -= 12;
    }
  }
  else
  {
    v2 = (_WORD *)a1;
  }
  copy_argloc(v2, vars0);
  *((_DWORD *)v2 + 4) = vars10;
  cleanup_argloc(vars0);
  return vars18 - __readfsqword(0x28u);
}

