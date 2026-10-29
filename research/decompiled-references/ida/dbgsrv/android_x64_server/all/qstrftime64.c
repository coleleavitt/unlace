/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrftime64
// Address: 0x00000000000C4010

//----- (00000000000C4010) ----------------------------------------------------
size_t __fastcall qstrftime64(char *s, size_t maxsize, char *format, unsigned __int64 a4)
{
  struct tm tp; // [rsp+8h] [rbp-60h] BYREF
  time_t timer; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  timer = HIDWORD(a4);
  if ( localtime_r(&timer, &tp) )
    return strftime(s, maxsize, format, &tp);
  else
    return 0;
}
