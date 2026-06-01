__int64 __fastcall qtmpdir(__int64 a1, __int64 a2)
{
  if ( (unsigned __int8)qgetenv("TMPDIR") )
    qustrncpy(a1, haystack, a2);
  else
    qustrncpy(a1, "/tmp", a2);
  return a1;
}

