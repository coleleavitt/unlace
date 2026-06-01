__int64 __fastcall sub_76D7A0(__int64 *a1, const char *a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  char *v4; // r13
  __int64 v5; // rbp
  char *i; // rbx

  result = sub_76CD30(a1, a2);
  if ( (_DWORD)result == -1 )
  {
    if ( !a2 )
      return 0x7FFFFFFF;
    v3 = unk_2C52600;
    if ( !unk_2C52600 )
      return 0x7FFFFFFF;
    v4 = off_2C52608;
    v5 = 0;
    for ( i = off_2C52608; strcmp(*(const char **)i, a2); i += 40 )
    {
      if ( ++v5 == v3 )
        return 0x7FFFFFFF;
    }
    if ( i && *((_QWORD *)i + 1) )
      return 858993459 * (unsigned int)((i - v4) >> 3);
    else
      return 0x7FFFFFFF;
  }
  return result;
}

