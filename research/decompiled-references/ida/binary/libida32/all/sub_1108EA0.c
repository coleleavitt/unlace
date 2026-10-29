char *__fastcall sub_1108EA0(__int64 a1)
{
  char *result; // rax

  switch ( *(_DWORD *)(a1 + 48) )
  {
    case 3:
      if ( *(_DWORD *)(a1 + 52) == 35 )
      {
        j__strlen("arm64e");
        result = "arm64e";
      }
      else
      {
        j__strlen("arm64");
        result = "arm64";
      }
      break;
    case 5:
      j__strlen("arm64_32");
      result = "arm64_32";
      break;
    case 0x15:
      j__strlen("ppc");
      result = (char *)"ppc";
      break;
    case 0x16:
      j__strlen("ppcle");
      result = "ppcle";
      break;
    case 0x17:
      j__strlen("ppc64");
      result = "ppc64";
      break;
    case 0x18:
      j__strlen("ppc64le");
      result = "ppc64le";
      break;
    default:
      result = (char *)sub_2293740(a1 + 16);
      break;
  }
  return result;
}

