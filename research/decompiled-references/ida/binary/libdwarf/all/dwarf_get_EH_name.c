__int64 __fastcall dwarf_get_EH_name(__int64 a1, _QWORD *a2)
{
  switch ( a1 )
  {
    case 0LL:
      *a2 = "DW_EH_PE_absptr";
      return 0;
    case 1LL:
      *a2 = "DW_EH_PE_uleb128";
      return 0;
    case 2LL:
      *a2 = "DW_EH_PE_udata2";
      return 0;
    case 3LL:
      *a2 = "DW_EH_PE_udata4";
      return 0;
    case 4LL:
      *a2 = "DW_EH_PE_udata8";
      return 0;
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
    case 13LL:
    case 14LL:
    case 15LL:
    case 17LL:
    case 18LL:
    case 19LL:
    case 20LL:
    case 21LL:
    case 22LL:
    case 23LL:
    case 24LL:
    case 25LL:
    case 26LL:
    case 27LL:
    case 28LL:
    case 29LL:
    case 30LL:
    case 31LL:
    case 33LL:
    case 34LL:
    case 35LL:
    case 36LL:
    case 37LL:
    case 38LL:
    case 39LL:
    case 40LL:
    case 41LL:
    case 42LL:
    case 43LL:
    case 44LL:
    case 45LL:
    case 46LL:
    case 47LL:
    case 49LL:
    case 50LL:
    case 51LL:
    case 52LL:
    case 53LL:
    case 54LL:
    case 55LL:
    case 56LL:
    case 57LL:
    case 58LL:
    case 59LL:
    case 60LL:
    case 61LL:
    case 62LL:
    case 63LL:
    case 65LL:
    case 66LL:
    case 67LL:
    case 68LL:
    case 69LL:
    case 70LL:
    case 71LL:
    case 72LL:
    case 73LL:
    case 74LL:
    case 75LL:
    case 76LL:
    case 77LL:
    case 78LL:
    case 79LL:
      return 0xFFFFFFFFLL;
    case 9LL:
      *a2 = "DW_EH_PE_sleb128";
      return 0;
    case 10LL:
      *a2 = "DW_EH_PE_sdata2";
      return 0;
    case 11LL:
      *a2 = "DW_EH_PE_sdata4";
      return 0;
    case 12LL:
      *a2 = "DW_EH_PE_sdata8";
      return 0;
    case 16LL:
      *a2 = "DW_EH_PE_pcrel";
      return 0;
    case 32LL:
      *a2 = "DW_EH_PE_textrel";
      return 0;
    case 48LL:
      *a2 = "DW_EH_PE_datarel";
      return 0;
    case 64LL:
      *a2 = "DW_EH_PE_funcrel";
      return 0;
    case 80LL:
      *a2 = "DW_EH_PE_aligned";
      return 0;
    default:
      if ( (_DWORD)a1 != 255 )
        return 0xFFFFFFFFLL;
      *a2 = "DW_EH_PE_omit";
      return 0;
  }
}

