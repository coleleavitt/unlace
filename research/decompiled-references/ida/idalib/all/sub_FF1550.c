void __fastcall sub_FF1550(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // rbp
  char *v11; // rsi
  char *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // r8
  _DWORD *v18; // rdx
  __int64 i; // rdx

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( a2 <= (*(_QWORD *)(a1 + 16) - v4) >> 2 )
    {
      memset(*(void **)(a1 + 8), 0, 4 * a2);
      *(_QWORD *)(a1 + 8) = v4 + 4 * a2;
      return;
    }
    v5 = v4 - *(_QWORD *)a1;
    v6 = v5 >> 2;
    if ( 0x3FFFFFFFFFFFFFFFLL - (v5 >> 2) < a2 )
      std::__throw_length_error("vector::_M_default_append");
    v7 = v5 >> 2;
    if ( a2 >= v6 )
      v7 = a2;
    v8 = v6 + v7;
    if ( v8 > 0x3FFFFFFFFFFFFFFFLL )
      v8 = 0x3FFFFFFFFFFFFFFFLL;
    v9 = 4 * v8;
    v10 = operator new(4 * v8);
    memset((void *)(v10 + v5), 0, 4 * a2);
    v11 = *(char **)(a1 + 8);
    v12 = *(char **)a1;
    if ( v11 == *(char **)a1 )
    {
      if ( !v12 )
        goto LABEL_20;
    }
    else
    {
      v13 = (unsigned __int64)(v11 - 4 - v12) >> 2;
      if ( (v10 >= (unsigned __int64)(v12 + 16) || (unsigned __int64)v12 >= v10 + 16)
        && (v13 & 0x3FFFFFFFFFFFFFFCLL) != 0 )
      {
        v14 = v13 + 1;
        v15 = 0;
        do
        {
          *(__m128i *)(v10 + v15) = _mm_loadu_si128((const __m128i *)&v12[v15]);
          v15 += 16;
        }
        while ( v15 != 16 * (v14 >> 2) );
        v16 = 4 * (v14 & 0xFFFFFFFFFFFFFFFCLL);
        v17 = &v12[v16];
        v18 = (_DWORD *)(v10 + v16);
        if ( v14 != (v14 & 0xFFFFFFFFFFFFFFFCLL) )
        {
          *v18 = *(_DWORD *)v17;
          if ( v11 != v17 + 4 )
          {
            v18[1] = *((_DWORD *)v17 + 1);
            if ( v11 != v17 + 8 )
              v18[2] = *((_DWORD *)v17 + 2);
          }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          *(_DWORD *)(v10 + 4 * i) = *(_DWORD *)&v12[4 * i];
          if ( v13 == i )
            break;
        }
      }
    }
    operator delete(v12);
LABEL_20:
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v10 + 4 * (a2 + v6);
    *(_QWORD *)(a1 + 16) = v9 + v10;
  }
}
