__int64 __fastcall sub_3F76E0(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  char *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rcx
  int v8; // edx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  unsigned int v12; // edx
  __int64 result; // rax
  bool v14; // zf

  v2 = &unk_422EA0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
    v2 = &unk_4226A0;
  v3 = a1 + 728;
  v4 = (char *)((a1 + 736) & 0xFFFFFFFFFFFFFFF8LL);
  *(_QWORD *)(a1 + 728) = *v2;
  *(_QWORD *)(a1 + 2768) = v2[255];
  v5 = a1 + 728 - (_QWORD)v4;
  v6 = (char *)v2 - v5;
  v7 = (unsigned int)(v5 + 2048) >> 3;
  v8 = 8;
  qmemcpy(v4, v6, 8 * v7);
  do
  {
    v10 = *(_DWORD *)(v3 + 24);
    if ( (v10 & 4) != 0 )
    {
      v9 = *(_DWORD *)(a1 + 4408);
      *(_BYTE *)(v3 + 20) = *(_DWORD *)(a1 + 80);
    }
    else if ( (v10 & 8) != 0 )
    {
      v9 = *(_DWORD *)(a1 + 84);
      *(_BYTE *)(v3 + 20) = v9;
    }
    else
    {
      v9 = *(char *)(v3 + 20);
    }
    *(_BYTE *)(v3 + 21) = v9 << (v10 & 3);
    if ( (v10 & 0x10) != 0 )
      v8 = (v9 + v8 - 1) & -v9;
    if ( *(_QWORD *)v3 != -1 )
      *(_DWORD *)(a1 + *(_QWORD *)v3) = v8;
    *(_DWORD *)(v3 + 28) = v8;
    v3 += 32;
    v8 += v9;
  }
  while ( a1 + 4408 != v3 );
  v11 = *(_DWORD *)(a1 + 64);
  v12 = *(_DWORD *)(a1 + 528);
  *(_DWORD *)(a1 + 52) = v11;
  *(_DWORD *)(a1 + 56) = v11;
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 356);
  result = (v12 + 31) & 0xFFFFFFE0;
  v14 = *(_DWORD *)(a1 + 80) == 4;
  *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), _mm_cvtsi32_si128(v12)).m128i_u64[0];
  if ( v14 && !*(_BYTE *)(a1 + 4413) )
    *(_DWORD *)(a1 + 48) &= ~0x2000u;
  return result;
}
