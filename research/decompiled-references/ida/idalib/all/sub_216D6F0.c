char *__fastcall sub_216D6F0(unsigned int a1, unsigned int a2)
{
  const char *v2; // rcx

  if ( a1 == 62 )
  {
    if ( a2 == 1879048193 )
    {
      j__strlen("SHT_X86_64_UNWIND");
      return "SHT_X86_64_UNWIND";
    }
  }
  else if ( a1 <= 0x3E )
  {
    switch ( a1 )
    {
      case 0xAu:
        goto LABEL_72;
      case 0x28u:
        switch ( a2 )
        {
          case 0x70000001u:
            j__strlen("SHT_ARM_EXIDX");
            v2 = "SHT_ARM_EXIDX";
            break;
          case 0x70000002u:
            j__strlen("SHT_ARM_PREEMPTMAP");
            v2 = "SHT_ARM_PREEMPTMAP";
            break;
          case 0x70000003u:
            j__strlen("SHT_ARM_ATTRIBUTES");
            v2 = "SHT_ARM_ATTRIBUTES";
            break;
          case 0x70000004u:
            j__strlen("SHT_ARM_DEBUGOVERLAY");
            v2 = "SHT_ARM_DEBUGOVERLAY";
            break;
          case 0x70000005u:
            j__strlen("SHT_ARM_OVERLAYSECTION");
            v2 = "SHT_ARM_OVERLAYSECTION";
            break;
          default:
            goto LABEL_8;
        }
        return (char *)v2;
      case 8u:
LABEL_72:
        if ( a2 == 1879048205 )
        {
          j__strlen("SHT_MIPS_OPTIONS");
          return "SHT_MIPS_OPTIONS";
        }
        if ( a2 <= 0x7000000D )
        {
          if ( a2 == 1879048198 )
          {
            j__strlen("SHT_MIPS_REGINFO");
            return "SHT_MIPS_REGINFO";
          }
        }
        else
        {
          if ( a2 == 1879048222 )
          {
            j__strlen("SHT_MIPS_DWARF");
            return "SHT_MIPS_DWARF";
          }
          if ( a2 == 1879048234 )
          {
            j__strlen("SHT_MIPS_ABIFLAGS");
            return "SHT_MIPS_ABIFLAGS";
          }
        }
        break;
    }
  }
  else if ( a1 == 164 )
  {
    if ( a2 == 1879048192 )
    {
      j__strlen("SHT_HEX_ORDERED");
      return "SHT_HEX_ORDERED";
    }
    if ( a2 == 1879048195 )
    {
      j__strlen("SHT_HEXAGON_ATTRIBUTES");
      return "SHT_HEXAGON_ATTRIBUTES";
    }
  }
  else if ( a1 <= 0xA4 )
  {
    if ( a1 == 105 && a2 == 1879048195 )
    {
      j__strlen("SHT_MSP430_ATTRIBUTES");
      return "SHT_MSP430_ATTRIBUTES";
    }
  }
  else if ( a1 == 183 )
  {
    switch ( a2 )
    {
      case 0x70000007u:
        j__strlen("SHT_AARCH64_MEMTAG_GLOBALS_STATIC");
        return "SHT_AARCH64_MEMTAG_GLOBALS_STATIC";
      case 0x70000008u:
        j__strlen("SHT_AARCH64_MEMTAG_GLOBALS_DYNAMIC");
        return "SHT_AARCH64_MEMTAG_GLOBALS_DYNAMIC";
      case 0x70000004u:
        j__strlen("SHT_AARCH64_AUTH_RELR");
        return "SHT_AARCH64_AUTH_RELR";
    }
  }
  else if ( a1 == 243 && a2 == 1879048195 )
  {
    j__strlen("SHT_RISCV_ATTRIBUTES");
    return "SHT_RISCV_ATTRIBUTES";
  }
LABEL_8:
  if ( a2 == 1610612737 )
  {
    j__strlen("SHT_ANDROID_REL");
    return "SHT_ANDROID_REL";
  }
  if ( a2 > 0x60000001 )
  {
    if ( a2 == 1879002122 )
    {
      j__strlen("SHT_LLVM_BB_ADDR_MAP");
      return "SHT_LLVM_BB_ADDR_MAP";
    }
    if ( a2 > 0x6FFF4C0A )
    {
      if ( a2 == 1879048181 )
      {
        j__strlen("SHT_GNU_ATTRIBUTES");
        return "SHT_GNU_ATTRIBUTES";
      }
      if ( a2 <= 0x6FFFFFF5 )
      {
        if ( a2 == 1879002124 )
        {
          j__strlen("SHT_LLVM_LTO");
          return "SHT_LLVM_LTO";
        }
        if ( a2 < 0x6FFF4C0C )
        {
          j__strlen("SHT_LLVM_OFFLOADING");
          return "SHT_LLVM_OFFLOADING";
        }
        if ( a2 == 1879002125 )
        {
          j__strlen("SHT_LLVM_JT_SIZES");
          return "SHT_LLVM_JT_SIZES";
        }
        if ( a2 == 1879047936 )
        {
          j__strlen("SHT_ANDROID_RELR");
          return "SHT_ANDROID_RELR";
        }
      }
      else
      {
        if ( a2 == 1879048189 )
        {
          j__strlen("SHT_GNU_verdef");
          return "SHT_GNU_verdef";
        }
        if ( a2 <= 0x6FFFFFFD )
        {
          if ( a2 == 1879048182 )
          {
            j__strlen("SHT_GNU_HASH");
            return "SHT_GNU_HASH";
          }
        }
        else
        {
          if ( a2 == 1879048190 )
          {
            j__strlen("SHT_GNU_verneed");
            return "SHT_GNU_verneed";
          }
          if ( a2 == 1879048191 )
          {
            j__strlen("SHT_GNU_versym");
            return "SHT_GNU_versym";
          }
        }
      }
    }
    else
    {
      if ( a2 == 1879002116 )
      {
        j__strlen("SHT_LLVM_DEPENDENT_LIBRARIES");
        return "SHT_LLVM_DEPENDENT_LIBRARIES";
      }
      if ( a2 <= 0x6FFF4C04 )
      {
        if ( a2 == 1879002112 )
        {
          j__strlen("SHT_LLVM_ODRTAB");
          return "SHT_LLVM_ODRTAB";
        }
        if ( a2 <= 0x6FFF4C00 )
        {
          if ( a2 == 1610612738 )
          {
            j__strlen("SHT_ANDROID_RELA");
            return "SHT_ANDROID_RELA";
          }
        }
        else
        {
          if ( a2 == 1879002113 )
          {
            j__strlen("SHT_LLVM_LINKER_OPTIONS");
            return "SHT_LLVM_LINKER_OPTIONS";
          }
          if ( a2 == 1879002115 )
          {
            j__strlen("SHT_LLVM_ADDRSIG");
            return "SHT_LLVM_ADDRSIG";
          }
        }
      }
      else
      {
        if ( a2 == 1879002118 )
        {
          j__strlen("SHT_LLVM_PART_EHDR");
          return "SHT_LLVM_PART_EHDR";
        }
        if ( a2 < 0x6FFF4C06 )
        {
          j__strlen("SHT_LLVM_SYMPART");
          return "SHT_LLVM_SYMPART";
        }
        if ( a2 == 1879002119 )
        {
          j__strlen("SHT_LLVM_PART_PHDR");
          return "SHT_LLVM_PART_PHDR";
        }
        if ( a2 == 1879002121 )
        {
          j__strlen("SHT_LLVM_CALL_GRAPH_PROFILE");
          return "SHT_LLVM_CALL_GRAPH_PROFILE";
        }
      }
    }
LABEL_110:
    j__strlen("Unknown");
    return "Unknown";
  }
  if ( a2 == 9 )
  {
    j__strlen("SHT_REL");
    return "SHT_REL";
  }
  if ( a2 > 9 )
  {
    if ( a2 == 16 )
    {
      j__strlen("SHT_PREINIT_ARRAY");
      return "SHT_PREINIT_ARRAY";
    }
    if ( a2 <= 0x10 )
    {
      if ( a2 == 11 )
      {
        j__strlen("SHT_DYNSYM");
        return "SHT_DYNSYM";
      }
      if ( a2 < 0xB )
      {
        j__strlen("SHT_SHLIB");
        return "SHT_SHLIB";
      }
      if ( a2 == 14 )
      {
        j__strlen("SHT_INIT_ARRAY");
        return "SHT_INIT_ARRAY";
      }
      if ( a2 == 15 )
      {
        j__strlen("SHT_FINI_ARRAY");
        return "SHT_FINI_ARRAY";
      }
    }
    else
    {
      if ( a2 == 18 )
      {
        j__strlen("SHT_SYMTAB_SHNDX");
        return "SHT_SYMTAB_SHNDX";
      }
      if ( a2 < 0x12 )
      {
        j__strlen("SHT_GROUP");
        return "SHT_GROUP";
      }
      if ( a2 == 19 )
      {
        j__strlen("SHT_RELR");
        return "SHT_RELR";
      }
      if ( a2 == 1073741844 )
      {
        j__strlen("SHT_CREL");
        return "SHT_CREL";
      }
    }
    goto LABEL_110;
  }
  if ( a2 == 4 )
  {
    j__strlen("SHT_RELA");
    return "SHT_RELA";
  }
  else if ( a2 <= 4 )
  {
    if ( a2 == 1 )
    {
      j__strlen("SHT_PROGBITS");
      return "SHT_PROGBITS";
    }
    else if ( a2 )
    {
      if ( a2 == 2 )
      {
        j__strlen("SHT_SYMTAB");
        return "SHT_SYMTAB";
      }
      else
      {
        j__strlen("SHT_STRTAB");
        return "SHT_STRTAB";
      }
    }
    else
    {
      j__strlen("SHT_NULL");
      return "SHT_NULL";
    }
  }
  else if ( a2 == 6 )
  {
    j__strlen("SHT_DYNAMIC");
    return "SHT_DYNAMIC";
  }
  else if ( a2 < 6 )
  {
    j__strlen("SHT_HASH");
    return "SHT_HASH";
  }
  else if ( a2 == 7 )
  {
    j__strlen("SHT_NOTE");
    return "SHT_NOTE";
  }
  else
  {
    j__strlen("SHT_NOBITS");
    return "SHT_NOBITS";
  }
}
