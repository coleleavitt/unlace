unsigned int *__fastcall sub_96CCD0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned int v7; // r15d
  unsigned int v8; // ecx
  __int64 v9; // r14
  unsigned __int64 v10; // rbp

  sub_8F9430(a1);
  v6 = *(_QWORD *)(a1 + 8920);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = *a2;
    if ( *a2 < v7 )
    {
      v9 = 4LL * v8;
      v10 = 4 * (v8 + (unsigned __int64)(v7 - v8 - 1));
      while ( 1 )
      {
        sub_96C170(a1, *(_DWORD *)(v6 + v9), a3, a4);
        if ( v9 == v10 )
          break;
        v6 = *(_QWORD *)(a1 + 8920);
        v9 += 4;
      }
    }
  }
  else
  {
    v7 = 0;
  }
  *a2 = v7;
  return a2;
}

