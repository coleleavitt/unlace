/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetcwd
// Address: 0x000000010007C050

//----- (000000010007C050) ----------------------------------------------------
int __fastcall qgetcwd(char *a1, size_t a2)
{
  char *v2; // rax
  const char *v3; // rax

  v2 = getcwd(a1, a2);
  if ( !v2 )
  {
    v3 = (const char *)qerrstr(-1);
    sub_100033990("getcwd: %s", v3);
    LODWORD(v2) = qchdir("getcwd: %s");
  }
  return (int)v2;
}
