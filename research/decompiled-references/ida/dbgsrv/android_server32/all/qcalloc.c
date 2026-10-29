/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcalloc
// Address: 0x0007E8E6

//----- (0007E8E6) --------------------------------------------------------
unsigned int __fastcall qcalloc(unsigned int a1, unsigned int a2)
{
  signed int v3; // r4
  unsigned int result; // r0

  v3 = a1 * a2;
  result = 0;
  if ( v3 )
  {
    if ( a1 && a2 )
    {
      result = 0xFFFFFFFF / a2;
      if ( v3 < 1 || result < a1 )
        goto LABEL_6;
    }
    else if ( v3 <= 0 )
    {
LABEL_6:
      *(_DWORD *)_errno(result) = 12;
      set_qerrno(1);
LABEL_10:
      set_qerrno(1);
      return 0;
    }
    result = (unsigned int)calloc(v3, 1u);
    if ( !result )
      goto LABEL_10;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
