_QWORD *__fastcall sub_111C030(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rsi

  result = *(_QWORD **)a1;
  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = *result;
      if ( *result )
      {
        v4 = *(unsigned int *)(a1 + 16);
        if ( (_DWORD)v4 )
        {
          result = (_QWORD *)sub_2195AD0(*result, v4);
          if ( (_BYTE)result )
            return result;
          v5 = *(unsigned int *)(a1 + 20);
          if ( (_DWORD)v5 )
          {
            result = (_QWORD *)sub_2195AD0(v3, v5);
            if ( (_BYTE)result )
              return result;
          }
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

