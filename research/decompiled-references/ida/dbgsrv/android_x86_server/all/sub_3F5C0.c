/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F5C0
// Address: 0x0003F5C0

//----- (0003F5C0) --------------------------------------------------------
const char *__cdecl sub_3F5C0(int a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  int v4; // ecx
  const char *result; // eax
  __int16 v6; // [esp+Ah] [ebp-Eh]

  HIDWORD(v2) = HIDWORD(a2);
  v6 = *(_WORD *)(a1 + 402);
  if ( *(_BYTE *)(a1 + 391) == 6 )
  {
    v3 = a2 - 1610612749;
    if ( __PAIR64__((unsigned int)((unsigned int)a2 >= 0x6000000D) + HIDWORD(a2) - 1, (int)a2 - 1610612749) < 0x1F )
    {
      v4 = 1364557819;
      if ( _bittest(&v4, v3) )
        return off_1379B0[v3];
    }
  }
  if ( a2 <= 1879047668 )
  {
    if ( (unsigned __int64)a2 <= 0x21 )
    {
      result = "DT_NULL";
      switch ( (int)a2 )
      {
        case 0:
          return result;
        case 1:
          result = "DT_NEEDED";
          break;
        case 2:
          result = "DT_PLTRELSZ";
          break;
        case 3:
          result = "DT_PLTGOT";
          break;
        case 4:
          result = "DT_HASH";
          break;
        case 5:
          result = "DT_STRTAB";
          break;
        case 6:
          result = "DT_SYMTAB";
          break;
        case 7:
          result = "DT_RELA";
          break;
        case 8:
          result = "DT_RELASZ";
          break;
        case 9:
          result = "DT_RELAENT";
          break;
        case 10:
          result = "DT_STRSZ";
          break;
        case 11:
          result = "DT_SYMENT";
          break;
        case 12:
          result = "DT_INIT";
          break;
        case 13:
          result = "DT_FINI";
          break;
        case 14:
          result = "DT_SONAME";
          break;
        case 15:
          result = "DT_RPATH";
          break;
        case 16:
          result = "DT_SYMBOLIC";
          break;
        case 17:
          result = "DT_REL";
          break;
        case 18:
          result = "DT_RELSZ";
          break;
        case 19:
          result = "DT_RELENT";
          break;
        case 20:
          result = "DT_PLTREL";
          break;
        case 21:
          result = "DT_DEBUG";
          break;
        case 22:
          result = "DT_TEXTREL";
          break;
        case 23:
          result = "DT_JMPREL";
          break;
        case 24:
          result = "DT_BIND_NOW";
          break;
        case 25:
          result = "DT_INIT_ARRAY";
          break;
        case 26:
          result = "DT_FINI_ARRAY";
          break;
        case 27:
          result = "DT_INIT_ARRAYSZ";
          break;
        case 28:
          result = "DT_FINI_ARRAYSZ";
          break;
        case 29:
          result = "DT_RUNPATH";
          break;
        case 30:
          result = "DT_FLAGS";
          break;
        case 31:
          goto LABEL_28;
        case 32:
          result = "DT_PREINIT_ARRAY";
          break;
        case 33:
          result = "DT_PREINIT_ARRAYSZ";
          break;
      }
      return result;
    }
    if ( a2 == 1879047424 )
      return "DT_VALRNGLO";
LABEL_28:
    if ( v6 <= 39 )
    {
      if ( v6 == 8 )
      {
        if ( (unsigned __int64)(a2 - 1879048193) < 0x34 )
          return *(&off_137A30[(_DWORD)a2] - 1879048193);
      }
      else if ( v6 == 20 && a2 == 1879048192 )
      {
        return "DT_PPC_GOT";
      }
      return nullptr;
    }
    switch ( v6 )
    {
      case 40:
        goto LABEL_32;
      case 50:
        LODWORD(v2) = a2;
        if ( (unsigned __int64)(v2 - 1610612736) <= 0x18 )
        {
          result = (char *)&qword_13ACD8 - 364221;
          switch ( (int)a2 )
          {
            case 1610612736:
              return result;
            case 1610612737:
              result = (char *)&qword_13ACD8 - 364206;
              break;
            case 1610612738:
              result = (char *)&qword_13ACD8 - 364190;
              break;
            case 1610612739:
              result = (char *)&qword_13ACD8 - 364175;
              break;
            case 1610612740:
              result = (char *)&qword_13ACD8 - 364159;
              break;
            case 1610612741:
              result = (char *)&qword_13ACD8 - 364141;
              break;
            case 1610612742:
              result = (char *)&qword_13ACD8 - 364127;
              break;
            case 1610612743:
              result = (char *)&qword_13ACD8 - 364111;
              break;
            case 1610612744:
              result = (char *)&qword_13ACD8 - 364098;
              break;
            case 1610612745:
              result = (char *)&qword_13ACD8 - 364081;
              break;
            case 1610612746:
              result = (char *)&qword_13ACD8 - 364066;
              break;
            case 1610612747:
              result = (char *)&qword_13ACD8 - 364051;
              break;
            case 1610612748:
              result = (char *)&qword_13ACD8 - 364033;
              break;
            case 1610612749:
              result = (char *)&qword_13ACD8 - 364015;
              break;
            case 1610612750:
              result = (char *)&qword_13ACD8 - 364001;
              break;
            case 1610612751:
              result = (char *)&qword_13ACD8 - 363985;
              break;
            case 1610612752:
              result = (char *)&qword_13ACD8 - 363970;
              break;
            case 1610612753:
              result = (char *)&qword_13ACD8 - 363953;
              break;
            case 1610612754:
              result = (char *)&qword_13ACD8 - 363931;
              break;
            case 1610612755:
              result = (char *)&qword_13ACD8 - 363916;
              break;
            case 1610612756:
              result = (char *)&qword_13ACD8 - 363895;
              break;
            case 1610612757:
              result = (const char *)(&qword_13ACD8 - 45486);
              break;
            case 1610612758:
              result = (char *)&qword_13ACD8 - 363876;
              break;
            case 1610612759:
              result = (char *)&qword_13ACD8 - 363869;
              break;
            case 1610612760:
              result = (char *)&qword_13ACD8 - 363857;
              break;
          }
          return result;
        }
        if ( a2 == 1879048192 )
          return (char *)&qword_13ACD8 - 363838;
        break;
      case 183:
LABEL_32:
        if ( (unsigned __int64)(a2 - 1610612751) < 4 )
          return *(&off_137B00[(_DWORD)a2] - 1610612751);
        break;
    }
    return nullptr;
  }
  if ( a2 <= 1879047924 )
  {
    if ( __PAIR64__((unsigned int)__CFADD__((_DWORD)a2, -1879047669) + HIDWORD(a2) - 1, (int)a2 - 1879047669) > 0xB )
      goto LABEL_28;
    switch ( (int)a2 )
    {
      case 1879047669:
        result = "DT_GNU_PRELINKED";
        break;
      case 1879047670:
        result = "DT_GNU_CONFLICTSZ";
        break;
      case 1879047671:
        result = "DT_GNU_LIBLISTSZ";
        break;
      case 1879047672:
        result = "DT_CHECKSUM";
        break;
      case 1879047673:
        result = "DT_PLTPADSZ";
        break;
      case 1879047674:
        result = "DT_MOVEENT";
        break;
      case 1879047675:
        result = "DT_MOVESZ";
        break;
      case 1879047676:
        result = "DT_FEATURE";
        break;
      case 1879047677:
        result = "DT_POSFLAG_1";
        break;
      case 1879047678:
        result = "DT_SYMINSZ";
        break;
      case 1879047679:
        result = "DT_SYMINENT";
        break;
      case 1879047680:
        result = "DT_ADDRRNGLO";
        break;
    }
  }
  else if ( a2 > 1879048175 )
  {
    if ( a2 > 2147483644 )
    {
      switch ( a2 )
      {
        case 0x7FFFFFFDLL:
          return (char *)&qword_13ACD8 - 365135;
        case 0x7FFFFFFELL:
          return "DT_USED";
        case 0x7FFFFFFFLL:
          return "DT_FILTER";
      }
      goto LABEL_28;
    }
    if ( __PAIR64__((unsigned int)__CFADD__((_DWORD)a2, -1879048176) + HIDWORD(a2) - 1, (int)a2 - 1879048176) > 0xF )
      goto LABEL_28;
    switch ( (int)a2 )
    {
      case 1879048176:
        result = "DT_VERSYM";
        break;
      case 1879048177:
      case 1879048178:
      case 1879048179:
      case 1879048180:
      case 1879048181:
      case 1879048182:
      case 1879048183:
      case 1879048184:
        goto LABEL_28;
      case 1879048185:
        result = "DT_RELACOUNT";
        break;
      case 1879048186:
        result = "DT_RELCOUNT";
        break;
      case 1879048187:
        result = "DT_FLAGS_1";
        break;
      case 1879048188:
        result = "DT_VERDEF";
        break;
      case 1879048189:
        result = "DT_VERDEFNUM";
        break;
      case 1879048190:
        result = "DT_VERNEED";
        break;
      case 1879048191:
        result = "DT_VERNEEDNUM";
        break;
    }
  }
  else
  {
    if ( __PAIR64__((unsigned int)((unsigned int)a2 >= 0x6FFFFEF5) + HIDWORD(a2) - 1, (int)a2 - 1879047925) > 0xA )
      goto LABEL_28;
    switch ( (int)a2 )
    {
      case 1879047925:
        result = "DT_GNU_HASH";
        break;
      case 1879047926:
        result = "DT_TLSDESC_PLT";
        break;
      case 1879047927:
        result = "DT_TLSDESC_GOT";
        break;
      case 1879047928:
        result = "DT_GNU_CONFLICT";
        break;
      case 1879047929:
        result = "DT_GNU_LIBLIST";
        break;
      case 1879047930:
        result = "DT_CONFIG";
        break;
      case 1879047931:
        result = "DT_DEPAUDIT";
        break;
      case 1879047932:
        result = "DT_AUDIT";
        break;
      case 1879047933:
        result = "DT_PLTPAD";
        break;
      case 1879047934:
        result = "DT_MOVETAB";
        break;
      case 1879047935:
        result = "DT_SYMINFO";
        break;
    }
  }
  return result;
}
// 1379B0: using guessed type char *off_1379B0[31];
// 137A30: using guessed type char *off_137A30[11];
// 137B00: using guessed type char *off_137B00[4];
// 13ACD8: using guessed type __int64 qword_13ACD8;
