_WORD *__fastcall sub_F72300(_WORD *a1, unsigned __int64 a2)
{
  if ( a2 > 3 && *a1 == 24415 && *(_WORD *)((char *)a1 + a2 - 2) == 24415 )
    return a1 + 1;
  else
    return a1;
}

