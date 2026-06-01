__int64 __fastcall sub_8359E0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  unsigned int v8; // eax
  unsigned __int8 **v9; // rax
  unsigned __int8 **v10; // r12

  if ( *(char *)(a3 + 82) < 0 && (LOBYTE(v8) = sub_7A6370(a3), v4 = v8, (_BYTE)v8) )
  {
    if ( (*(_BYTE *)(a3 + 84) & 3) == 0 && !a4 )
    {
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
      {
        v9 = (unsigned __int8 **)sub_A2E050(a1, a2, 2217, 1);
        v10 = v9;
        if ( v9 )
        {
          sub_823450(v9, 0);
          sub_823450(v10, 1);
          sub_8356A0(v10, a3, 0xAu);
        }
        sub_A2DD70(a1, *(unsigned int *)(a3 + 24), 105);
      }
      else
      {
        sub_A2E050(a1, a2, 110, 0);
      }
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

