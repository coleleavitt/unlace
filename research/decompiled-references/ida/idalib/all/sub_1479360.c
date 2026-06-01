_WORD *__fastcall sub_1479360(_WORD *a1, unsigned __int64 a2)
{
  size_t v3; // rax

  if ( a2 > 3 && *a1 == 24415 && (v3 = j__strlen("__"), v3 <= a2) && (!v3 || !memcmp((char *)a1 + a2 - v3, "__", v3)) )
    return a1 + 1;
  else
    return a1;
}
