_QWORD *__fastcall sub_10BC260(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx
  __int64 v3; // rsi

  result = *(_QWORD **)a1;
  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      if ( *result )
      {
        v3 = *(unsigned int *)(a1 + 16);
        if ( (_DWORD)v3 )
        {
          result = (_QWORD *)sub_2195AD0(*result, v3);
          if ( (_BYTE)result )
            return result;
          v2 = *(_QWORD **)(a1 + 8);
          result = *(_QWORD **)a1;
        }
      }
      *(_QWORD *)a1 = ++result;
    }
    while ( result != v2 );
  }
  return result;
}

