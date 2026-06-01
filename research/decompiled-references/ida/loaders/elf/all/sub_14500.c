const char *__fastcall sub_14500(__int64 a1, int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  const char *v4; // rcx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  v2 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    *a2 = v2 & 0xFFFFFFFE;
    return "--opsex";
  }
  else
  {
    if ( (v2 & 2) != 0 )
    {
      v4 = "-fPIC";
      *a2 = v2 & 0xFFFFFFFD;
      return v4;
    }
    if ( (v2 & 4) == 0 )
    {
      if ( (v2 & 8) != 0 )
      {
        v4 = "--ugen-alloc";
        *a2 = v2 & 0xFFFFFFF7;
        return v4;
      }
      if ( (v2 & 0x20) != 0 )
      {
        v4 = "--abi2";
        *a2 = v2 & 0xFFFFFFDF;
        return v4;
      }
      if ( (v2 & 0x100) != 0 )
      {
        BYTE1(v2) &= ~1u;
        v4 = "-mgp32";
        *a2 = v2;
        return v4;
      }
      if ( (v2 & 0x200) != 0 )
      {
        BYTE1(v2) &= ~2u;
        v4 = "-mfp64";
        *a2 = v2;
        return v4;
      }
      if ( (v2 & 0x400) != 0 )
      {
        BYTE1(v2) &= ~4u;
        v4 = "-mnan=2008";
        *a2 = v2;
        return v4;
      }
      v3 = v2 & 0xF0000000;
      if ( (v2 & 0xF0000000) == 0x60000000 )
      {
        v4 = "-mips64";
        *a2 = v2 & 0xFFFFFFF;
        return v4;
      }
      if ( v3 > 0x60000000 )
      {
        if ( v3 == -1879048192 )
        {
          v4 = "-mips32r6";
          *a2 = v2 & 0xFFFFFFF;
          return v4;
        }
        if ( v3 > 0x90000000 )
        {
          if ( v3 == -1610612736 )
          {
            v4 = "-mips64r6";
            *a2 = v2 & 0xFFFFFFF;
            return v4;
          }
        }
        else
        {
          if ( v3 == 1879048192 )
          {
            v4 = "-mips32r2";
            *a2 = v2 & 0xFFFFFFF;
            return v4;
          }
          if ( v3 == 0x80000000 )
          {
            v4 = "-mips64r2";
            *a2 = v2 & 0xFFFFFFF;
            return v4;
          }
        }
      }
      else
      {
        if ( v3 == 805306368 )
        {
          v4 = "-mips4";
          *a2 = v2 & 0xFFFFFFF;
          return v4;
        }
        if ( v3 > 0x30000000 )
        {
          if ( v3 == 0x40000000 )
          {
            v4 = "-mips5";
            *a2 = v2 & 0xFFFFFFF;
            return v4;
          }
          if ( v3 == 1342177280 )
          {
            v4 = "-mips32";
            *a2 = v2 & 0xFFFFFFF;
            return v4;
          }
        }
        else
        {
          if ( v3 == 0x10000000 )
          {
            v4 = "-mips2";
            *a2 = v2 & 0xFFFFFFF;
            return v4;
          }
          if ( v3 == 0x20000000 )
          {
            v4 = "-mips3";
            *a2 = v2 & 0xFFFFFFF;
            return v4;
          }
        }
      }
      v6 = *a2 & 0xF000;
      if ( v6 == 12288 )
      {
        BYTE1(v2) &= 0xFu;
        v4 = "-mabi=eabi";
        *a2 = v2;
        return v4;
      }
      if ( v6 > 0x3000 )
      {
        if ( v6 == 0x4000 )
        {
          BYTE1(v2) &= 0xFu;
          v4 = "--eabi64";
          *a2 = v2;
          return v4;
        }
      }
      else
      {
        if ( v6 == 4096 )
        {
          BYTE1(v2) &= 0xFu;
          v4 = "-mabi=32";
          *a2 = v2;
          return v4;
        }
        if ( v6 == 0x2000 )
        {
          BYTE1(v2) &= 0xFu;
          v4 = "-mabi=o64";
          *a2 = v2;
          return v4;
        }
      }
      v7 = v2 & 0xFF0000;
      if ( (v2 & 0xFF0000) == 0x8C0000 )
      {
        v4 = "xlr";
        *a2 = v2 & 0xFF00FFFF;
        return v4;
      }
      if ( v7 > 0x8C0000 )
      {
        if ( v7 == 9961472 )
        {
          v4 = "5500";
          *a2 = v2 & 0xFF00FFFF;
          return v4;
        }
        if ( v7 > 0x980000 )
        {
          if ( v7 == 10551296 )
          {
            v4 = "loongson-2f";
            *a2 = v2 & 0xFF00FFFF;
            return v4;
          }
          if ( v7 > 0xA10000 )
          {
            if ( v7 == 10616832 )
            {
              v4 = "-march=allegrex";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
          else
          {
            if ( v7 == 10027008 )
            {
              v4 = "9000";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
            if ( v7 == 10485760 )
            {
              v4 = "loongson-2e";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
        }
        else
        {
          if ( v7 == 9502720 )
          {
            v4 = "5400";
            *a2 = v2 & 0xFF00FFFF;
            return v4;
          }
          if ( v7 > 0x910000 )
          {
            if ( v7 == 9568256 )
            {
              v4 = "PS2";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
          else
          {
            if ( v7 == 9240576 )
            {
              v4 = "-march=octeon2";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
            if ( v7 == 9306112 )
            {
              v4 = "-march=octeon3";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
        }
      }
      else
      {
        if ( v7 == 8847360 )
        {
          v4 = "4120";
          *a2 = v2 & 0xFF00FFFF;
          return v4;
        }
        if ( v7 > 0x870000 )
        {
          if ( v7 == 9043968 )
          {
            v4 = "SB1";
            *a2 = v2 & 0xFF00FFFF;
            return v4;
          }
          if ( v7 > 0x8A0000 )
          {
            if ( v7 == 9109504 )
            {
              v4 = "-march=octeon";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
          else
          {
            if ( v7 == 8912896 )
            {
              v4 = "4111";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
            if ( v7 == 8978432 )
            {
              v4 = "MIPS32_4K";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
        }
        else
        {
          if ( v7 == 8585216 )
          {
            v4 = "4100";
            *a2 = v2 & 0xFF00FFFF;
            return v4;
          }
          if ( v7 > 0x830000 )
          {
            if ( v7 == 8716288 )
            {
              v4 = "4650";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
          else
          {
            if ( v7 == 8454144 )
            {
              v4 = "3900";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
            if ( v7 == 8519680 )
            {
              v4 = "4010";
              *a2 = v2 & 0xFF00FFFF;
              return v4;
            }
          }
        }
      }
      if ( (v2 & 0x8000000) != 0 )
      {
        v4 = "mdmx";
        *a2 = v2 & 0xF7FFFFFF;
      }
      else if ( (v2 & 0xF000000) == 0x2000000 )
      {
        v4 = "-micromips";
        *a2 = v2 & 0xF0FFFFFF;
      }
      else
      {
        v4 = nullptr;
        if ( (v2 & 0xF000000) == 0x4000000 )
        {
          v4 = "-mips16";
          *a2 = v2 & 0xF0FFFFFF;
        }
      }
      return v4;
    }
    *a2 = v2 & 0xFFFFFFFB;
    return "-fCPIC";
  }
}

