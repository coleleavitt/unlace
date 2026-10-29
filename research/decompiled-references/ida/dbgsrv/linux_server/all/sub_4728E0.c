/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4728E0
// Address: 0x00000000004728E0

//----- (00000000004728E0) ----------------------------------------------------
int sub_4728E0()
{
  __int64 *v0; // rbx
  int v1; // edi

  v0 = qword_491820;
  do
  {
    v1 = *(_DWORD *)v0;
    v0 = (__int64 *)((char *)v0 + 4);
    signal(v1, (__sighandler_t)handler);
  }
  while ( v0 != &qword_491820[3] );
  return sub_488F40((void (*)(void *))sub_472750);
}
// 491820: using guessed type __int64 qword_491820[4];
