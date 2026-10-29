/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F0E0
// Address: 0x000000000049F0E0

//----- (000000000049F0E0) ----------------------------------------------------
void __noreturn sub_49F0E0()
{
  __int64 v0; // x0
  char *v1; // x19
  int v2; // w0
  char *v3; // x22
  int v4; // [xsp+3Ch] [xbp+3Ch] BYREF

  if ( !byte_524588 )
  {
    byte_524588 = 1;
    v0 = sub_4AEDD0();
    if ( v0 )
    {
      v1 = *(char **)(v0 + 8);
      v2 = (unsigned __int8)*v1;
      v4 = -1;
      if ( v2 == 42 )
        ++v1;
      v3 = sub_4AEC10(v1, nullptr, nullptr, &v4);
      fwrite("terminate called after throwing an instance of '", 1u, 0x30u, stderr);
      if ( v4 )
        fputs(v1, stderr);
      else
        fputs(v3, stderr);
      fwrite("'\n", 1u, 2u, stderr);
      if ( v4 )
        sub_49DD38();
      free(v3);
      sub_49DD38();
    }
    fwrite("terminate called without an active exception\n", 1u, 0x2Du, stderr);
    abort();
  }
  fwrite("terminate called recursively\n", 1u, 0x1Du, stderr);
  abort();
}
// 523500: using guessed type __int64 qword_523500[512];
// 524588: using guessed type char byte_524588;
