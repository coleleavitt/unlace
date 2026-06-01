_QWORD *__fastcall sub_B684C0(__int64 a1, char a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax
  __int64 v4; // rdx
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // cl

  v2 = *(_QWORD *)(a1 + 16);
  result = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  v4 = (v2 >> 2) & 1;
  if ( a2 )
  {
    if ( v4 )
      result = (_QWORD *)result[1];
  }
  else if ( v4 )
  {
    result = (_QWORD *)*result;
  }
  if ( result )
  {
    v5 = result[1] & 0x7F;
    v6 = v5;
    if ( v5 != 24 && v5 )
    {
      do
      {
        if ( v5 <= 0x12u )
        {
          if ( ((1LL << v6) & 0x40182) != 0 )
            return result;
        }
        else if ( ((v5 + 94) & 0x7Fu) <= 5 )
        {
          return result;
        }
        result = (_QWORD *)sub_B4E950((__int64)result);
        if ( !result )
          return result;
        v5 = result[1] & 0x7F;
        v6 = v5;
      }
      while ( v5 != 24 && v5 );
      return nullptr;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}

