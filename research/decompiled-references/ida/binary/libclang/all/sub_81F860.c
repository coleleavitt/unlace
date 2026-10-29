__int64 __fastcall sub_81F860(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *i; // rcx

  result = sub_69F550(a1, a2);
  if ( (_BYTE)result )
  {
    v4 = a1[3];
    if ( v4 == a2[3] )
    {
      v5 = (_QWORD *)a1[2];
      v6 = &v5[v4];
      if ( v5 == v6 )
        return result;
      for ( i = (_QWORD *)a2[2]; *v5 == *i; ++i )
      {
        if ( v6 == ++v5 )
          return result;
      }
    }
    return 0;
  }
  return result;
}

