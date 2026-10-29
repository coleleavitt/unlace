_QWORD *__fastcall sub_A1F7A0(__int64 a1, char a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx

  result = *(_QWORD **)(a1 + 32);
  if ( result )
  {
    v3 = *(_QWORD **)(a1 + 24);
    v4 = v3[1];
    if ( v4 )
    {
      if ( a2 )
      {
        sub_227BF10(result, *v3, v4);
        result = *(_QWORD **)(a1 + 24);
        result[1] = 0;
      }
      else if ( !*(_BYTE *)(a1 + 96) )
      {
        result = (_QWORD *)sub_227D8A0(result);
        if ( (_BYTE)result )
        {
          result = *(_QWORD **)(a1 + 24);
          v5 = result[1];
          if ( v5 > *(_QWORD *)(a1 + 40) )
          {
            sub_227BF10(*(_QWORD *)(a1 + 32), *result, v5);
            result = *(_QWORD **)(a1 + 24);
            result[1] = 0;
          }
        }
      }
    }
  }
  return result;
}
