unsigned __int64 __fastcall sub_782B80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // r8
  char v7; // r8
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 i; // rdx

  v5 = a5 & 1;
  v6 = *(_BYTE *)(a1 + 49);
  *(_DWORD *)(a1 + 112) = a4;
  v7 = (v5 << 6) | v6 & 0xBF;
  result = 0;
  *(_BYTE *)(a1 + 49) = v7;
  if ( a4
    && ((v10 = a2[274],
         v11 = 16 * a4,
         a2[284] += 16 * a4,
         result = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL,
         v12 = 16 * a4 + result,
         a2[275] < v12)
     || !v10
      ? (result = sub_779030((__int64)(a2 + 274), v11, 3))
      : (a2[274] = v12),
        v11) )
  {
    for ( i = 0; i != v11; i += 16 )
      *(__m128i *)(result + i) = _mm_loadu_si128((const __m128i *)(a3 + i));
    *(_QWORD *)(a1 + 104) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 104) = result;
  }
  return result;
}

