_BYTE *__fastcall sub_E78530(__int64 a1, char a2)
{
  _BYTE *result; // rax
  unsigned __int64 v3; // rdx

  result = *(_BYTE **)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  if ( (a2 & 4) != 0 && (a2 & 1) != 0 )
  {
    if ( (unsigned __int64)result >= v3 )
    {
      return (_BYTE *)sub_227BA10(a1, 83);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = result + 1;
      *result = 83;
    }
  }
  else if ( (a2 & 4) != 0 )
  {
    if ( (unsigned __int64)result >= v3 )
    {
      return (_BYTE *)sub_227BA10(a1, 82);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = result + 1;
      *result = 82;
    }
  }
  else if ( (a2 & 1) != 0 )
  {
    if ( (unsigned __int64)result >= v3 )
    {
      return (_BYTE *)sub_227BA10(a1, 81);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = result + 1;
      *result = 81;
    }
  }
  else if ( (unsigned __int64)result >= v3 )
  {
    return (_BYTE *)sub_227BA10(a1, 80);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = result + 1;
    *result = 80;
  }
  return result;
}
