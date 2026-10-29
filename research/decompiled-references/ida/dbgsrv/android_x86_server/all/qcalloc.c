/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcalloc
// Address: 0x000B0C10

//----- (000B0C10) --------------------------------------------------------
void *__cdecl qcalloc(unsigned int a1, unsigned int a2)
{
  int v2; // ecx
  void *result; // eax

  v2 = a1 * a2;
  result = nullptr;
  if ( a1 * a2 )
  {
    if ( a1 && a2 )
    {
      if ( v2 <= 0 || 0xFFFFFFFF / a2 < a1 )
        goto LABEL_6;
    }
    else if ( v2 <= 0 )
    {
LABEL_6:
      *(_DWORD *)__errno(v2) = 12;
      set_qerrno(1);
LABEL_9:
      set_qerrno(1);
      return nullptr;
    }
    result = calloc(a1 * a2, 1u);
    if ( result )
      return result;
    goto LABEL_9;
  }
  return result;
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
