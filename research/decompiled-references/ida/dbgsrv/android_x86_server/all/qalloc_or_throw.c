/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc_or_throw
// Address: 0x000B0D20

//----- (000B0D20) --------------------------------------------------------
void *__cdecl qalloc_or_throw(int size)
{
  int v1; // ecx
  void *result; // eax

  if ( !size )
LABEL_7:
    sub_B0D70();
  if ( size <= 0 )
  {
    *(_DWORD *)__errno(v1) = 12;
    goto LABEL_6;
  }
  result = malloc(size);
  if ( !result )
  {
LABEL_6:
    set_qerrno(1);
    goto LABEL_7;
  }
  return result;
}
// B0D51: variable 'v1' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
