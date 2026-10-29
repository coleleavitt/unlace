/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23540
// Address: 0x00023540

//----- (00023540) --------------------------------------------------------
int __fastcall sub_23540(int a1)
{
  __pid_t v2; // r5
  _DWORD *v3; // r0
  __pid_t v4; // r3
  _DWORD *v5; // r6

  if ( !*(_DWORD *)(a1 + 76) )
  {
    v2 = *(_DWORD *)(a1 + 968);
    v3 = (_DWORD *)_errno(968);
    v4 = v2;
    v5 = v3;
    *v3 = 0;
    if ( !byte_DE330 )
    {
      if ( syscall(238, v2, 19) && *v5 == 38 )
      {
        *v5 = 0;
        byte_DE330 = 1;
        v4 = v2;
      }
      else
      {
        v4 = v2;
        if ( byte_DE330 != 1 )
        {
LABEL_8:
          *(_BYTE *)(*(_DWORD *)(a1 + 912) + 44) = 1;
          goto LABEL_9;
        }
      }
    }
    kill(v4, 19);
    goto LABEL_8;
  }
LABEL_9:
  *(_WORD *)(a1 + 1020) = 256;
  return 1;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// DE330: using guessed type char byte_DE330;
