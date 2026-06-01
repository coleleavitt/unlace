/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrdup
// Address: 0x000B0CA0

//----- (000B0CA0) --------------------------------------------------------
void *__cdecl qstrdup(char *s)
{
  void *result; // eax
  size_t v2; // edi
  void *v3; // eax
  void *v4; // esi
  int v5; // ecx

  result = nullptr;
  if ( s )
  {
    v2 = strlen(s) + 1;
    v3 = malloc(v2);
    if ( v3 )
    {
      v4 = v3;
      qstrncpy((unsigned int)v3, (int)s, v2);
      return v4;
    }
    else
    {
      set_qerrno(1);
      *(_DWORD *)__errno(v5) = 12;
      set_qerrno(1);
      return nullptr;
    }
  }
  return result;
}
// B0CFD: variable 'v5' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
