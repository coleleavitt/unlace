void __fastcall sub_220AA50(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v7; // r12d
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned __int64 v11; // rdi
  bool v12; // cf
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r12d
  unsigned int v17; // edi
  int v18; // r15d
  __int64 i; // rax
  unsigned int v20; // [rsp+8h] [rbp-40h]
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]

  v7 = a4 + 63;
  v9 = 8LL * (a5 >> 6);
  v10 = (a4 + 63) >> 6;
  if ( v10 )
  {
    v11 = a3 + v9;
    v12 = (unsigned __int64)a1 < a3 + v9 + 16;
    v13 = v10 - 1;
    if ( (v11 >= (unsigned __int64)(a1 + 2) || !v12) && (unsigned int)v13 > 1 )
    {
      v14 = 0;
      do
      {
        *(__m128i *)&a1[v14] = _mm_loadu_si128((const __m128i *)(v11 + v14 * 8));
        v14 += 2;
      }
      while ( v14 != 2LL * (v7 >> 7) );
      v15 = 2 * (v7 >> 7);
      if ( v10 != (_DWORD)v15 )
        a1[v15] = *(_QWORD *)(v11 + 8 * v15);
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        a1[i] = *(_QWORD *)(v11 + 8 * i);
        if ( v13 == i )
          break;
      }
    }
  }
  v21 = a5 >> 6;
  v20 = a5 & 0x3F;
  v16 = v7 & 0xFFFFFFC0;
  sub_220A970(a1, v10, v20);
  v17 = v16 - v20;
  if ( a4 <= v16 - v20 )
  {
    if ( a4 < v17 )
    {
      v18 = a4 & 0x3F;
      if ( v18 )
        a1[v10 - 1] &= 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v18);
    }
  }
  else
  {
    a1[v10 - 1] |= (*(_QWORD *)(a3 + 8LL * (v21 + v10))
                  & (0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v16 - ((unsigned __int8)a4 + (unsigned __int8)v20) + 64))) << v17;
  }
  if ( v10 < a2 )
    memset(&a1[v10], 0, 8LL * (a2 - 1 - v10) + 8);
}
