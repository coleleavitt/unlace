bool __fastcall sub_C0FAA0(_QWORD *a1, _QWORD *a2)
{
  bool result; // al
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx

  result = sub_A4F650(a1, a2);
  if ( result )
  {
    v4 = a1[3];
    if ( v4 != a2[3] )
      return 0;
    v5 = (_QWORD *)a1[2];
    v6 = &v5[v4];
    if ( v5 != v6 )
    {
      v7 = (_QWORD *)a2[2];
      if ( *v5 != *v7 )
        return 0;
      while ( 1 )
      {
        ++v5;
        ++v7;
        if ( v6 == v5 )
          break;
        if ( *v5 != *v7 )
          return 0;
      }
    }
  }
  return result;
}
