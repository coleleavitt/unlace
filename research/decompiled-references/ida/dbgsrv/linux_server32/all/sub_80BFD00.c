/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BFD00
// Address: 0x080BFD00

//----- (080BFD00) --------------------------------------------------------
int sub_80BFD00()
{
  char *v0; // esi

  v0 = (char *)dword_80E0440;
  do
  {
    v0 += 4;
    signal(*((_DWORD *)v0 - 1), (__sighandler_t)sub_80BFA10);
  }
  while ( v0 != "16loader_failure_t" );
  return sub_80D7A80((void (*)(void *))sub_80BFB20);
}
// 80E0440: using guessed type int dword_80E0440[6];
