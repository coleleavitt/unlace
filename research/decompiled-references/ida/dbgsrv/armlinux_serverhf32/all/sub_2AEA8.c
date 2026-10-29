/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2AEA8
// Address: 0x0002AEA8

//----- (0002AEA8) --------------------------------------------------------
char *__fastcall sub_2AEA8(int a1)
{
  unsigned int v1; // r3

  v1 = *(unsigned __int16 *)(a1 + 406);
  if ( v1 == 102 )
    return "MAX";
  if ( v1 > 0x66 )
  {
    if ( v1 == 175 )
      return "MCST Elbrus";
    if ( v1 <= 0xAF )
    {
      if ( v1 == 134 )
        return "Cyan Technology eCOG2";
      if ( v1 <= 0x86 )
      {
        if ( v1 == 113 )
          return "Nios II";
        if ( v1 > 0x71 )
        {
          if ( v1 == 118 )
            return "dsPIC30F";
          if ( v1 <= 0x76 )
          {
            if ( v1 == 115 )
            {
              return "XGATE";
            }
            else if ( v1 >= 0x73 )
            {
              if ( v1 == 116 )
                return "C16x/XC16x/ST10";
              else
                return "M16C";
            }
            else
            {
              return "CRX";
            }
          }
          else
          {
            if ( v1 == 131 )
              return "TSK3000";
            if ( v1 <= 0x83 )
            {
              if ( v1 == 119 )
                return "Freescale Communication Engine";
              if ( v1 == 120 )
                return "Renesas  M32C";
              return nullptr;
            }
            if ( v1 == 132 )
              return "Freescale RS08";
            else
              return "Analog Devices SHARC";
          }
        }
        else if ( v1 == 107 )
        {
          return "S1C33";
        }
        else if ( v1 <= 0x6B )
        {
          if ( v1 == 104 )
          {
            return "F2MC16";
          }
          else if ( v1 >= 0x68 )
          {
            if ( v1 == 105 )
              return "MSP430";
            else
              return "ADI Blackfin";
          }
          else
          {
            return "CompactRISC";
          }
        }
        else if ( v1 == 110 )
        {
          return "Unicore";
        }
        else if ( v1 > 0x6E )
        {
          if ( v1 == 111 )
            return "eXcess";
          else
            return "Icera DXP";
        }
        else if ( v1 == 108 )
        {
          return "SEP";
        }
        else
        {
          return "Arca";
        }
      }
      else
      {
        if ( v1 == 164 )
          return "QDSP6";
        if ( v1 > 0xA4 )
        {
          if ( v1 == 169 )
          {
            return "MAXQ30";
          }
          else if ( v1 <= 0xA9 )
          {
            if ( v1 == 166 )
            {
              return "STxP7x";
            }
            else if ( v1 >= 0xA6 )
            {
              if ( v1 == 167 )
                return "NDS32";
              else
                return "eCOG1X";
            }
            else
            {
              return "i8051";
            }
          }
          else if ( v1 == 172 )
          {
            return "Cray NV2";
          }
          else if ( v1 > 0xAC )
          {
            if ( v1 == 173 )
              return "RX";
            else
              return "Imagination Technologies META";
          }
          else if ( v1 == 170 )
          {
            return "NJR XIMO16";
          }
          else
          {
            return "M2000";
          }
        }
        else
        {
          if ( v1 == 139 )
            return "C17";
          if ( v1 <= 0x8B )
          {
            if ( v1 == 136 )
            {
              return "NJR DSP24";
            }
            else if ( v1 >= 0x88 )
            {
              if ( v1 == 137 )
                return "VideoCore III";
              else
                return "Lattice Mico32";
            }
            else
            {
              return "Sunplus S+core7";
            }
          }
          else
          {
            if ( v1 == 161 )
              return "M8C";
            if ( v1 <= 0xA1 )
            {
              if ( v1 == 140 )
                return "TMS320C6";
              if ( v1 == 160 )
                return "MMDSP";
              return nullptr;
            }
            if ( v1 == 162 )
              return "R32C";
            else
              return "TriMedia";
          }
        }
      }
    }
    if ( v1 == 197 )
      return "RL78";
    if ( v1 <= 0xC5 )
    {
      if ( v1 == 186 )
        return "STM8";
      if ( v1 > 0xBA )
      {
        if ( v1 == 191 )
        {
          return "Tilera TILE-Gx";
        }
        else if ( v1 <= 0xBF )
        {
          if ( v1 == 188 )
          {
            return "Tilera TILEPro";
          }
          else if ( v1 >= 0xBC )
          {
            if ( v1 == 189 )
              return "MicroBlaze";
            else
              return "CUDA";
          }
          else
          {
            return "Tilera TILE64";
          }
        }
        else if ( v1 == 194 )
        {
          return "Core-A 2nd gen";
        }
        else if ( v1 > 0xC2 )
        {
          if ( v1 == 195 )
            return "ARCompactV2";
          else
            return "Open8";
        }
        else if ( v1 == 192 )
        {
          return "CloudShield";
        }
        else
        {
          return "Core-A 1st gen";
        }
      }
      else if ( v1 == 180 )
      {
        return "Intel L1OM";
      }
      else if ( v1 <= 0xB4 )
      {
        if ( v1 == 177 )
        {
          return "CompactRISC 16-bit";
        }
        else if ( v1 >= 0xB1 )
        {
          if ( v1 == 178 )
            return "Freescale ETPU";
          else
            return "SLE9X";
        }
        else
        {
          return "eCOG16";
        }
      }
      else if ( v1 == 183 )
      {
        return "ARM64";
      }
      else if ( v1 > 0xB7 )
      {
        if ( v1 == 184 )
          return "ARM Reserved (184)";
        else
          return "AVR32";
      }
      else if ( v1 == 181 )
      {
        return "Intel K1OM";
      }
      else
      {
        return "Intel Reserved (182)";
      }
    }
    if ( v1 == 29162 )
      return "NEC v850E2";
    if ( v1 > 0x71EA )
    {
      if ( v1 == 29696 )
        return "NEC v850E2R4";
      if ( v1 <= 0x7400 )
      {
        if ( v1 == 29693 )
          return "NEC v850E2R1";
        if ( v1 <= 0x73FD )
        {
          if ( v1 == 29646 )
            return "NEC v850ES";
          return nullptr;
        }
        if ( v1 == 29694 )
          return "NEC v850E2R2";
        else
          return "NEC v850E2R3";
      }
      if ( v1 == 36902 )
        return "DEC Alpha";
      if ( v1 <= 0x9026 )
      {
        if ( v1 == 29947 )
          return "NEC v850E3V5";
        if ( v1 == 36901 )
          return "PowerPC";
        return nullptr;
      }
      if ( v1 != 36992 )
      {
        if ( v1 == 41872 )
          return "IBM S/390 (old magic)";
        return nullptr;
      }
    }
    else
    {
      if ( v1 == 202 )
        return "Beyond BA2";
      if ( v1 <= 0xCA )
      {
        if ( v1 == 199 )
          return "78K0R";
        if ( v1 < 0xC7 )
          return "VideoCore V";
        if ( v1 == 200 )
          return "Freescale 56800EX";
        return "Beyond BA1";
      }
      if ( v1 == 249 )
        return "nanoMIPS";
      if ( v1 <= 0xF9 )
      {
        if ( v1 == 203 )
          return "XMOS xCORE";
        if ( v1 == 243 )
          return "Risc-V";
        return nullptr;
      }
      if ( v1 == 28924 )
        return "NEC v850E";
      if ( v1 != 28927 )
        return nullptr;
    }
    return "NEC V850";
  }
  if ( v1 == 58 )
    return "Star*Core";
  if ( v1 > 0x3A )
  {
    if ( v1 == 80 )
      return "MMIX";
    if ( v1 <= 0x50 )
    {
      if ( v1 == 69 )
        return "MC68HC16";
      if ( v1 > 0x45 )
      {
        if ( v1 == 74 )
        {
          return "ST19";
        }
        else if ( v1 <= 0x4A )
        {
          if ( v1 == 71 )
          {
            return "MC68HC08";
          }
          else if ( v1 >= 0x47 )
          {
            if ( v1 == 72 )
              return "MC68HC05";
            else
              return "Silicon Graphics SVx";
          }
          else
          {
            return "MC68HC11";
          }
        }
        else if ( v1 == 77 )
        {
          return "Infineon Javelin";
        }
        else if ( v1 > 0x4D )
        {
          if ( v1 == 78 )
            return "Element 14 Firepath";
          else
            return "ZSP";
        }
        else if ( v1 == 75 )
        {
          return "VAX";
        }
        else
        {
          return "CRIS";
        }
      }
      else if ( v1 == 63 )
      {
        return "PDSP";
      }
      else if ( v1 <= 0x3F )
      {
        if ( v1 == 60 )
        {
          return "ST100";
        }
        else if ( v1 >= 0x3C )
        {
          if ( v1 == 61 )
            return "TinyJ";
          else
            return "x86-64";
        }
        else
        {
          return "Toyota ME16";
        }
      }
      else if ( v1 == 66 )
      {
        return "Siemens FX66";
      }
      else if ( v1 > 0x42 )
      {
        if ( v1 == 67 )
          return "ST9+";
        else
          return "ST7";
      }
      else if ( v1 == 64 )
      {
        return "DEC PDP-10";
      }
      else
      {
        return "DEC PDP-11";
      }
    }
    if ( v1 == 91 )
      return "picoJava";
    if ( v1 > 0x5B )
    {
      if ( v1 == 96 )
        return "Thompson GPP";
      if ( v1 <= 0x60 )
      {
        if ( v1 == 93 )
        {
          return "ARCompact";
        }
        else if ( v1 >= 0x5D )
        {
          if ( v1 == 94 )
            return "Xtensa";
          else
            return "VideoCore";
        }
        else
        {
          return "OpenRISC";
        }
      }
      else if ( v1 == 99 )
      {
        return "SNP 1000";
      }
      else if ( v1 > 0x63 )
      {
        if ( v1 == 100 )
          return "ST200";
        else
          return "IP2022";
      }
      else if ( v1 == 97 )
      {
        return "NS 32000";
      }
      else
      {
        return "TPC";
      }
    }
    if ( v1 == 85 )
      return "Mitsubishi D10V";
    if ( v1 <= 0x55 )
    {
      if ( v1 == 82 )
        return "SiTera Prism";
      if ( v1 < 0x52 )
        return "Harvard HUANY";
      if ( v1 == 83 )
        return "Atmel";
      return "Fujitsu FR";
    }
    if ( v1 == 88 )
      return "M32R";
    if ( v1 > 0x58 )
    {
      if ( v1 == 89 )
        return "MN10300";
      else
        return "MN10200";
    }
    if ( v1 == 86 )
      return "Mitsubishi D30V";
    return "NEC V850";
  }
  if ( v1 == 36 )
    return "NEC V800 or Renesas RH850";
  if ( v1 > 0x24 )
  {
    if ( v1 == 47 )
      return "H8/300H";
    if ( v1 > 0x2F )
    {
      if ( v1 == 52 )
      {
        return "Coldfire";
      }
      else if ( v1 <= 0x34 )
      {
        if ( v1 == 49 )
        {
          return "H8/500";
        }
        else if ( v1 >= 0x31 )
        {
          if ( v1 == 50 )
            return "Itanium IA64";
          else
            return "Stanford MIPS-X";
        }
        else
        {
          return "Hitachi H8S";
        }
      }
      else if ( v1 == 55 )
      {
        return "Siemens PCP";
      }
      else if ( v1 > 0x37 )
      {
        if ( v1 == 56 )
          return "Sony nCPU";
        else
          return "Denso NDR1";
      }
      else if ( v1 == 53 )
      {
        return "MC68HC12";
      }
      else
      {
        return "Fujitsu MMA";
      }
    }
    else if ( v1 == 41 )
    {
      return "Digital Alpha";
    }
    else if ( v1 <= 0x29 )
    {
      if ( v1 == 38 )
      {
        return "TRW RH-22";
      }
      else if ( v1 >= 0x26 )
      {
        if ( v1 == 39 )
          return "Motorola M*Core";
        else
          return "ARM";
      }
      else
      {
        return "Fujitsu FR20";
      }
    }
    else if ( v1 == 44 )
    {
      return "Siemens Tricore";
    }
    else if ( v1 > 0x2C )
    {
      if ( v1 == 45 )
        return "ARC";
      else
        return "H8/300";
    }
    else if ( v1 == 42 )
    {
      return "SuperH";
    }
    else
    {
      return "SPARC 64";
    }
  }
  if ( v1 == 10 )
    return "MIPS R3000 Big Endian";
  if ( v1 <= 0xA )
  {
    if ( v1 == 4 )
      return "Motorola 68000";
    if ( v1 <= 4 )
    {
      if ( v1 == 1 )
      {
        return "AT & T WE 32100";
      }
      else if ( *(_WORD *)(a1 + 406) )
      {
        if ( v1 == 2 )
          return "SPARC";
        else
          return "Intel 386";
      }
      else
      {
        return "<No machine>";
      }
    }
    else if ( v1 == 7 )
    {
      return "Intel 860";
    }
    else if ( v1 > 7 )
    {
      if ( v1 == 8 )
        return "MIPS";
      else
        return "IBM System370";
    }
    else if ( v1 == 5 )
    {
      return "Motorola 88000";
    }
    else
    {
      return "Intel 486";
    }
  }
  if ( v1 == 20 )
    return "PowerPC";
  if ( v1 > 0x14 )
  {
    if ( v1 == 23 )
      return "Cell BE SPU";
    if ( v1 <= 0x17 )
    {
      if ( v1 == 21 )
        return "PowerPC 64";
      else
        return "IBM S/390";
    }
    if ( v1 == 25 )
      return "Cisco 7200 Series Router (MIPS)";
    if ( v1 == 30 )
      return "Cisco 3620/3640 Router (MIPS)";
    return nullptr;
  }
  if ( v1 == 17 )
    return "Fujitsu VPP500";
  if ( v1 <= 0x11 )
  {
    if ( v1 == 15 )
      return "PA-RISC";
    return nullptr;
  }
  if ( v1 == 18 )
    return "SPARC v8+";
  else
    return "Intel 960";
}
// 2AEEC: conditional instruction was optimized away because r3.4==2B
// 2AF68: conditional instruction was optimized away because r3.4==41
// 2AFA2: conditional instruction was optimized away because r3.4==B6
// 2AFD2: conditional instruction was optimized away because r3.4==6D
// 2B002: conditional instruction was optimized away because r3.4==6
// 2B032: conditional instruction was optimized away because r3.4==54
// 2B068: conditional instruction was optimized away because r3.4==C9
// 2B0B8: conditional instruction was optimized away because r3.4==AB
// 2B0E0: conditional instruction was optimized away because r3.4==16
// 2B108: conditional instruction was optimized away because r3.4==36
// 2B12E: conditional instruction was optimized away because r3.4==62
// 2B154: conditional instruction was optimized away because r3.4==C1
// 2B17C: conditional instruction was optimized away because r3.4==4C
// 2B1B2: conditional instruction was optimized away because r3.4==73FF
// 2B1D0: conditional instruction was optimized away because r3.4==28
// 2B1EE: conditional instruction was optimized away because r3.4==5F
// 2B20C: conditional instruction was optimized away because r3.4==BE
// 2B22A: conditional instruction was optimized away because r3.4==13
// 2B248: conditional instruction was optimized away because r3.4==A8
// 2B266: conditional instruction was optimized away because r3.4==75
// 2B284: conditional instruction was optimized away because r3.4==49
// 2B2A2: conditional instruction was optimized away because r3.4==33
// 2B2C0: conditional instruction was optimized away because r3.4==3
// 2B2DE: conditional instruction was optimized away because r3.4==3E
// 2B2FC: conditional instruction was optimized away because r3.4==8A
// 2B31A: conditional instruction was optimized away because r3.4==B3
// 2B338: conditional instruction was optimized away because r3.4==6A
// 2B3B6: conditional instruction was optimized away because r3.4==5A
// 2B3CA: conditional instruction was optimized away because r3.4==2E
// 2B3F2: conditional instruction was optimized away because r3.4==B9
// 2B406: conditional instruction was optimized away because r3.4==39
// 2B41A: conditional instruction was optimized away because r3.4==65
// 2B42E: conditional instruction was optimized away because r3.4==AE
// 2B442: conditional instruction was optimized away because r3.4==44
// 2B456: conditional instruction was optimized away because r3.4==9
// 2B46A: conditional instruction was optimized away because r3.4==70
// 2B47E: conditional instruction was optimized away because r3.4==85
// 2B492: conditional instruction was optimized away because r3.4==C4
// 2B4A6: conditional instruction was optimized away because r3.4==4F
// 2B4B6: conditional instruction was optimized away because r3.4==A3
// 2B548: conditional instruction was optimized away because r3.4==57
