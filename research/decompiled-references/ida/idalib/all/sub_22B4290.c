__int64 __fastcall sub_22B4290(_BYTE *s1, size_t n)
{
  size_t v2; // rdx
  __int64 result; // rax
  size_t v4; // rdx

  if ( n == 3 )
  {
    if ( *(_WORD *)s1 == 28770 && s1[2] == 102 )
      return 8;
LABEL_3:
    v2 = j__strlen("bpfel");
    result = 0;
    if ( n == v2 )
    {
      result = 8;
      if ( n )
        return 8 * (unsigned int)(memcmp(s1, "bpfel", n) == 0);
    }
    return result;
  }
  if ( n != 6 )
  {
    if ( n != 5 || *(_DWORD *)s1 != 1701212258 || s1[4] != 98 )
      goto LABEL_3;
    return 9;
  }
  if ( *(_DWORD *)s1 == 1600548962 && *((_WORD *)s1 + 2) == 25954 )
    return 9;
  if ( *(_DWORD *)s1 == 1600548962 && *((_WORD *)s1 + 2) == 25964 )
    return 8;
  v4 = j__strlen("bpfel");
  result = 0;
  if ( v4 == 6 )
    return 8 * (unsigned int)(memcmp(s1, "bpfel", n) == 0);
  return result;
}
