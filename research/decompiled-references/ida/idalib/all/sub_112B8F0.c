char *__fastcall sub_112B8F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  char *result; // rax

  v2 = *(unsigned int *)(a1 + 60);
  if ( (unsigned int)v2 > 0x1F )
    return (char *)sub_22B75A0(a1 + 16, a2);
  v3 = 4160750114LL;
  if ( _bittest64(&v3, v2) )
  {
    j__strlen("darwin");
    return "darwin";
  }
  else
  {
    switch ( (int)v2 )
    {
      case 3:
        j__strlen("freebsd");
        result = (char *)"freebsd";
        break;
      case 11:
        j__strlen("netbsd");
        result = "netbsd";
        break;
      case 12:
        j__strlen("openbsd");
        result = "openbsd";
        break;
      case 13:
        j__strlen("sunos");
        result = "sunos";
        break;
      case 20:
        j__strlen("aix");
        result = "aix";
        break;
      default:
        return (char *)sub_22B75A0(a1 + 16, a2);
    }
  }
  return result;
}
