/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc_or_throw
// Address: 0x0007E97C

//----- (0007E97C) --------------------------------------------------------
void *__fastcall qalloc_or_throw(signed int a1)
{
  void *result; // r0

  if ( !a1 )
LABEL_7:
    sub_7E9A0();
  if ( a1 <= 0 )
  {
    *(_DWORD *)_errno(a1) = 12;
    goto LABEL_6;
  }
  result = malloc(a1);
  if ( !result )
  {
LABEL_6:
    set_qerrno(1);
    goto LABEL_7;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
