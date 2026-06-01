const char *__fastcall sub_11E7030(__int64 a1)
{
  const char *result; // rax

  switch ( *(_DWORD *)(a1 + 3932) )
  {
    case 0:
      goto LABEL_2;
    case 1:
      if ( *(_DWORD *)(a1 + 3936) == 2 )
      {
LABEL_2:
        j__strlen("MacOSX");
        result = "MacOSX";
      }
      else
      {
        j__strlen("iPhone");
        result = "iPhone";
      }
      break;
    case 2:
      j__strlen("AppleTV");
      result = "AppleTV";
      break;
    case 3:
      j__strlen("Watch");
      result = "Watch";
      break;
    case 4:
      j__strlen("DriverKit");
      result = "DriverKit";
      break;
    case 5:
      j__strlen("XR");
      result = "XR";
      break;
  }
  return result;
}
