__int64 __fastcall sub_238AE0(double *a1, __int64 a2, double a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  _DWORD *v5; // rdx
  unsigned int v6; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = 0;
    v5 = &unk_85FD20;
    while ( v3 != *v5 )
    {
      ++v4;
      v5 += 6;
      if ( v4 == 35 )
        goto LABEL_7;
    }
    v6 = *((_DWORD *)&unk_85FD20 + 6 * v4 + 4);
    *(_QWORD *)&a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v6)).m128i_u64[0];
    if ( v6 )
      *a1 = a3;
  }
LABEL_7:
  result = sub_238A60(a2, a3);
  if ( (int)result <= 0 )
  {
    if ( *(_DWORD *)a1 )
      *a1 = 0.0;
  }
  return result;
}
