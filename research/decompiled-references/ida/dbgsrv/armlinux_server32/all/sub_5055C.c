/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5055C
// Address: 0x0005055C

//----- (0005055C) --------------------------------------------------------
int __fastcall sub_5055C(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r3
  int v7; // r3
  unsigned int v8; // r2
  unsigned __int64 v9; // r2
  _BYTE v10[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v11; // [sp+8h] [bp-10h]

  for ( result = sub_50488(a1, a2, a3); ; result = sub_4C214(a2, (int)v10) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(a1 + 592);
        v11 = 0;
        v10[0] = 1;
        v7 = *(unsigned __int16 *)(v6 + 12);
        if ( v7 != 42 )
          break;
        sub_50488(a1, (int)v10, 1);
        v8 = *(_DWORD *)(a2 + 8);
        result = v8 * HIDWORD(v11);
        v9 = v8 * (unsigned __int64)(unsigned int)v11;
        HIDWORD(v9) += result + v11 * *(_DWORD *)(a2 + 12);
        *(_QWORD *)(a2 + 8) = v9;
      }
      if ( v7 != 47 )
        break;
      sub_50488(a1, (int)v10, 1);
      if ( !v11 )
LABEL_11:
        _longjmp_chk(a1 + 200, 86);
      result = sub_4C1D8(a2, (int)v10);
    }
    if ( v7 != 37 )
      break;
    sub_50488(a1, (int)v10, 1);
    if ( !v11 )
      goto LABEL_11;
  }
  return result;
}
// 13EC0: using guessed type void __fastcall __noreturn _longjmp_chk(_DWORD, _DWORD);
