__int64 __fastcall cerror(__int64 a1)
{
  int v1; // w19

  v1 = a1;
  _pthread_exit_if_canceled(a1);
  cerror_nocancel(v1);
  return -1;
}
