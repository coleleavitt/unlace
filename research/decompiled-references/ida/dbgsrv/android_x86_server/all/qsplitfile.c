/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsplitfile
// Address: 0x000AE660

//----- (000AE660) --------------------------------------------------------
char *__cdecl qsplitfile(char *s, _DWORD *a2, char **a3)
{
  char *v3; // eax
  char *v4; // ecx

  v3 = strrchr(s, 46);
  if ( v3 )
  {
    v4 = v3 + 1;
    *v3 = 0;
  }
  else
  {
    v4 = nullptr;
  }
  if ( a2 )
    *a2 = s;
  if ( a3 )
    *a3 = v4;
  return s;
}
