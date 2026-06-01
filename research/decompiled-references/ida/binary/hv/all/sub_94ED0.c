unsigned __int8 *__fastcall sub_94ED0(unsigned __int8 *a1, __int64 a2)
{
  if ( (unsigned __int8)sub_98D10("TMPDIR") )
    sub_8F6E0(a1, (unsigned __int8 *)haystack, a2);
  else
    sub_8F6E0(a1, "/tmp", a2);
  return a1;
}

