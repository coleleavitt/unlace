/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrdup
// Address: 0x00000001000744A8

//----- (00000001000744A8) ----------------------------------------------------
char *__fastcall qstrdup(char *result)
{
  unsigned __int8 *v1; // x19
  size_t v2; // x20
  const char *v3; // x0
  __int64 v4; // x2
  const char *v5; // x20

  if ( result )
  {
    v1 = (unsigned __int8 *)result;
    v2 = strlen(result);
    v3 = (const char *)malloc(v2 + 1);
    if ( v3 )
    {
      v4 = v2 + 1;
      v5 = v3;
      qstrncpy(v3, v1, v4);
      return (char *)v5;
    }
    else
    {
      set_qerrno();
      *__error() = 12;
      set_qerrno();
      return nullptr;
    }
  }
  return result;
}
