const char *__fastcall sub_B880(_WORD *a1, int a2, const char *a3)
{
  int v4; // edx
  const char *result; // rax
  char v6; // al
  int v7; // edx
  __int64 v8; // rcx
  __int16 v9; // ax

  if ( a3 )
  {
    if ( !strcmp(a3, ".text") )
      return "CODE";
    v4 = strcmp(a3, ".stack");
    result = "STACK";
    if ( !v4 )
      return result;
    if ( !strcmp(a3, ".data")
      || !strcmp(a3, ".rdata")
      || !strcmp(a3, ".sdata")
      || !strcmp(a3, ".cinit")
      || !strcmp(a3, ".pinit")
      || !strcmp(a3, ".far")
      || !strcmp(a3, ".lita")
      || !strcmp(a3, ".lit8")
      || !strcmp(a3, ".lit4")
      || !strcmp(a3, ".const") )
    {
      return "DATA";
    }
    if ( !strcmp(a3, ".bss") || !strcmp(a3, ".sbss") || !strcmp(a3, ".pad") )
      return "BSS";
  }
  v6 = getinf_flag(3, 32);
  v7 = (unsigned __int16)*a1;
  if ( (((_WORD)v7 - 387) & 0xFFFD) == 0 )
    goto LABEL_31;
  if ( !v6 )
  {
    if ( (v7 & 0xFFDF) != 0x142 )
      goto LABEL_48;
LABEL_31:
    if ( (a2 & 0x1C001300) != 0 )
      return "DATA";
    if ( (a2 & 0x400) != 0 )
      return "BSS";
    if ( (a2 & 0x81000000) != 0 )
      return "CODE";
    if ( (a2 & 0x2000000) == 0 )
      goto LABEL_24;
    if ( (((a2 & 0x2FFF000) - 35651584) & 0xFFDFF000) == 0 || (a2 & 0x2FFF000) == 0x2800000 )
      return "DATA";
    goto LABEL_37;
  }
  if ( (unsigned __int16)(v7 - 320) <= 0x23u )
  {
    v8 = 0x900000001LL;
    if ( !_bittest64(&v8, (unsigned int)(v7 - 320)) )
    {
LABEL_24:
      LOBYTE(v9) = *a1;
      HIBYTE(v9) = BYTE1(v7) & 0xFD;
      if ( v9 != -32384 )
      {
        if ( (_WORD)v7 == 0x8462 )
        {
          result = "ROMW";
          if ( (a2 & 0x10000) == 0 )
          {
            result = "RAMW";
            if ( (a2 & 0x80000) == 0 )
            {
              result = "RAM0";
              if ( (a2 & 0x20000) == 0 )
              {
                result = "RAM1";
                if ( (a2 & 0x40000) == 0 )
                  return nullptr;
              }
            }
          }
          return result;
        }
        goto LABEL_50;
      }
      result = "ROMW";
      if ( (a2 & 0x10000) != 0 )
        return result;
      result = "ROM";
      if ( (a2 & 0x80000) != 0 )
        return result;
      result = "INTIO";
      if ( (a2 & 0x20000) != 0 )
        return result;
      result = "EXTIO";
      if ( (a2 & 0x40000) != 0 )
        return result;
      goto LABEL_42;
    }
    goto LABEL_31;
  }
LABEL_48:
  if ( (_WORD)v7 == 2560 )
  {
    if ( (a2 & 0x8000) != 0 )
      return "DATA";
LABEL_50:
    if ( (a2 & 0x20) == 0 )
    {
      if ( (a2 & 0x40) == 0 )
      {
        result = nullptr;
        if ( (a2 & 0x80) == 0 )
          return result;
        return "BSS";
      }
      return "DATA";
    }
    return "CODE";
  }
  if ( (unsigned __int16)(v7 + 0x8000) <= 1u || (_WORD)v7 == 0x808C )
    goto LABEL_38;
LABEL_37:
  if ( (_WORD)v7 == 0x8E00 )
  {
LABEL_38:
    result = "ROMW";
    if ( (a2 & 0x10000) != 0 )
      return result;
    result = "ROMB";
    if ( (a2 & 0x80000) != 0 )
      return result;
    result = "RAM0";
    if ( (a2 & 0x20000) != 0 )
      return result;
    result = "RAM1";
    if ( (a2 & 0x40000) != 0 )
      return result;
LABEL_42:
    result = "XDATA";
    if ( (a2 & 0x100000) == 0 )
    {
      result = "RFILE";
      if ( (a2 & 0x200000) == 0 )
        return nullptr;
    }
    return result;
  }
  if ( (_WORD)v7 != 0x8C25 && (_WORD)v7 != 0x8C00 && (_WORD)v7 != 0x8C50 )
    goto LABEL_24;
  result = "ROMW";
  if ( (a2 & 0x10000) == 0 )
  {
    result = "RAMW";
    if ( (a2 & 0x80000) == 0 )
    {
      result = "UNKNOWN";
      if ( (a2 & 0x400000) == 0 )
        return nullptr;
    }
  }
  return result;
}

