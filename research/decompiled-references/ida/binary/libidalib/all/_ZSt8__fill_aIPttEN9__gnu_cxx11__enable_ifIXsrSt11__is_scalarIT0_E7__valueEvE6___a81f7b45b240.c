_WORD *__fastcall std::__fill_a<unsigned short *,unsigned short>(_WORD *a1, _WORD *a2, __int16 *a3)
{
  _WORD *result; // rax
  __int16 i; // [rsp+26h] [rbp-2h]

  for ( i = *a3; ; *a1++ = i )
  {
    result = a1;
    if ( a1 == a2 )
      break;
  }
  return result;
}

