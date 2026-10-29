unsigned __int64 __fastcall sub_B8C640(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  bool v3; // zf
  _QWORD *v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r9
  __m128i si128; // xmm0
  __int64 v8; // r11
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // ecx
  int v15; // r12d
  unsigned __int64 *v16; // rbp
  int v17; // ecx

  v3 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    v13 = *(unsigned int *)(a1 + 16);
    result = (unsigned __int64)&v4[v13];
    if ( v4 == &v4[v13] )
      goto LABEL_7;
    result = *(_QWORD *)(a1 + 8);
    v6 = ((unsigned __int64)(v13 * 8 - 8) >> 3) + 1;
    if ( v13 == 1 )
    {
LABEL_6:
      *v4 = -4096;
      goto LABEL_7;
    }
  }
  else
  {
    v4 = (_QWORD *)(a1 + 8);
    result = a1 + 8;
    v6 = 8;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
  do
  {
    *(__m128i *)result = si128;
    result += 16LL;
  }
  while ( &v4[2 * (v6 >> 1)] != (_QWORD *)result );
  result = v6 & 0xFFFFFFFFFFFFFFFELL;
  v4 += v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( v6 != (v6 & 0xFFFFFFFFFFFFFFFELL) )
    goto LABEL_6;
LABEL_7:
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      result = *a2;
      if ( *a2 != -4096 && result != -8192 )
        break;
      if ( a3 == ++a2 )
        return result;
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v8 = a1 + 8;
      v9 = 7;
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 8);
      if ( !v17 )
      {
        *(_QWORD *)&dword_0 = *a2;
        BUG();
      }
      v9 = v17 - 1;
    }
LABEL_12:
    v10 = v9 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
    v11 = (unsigned __int64 *)(v8 + 8LL * v10);
    v12 = *v11;
    if ( result != *v11 )
    {
      v15 = 1;
      v16 = nullptr;
      if ( v12 != -4096 )
      {
        while ( 1 )
        {
          if ( v12 == -8192 && !v16 )
            v16 = v11;
          v10 = v9 & (v15 + v10);
          v11 = (unsigned __int64 *)(v8 + 8LL * v10);
          v12 = *v11;
          if ( result == *v11 )
            break;
          if ( v12 == -4096 )
          {
            if ( v16 )
              v11 = v16;
            break;
          }
          ++v15;
        }
      }
    }
    *v11 = result;
    result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
    *(_DWORD *)a1 = result;
    while ( a3 != ++a2 )
    {
      result = *a2;
      if ( *a2 != -4096 && result != -8192 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v8 = a1 + 8;
          v9 = 7;
        }
        else
        {
          v14 = *(_DWORD *)(a1 + 16);
          v8 = *(_QWORD *)(a1 + 8);
          if ( !v14 )
          {
            *(_QWORD *)&dword_0 = *a2;
            BUG();
          }
          v9 = v14 - 1;
        }
        goto LABEL_12;
      }
    }
  }
  return result;
}

