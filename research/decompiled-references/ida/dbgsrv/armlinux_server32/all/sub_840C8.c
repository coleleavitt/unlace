/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_840C8
// Address: 0x000840C8

//----- (000840C8) --------------------------------------------------------
void __noreturn sub_840C8()
{
  int **v0; // r0
  char *v1; // r5
  char *v2; // r6
  int v3; // [sp+4h] [bp-4h] BYREF

  if ( !byte_D6C6C )
  {
    byte_D6C6C = 1;
    v0 = sub_8BBF0();
    if ( v0 )
    {
      v1 = (char *)v0[1];
      if ( *v1 == 42 )
        ++v1;
      v3 = -1;
      v2 = sub_8AAE4(v1, nullptr, nullptr, &v3);
      fwrite("terminate called after throwing an instance of '", 1u, 0x30u, stderr);
      if ( v3 )
        fputs(v1, stderr);
      else
        fputs(v2, stderr);
      fwrite("'\n", 1u, 2u, stderr);
      if ( !v3 )
        free(v2);
      sub_810D4();
    }
    fwrite("terminate called without an active exception\n", 1u, 0x2Du, stderr);
    abort();
  }
  fwrite("terminate called recursively\n", 1u, 0x1Du, stderr);
  abort();
}
// D6C6C: using guessed type char byte_D6C6C;
