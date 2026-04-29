__int64 __fastcall sub_3EB540(__int64 a1, __int64 a2, unsigned __int8 a3, double a4)
{
  __int64 v4; // kr08_8
  const char *v5; // rcx
  const char *v6; // r8
  const char *v8; // rcx
  const char *v9; // r8

  if ( (unsigned __int16)a2 > 0x2Cu )
  {
    if ( (_WORD)a2 == 216 )
    {
      v5 = "Xor";
    }
    else
    {
      if ( (unsigned __int16)a2 <= 0xD8u )
      {
        if ( (_WORD)a2 == 131 )
        {
          if ( a3 == 2 )
          {
            v6 = (const char *)&unk_418793;
          }
          else if ( a3 > 2u )
          {
            if ( a3 != 7 )
              goto LABEL_44;
            v6 = "64";
          }
          else
          {
            v6 = "16";
            if ( !a3 )
              v6 = "8";
          }
          v5 = "Or";
LABEL_13:
          qsnprintf(a1, 32, "_Interlocked%s%s", v5, v6);
          return a1;
        }
        if ( (_WORD)a2 == 209 )
        {
          v5 = "Sub";
          goto LABEL_9;
        }
LABEL_26:
        if ( !under_debugger )
          sub_383060(0xC8A1u, a2, a4);
LABEL_46:
        BUG();
      }
      if ( (_WORD)a2 != 219 )
        goto LABEL_26;
      v5 = "ExchangeAdd";
    }
LABEL_9:
    if ( a3 == 2 )
    {
      v6 = (const char *)&unk_418793;
      goto LABEL_13;
    }
    if ( a3 <= 2u )
    {
      v6 = "16";
      if ( !a3 )
        v6 = "8";
      goto LABEL_13;
    }
    if ( a3 == 7 )
    {
      v6 = "64";
      goto LABEL_13;
    }
LABEL_44:
    if ( !under_debugger )
      sub_383060(0xC8A2u, a2, a4);
    goto LABEL_46;
  }
  if ( (unsigned __int16)a2 <= 5u )
    goto LABEL_26;
  LODWORD(a2) = a2 - 6;
  v4 = (unsigned int)a2;
  a2 = (unsigned __int16)a2;
  switch ( (__int16)a2 )
  {
    case 0:
      v5 = "Add";
      goto LABEL_9;
    case 1:
      v5 = "And";
      goto LABEL_9;
    case 8:
      v8 = "bittestandreset";
      goto LABEL_32;
    case 9:
      v8 = "bittestandset";
LABEL_32:
      if ( a3 == 2 )
      {
        v9 = (const char *)&unk_418793;
        goto LABEL_36;
      }
      if ( a3 <= 2u )
      {
        v9 = "16";
        if ( !a3 )
          v9 = "8";
        goto LABEL_36;
      }
      if ( a3 != 7 )
        goto LABEL_44;
      v9 = "64";
LABEL_36:
      qsnprintf(a1, 32, "_Interlocked%s%s", v8, v9);
      *(_BYTE *)(a1 + 1) = 105;
      return a1;
    case 28:
      v5 = "Decrement";
      goto LABEL_9;
    case 38:
      v5 = "Increment";
      goto LABEL_9;
    default:
      a2 = v4;
      goto LABEL_26;
  }
}
