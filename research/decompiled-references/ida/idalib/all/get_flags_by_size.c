__int64 __fastcall get_flags_by_size(unsigned __int64 a1, const char *a2)
{
  __int64 ph; // rdx
  __int64 result; // rax

  if ( a1 > 0x20 )
  {
    result = 4026532864LL;
    if ( a1 == 64 )
      return result;
    goto LABEL_4;
  }
  if ( !a1 )
  {
LABEL_4:
    ph = get_ph(a1, a2);
    result = 0;
    if ( a1 == *(_QWORD *)(ph + 120) )
      return 1073742848;
    return result;
  }
  switch ( a1 )
  {
    case 1uLL:
      result = 1024;
      break;
    case 2uLL:
      result = 268436480;
      break;
    case 4uLL:
      result = 536871936;
      break;
    case 8uLL:
      result = 805307392;
      break;
    case 0x10uLL:
      result = 1879049216;
      break;
    case 0x20uLL:
      result = 3758097408LL;
      break;
    default:
      goto LABEL_4;
  }
  return result;
}
