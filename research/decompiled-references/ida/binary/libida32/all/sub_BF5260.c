char __fastcall sub_BF5260(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char result; // al
  bool v7; // r14
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // rbp

  if ( *(char *)(a3 + 82) >= 0 )
    return 0;
  v7 = sub_B75280(a3, a2);
  result = 0;
  if ( v7 )
  {
    result = a4 | ((*(_BYTE *)(a3 + 84) & 3) != 0);
    if ( !result )
    {
      if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
      {
        v8 = (unsigned __int8 **)sub_E0FDF0(a1, (unsigned int)a2, 2419, 1);
        v9 = v8;
        if ( v8 )
        {
          sub_BED5E0(v8, 0);
          sub_BED5E0(v9, 1);
          sub_AC60B0(v9, a3, 0xAu);
        }
        sub_E10070(a1, *(unsigned int *)(a3 + 24), 103);
        return v7;
      }
      else
      {
        sub_E0FDF0(a1, (unsigned int)a2, 108, 0);
        return v7;
      }
    }
  }
  return result;
}

