const char *__fastcall sub_2181C00(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  unsigned __int16 v3; // ax
  unsigned __int16 v6; // ax

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_BYTE *)(v1 + 4);
  if ( v2 == 1 )
  {
    v6 = *(_WORD *)(v1 + 18);
    if ( v6 == 62 )
    {
      j__strlen("elf32-x86-64");
      return "elf32-x86-64";
    }
    if ( v6 > 0x3Eu )
    {
      if ( v6 == 224 )
      {
        j__strlen("elf32-amdgpu");
        return "elf32-amdgpu";
      }
      if ( v6 > 0xE0u )
      {
        if ( v6 == 244 )
        {
          j__strlen("elf32-lanai");
          return "elf32-lanai";
        }
        if ( v6 <= 0xF4u )
        {
          if ( v6 == 243 )
          {
            j__strlen("elf32-littleriscv");
            return "elf32-littleriscv";
          }
        }
        else
        {
          if ( v6 == 252 )
          {
            j__strlen("elf32-csky");
            return "elf32-csky";
          }
          if ( v6 == 258 )
          {
            j__strlen("elf32-loongarch");
            return "elf32-loongarch";
          }
        }
      }
      else
      {
        if ( v6 == 94 )
        {
          j__strlen("elf32-xtensa");
          return "elf32-xtensa";
        }
        if ( v6 <= 0x5Eu )
        {
          if ( v6 == 83 )
          {
            j__strlen("elf32-avr");
            return "elf32-avr";
          }
        }
        else
        {
          if ( v6 == 105 )
          {
            j__strlen("elf32-msp430");
            return "elf32-msp430";
          }
          if ( v6 == 164 )
          {
            j__strlen("elf32-hexagon");
            return "elf32-hexagon";
          }
        }
      }
LABEL_54:
      j__strlen("elf32-unknown");
      return "elf32-unknown";
    }
    if ( v6 == 6 )
    {
      j__strlen("elf32-iamcu");
      return "elf32-iamcu";
    }
    if ( v6 <= 6u )
    {
      if ( v6 == 3 )
      {
        j__strlen("elf32-i386");
        return "elf32-i386";
      }
      if ( v6 == 4 )
      {
        j__strlen("elf32-m68k");
        return "elf32-m68k";
      }
      if ( v6 != 2 )
        goto LABEL_54;
    }
    else if ( v6 != 18 )
    {
      if ( v6 <= 0x12u )
      {
        if ( v6 == 8 )
        {
          j__strlen("elf32-mips");
          return "elf32-mips";
        }
      }
      else
      {
        if ( v6 == 20 )
        {
          j__strlen("elf32-powerpcle");
          return "elf32-powerpcle";
        }
        if ( v6 == 40 )
        {
          j__strlen("elf32-littlearm");
          return "elf32-littlearm";
        }
      }
      goto LABEL_54;
    }
    j__strlen("elf32-sparc");
    return "elf32-sparc";
  }
  if ( v2 != 2 )
    sub_2221C70("Invalid ELFCLASS!", 1);
  v3 = *(_WORD *)(v1 + 18);
  if ( v3 == 62 )
  {
    j__strlen("elf64-x86-64");
    return "elf64-x86-64";
  }
  if ( v3 <= 0x3Eu )
  {
    if ( v3 == 21 )
    {
      j__strlen("elf64-powerpcle");
      return "elf64-powerpcle";
    }
    if ( v3 > 0x15u )
    {
      if ( v3 == 22 )
      {
        j__strlen("elf64-s390");
        return "elf64-s390";
      }
      if ( v3 == 43 )
      {
        j__strlen("elf64-sparc");
        return "elf64-sparc";
      }
    }
    else
    {
      if ( v3 == 3 )
      {
        j__strlen("elf64-i386");
        return "elf64-i386";
      }
      if ( v3 == 8 )
      {
        j__strlen("elf64-mips");
        return "elf64-mips";
      }
    }
  }
  else
  {
    if ( v3 == 243 )
    {
      j__strlen("elf64-littleriscv");
      return "elf64-littleriscv";
    }
    if ( v3 <= 0xF3u )
    {
      if ( v3 == 183 )
      {
        j__strlen("elf64-littleaarch64");
        return "elf64-littleaarch64";
      }
      if ( v3 == 224 )
      {
        j__strlen("elf64-amdgpu");
        return "elf64-amdgpu";
      }
    }
    else
    {
      switch ( v3 )
      {
        case 0xFBu:
          j__strlen("elf64-ve");
          return "elf64-ve";
        case 0x102u:
          j__strlen("elf64-loongarch");
          return "elf64-loongarch";
        case 0xF7u:
          j__strlen("elf64-bpf");
          return "elf64-bpf";
      }
    }
  }
  j__strlen("elf64-unknown");
  return "elf64-unknown";
}
