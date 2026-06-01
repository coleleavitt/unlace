_BYTE *__fastcall qtmpdir(_BYTE *a1, __int64 a2)
{
  if ( (unsigned __int8)qgetenv("TMPDIR") )
    qustrncpy(a1, (char *)haystack, a2);
  else
    qustrncpy(a1, "/tmp", a2);
  return a1;
}
