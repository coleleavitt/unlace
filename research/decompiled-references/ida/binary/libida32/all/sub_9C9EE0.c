_QWORD *__fastcall sub_9C9EE0(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rdx
  _QWORD *result; // rax
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rsi

  v2 = *(_QWORD **)(a1 + 16);
  result = (_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = *a2;
    v5 = (_QWORD *)(a1 + 8);
    do
    {
      while ( v2[4] >= v4 )
      {
        v5 = v2;
        v2 = (_QWORD *)v2[2];
        if ( !v2 )
          goto LABEL_6;
      }
      v2 = (_QWORD *)v2[3];
    }
    while ( v2 );
LABEL_6:
    if ( v5 != result && v5[4] <= v4 )
      return v5;
  }
  return result;
}

