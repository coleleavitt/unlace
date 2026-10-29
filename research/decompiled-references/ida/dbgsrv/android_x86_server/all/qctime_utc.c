/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime_utc
// Address: 0x000B1B60

//----- (000B1B60) --------------------------------------------------------
char __cdecl qctime_utc(char *s, unsigned int a2, int a3)
{
  size_t v3; // edi
  size_t v4; // esi
  char result; // al
  struct tm tp; // [esp+8h] [ebp-64h] BYREF
  time_t timer[13]; // [esp+38h] [ebp-34h] BYREF

  timer[8] = __readgsdword(0x14u);
  timer[0] = a3;
  if ( a3 >= 0 && gmtime_r(timer, &tp) && asctime_r(&tp, (char *)timer) )
  {
    qstrncpy((unsigned int)s, (int)timer, a2);
    if ( a2 >= 9 && s[8] == 32 )
      s[8] = 48;
    v3 = strlen(s);
    do
    {
      v4 = v3;
      if ( !v3 )
        break;
      if ( s[v3 - 1] < 0 )
        break;
      --v3;
    }
    while ( isspace((unsigned __int8)s[v4 - 1]) );
    result = 1;
    if ( v4 + 6 <= a2 )
    {
      qstrncpy((unsigned int)&s[v4], (int)" UTC\n", 6);
      return 1;
    }
  }
  else
  {
    qstrncpy((unsigned int)s, (int)"[wrong timestamp]\n", a2);
    return 0;
  }
  return result;
}
