/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetcwd
// Address: 0x000AEA00

//----- (000AEA00) --------------------------------------------------------
char *__cdecl qgetcwd(char *buf, size_t size)
{
  char *result; // eax
  int v3; // eax

  result = getcwd(buf, size);
  if ( !result )
  {
    v3 = qerrstr(-1);
    sub_1DE10("getcwd: %s", v3);
  }
  return result;
}
