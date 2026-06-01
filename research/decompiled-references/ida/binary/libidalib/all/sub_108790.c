TSubMenu *__fastcall sub_108790(__int64 a1, unsigned __int16 a2, unsigned __int16 **a3)
{
  TSubMenu *v3; // r12
  TMenuItem *v5; // rbp
  const char *v7; // rax

  v3 = nullptr;
  tv_helpIndex = 0;
  tv_helponhelp = 0;
  while ( (*a3 || ((unsigned __int64)a3[1] & 0xFFFFFFFFFFFFLL) != 0) && !(unsigned int)lowMemory() )
  {
    if ( !*a3 || ((unsigned __int64)a3[1] & 0xFFFFFFFFFFFFLL) != 0 || sub_19BD30(**a3) )
    {
      v5 = sub_1085D0(a3);
      if ( v5 )
      {
        if ( !v3 )
        {
          v3 = (TSubMenu *)operator new(0x28u);
          v7 = (const char *)itext();
          TSubMenu::TSubMenu(v3, v7, 0, a2);
        }
        v3 = (TSubMenu *)operator+(v3, v5);
      }
    }
    a3 += 2;
  }
  return v3;
}

