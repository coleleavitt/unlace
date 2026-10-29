const char *sub_22A33B0()
{
  unsigned int v10; // r8d
  const char *result; // rax
  signed int v17; // esi
  unsigned int v23; // r9d
  unsigned int v24; // r10d
  int v25; // r15d
  int v26; // r14d
  int v27; // r13d
  int v28; // r12d
  Elf64_Rela *v29; // rdi
  int v30; // ebp
  int v31; // ebx
  int v32; // r11d
  int v33; // ecx
  signed int v34; // eax
  signed int v35; // eax
  int v36; // eax
  char v37; // bp
  bool v38; // r11
  __int16 v39; // r12
  signed int v80; // eax
  signed int v81; // eax
  signed int v82; // eax
  int v83; // eax
  size_t v84; // rdx
  unsigned int v85; // [rsp+8h] [rbp-50h]
  int v86; // [rsp+Ch] [rbp-4Ch]
  int v87; // [rsp+1Ch] [rbp-3Ch]

  _RAX = 0;
  __asm { cpuid }
  if ( !(_DWORD)_RAX )
    return "generic";
  _RAX = 0;
  __asm { cpuid }
  v10 = _RAX;
  if ( !(_DWORD)_RAX )
    return "generic";
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RCX != 1818588270 || (_DWORD)_RDX != 1231384169 )
      return "generic";
    v87 = 1;
  }
  else
  {
    if ( (_DWORD)_RDX != 1769238117 || (_DWORD)_RBX != 1752462657 || (_DWORD)_RCX != 1145913699 )
      return "generic";
    v87 = 2;
  }
  _RAX = 0;
  __asm { cpuid }
  v17 = _RAX;
  if ( !(_DWORD)_RAX )
  {
    v24 = 0;
    v23 = 0;
    v31 = 0;
    v28 = 0;
    v27 = 0;
    LODWORD(v29) = 0;
    v33 = 0;
    v26 = 0;
    v32 = 0;
    v30 = 0;
    v25 = 0;
    goto LABEL_23;
  }
  _RAX = 1;
  __asm { cpuid }
  v23 = ((unsigned int)_RAX >> 8) & 0xF;
  v24 = (unsigned __int8)_RAX >> 4;
  if ( v23 == 6 )
  {
    v86 = _RCX & 1;
    v25 = _RCX & 2;
    v26 = _RCX & 0x200;
    v17 = ((unsigned int)_RDX >> 15) & 1;
    v27 = _RCX & 0x1000;
    v28 = _RCX & 0x80000;
    LODWORD(v29) = _RCX & 0x100000;
    v30 = _RCX & 0x800000;
    v31 = _RCX & 0x2000000;
    v32 = _RCX & 0x400000;
    v33 = _RCX & 0x18000000;
  }
  else
  {
    v86 = _RCX & 1;
    v25 = _RCX & 2;
    v26 = _RCX & 0x200;
    v17 = ((unsigned int)_RDX >> 15) & 1;
    v27 = _RCX & 0x1000;
    v28 = _RCX & 0x80000;
    LODWORD(v29) = _RCX & 0x100000;
    v30 = _RCX & 0x800000;
    v31 = _RCX & 0x2000000;
    v32 = _RCX & 0x400000;
    v33 = _RCX & 0x18000000;
    if ( v23 != 15 )
      goto LABEL_15;
    v23 = (unsigned __int8)((unsigned int)_RAX >> 20) + 15;
  }
  v24 += ((unsigned int)_RAX >> 12) & 0xF0;
LABEL_15:
  if ( (_RDX & 0x800000) != 0 )
    v17 |= 2u;
  if ( (_RDX & 0x2000000) != 0 )
    v17 |= 8u;
  if ( (_RDX & 0x4000000) != 0 )
    v17 |= 0x10u;
  if ( v86 )
    v17 |= 0x20u;
