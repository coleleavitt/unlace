/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD9C0
// Address: 0x00000000000BD9C0

//----- (00000000000BD9C0) ----------------------------------------------------
unsigned __int64 sub_BD9C0()
{
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v2; // [rsp+10h] [rbp-28h]
  pthread_mutex_t *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = (pthread_mutex_t *)__readfsqword(0x28u);
  sub_C5BE0(v3);
  if ( !*((_QWORD *)&xmmword_157B00 + 1) )
  {
    *(_OWORD *)ptr = 0;
    v2 = 0;
    if ( (unsigned __int8)qgetenv("IDAUSR", (__int64)ptr) )
      sub_BE1B0((__int64)&xmmword_157B00, (char *)ptr[0]);
    if ( !*((_QWORD *)&xmmword_157B00 + 1) )
    {
      if ( (unsigned __int8)sub_BD790((__int64)ptr) )
        sub_47F30((__int64)&xmmword_157B00, (__int64)ptr);
      if ( !*((_QWORD *)&xmmword_157B00 + 1) )
        sub_3A5C0(
          "IDA could not find a valid user directory.\n"
          "Please make sure that the HOME or IDAUSR environment variables are set.\n");
    }
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v2 = 0;
    }
  }
  qmutex_unlock(v3[0]);
  return __readfsqword(0x28u);
}
// 157B00: using guessed type __int128 xmmword_157B00;
