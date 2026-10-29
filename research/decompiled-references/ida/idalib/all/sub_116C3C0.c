const char *__fastcall sub_116C3C0(const char **a1, __int64 a2)
{
  unsigned __int8 v2; // cl
  const char *v4; // rbx

  if ( *((_BYTE *)a1 + 33) == 1 && (v2 = *((_BYTE *)a1 + 32), v2 <= 6u) && ((1LL << v2) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a1 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v4 = *a1;
        break;
      case 1:
        v4 = nullptr;
        break;
      case 3:
        v4 = *a1;
        if ( *a1 )
          j__strlen(*a1);
        break;
      case 4:
        v4 = *(const char **)*a1;
        break;
      default:
        goto LABEL_4;
    }
    return v4;
  }
  else
  {
LABEL_4:
    sub_22538C0(a1, a2);
    return *(const char **)a2;
  }
}
