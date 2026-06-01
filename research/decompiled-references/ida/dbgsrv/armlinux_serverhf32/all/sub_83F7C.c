/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83F7C
// Address: 0x00083F7C

//----- (00083F7C) --------------------------------------------------------
void __noreturn sub_83F7C()
{
  int **v0; // r0
  char *v1; // r5
  char *v2; // r6
  int v3; // [sp+4h] [bp-4h] BYREF

  if ( !byte_D5C4C )
  {
    byte_D5C4C = 1;
    v0 = sub_8AA90();
    if ( v0 )
    {
      v1 = (char *)v0[1];
      if ( *v1 == 42 )
        ++v1;
      v3 = -1;
      v2 = sub_8A998(v1, nullptr, nullptr, &v3);
      fwrite("terminate called after throwing an instance of '", 1u, 0x30u, stderr);
      if ( v3 )
        fputs(v1, stderr);
      else
        fputs(v2, stderr);
      fwrite("'\n", 1u, 2u, stderr);
      if ( !v3 )
        free(v2);
      sub_80DD0();
    }
    fwrite("terminate called without an active exception\n", 1u, 0x2Du, stderr);
    abort();
  }
  fwrite("terminate called recursively\n", 1u, 0x1Du, stderr);
  abort();
}
// D5C4C: using guessed type char byte_D5C4C;
