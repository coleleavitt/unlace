void __fastcall __noreturn sub_2221CE0(char *buf, unsigned __int8 a2)
{
  void (__fastcall *v2)(__int64, char *, _QWORD); // rbp
  __int64 v3; // r13

  sub_2221AA0(&stru_2D0AAC0);
  v2 = (void (__fastcall *)(__int64, char *, _QWORD))qword_2D0AB30;
  v3 = qword_2D0AB28;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&stru_2D0AAC0);
  if ( v2 )
    v2(v3, buf, a2);
  sub_2221A30("LLVM ERROR: out of memory\n", 0x1Au);
  sub_2221A30(buf, strlen(buf));
  sub_2221A30("\n", 1u);
  abort();
}
