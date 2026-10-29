/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: format_timestamp
// Address: 0x00000000000A52D0

//----- (00000000000A52D0) ----------------------------------------------------
__int64 __fastcall format_timestamp(pthread_mutex_t *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v5; // w20
  time_t v8; // x1
  __int64 result; // x0
  const char *v10; // x6
  int v11; // w0
  pthread_mutex_t *v12; // x22
  unsigned __int64 v13; // x21
  int v14; // w0
  struct tm tp; // [xsp+10h] [xbp-70h] BYREF
  __int64 v16; // [xsp+48h] [xbp-38h]

  v5 = a3;
  v8 = HIDWORD(a3);
  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a4 & 1) != 0 )
  {
    if ( !qgmtime(&tp, v8) )
      return 0;
  }
  else if ( !qlocaltime(&tp, v8) )
  {
    return 0;
  }
  if ( (a4 & 2) != 0 )
    v10 = "T";
  else
    v10 = " ";
  v11 = qsnprintf(
          a1,
          a2,
          "%04u-%02u-%02u%s%02u:%02u:%02u",
          tp.tm_year + 1900,
          tp.tm_mon + 1,
          tp.tm_mday,
          v10,
          tp.tm_hour,
          tp.tm_min,
          tp.tm_sec);
  v12 = (pthread_mutex_t *)((char *)a1 + v11);
  v13 = a2 - v11;
  if ( (a4 & 4) != 0 )
  {
    v14 = qsnprintf(v12, v13, ".%03u", v5 / 0x3E8);
    v12 = (pthread_mutex_t *)((char *)v12 + v14);
    v13 -= v14;
  }
  if ( (a4 & 2) == 0 )
    return 1;
  result = 1;
  if ( (a4 & 1) != 0 && v13 >= 2 )
  {
    LOWORD(v12->__lock) = 90;
    return 1;
  }
  return result;
}
