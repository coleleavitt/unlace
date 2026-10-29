/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_506F8
// Address: 0x000506F8

//----- (000506F8) --------------------------------------------------------
int __fastcall sub_506F8(int a1, int a2, int a3)
{
  __int64 v5; // r0
  int v6; // r3
  int v7; // r3
  unsigned __int8 v9[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v10; // [sp+8h] [bp-10h]

  LODWORD(v5) = sub_50638(a1, (unsigned __int8 *)a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 592);
      v10 = 0;
      v9[0] = 1;
      v7 = *(unsigned __int16 *)(v6 + 12);
      if ( v7 != 15677 )
        break;
      sub_50638(a1, v9, 1);
      v5 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)a2 = 0;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = v5 == v10;
    }
    if ( v7 != 8509 )
      break;
    sub_50638(a1, v9, 1);
    v5 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)a2 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = v5 != v10;
  }
  return v5;
}
