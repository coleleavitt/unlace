__int64 __fastcall sub_1AF3080(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _BYTE *a5)
{
  unsigned int v5; // r15d
  unsigned int v7; // r13d
  _QWORD *v9; // r9
  int v10; // eax
  char v11; // al

  v5 = a4;
  v7 = 0;
  v9 = *(_QWORD **)a2;
  if ( a5 )
  {
    v10 = sub_17A6B10(v9, a5, 0, a4, (__int64)a5, (__int64)v9);
    if ( v10 )
    {
      if ( v10 == 4 )
      {
        v7 = 3;
        v11 = sub_1AF2F40(*(_QWORD *)(*(_QWORD *)a2 + 760LL));
        v9 = *(_QWORD **)a2;
        if ( v11 )
          v7 = 1;
      }
      else
      {
        v9 = *(_QWORD **)a2;
      }
    }
    else
    {
      v9 = *(_QWORD **)a2;
      v7 = 1;
    }
  }
  sub_1606AE0(a1, v7, a3, v5, (__int64)a5, (__int64)v9);
  return a1;
}
