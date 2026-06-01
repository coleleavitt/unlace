unsigned __int64 __fastcall ClpNetworkMatrix::getVectorLengths(ClpNetworkMatrix *this)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdi
  int v4; // edi
  __int64 v5; // rdx
  unsigned int v6; // ecx
  int v7; // esi
  __m128i si128; // xmm0
  unsigned int v9; // r9d
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  signed int v12; // edx
  int v13; // ecx
  int v14; // edx

  result = *((_QWORD *)this + 12);
  if ( !result )
  {
    v3 = *((int *)this + 29);
    if ( v3 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    result = operator new[](4 * v3);
    v4 = *((_DWORD *)this + 29);
    *((_QWORD *)this + 12) = result;
    if ( v4 > 0 )
    {
      v5 = -(int)(result >> 2) & 3;
      v6 = v5 + 3;
      if ( (unsigned int)(v5 + 3) < 5 )
        v6 = 5;
      if ( v4 - 1 < v6 )
      {
        v12 = 0;
LABEL_14:
        *(_DWORD *)(result + 4LL * v12) = 2;
        if ( v12 + 1 < v4 )
        {
          *(_DWORD *)(result + 4LL * (v12 + 1)) = 2;
          if ( v4 > v12 + 2 )
          {
            *(_DWORD *)(result + 4LL * (v12 + 2)) = 2;
            if ( v4 > v12 + 3 )
            {
              *(_DWORD *)(result + 4LL * (v12 + 3)) = 2;
              v13 = v12 + 4;
              if ( v4 > v12 + 4 )
              {
                v14 = v12 + 5;
                *(_DWORD *)(result + 4LL * v13) = 2;
                if ( v4 > v14 )
                  *(_DWORD *)(result + 4LL * v14) = 2;
              }
            }
          }
        }
        return result;
      }
      v7 = 0;
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)result = 2;
        v7 = 1;
        if ( (_DWORD)v5 != 1 )
        {
          *(_DWORD *)(result + 4) = 2;
          v7 = 2;
          if ( (_DWORD)v5 != 2 )
          {
            *(_DWORD *)(result + 8) = 2;
            v7 = 3;
          }
        }
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
      v9 = v4 - v5;
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
        goto LABEL_14;
    }
  }
  return result;
}

