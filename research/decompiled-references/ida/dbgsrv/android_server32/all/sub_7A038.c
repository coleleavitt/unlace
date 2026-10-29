/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A038
// Address: 0x0007A038

//----- (0007A038) --------------------------------------------------------
unsigned int sub_7A038()
{
  char *s; // [sp+4h] [bp-14h] BYREF
  int v2; // [sp+8h] [bp-10h]
  int v3; // [sp+Ch] [bp-Ch]
  pthread_mutex_t *mutex[2]; // [sp+10h] [bp-8h] BYREF

  sub_80634(mutex);
  if ( !dword_DF52C )
  {
    v2 = 0;
    s = nullptr;
    v3 = 0;
    if ( qgetenv("IDAUSR", (int)&s) )
      sub_7A4F4((int)&dword_DF528, s);
    if ( !dword_DF52C )
    {
      if ( sub_79EB4((int)&s) )
        sub_24B4C((int)&dword_DF528, (int)&s);
      if ( !dword_DF52C )
        sub_1C9E4(
          "IDA could not find a valid user directory.\n"
          "Please make sure that the HOME or IDAUSR environment variables are set.\n");
    }
    if ( s )
    {
      v2 = 0;
      qfree(s);
      v3 = 0;
      s = nullptr;
    }
  }
  qmutex_unlock(mutex[0]);
  return _stack_chk_guard - (unsigned int)mutex[1];
}
// DF528: using guessed type int dword_DF528;
// DF52C: using guessed type int dword_DF52C;
