/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54A54
// Address: 0x00054A54

//----- (00054A54) --------------------------------------------------------
int __fastcall sub_54A54(int a1, int a2, int a3)
{
  int v4; // r2
  int v5; // r7
  int i; // r0
  int v7; // r7
  int v8; // r1
  int v9; // r1
  int v10; // r0
  _DWORD *v13; // [sp+Ch] [bp-2Ch]
  int v14; // [sp+10h] [bp-28h]
  unsigned __int8 v15[8]; // [sp+14h] [bp-24h] BYREF
  int v16; // [sp+1Ch] [bp-1Ch]
  int v17; // [sp+20h] [bp-18h]
  unsigned __int8 v18[8]; // [sp+24h] [bp-14h] BYREF
  int v19; // [sp+2Ch] [bp-Ch]
  int v20; // [sp+30h] [bp-8h]
  int v21; // [sp+34h] [bp-4h]

  sub_545E8(a1, (unsigned __int8 *)a2, a3);
  v4 = a1;
  v5 = a1 + 444;
  for ( i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 444) + 12);
        i == 94;
        i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 444) + 12) )
  {
    v18[0] = 1;
    v19 = 0;
    v20 = 0;
    v7 = v4;
    sub_545E8(v4, v18, 1);
    v8 = v19;
    *(_DWORD *)(a2 + 12) ^= v20;
    v4 = v7;
    v5 = a1 + 444;
    *(_DWORD *)(a2 + 8) ^= v8;
  }
  if ( i == 124 )
  {
    v13 = (_DWORD *)(a2 + 8);
    v14 = v4;
    do
    {
      v15[0] = 1;
      v16 = 0;
      v17 = 0;
      sub_545E8(v4, v15, 1);
      if ( *(_WORD *)(*(_DWORD *)v5 + 12) == 94 )
      {
        do
        {
          v18[0] = 1;
          v19 = 0;
          v20 = 0;
          sub_545E8(v14, v18, 1);
          v9 = v20 ^ v17;
          v17 ^= v20;
          v10 = v16 ^ v19;
          v16 ^= v19;
        }
        while ( *(_WORD *)(*(_DWORD *)v5 + 12) == 94 );
      }
      else
      {
        v10 = v16;
        v9 = v17;
      }
      v13[1] |= v9;
      *v13 |= v10;
      v4 = v14;
    }
    while ( *(_WORD *)(*(_DWORD *)v5 + 12) == 124 );
  }
  return _stack_chk_guard - v21;
}
