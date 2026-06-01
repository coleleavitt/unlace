/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44650
// Address: 0x0000000000044650

//----- (0000000000044650) ----------------------------------------------------
__int64 __fastcall sub_44650(__int64 a1)
{
  unsigned int v1; // r14d
  _DWORD *v2; // rax
  _DWORD *v3; // rbp

  if ( !*(_QWORD *)(a1 + 160) )
  {
    v1 = *(_DWORD *)(a1 + 1140);
    v2 = (_DWORD *)__errno(a1);
    *v2 = 0;
    if ( !byte_155770 )
    {
      v3 = v2;
      if ( (unsigned int)syscall(200, v1, 19) && *v3 == 38 )
      {
        *v3 = 0;
        byte_155770 = 1;
      }
      else if ( byte_155770 != 1 )
      {
LABEL_8:
        *(_BYTE *)(*(_QWORD *)(a1 + 1032) + 64LL) = 1;
        goto LABEL_9;
      }
    }
    kill(v1, 19);
    goto LABEL_8;
  }
LABEL_9:
  *(_WORD *)(a1 + 1228) = 256;
  return 1;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 155770: using guessed type char byte_155770;
