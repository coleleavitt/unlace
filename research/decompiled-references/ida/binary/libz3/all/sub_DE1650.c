__int64 __fastcall sub_DE1650(__int64 a1, int a2, __int64 *a3, const __m128i *a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // esi
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  result = sub_17E9C90(*(_QWORD *)(a1 + 8), 56);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 && (v9 = *(_DWORD *)(v8 - 4)) != 0 )
  {
    v15 = (unsigned int)(v9 - 1);
    v10 = *(_DWORD *)(v8 + 4 * v15);
    *(_DWORD *)(v8 - 4) = v15;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v10 + 1;
  }
  v11 = *a3;
  v12 = _mm_loadu_si128(a4);
  *(_DWORD *)(result + 8) = v10;
  v13 = a4[1].m128i_i64[0];
  *(_DWORD *)(result + 12) = a2;
  *(_QWORD *)(result + 24) = v11;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_1C5ADA8;
  *(_QWORD *)(result + 48) = v13;
  *(__m128i *)(result + 32) = v12;
  if ( !_mm_cvtsi128_si32(v12) )
  {
    v14 = a4->m128i_i64[1];
    if ( v14 )
      ++*(_DWORD *)(v14 + 16);
  }
  return result;
}

