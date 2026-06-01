_QWORD *__fastcall sub_78B5F0(__int64 a1)
{
  _QWORD *result; // rax
  unsigned __int64 v2; // rbx
  _QWORD *i; // rax
  unsigned __int64 v4; // rax

  result = *(_QWORD **)(a1 + 144);
  if ( result )
  {
    if ( (*result & 6LL) == 2 )
    {
      return nullptr;
    }
    else
    {
      v2 = *result & 0xFFFFFFFFFFFFFFF8LL;
      for ( i = *(_QWORD **)(v2 + 144); i; i = *(_QWORD **)(v4 + 144) )
      {
        v4 = *i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v4 )
          break;
        v2 = v4;
      }
      result = (_QWORD *)sub_78B3D0(v2);
      if ( !result )
        return (_QWORD *)v2;
    }
  }
  return result;
}

