/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfopen
// Address: 0x000ACD70

//----- (000ACD70) --------------------------------------------------------
FILE *__cdecl qfopen(char *a1, int a2)
{
  FILE *v2; // esi
  char s[20]; // [esp+4h] [ebp-28h] BYREF
  unsigned int v5; // [esp+18h] [ebp-14h]

  v5 = __readgsdword(0x14u);
  qstrncpy((unsigned int)s, a2, 20);
  qstrncat(s, (int)"e", 20);
  v2 = sub_ACE00(a1, s, 8);
  if ( !v2 )
    set_qerrno(1);
  return v2;
}
