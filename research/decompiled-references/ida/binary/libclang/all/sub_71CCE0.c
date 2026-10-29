_QWORD *__fastcall sub_71CCE0(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3, unsigned __int64 a4, __int64 *a5, char a6)
{
  _QWORD *v8; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v18; // rdi

  v8 = a1 + 2;
  *a1 = a1 + 2;
  a1[1] = 0x800000000LL;
  if ( a4 )
  {
    if ( a4 <= 8 )
    {
      a1[2] = 0;
      v13 = (unsigned int)(8 * a4);
      *(_QWORD *)((char *)v8 + v13 - 8) = 0;
      memset(
        (void *)((unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v13 + (_DWORD)v8 - (((_DWORD)a1 + 24) & 0xFFFFFFF8)) >> 3));
      *((_DWORD *)a1 + 2) = a4;
LABEL_4:
      v14 = 0;
      do
      {
        v15 = *a5;
        v16 = *a3++;
        ++a5;
        *(_QWORD *)(*a1 + 8 * v14++) = sub_7197B0(a2, v16, v15, a6);
      }
      while ( v14 < *((unsigned int *)a1 + 2) );
      return a1;
    }
    sub_25D6060(a1, v8, a4, 8);
    v18 = 8LL * *((unsigned int *)a1 + 2);
    if ( 8 * a4 != v18 )
      memset((void *)(*a1 + v18), 0, 8 * a4 - v18);
    *((_DWORD *)a1 + 2) = a4;
    if ( (_DWORD)a4 )
      goto LABEL_4;
  }
  return a1;
}