LABEL_23:
  if ( v25 )
    v17 |= 0x80000u;
  if ( v26 )
    v17 |= 0x40u;
  v34 = v17;
  if ( v27 )
  {
    BYTE1(v34) = BYTE1(v17) | 0x40;
    v17 = v34;
  }
  v35 = v17;
  if ( v28 )
  {
    LOBYTE(v35) = v17 | 0x80;
    v17 = v35;
  }
  v36 = 0x4000000;
  if ( (_DWORD)v29 )
  {
    v17 |= 0x100u;
    v36 = 67633152;
    v29 = &stru_80000;
  }
  if ( v30 )
    v17 |= 4u;
  if ( v31 )
    v17 |= 0x40000u;
  if ( v32 )
    LODWORD(v29) = v36;
  v37 = 0;
  v38 = 0;
  if ( v33 == 402653184 )
  {
    __asm { xgetbv }
    if ( (v36 & 6) == 6 )
    {
      v37 = 1;
      v38 = (v36 & 0xE0) == 224;
      v17 |= 0x200u;
    }
  }
  v39 = 0;
  if ( v10 > 6 )
  {
    _RAX = 0;
    __asm { cpuid }
    if ( (unsigned int)_RAX > 6 )
    {
      _RAX = 7;
      __asm { cpuid }
      if ( (_RBX & 8) != 0 )
        v17 |= 0x10000u;
      if ( (_RBX & 0x20) != 0 && v37 )
        v17 |= 0x400u;
      if ( (_RBX & 0x100) != 0 )
        v17 |= 0x20000u;
      if ( (_RBX & 0x10000) != 0 && v38 )
      {
        v17 |= 0x8000u;
        v39 = 2;
      }
      else
      {
        v39 = 0;
      }
      if ( (_RBX & 0x20000) != 0 && v38 )
        v17 |= 0x400000u;
      if ( (_RBX & 0x80000) != 0 )
        LODWORD(v29) = (unsigned int)v29 | 0x100;
      if ( (_RBX & 0x200000) != 0 && v38 )
        v17 |= 0x8000000u;
      if ( (_RBX & 0x800000) != 0 )
        LODWORD(v29) = (unsigned int)v29 | 0x800;
      if ( (_RBX & 0x10000000) != 0 && v38 )
        v17 |= 0x800000u;
      if ( (_RBX & 0x20000000) != 0 )
        v39 |= 0x400u;
      if ( (_RBX & 0x40000000) != 0 && v38 )
        v17 |= 0x200000u;
      if ( (int)_RBX < 0 && v38 )
        v17 |= 0x100000u;
      if ( (_RCX & 2) != 0 && v38 )
        v17 |= 0x4000000u;
      if ( (_RCX & 0x40) != 0 && v38 )
        v17 |= 0x80000000;
      if ( (_RCX & 0x100) != 0 )
        LODWORD(v29) = (unsigned int)v29 | 1;
      if ( (_RCX & 0x400) != 0 && v37 )
        LODWORD(v29) = (unsigned int)v29 | 2;
      if ( (_RCX & 0x800) != 0 && v38 )
        LODWORD(v29) = (unsigned int)v29 | 4;
      if ( (_RCX & 0x1000) != 0 && v38 )
        LODWORD(v29) = (unsigned int)v29 | 8;
      if ( (_RCX & 0x4000) != 0 && v38 )
        v17 |= 0x40000000u;
      if ( (_RDX & 4) != 0 && v38 )
        v17 |= 0x10000000u;
      if ( (_RDX & 8) != 0 && v38 )
        v17 |= 0x20000000u;
      if ( (_RDX & 0x100) != 0 && v38 )
        LODWORD(v29) = (unsigned int)v29 | 0x20;
      if ( (_DWORD)_RAX )
      {
        _RAX = 0;
        __asm { cpuid }
        if ( (unsigned int)_RAX > 6 )
        {
          _RAX = 7;
          __asm { cpuid }
          if ( (_RAX & 0x20) != 0 && v38 )
            LODWORD(v29) = (unsigned int)v29 | 0x10;
        }
      }
    }
  }
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (int)_RAX < 0 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    v85 = _RAX;
  }
  if ( v85 > 0x80000000 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX > 0x80000000 )
    {
      _RAX = 2147483649LL;
      __asm { cpuid }
      v80 = v17;
      if ( (_RCX & 0x40) != 0 )
      {
        BYTE1(v80) = BYTE1(v17) | 8;
        v17 = v80;
      }
      v81 = v17;
      if ( (_RCX & 0x800) != 0 )
      {
        BYTE1(v81) = BYTE1(v17) | 0x20;
        v17 = v81;
      }
      v82 = v17;
      if ( (_RCX & 0x10000) != 0 )
      {
        BYTE1(v82) = BYTE1(v17) | 0x10;
        v17 = v82;
      }
      v83 = (int)v29;
      if ( (_RDX & 0x20000000) != 0 )
      {
        BYTE1(v83) = BYTE1(v29) | 2;
        LODWORD(v29) = v83;
      }
    }
  }
  if ( v87 != 1 )
  {
    switch ( v23 )
    {
      case 4u:
LABEL_121:
        result = "i486";
        break;
      case 5u:
        switch ( v24 )
        {
          case 6u:
          case 7u:
            result = "k6";
            break;
          case 8u:
            result = "k6-2";
            break;
          case 9u:
          case 0xDu:
            result = "k6-3";
            break;
          case 0xAu:
            result = "geode";
            break;
          default:
            result = "pentium";
            break;
        }
        break;
      case 6u:
        result = "athlon-xp";
        if ( (v17 & 8) == 0 )
          result = "athlon";
        break;
      case 0xFu:
        result = "k8-sse3";
        if ( (v17 & 0x20) == 0 )
          result = "k8";
        break;
      case 0x10u:
      case 0x12u:
        result = "amdfam10";
        break;
      case 0x14u:
        result = "btver1";
        break;
      case 0x15u:
        result = "bdver4";
        if ( v24 - 96 > 0x1F )
        {
          result = "bdver3";
          if ( v24 - 48 > 0xF )
          {
            if ( v24 - 16 <= 0xF || (result = "bdver1", v24 == 2) )
              result = "bdver2";
          }
        }
        break;
      case 0x16u:
        result = "btver2";
        break;
      case 0x17u:
        if ( v24 - 48 <= 0xF || v24 == 71 )
        {
          result = "znver2";
        }
        else
        {
          result = "znver2";
          if ( v24 - 96 > 0x1F && v24 - 132 > 3 && v24 - 144 >= 0x20 )
            result = "znver1";
        }
        break;
      case 0x19u:
        if ( v24 - 32 <= 0x3F || v24 <= 0xF )
        {
          result = "znver3";
        }
        else if ( v24 - 16 <= 0xF || v24 - 96 <= 0x1F )
        {
          result = "znver4";
        }
        else
        {
          result = "znver3";
          if ( v24 - 160 <= 0xF )
            result = "znver4";
        }
        break;
      case 0x1Au:
        result = "znver5";
        break;
      default:
        return "generic";
    }
    return result;
  }
  switch ( v23 )
  {
    case 3u:
      return "i386";
    case 4u:
      goto LABEL_121;
    case 5u:
      result = "pentium-mmx";
      if ( (v17 & 2) == 0 )
        return "pentium";
      return result;
    case 6u:
      switch ( v24 )
      {
        case 0xFu:
        case 0x16u:
          return "core2";
        case 0x17u:
        case 0x1Du:
          return "penryn";
        case 0x1Au:
        case 0x1Eu:
        case 0x1Fu:
        case 0x2Eu:
          return "nehalem";
        case 0x1Cu:
        case 0x26u:
        case 0x27u:
        case 0x35u:
        case 0x36u:
          return "bonnell";
        case 0x25u:
        case 0x2Cu:
        case 0x2Fu:
          return "westmere";
        case 0x2Au:
        case 0x2Du:
          return "sandybridge";
        case 0x37u:
        case 0x4Au:
        case 0x4Cu:
        case 0x4Du:
        case 0x5Au:
        case 0x5Du:
          return "silvermont";
        case 0x3Au:
        case 0x3Eu:
          return "ivybridge";
        case 0x3Cu:
        case 0x3Fu:
        case 0x45u:
        case 0x46u:
          return "haswell";
        case 0x3Du:
        case 0x47u:
        case 0x4Fu:
        case 0x56u:
          return "broadwell";
        case 0x4Eu:
        case 0x5Eu:
        case 0x8Eu:
        case 0x9Eu:
        case 0xA5u:
        case 0xA6u:
          return "skylake";
        case 0x55u:
          if ( ((unsigned __int8)v29 & 0x10) != 0 )
            return "cooperlake";
          result = "cascadelake";
          if ( ((unsigned __int8)v29 & 4) == 0 )
            return "skylake-avx512";
          return result;
        case 0x57u:
          return "knl";
        case 0x5Cu:
        case 0x5Fu:
          return "goldmont";
        case 0x66u:
          return "cannonlake";
        case 0x6Au:
        case 0x6Cu:
          return "icelake-server";
        case 0x7Au:
          return "goldmont-plus";
        case 0x7Du:
        case 0x7Eu:
          return "icelake-client";
        case 0x85u:
          return "knm";
        case 0x86u:
        case 0x8Au:
        case 0x96u:
        case 0x9Cu:
          return "tremont";
        case 0x8Cu:
        case 0x8Du:
          return "tigerlake";
        case 0x8Fu:
          return "sapphirerapids";
        case 0x97u:
        case 0x9Au:
          return "alderlake";
        case 0xA7u:
          return "rocketlake";
        case 0xAAu:
        case 0xACu:
          return "meteorlake";
        case 0xADu:
          return "graniterapids";
        case 0xAEu:
          return "graniterapids-d";
        case 0xAFu:
          return "sierraforest";
        case 0xB5u:
        case 0xC5u:
          return "arrowlake";
        case 0xB6u:
          return "grandridge";
        case 0xB7u:
        case 0xBAu:
        case 0xBFu:
          return "raptorlake";
        case 0xBDu:
          return "lunarlake";
        case 0xBEu:
          return "gracemont";
        case 0xC6u:
          return "arrowlake-s";
        case 0xCCu:
          return "pantherlake";
        case 0xCFu:
          return "emeraldrapids";
        case 0xDDu:
          return "clearwaterforest";
        default:
          if ( ((unsigned __int8)v29 & 0x20) != 0 )
            return "tigerlake";
          if ( v17 < 0 )
          {
            v84 = j__strlen("icelake-client");
            result = "icelake-client";
            goto LABEL_183;
          }
          if ( (v17 & 0x4000000) != 0 )
          {
            v84 = j__strlen("cannonlake");
            result = "cannonlake";
            goto LABEL_183;
          }
          if ( ((unsigned __int8)v29 & 0x10) != 0 )
          {
            v84 = j__strlen("cooperlake");
            result = "cooperlake";
            goto LABEL_183;
          }
          if ( ((unsigned __int8)v29 & 4) != 0 )
          {
            v84 = j__strlen("cascadelake");
            result = "cascadelake";
            goto LABEL_183;
          }
          if ( (v17 & 0x100000) != 0 )
          {
            v84 = j__strlen("skylake-avx512");
            result = "skylake-avx512";
            goto LABEL_183;
          }
          if ( ((unsigned __int16)v29 & 0x800) != 0 )
          {
            if ( (v39 & 0x400) != 0 )
            {
              v84 = j__strlen("goldmont");
              result = "goldmont";
            }
            else
            {
              v84 = j__strlen("skylake");
              result = "skylake";
            }
            goto LABEL_183;
          }
          if ( ((unsigned __int16)v29 & 0x100) != 0 )
          {
            v84 = j__strlen("broadwell");
            result = "broadwell";
            goto LABEL_183;
          }
          if ( (v17 & 0x400) != 0 )
          {
            v84 = j__strlen("haswell");
            result = "haswell";
            goto LABEL_183;
          }
          if ( (v17 & 0x200) != 0 )
          {
            v84 = j__strlen("sandybridge");
            result = "sandybridge";
            goto LABEL_183;
          }
          if ( (v17 & 0x100) != 0 )
          {
            if ( ((unsigned int)v29 & 0x4000000) != 0 )
            {
              v84 = j__strlen("silvermont");
              result = "silvermont";
            }
            else
            {
              v84 = j__strlen("nehalem");
              result = "nehalem";
            }
            goto LABEL_183;
          }
          if ( (v17 & 0x80u) != 0 )
          {
            v84 = j__strlen("penryn");
            result = "penryn";
            goto LABEL_183;
          }
          if ( (v17 & 0x40) != 0 )
          {
            if ( ((unsigned int)v29 & 0x4000000) != 0 )
            {
              v84 = j__strlen("bonnell");
              result = "bonnell";
              goto LABEL_183;
            }
            goto LABEL_248;
          }
          if ( ((unsigned __int16)v29 & 0x200) != 0 )
          {
LABEL_248:
            v84 = j__strlen("core2");
            result = "core2";
            goto LABEL_183;
          }
          if ( (v17 & 0x20) != 0 )
          {
            v84 = j__strlen("yonah");
            result = "yonah";
          }
          else if ( (v17 & 0x10) != 0 )
          {
            v84 = j__strlen("pentium-m");
            result = "pentium-m";
          }
          else if ( (v17 & 8) != 0 )
          {
            v84 = j__strlen("pentium3");
            result = "pentium3";
          }
          else if ( (v17 & 2) != 0 )
          {
            v84 = j__strlen("pentium2");
            result = "pentium2";
          }
          else
          {
            v84 = j__strlen("pentiumpro");
            result = "pentiumpro";
          }
LABEL_183:
          if ( !v84 )
            return "generic";
          return result;
      }
    case 0xFu:
      if ( ((unsigned __int16)v29 & 0x200) != 0 )
        return "nocona";
      result = "prescott";
      if ( (v17 & 0x20) == 0 )
        return "pentium4";
      return result;
    case 0x13u:
      if ( v24 != 1 )
        return "generic";
      return "diamondrapids";
    default:
      return "generic";
  }
}
