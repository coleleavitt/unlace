/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrdup
// Address: 0x0007E938

//----- (0007E938) --------------------------------------------------------
void *__fastcall qstrdup(char *a1)
{
  size_t v2; // r6
  void *v3; // r0
  void *v4; // r5
  int v6; // r0

  if ( a1 )
  {
    v2 = strlen(a1) + 1;
    v3 = malloc(v2);
    if ( v3 )
    {
      v4 = v3;
      qstrncpy((unsigned int)v3, (unsigned __int8 *)a1, v2);
      return v4;
    }
    v6 = set_qerrno(1);
    *(_DWORD *)_errno(v6) = 12;
    set_qerrno(1);
  }
  return nullptr;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
