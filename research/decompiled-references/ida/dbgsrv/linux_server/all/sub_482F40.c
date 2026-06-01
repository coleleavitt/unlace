/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482F40
// Address: 0x0000000000482F40

//----- (0000000000482F40) ----------------------------------------------------
bool __fastcall sub_482F40(char *arg)
{
  pthread_mutex_t *v1; // rbp
  pthread_t v2; // rax

  v1 = *((pthread_mutex_t **)arg + 7);
  sub_482EC0(v1);
  if ( !arg[200] )
  {
    v2 = sub_482E20((void *(*)(void *))sub_483040, arg);
    *((_QWORD *)arg + 8) = v2;
    if ( !v2 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(1258);
      BUG();
    }
    arg[200] = 1;
    pthread_sigmask(1, (const __sigset_t *)(arg + 72), nullptr);
  }
  return sub_482F10(v1);
}
// 4C94E1: using guessed type char byte_4C94E1;
