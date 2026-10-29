unsigned __int64 __fastcall ClpMatrixBase::dubiousWeights(ClpMatrixBase *this, const ClpSimplex *a2, int *a3)
{
  int v3; // ebx
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  int v7; // esi
  __m128i si128; // xmm0
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  signed int v12; // edx
  int v13; // ecx
  int v14; // edx

  v3 = *((_DWORD *)a2 + 26) + *((_DWORD *)a2 + 27);
  if ( (unsigned __int64)v3 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  result = operator new[](4LL * v3);
  if ( v3 > 0 )
  {
    v5 = -(int)(result >> 2) & 3;
    v6 = v5 + 3;
    if ( (unsigned int)(v5 + 3) < 5 )
      v6 = 5;
    if ( v3 - 1 < v6 )
    {
      v12 = 0;
LABEL_13:
      *(_DWORD *)(result + 4LL * v12) = 1;
      if ( v3 > v12 + 1 )
      {
        *(_DWORD *)(result + 4LL * (v12 + 1)) = 1;
        if ( v3 > v12 + 2 )
        {
          *(_DWORD *)(result + 4LL * (v12 + 2)) = 1;
          if ( v3 > v12 + 3 )
          {
            *(_DWORD *)(result + 4LL * (v12 + 3)) = 1;
            v13 = v12 + 4;
            if ( v3 > v12 + 4 )
            {
              v14 = v12 + 5;
              *(_DWORD *)(result + 4LL * v13) = 1;
              if ( v3 > v14 )
                *(_DWORD *)(result + 4LL * v14) = 1;
            }
          }
        }
      }
      return result;
    }
    v7 = 0;
    if ( (_DWORD)v5 )
    {
      *(_DWORD *)result = 1;
      v7 = 1;
      if ( (_DWORD)v5 != 1 )
      {
        *(_DWORD *)(result + 4) = 1;
        v7 = 2;
        if ( (_DWORD)v5 != 2 )
        {
          *(_DWORD *)(result + 8) = 1;
          v7 = 3;
        }
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v9 = v3 - v5;
    v10 = result + 4 * v5;
    v11 = 0;
    do
    {
      ++v11;
      v10 += 16LL;
      *(__m128i *)(v10 - 16) = si128;
    }
    while ( v11 < v9 >> 2 );
    v12 = (v9 & 0xFFFFFFFC) + v7;
    if ( v9 != (v9 & 0xFFFFFFFC) )
      goto LABEL_13;
  }
  return result;
}

