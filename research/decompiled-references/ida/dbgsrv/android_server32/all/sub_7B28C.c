/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B28C
// Address: 0x0007B28C

//----- (0007B28C) --------------------------------------------------------
bool __fastcall sub_7B28C(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  _DWORD *v6; // r5
  int v7; // r6
  int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r1
  _BOOL4 result; // r0
  int v13; // [sp+0h] [bp-4h]
  int savedregs; // [sp+4h] [bp+0h]
  int savedregs_4; // [sp+8h] [bp+4h]
  int savedregs_8; // [sp+Ch] [bp+8h]
  int savedregs_12; // [sp+10h] [bp+Ch]

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) >= 2u )
  {
    v6 = (_DWORD *)(a1 + 12);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 24);
    v6 = (_DWORD *)(a1 + 12);
    v7 = a1 + 68;
    while ( 1 )
    {
      v8 = v5 - v7;
      if ( v5 - v7 + *(_DWORD *)(a1 + 28) != 0x8000 )
      {
        if ( !under_debugger )
          interr(3334);
        __debugbreak();
      }
      if ( v8 && (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 8))(*(_DWORD *)(a1 + 8), a1 + 68) )
      {
        *(_DWORD *)(a1 + 24) = v7;
        *(_DWORD *)(a1 + 28) = 0x8000;
      }
      sub_865F0(a1 + 12, 4, v8, a4, v13, savedregs, savedregs_4, savedregs_8, savedregs_12);
      if ( v9 < 0 )
        break;
      v5 = *(_DWORD *)(a1 + 24);
      if ( v5 == v7 )
        goto LABEL_12;
    }
    sub_7B1AC(a1, -v9);
  }
LABEL_12:
  v10 = sub_858EC(v6);
  if ( v10 && *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) <= 1u )
    sub_7B1AC(a1, v10);
  v11 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8));
  result = 0;
  if ( v11 )
    return *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) < 2u;
  return result;
}
// 7B2CC: variable 'v8' is possibly undefined
// 7B2CC: variable 'a4' is possibly undefined
// 7B2CC: variable 'v13' is possibly undefined
// 7B2CC: variable 'savedregs' is possibly undefined
// 7B2CC: variable 'savedregs_4' is possibly undefined
// 7B2CC: variable 'savedregs_8' is possibly undefined
// 7B2CC: variable 'savedregs_12' is possibly undefined
// 7B2D2: variable 'v9' is possibly undefined
// E0550: using guessed type char under_debugger;
