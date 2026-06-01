/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B39C
// Address: 0x0007B39C

//----- (0007B39C) --------------------------------------------------------
int __fastcall sub_7B39C(int a1, int a2, int a3, int a4)
{
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int v9; // [sp+0h] [bp-Ch]
  int v10; // [sp+4h] [bp-8h]
  int v11; // [sp+8h] [bp-4h]
  int savedregs; // [sp+Ch] [bp+0h]
  int savedregs_4; // [sp+10h] [bp+4h]

  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  v11 = a1 + 12;
  v5 = 1;
  if ( a3 )
  {
    v10 = 1;
    v6 = a1 + 68;
    while ( 1 )
    {
      v5 = 0;
      sub_865F0(v11, 0, a3, a4, v9, v10, v11, savedregs, savedregs_4);
      if ( v7 < 0 )
        break;
      if ( !*(_DWORD *)(a1 + 28) )
      {
        if ( *(_DWORD *)(a1 + 24) - v6 != 0x8000 )
        {
          if ( !under_debugger )
            interr(3334);
          __debugbreak();
        }
        if ( !(*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 8) + 8))(
                *(_DWORD *)(a1 + 8),
                a1 + 68,
                0x8000) )
          return v5;
        *(_DWORD *)(a1 + 24) = v6;
        *(_DWORD *)(a1 + 28) = 0x8000;
      }
      if ( !*(_DWORD *)(a1 + 16) )
        return v10;
    }
    sub_7B1AC(a1, -v7);
    return 0;
  }
  return v5;
}
// 7B3C0: variable 'v11' is possibly undefined
// 7B3C0: variable 'a3' is possibly undefined
// 7B3C0: variable 'a4' is possibly undefined
// 7B3C0: variable 'v9' is possibly undefined
// 7B3C0: variable 'v10' is possibly undefined
// 7B3C0: variable 'savedregs' is possibly undefined
// 7B3C0: variable 'savedregs_4' is possibly undefined
// 7B3C6: variable 'v7' is possibly undefined
// E0550: using guessed type char under_debugger;
