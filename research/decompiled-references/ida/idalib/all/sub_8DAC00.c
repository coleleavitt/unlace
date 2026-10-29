_BYTE *__fastcall sub_8DAC00(_BYTE *a1, __int64 a2)
{
  _BYTE *result; // rax

  result = (_BYTE *)operator new(0x10u);
  *(_QWORD *)result = off_2B3E278;
  *((_WORD *)result + 4) = 19;
  if ( a1 )
  {
    if ( __CFADD__(a1, a2) || a1 >= &a1[a2] )
    {
      if ( result )
        operator delete(result, 0x10u);
      return nullptr;
    }
    else
    {
      result[9] = *a1;
    }
  }
  return result;
}
