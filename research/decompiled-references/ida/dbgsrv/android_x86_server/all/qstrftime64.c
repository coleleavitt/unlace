/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrftime64
// Address: 0x000B1E00

//----- (000B1E00) --------------------------------------------------------
size_t __cdecl qstrftime64(char *s, size_t maxsize, char *format, int a4, time_t a5)
{
  struct tm tp; // [esp+8h] [ebp-40h] BYREF
  time_t timer; // [esp+38h] [ebp-10h] BYREF
  unsigned int v8; // [esp+3Ch] [ebp-Ch]

  v8 = __readgsdword(0x14u);
  timer = a5;
  if ( a5 >= 0 && localtime_r(&timer, &tp) )
    return strftime(s, maxsize, format, &tp);
  else
    return 0;
}
