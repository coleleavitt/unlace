_BOOL8 __fastcall sub_D4B3B0(int a1, int a2, _WORD *a3)
{
  int v3; // ecx
  int v4; // r8d
  __int16 v5; // r9
  bool v6; // al
  int v8; // eax

  LOWORD(v3) = a1;
  if ( (a1 & 0x8000u) != 0 )
  {
    v3 = -a1;
    LOWORD(v8) = a2;
    if ( (a2 & 0x8000u) != 0 )
    {
      v4 = -a2;
      v5 = a1 * a2;
      v6 = (_WORD)a1 == 0;
LABEL_4:
      *a3 = v5;
      if ( !v6 )
        return (unsigned __int16)(0x7FFFu / (unsigned __int16)v4) < (unsigned __int16)v3;
      return 0;
    }
    *a3 = -(__int16)(a2 * v3);
    if ( (_WORD)a2 )
      return (unsigned __int16)v3 > 0x8000 / (unsigned __int16)v8;
  }
  else
  {
    LOWORD(v4) = a2;
    if ( (a2 & 0x8000u) == 0 )
    {
      v5 = a1 * a2;
      v6 = (_WORD)a2 == 0 || (_WORD)a1 == 0;
      goto LABEL_4;
    }
    v8 = -a2;
    *a3 = -(__int16)(a1 * -(__int16)a2);
    if ( (_WORD)a1 )
      return (unsigned __int16)v3 > 0x8000 / (unsigned __int16)v8;
  }
  return 0;
}

