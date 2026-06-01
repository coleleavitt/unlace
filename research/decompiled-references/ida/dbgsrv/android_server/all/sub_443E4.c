/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443E4
// Address: 0x00000000000443E4

//----- (00000000000443E4) ----------------------------------------------------
__int64 __fastcall sub_443E4(__int64 a1)
{
  unsigned int v2; // w20
  _DWORD *v3; // x0
  _DWORD *v4; // x21

  if ( !*(_QWORD *)(a1 + 160) )
  {
    v2 = *(_DWORD *)(a1 + 1844);
    v3 = (_DWORD *)__errno(a1);
    *v3 = 0;
    if ( (byte_166A38 & 1) == 0 )
    {
      v4 = v3;
      if ( (unsigned int)syscall(130, v2, 19) && *v4 == 38 )
      {
        *v4 = 0;
        byte_166A38 = 1;
      }
      else if ( byte_166A38 != 1 )
      {
LABEL_8:
        *(_BYTE *)(*(_QWORD *)(a1 + 1736) + 64LL) = 1;
        goto LABEL_9;
      }
    }
    kill(v2, 19);
    goto LABEL_8;
  }
LABEL_9:
  *(_WORD *)(a1 + 1932) = 256;
  return 1;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 166A38: using guessed type char byte_166A38;
