__int64 __fastcall sub_8C80C0(__int64 a1, const __m128i *a2, int a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edi
  const __m128i *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int8 v18; // al
  __int64 result; // rax
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // ecx

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x27;
  if ( byte_4AD234C )
    sub_AC4570(39);
  v12 = *(_DWORD *)(a1 + 16);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  v13 = a3 & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  v14 = a3 & 0x7FFFFFFF | v12 & 0x80000000;
  *(_DWORD *)(a1 + 16) = v14;
  *(_BYTE *)(a1 + 19) = (a4 << 7) | HIBYTE(v14) & 0x7F;
  *(_QWORD *)(a1 + 20) = a7;
  if ( a4 )
  {
    v15 = a2;
    v16 = 0;
    v17 = a1 + 16LL * (a3 & 0x7FFFFFFF) + 40;
    if ( v13 )
    {
      do
      {
        v20 = v15[1].m128i_i8[8] == 0;
        *(__m128i *)(a1 + 16 * v16 + 40) = _mm_loadu_si128(v15);
        *(_DWORD *)(v17 + 8 * v16) = v15[1].m128i_i32[0];
        if ( v20 )
          *(_DWORD *)(v17 + 8 * v16 + 4) = 0;
        else
          *(_DWORD *)(v17 + 8 * v16 + 4) = v15[1].m128i_i32[1] + 1;
        ++v16;
        v15 += 2;
      }
      while ( (unsigned int)v16 < (*(_DWORD *)(a1 + 16) & 0x7FFFFFFFu) );
    }
  }
  else if ( v13 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      ++v22;
      *(__m128i *)(a1 + v21 * 8 + 40) = _mm_loadu_si128(&a2[v21]);
      v21 += 2;
    }
    while ( v22 < (*(_DWORD *)(a1 + 16) & 0x7FFFFFFFu) );
  }
  v18 = sub_76D480(a1);
  *(_BYTE *)(a1 + 1) = (v18 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v18 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

