/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CE78
// Address: 0x000000000047CE78

//----- (000000000047CE78) ----------------------------------------------------
__int64 sub_47CE78()
{
  int v0; // w0
  __int64 i; // x19
  void *v2; // x2

  v0 = 2;
  for ( i = 0; ; v0 = *(_DWORD *)((char *)qword_4C9CE8 + i) )
  {
    i += 4;
    signal(v0, (__sighandler_t)sub_47C458);
    if ( i == 24 )
      break;
  }
  v2 = nullptr;
  if ( &qword_51F728 )
    v2 = (void *)qword_51F728;
  return __cxa_atexit((void (*)(void *))sub_47CA40, nullptr, v2);
}
// 4C9CE8: using guessed type __int64 qword_4C9CE8[3];
// 51F728: using guessed type __int64 qword_51F728;
