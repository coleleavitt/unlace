/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsplitfile
// Address: 0x00000000000C10A0

//----- (00000000000C10A0) ----------------------------------------------------
const char *__fastcall qsplitfile(const char *a1, const char **a2, char **a3)
{
  char *v4; // rax
  char *v5; // rcx

  v4 = strrchr(a1, 46);
  if ( v4 )
  {
    v5 = v4 + 1;
    *v4 = 0;
    if ( !a2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v5 = nullptr;
  if ( a2 )
LABEL_3:
    *a2 = a1;
LABEL_4:
  if ( a3 )
    *a3 = v5;
  return a1;
}
