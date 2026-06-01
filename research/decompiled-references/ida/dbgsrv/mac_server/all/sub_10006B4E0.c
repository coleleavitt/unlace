/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B4E0
// Address: 0x000000010006B4E0

//----- (000000010006B4E0) ----------------------------------------------------
__int64 sub_10006B4E0(char *a1, ...)
{
  const char *v1; // rsi
  const char *v2; // rsi
  __int128 v4; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v5; // [rsp+C0h] [rbp-40h]
  va_list va; // [rsp+D0h] [rbp-30h] BYREF

  va_start(va, a1);
  v4 = 0;
  v5 = 0;
  sub_10000C630((__int64)&v4, a1, va);
  if ( *((_QWORD *)&v4 + 1) )
    v1 = (const char *)v4;
  else
    v1 = _s1;
  sub_10006D810("%s\n", v1);
  if ( *((_QWORD *)&v4 + 1) )
    v2 = (const char *)v4;
  else
    v2 = _s1;
  sub_100010070((int)"%s", v2);
  if ( (_QWORD)v4 )
  {
    *((_QWORD *)&v4 + 1) = 0;
    qfree((void *)v4);
  }
  return __stack_chk_guard;
}
