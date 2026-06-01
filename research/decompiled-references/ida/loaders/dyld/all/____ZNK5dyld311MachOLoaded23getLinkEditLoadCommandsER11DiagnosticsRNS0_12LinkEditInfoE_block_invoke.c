__int64 __fastcall ___ZNK5dyld311MachOLoaded23getLinkEditLoadCommandsER11DiagnosticsRNS0_12LinkEditInfoE_block_invoke(
        __int64 result,
        int *a2)
{
  __int64 v3; // x19
  int v4; // w8
  __int64 v5; // x8
  Diagnostics *v6; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v3 = result;
  v4 = *a2;
  if ( *a2 <= 1 )
  {
    switch ( v4 )
    {
      case -2147483614:
LABEL_13:
        if ( a2[1] == 48 )
        {
          if ( **(_QWORD **)(v3 + 72) )
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_DYLD_INFO load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_DYLD_INFO load command size wrong");
        }
        **(_QWORD **)(v3 + 72) = a2;
        break;
      case -2147483597:
        if ( a2[1] == 16 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(result + 72) + 8LL) )
            result = Diagnostics::error(*(Diagnostics **)(result + 64), "multiple LC_DYLD_EXPORTS_TRIE load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(result + 64), "LC_DYLD_EXPORTS_TRIE load command size wrong");
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 72) + 8LL) = a2;
        break;
      case -2147483596:
        if ( a2[1] == 16 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(result + 72) + 16LL) )
            result = Diagnostics::error(*(Diagnostics **)(result + 64), "multiple LC_DYLD_CHAINED_FIXUPS load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(result + 64), "LC_DYLD_CHAINED_FIXUPS load command size wrong");
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 72) + 16LL) = a2;
        break;
    }
  }
  else if ( (unsigned int)(v4 - 27) > 0x17 )
  {
    if ( v4 == 2 )
    {
      if ( a2[1] == 24 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(result + 72) + 24LL) )
          result = Diagnostics::error(*(Diagnostics **)(result + 64), "multiple LC_SYMTAB load commands");
      }
      else
      {
        result = Diagnostics::error(*(Diagnostics **)(result + 64), "LC_SYMTAB load command size wrong");
      }
      *(_QWORD *)(*(_QWORD *)(v3 + 72) + 24LL) = a2;
    }
    else if ( v4 == 11 )
    {
      if ( a2[1] == 80 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(result + 72) + 32LL) )
          result = Diagnostics::error(*(Diagnostics **)(result + 64), "multiple LC_DYSYMTAB load commands");
      }
      else
      {
        result = Diagnostics::error(*(Diagnostics **)(result + 64), "LC_DYSYMTAB load command size wrong");
      }
      *(_QWORD *)(*(_QWORD *)(v3 + 72) + 32LL) = a2;
    }
  }
  else
  {
    result = *(_QWORD *)(result + 56);
    switch ( v4 )
    {
      case 27:
        if ( a2[1] == 24 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL) )
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_UUID load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_UUID load command size wrong");
        }
        v5 = *(_QWORD *)(v3 + 32);
        goto LABEL_73;
      case 28:
      case 31:
      case 32:
      case 35:
      case 39:
      case 40:
      case 42:
      case 43:
      case 45:
      case 46:
      case 49:
        return result;
      case 29:
        if ( a2[1] == 16 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v3 + 72) + 64LL) )
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_CODE_SIGNATURE load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_CODE_SIGNATURE load command size wrong");
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 72) + 64LL) = a2;
        return result;
      case 30:
        if ( a2[1] == 16 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) )
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_SEGMENT_SPLIT_INFO load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_SEGMENT_SPLIT_INFO load command size wrong");
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) = a2;
        return result;
      case 33:
        if ( a2[1] == 20 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8LL) + 24LL) )
          {
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_ENCRYPTION_INFO load commands");
          }
          else
          {
            result = dyld3::MachOFile::is64((dyld3::MachOFile *)result);
            if ( (_DWORD)result )
              result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_ENCRYPTION_INFO found in 64-bit mach-o");
          }
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_ENCRYPTION_INFO load command size wrong");
        }
        goto LABEL_72;
      case 34:
        goto LABEL_13;
      case 36:
      case 37:
      case 47:
      case 48:
        if ( a2[1] == 16 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) + 24LL) )
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_VERSION_MIN_* load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_VERSION_* load command size wrong");
        }
        v5 = *(_QWORD *)(v3 + 40);
        goto LABEL_73;
      case 38:
        if ( a2[1] == 16 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v3 + 72) + 48LL) )
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_FUNCTION_STARTS load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_FUNCTION_STARTS load command size wrong");
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 72) + 48LL) = a2;
        return result;
      case 41:
        if ( a2[1] == 16 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v3 + 72) + 56LL) )
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_DATA_IN_CODE load commands");
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_DATA_IN_CODE load command size wrong");
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 72) + 56LL) = a2;
        return result;
      case 44:
        if ( a2[1] == 24 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8LL) + 24LL) )
          {
            result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "multiple LC_ENCRYPTION_INFO_64 load commands");
          }
          else
          {
            result = dyld3::MachOFile::is64((dyld3::MachOFile *)result);
            if ( (result & 1) == 0 )
              result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_ENCRYPTION_INFO_64 found in 32-bit mach-o");
          }
        }
        else
        {
          result = Diagnostics::error(*(Diagnostics **)(v3 + 64), "LC_ENCRYPTION_INFO_64 load command size wrong");
        }
LABEL_72:
        v5 = *(_QWORD *)(v3 + 48);
LABEL_73:
        *(_BYTE *)(*(_QWORD *)(v5 + 8) + 24LL) = 1;
        break;
      case 50:
        if ( 8LL * (unsigned int)a2[5] + 24 != a2[1] )
        {
          v6 = *(Diagnostics **)(v3 + 64);
          if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          result = Diagnostics::error(v6, "LC_BUILD_VERSION load command size wrong");
        }
        break;
    }
  }
  return result;
}
