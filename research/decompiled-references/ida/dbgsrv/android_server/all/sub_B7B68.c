/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7B68
// Address: 0x00000000000B7B68

//----- (00000000000B7B68) ----------------------------------------------------
pthread_mutex_t *sub_B7B68()
{
  void *v1; // x0
  pthread_mutex_t ptr; // [xsp+8h] [xbp-48h] BYREF

  ptr.__list.__next = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_C0EAC(&ptr.__list.__prev);
  if ( !qword_167DB8 )
  {
    memset(&ptr, 0, 24);
    if ( (qgetenv("IDAUSR", (__int64)&ptr) & 1) != 0 )
      sub_B81D8((const char *)&qword_167DB0, (char *)ptr.__align);
    if ( !qword_167DB8 )
    {
      if ( (sub_B7928(&ptr) & 1) != 0 )
        sub_46FA4((pthread_mutex_t *)&qword_167DB0, (__int64)&ptr);
      if ( !qword_167DB8 )
      {
        sub_3B1DC(
          "IDA could not find a valid user directory.\n"
          "Please make sure that the HOME or IDAUSR environment variables are set.\n");
        sub_39134(v1);
      }
    }
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
  }
  return qmutex_unlock((pthread_mutex_t *)ptr.__list.__prev);
}
// B7C3C: variable 'v1' is possibly undefined
// 166D80: using guessed type __int64[512];
// 167DB0: using guessed type __int64 qword_167DB0;
// 167DB8: using guessed type __int64 qword_167DB8;
