__int64 __fastcall sub_17B550(__int64 a1, char a2)
{
  _QWORD *v2; // rbp
  __int64 result; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rbp

  if ( a2 )
  {
    v2 = *(_QWORD **)(a1 + 16);
    if ( v2 )
    {
      if ( *v2 )
      {
        v2[1] = 0;
        qfree();
      }
      result = qfree();
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v4 )
    {
      if ( *v4 )
      {
        v4[1] = 0;
        qfree();
      }
      result = qfree();
      *(_QWORD *)(a1 + 8) = 0;
    }
    v5 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( *v5 )
      {
        v5[1] = 0;
        qfree();
      }
      result = qfree();
      *(_QWORD *)a1 = 0;
    }
  }
  return result;
}

