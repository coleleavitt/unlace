/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26EC0
// Address: 0x00026EC0

//----- (00026EC0) --------------------------------------------------------
int __fastcall sub_26EC0(int a1, int a2)
{
  __pid_t v2; // r4
  _DWORD *v3; // r5

  v2 = *(_DWORD *)(a2 + 968);
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)_errno(v2 + 1);
    *v3 = 0;
    if ( byte_DE330 )
    {
LABEL_7:
      kill(v2, 9);
      return 0;
    }
    if ( syscall(238, v2, 9) && *v3 == 38 )
    {
      *v3 = 0;
      byte_DE330 = 1;
      goto LABEL_7;
    }
    if ( byte_DE330 == 1 )
      goto LABEL_7;
  }
  return 0;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// DE330: using guessed type char byte_DE330;
