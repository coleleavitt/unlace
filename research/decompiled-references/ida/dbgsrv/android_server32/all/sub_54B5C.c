/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54B5C
// Address: 0x00054B5C

//----- (00054B5C) --------------------------------------------------------
int __fastcall sub_54B5C(int a1, int a2, int a3)
{
  int v4; // r0
  int i; // r1
  int v6; // r1
  int v7; // r7
  int v8; // r3
  __int64 v9; // r0
  int v12; // [sp+14h] [bp-34h]
  int v13; // [sp+20h] [bp-28h]
  unsigned __int8 v14[8]; // [sp+24h] [bp-24h] BYREF
  __int64 v15; // [sp+2Ch] [bp-1Ch]
  unsigned __int8 v16[8]; // [sp+34h] [bp-14h] BYREF
  __int64 v17; // [sp+3Ch] [bp-Ch]
  int v18; // [sp+44h] [bp-4h]

  sub_54760(a1, (unsigned __int8 *)a2, a3);
  v4 = a1;
  v13 = a1 + 444;
  for ( i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 444) + 12); i == 124; i = *(unsigned __int16 *)(*(_DWORD *)v13 + 12) )
  {
    v16[0] = 1;
    v17 = 0;
    sub_54760(v4, v16, 1);
    v6 = v17;
    *(_DWORD *)(a2 + 12) |= HIDWORD(v17);
    v4 = a1;
    *(_DWORD *)(a2 + 8) |= v6;
  }
  if ( i == 9766 )
  {
    do
    {
      v14[0] = 1;
      v15 = 0;
      v7 = v4;
      sub_54760(v4, v14, 1);
      v8 = a1 + 444;
      if ( *(_WORD *)(*(_DWORD *)v13 + 12) == 124 )
      {
        do
        {
          v16[0] = 1;
          v17 = 0;
          sub_54760(v7, v16, 1);
          v8 = a1 + 444;
          v9 = v15 | v17;
          v15 |= v17;
        }
        while ( *(_WORD *)(*(_DWORD *)v13 + 12) == 124 );
      }
      else
      {
        v9 = v15;
      }
      v12 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = (*(_DWORD *)(a2 + 8) | v12) != 0 && v9 != 0;
      *(_BYTE *)a2 = 0;
      v4 = a1;
    }
    while ( *(_WORD *)(*(_DWORD *)v8 + 12) == 9766 );
  }
  return _stack_chk_guard - v18;
}
