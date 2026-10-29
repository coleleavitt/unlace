__int64 __fastcall sub_8C7020(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, __int64 a6, __int16 a7)
{
  __int16 v10; // ax
  int v11; // eax
  __m128 v12; // xmm0
  int v13; // eax
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 8;
  if ( byte_4AD234C )
    sub_AC4570(8);
  v10 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 36) = a4;
  *(_WORD *)(a1 + 1) = v10 & 0xF801 | (2 * (a3 & 3));
  v11 = *(_DWORD *)(a5 + 4);
  *(_BYTE *)(a1 + 1) |= 0xC0u;
  *(_WORD *)(a1 + 32) = v11;
  v12 = _mm_loadh_ps((const double *)(a5 + 8));
  *(_WORD *)(a1 + 34) = a7;
  v13 = *(unsigned __int8 *)(a1 + 2);
  *(__m128 *)(a1 + 16) = v12;
  result = v13 & 0xFFFFFFF8 | 3;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

