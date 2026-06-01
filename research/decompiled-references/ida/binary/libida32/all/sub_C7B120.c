_QWORD *__fastcall sub_C7B120(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  size_t v7; // r14
  void *v10; // rax
  void *v11; // rcx
  int v12; // edx
  unsigned __int64 v13; // rax

  v7 = a5 >> 3;
  v10 = (void *)operator new[](a5 >> 3);
  v11 = v10;
  if ( v7 )
    v11 = memset(v10, 0, v7);
  *a1 = v11;
  if ( a4 )
  {
    v12 = 0;
    v13 = 0;
    if ( a6 )
    {
      do
      {
        if ( ((unsigned __int8)(1 << ((v13 + *(_BYTE *)a2 - (a4 + a3)) & 7))
            & *(_BYTE *)(*(_QWORD *)(a2 + 8) + ((v13 + *(_QWORD *)a2 - (a4 + a3)) >> 3))) != 0 )
          *(_BYTE *)(*a1 + (v13 >> 3)) |= 1 << (v12 & 7);
        v13 = (unsigned int)++v12;
      }
      while ( a4 != v12 );
    }
    else
    {
      do
      {
        if ( ((unsigned __int8)(1 << ((a3 + v13) & 7)) & *(_BYTE *)(*(_QWORD *)(a2 + 8) + ((a3 + v13) >> 3))) != 0 )
          *(_BYTE *)(*a1 + (v13 >> 3)) |= 1 << (v12 & 7);
        v13 = (unsigned int)++v12;
      }
      while ( v12 != a4 );
    }
  }
  return a1;
}

