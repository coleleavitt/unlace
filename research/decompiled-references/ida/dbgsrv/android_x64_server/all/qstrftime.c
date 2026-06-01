/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrftime
// Address: 0x00000000000C3F90

//----- (00000000000C3F90) ----------------------------------------------------
size_t __fastcall qstrftime(char *s, size_t maxsize, char *format, time_t a4)
{
  struct tm tp; // [rsp+8h] [rbp-60h] BYREF
  time_t timer; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  timer = a4;
  if ( a4 >= 0 && localtime_r(&timer, &tp) )
    return strftime(s, maxsize, format, &tp);
  else
    return 0;
}
