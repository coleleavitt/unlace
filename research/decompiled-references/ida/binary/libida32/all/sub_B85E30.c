unsigned __int64 __fastcall sub_B85E30(
        __int64 a1,
        __int64 a2,
        const void *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  size_t v11; // rbp
  unsigned int *v12; // r8
  unsigned int *v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  _DWORD *v21; // rbx
  _DWORD *v22; // rdx

  *(_QWORD *)(a1 + 96) = 0;
  result = a6 | a4;
  *(_DWORD *)(a1 + 104) = a4;
  if ( a6 | a4 )
  {
    result = sub_B85C20((__int64 *)(a2 + 2352), (unsigned int)(4 * (a6 + 2 * a4)), 3u);
    v11 = 8 * a4;
    *(_QWORD *)(a1 + 96) = result;
    if ( v11 )
    {
      memmove((void *)result, a3, v11);
      result = *(_QWORD *)(a1 + 96);
    }
    v12 = (unsigned int *)(a5 + 4 * a6);
    v13 = (unsigned int *)a5;
    v14 = 8LL * *(unsigned int *)(a1 + 104);
    v15 = result + v14;
    if ( (unsigned int *)a5 != v12 )
    {
      v16 = (unsigned __int64)(4 * a6 - 4) >> 2;
      if ( (v15 >= a5 + 16 || a5 >= result + v14 + 16) && (v16 & 0x3FFFFFFFFFFFFFFCLL) != 0 )
      {
        v17 = v16 + 1;
        v18 = 0;
        v19 = 16 * ((v16 + 1) >> 2);
        do
        {
          *(__m128i *)(v15 + v18) = _mm_loadu_si128((const __m128i *)(a5 + v18));
          v18 += 16;
        }
        while ( v18 != v19 );
        result = v17 & 0xFFFFFFFFFFFFFFFCLL;
        v20 = 4 * (v17 & 0xFFFFFFFFFFFFFFFCLL);
        v21 = (_DWORD *)(v20 + a5);
        v22 = (_DWORD *)(v20 + v15);
        if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFCLL) )
        {
          *v22 = *v21;
          result = (unsigned __int64)(v21 + 1);
          if ( v12 != v21 + 1 )
          {
            v22[1] = v21[1];
            result = (unsigned __int64)(v21 + 2);
            if ( v12 != v21 + 2 )
            {
              result = (unsigned int)v21[2];
              v22[2] = result;
            }
          }
        }
      }
      else
      {
        do
        {
          result = *v13++;
          v15 += 4LL;
          *(_DWORD *)(v15 - 4) = result;
        }
        while ( v12 != v13 );
      }
    }
  }
  return result;
}

