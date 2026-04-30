__int64 __fastcall sub_2B76C0(__int64 a1, signed int *a2, unsigned __int8 a3)
{
  signed int v3; // eax
  signed int v5; // ecx
  signed int v6; // edi
  signed int v7; // esi
  __int64 result; // rax
  signed int v9; // r8d
  signed int v10; // r8d

  v3 = *a2;
  v5 = a2[2];
  v6 = a2[1];
  v7 = a2[3];
  if ( v3 > v5 )
  {
    v9 = v3;
    v3 = v5;
    v5 = v9;
    if ( v6 <= v7 )
      goto LABEL_3;
  }
  else if ( v6 <= v7 )
  {
    goto LABEL_3;
  }
  v10 = v6;
  v6 = v7;
  v7 = v10;
LABEL_3:
  *(__m128i *)(a1 + 224) = _mm_unpacklo_epi64(
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v6)),
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v7)));
  result = sub_2B6B00(a1, a3);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 760LL))(*(_QWORD *)(a1 + 16));
  return result;
}
