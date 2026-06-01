/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrftime
// Address: 0x000B1D80

//----- (000B1D80) --------------------------------------------------------
size_t __cdecl qstrftime(char *s, size_t maxsize, char *format, time_t a4)
{
  struct tm tp; // [esp+8h] [ebp-40h] BYREF
  time_t timer; // [esp+38h] [ebp-10h] BYREF
  unsigned int v7; // [esp+3Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  timer = a4;
  if ( a4 >= 0 && localtime_r(&timer, &tp) )
    return strftime(s, maxsize, format, &tp);
  else
    return 0;
}
