/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD940
// Address: 0x080CD940

//----- (080CD940) --------------------------------------------------------
FILE *__usercall sub_80CD940@<eax>(int a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  FILE *stream; // esi
  char *v6; // edi
  int v7; // eax
  int v9; // eax
  FILE *v10; // eax

  if ( *a2 == 119 )
  {
    v9 = sub_80CEB00(a1, 438, a3);
    if ( v9 == -1 )
      return nullptr;
    v10 = fdopen(v9, a2);
    stream = v10;
    if ( !v10 )
      return nullptr;
    if ( !sub_80CEFD0((int)v10, 0, 0) )
      return stream;
    goto LABEL_8;
  }
  stream = (FILE *)fopen64(a1, a2);
  if ( stream )
  {
    v6 = strpbrk(a2, "wa+");
    v7 = fileno(stream);
    if ( !sub_80CE9C0(v7, 2 * (v6 != nullptr), a3) )
      return stream;
LABEL_8:
    sub_80CF060(stream);
  }
  return nullptr;
}
// 804B3C0: using guessed type int __cdecl fopen64(_DWORD, _DWORD);
