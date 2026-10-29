char *__fastcall sub_22B5FC0(int a1, __int64 a2)
{
  switch ( a1 )
  {
    case 3:
      if ( (_DWORD)a2 == 36 )
      {
        j__strlen("arm64ec");
        return "arm64ec";
      }
      else
      {
        if ( (_DWORD)a2 != 35 )
          return sub_22B5820(a1);
        j__strlen("arm64e");
        return "arm64e";
      }
    case 11:
      switch ( a2 )
      {
        case 0LL:
        case 49LL:
          j__strlen("dxilv1.0");
          return "dxilv1.0";
        case 50LL:
          j__strlen("dxilv1.1");
          return "dxilv1.1";
        case 51LL:
          j__strlen("dxilv1.2");
          return "dxilv1.2";
        case 52LL:
          j__strlen("dxilv1.3");
          return "dxilv1.3";
        case 53LL:
          j__strlen("dxilv1.4");
          return "dxilv1.4";
        case 54LL:
          j__strlen("dxilv1.5");
          return "dxilv1.5";
        case 55LL:
          j__strlen("dxilv1.6");
          return "dxilv1.6";
        case 56LL:
          j__strlen("dxilv1.7");
          return "dxilv1.7";
        case 57LL:
          j__strlen("dxilv1.8");
          return "dxilv1.8";
        default:
          return sub_22B5820(a1);
      }
    case 16:
      if ( (_DWORD)a2 != 40 )
        return sub_22B5820(a1);
      j__strlen("mipsisa32r6");
      return "mipsisa32r6";
    case 17:
      if ( (_DWORD)a2 != 40 )
        return sub_22B5820(a1);
      j__strlen("mipsisa32r6el");
      return "mipsisa32r6el";
    case 18:
      if ( (_DWORD)a2 != 40 )
        return sub_22B5820(a1);
      j__strlen("mipsisa64r6");
      return "mipsisa64r6";
    case 19:
      if ( (_DWORD)a2 != 40 )
        return sub_22B5820(a1);
      j__strlen("mipsisa64r6el");
      return "mipsisa64r6el";
    case 49:
      switch ( (int)a2 )
      {
        case '*':
          j__strlen("spirv1.0");
          return "spirv1.0";
        case '+':
          j__strlen("spirv1.1");
          return "spirv1.1";
        case ',':
          j__strlen("spirv1.2");
          return "spirv1.2";
        case '-':
          j__strlen("spirv1.3");
          return "spirv1.3";
        case '.':
          j__strlen("spirv1.4");
          return "spirv1.4";
        case '/':
          j__strlen("spirv1.5");
          return "spirv1.5";
        case '0':
          j__strlen("spirv1.6");
          return "spirv1.6";
        default:
          return sub_22B5820(a1);
      }
    default:
      return sub_22B5820(a1);
  }
}
