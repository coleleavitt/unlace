unsigned __int8 __fastcall sub_1E730(__int64 a1, int a2, char a3)
{
  unsigned __int8 result; // al
  __int64 v4; // rax

  result = a3 | (*(_DWORD *)(a1 + 260) == 2);
  if ( result )
    return 0;
  if ( (unsigned __int16)a2 > 0x71u )
  {
    if ( (_WORD)a2 == 201 )
    {
      return 1;
    }
    else if ( (unsigned __int16)a2 > 0xC9u )
    {
      return (unsigned __int16)(a2 - 439) <= 1u;
    }
    else
    {
      return (_WORD)a2 == 199;
    }
  }
  else if ( (unsigned __int16)a2 > 0x55u )
  {
    v4 = 181063439;
    return _bittest64(&v4, (unsigned int)(a2 - 86));
  }
  return result;
}
