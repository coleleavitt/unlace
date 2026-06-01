__int64 *__fastcall sub_B5AB50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *result; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax

  result = *(__int64 **)(a1 + 144);
  if ( result )
  {
    if ( ((*result >> 1) & 3) == 1 )
    {
      return nullptr;
    }
    else
    {
      for ( i = *result & 0xFFFFFFFFFFFFFFF8LL; ; i = v8 )
      {
        v9 = *(_QWORD **)(i + 144);
        if ( !v9 )
          break;
        v8 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v8 )
          break;
      }
      result = (__int64 *)i;
      if ( (*(_BYTE *)(i + 74) & 1) == 0 )
      {
        result = sub_B5AA70(i, a2, a3, a4, a5, a6);
        if ( !result )
          return (__int64 *)i;
      }
    }
  }
  return result;
}

