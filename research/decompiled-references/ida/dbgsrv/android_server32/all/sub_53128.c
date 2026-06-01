/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53128
// Address: 0x00053128

//----- (00053128) --------------------------------------------------------
int __fastcall sub_53128(int a1, int a2, int a3)
{
  int v4; // r0
  _BYTE *v5; // r4
  char v6; // r0
  int v7; // r2
  int v8; // r1
  char v9; // r2
  int v12; // [sp+8h] [bp-3Ch]
  int v13; // [sp+Ch] [bp-38h]
  _BYTE v14[8]; // [sp+10h] [bp-34h] BYREF
  int v15; // [sp+18h] [bp-2Ch]
  int v16; // [sp+1Ch] [bp-28h]
  int v17; // [sp+20h] [bp-24h] BYREF
  __int64 v18; // [sp+28h] [bp-1Ch]
  _BYTE v19[8]; // [sp+30h] [bp-14h] BYREF
  __int64 v20; // [sp+38h] [bp-Ch]
  int v21; // [sp+40h] [bp-4h]

  LOBYTE(v17) = 1;
  v18 = 0;
  sub_54B5C(a1, (int)&v17, a3);
  v12 = a1;
  v13 = a1 + 444;
  while ( 1 )
  {
    v4 = *(unsigned __int16 *)(*(_DWORD *)v13 + 12);
    if ( v4 != 31868 )
      break;
    v19[0] = 1;
    v20 = 0;
    sub_54B5C(a1, (int)v19, 1);
    v18 = (v18 | v20) != 0;
    LOBYTE(v17) = 0;
  }
  if ( v4 == 63 )
  {
    v19[0] = 1;
    v20 = 0;
    sub_53128(a1, v19);
    if ( *(_WORD *)(*(_DWORD *)v13 + 12) != 58 )
      sub_52FF6(a1);
    v5 = v14;
    v14[0] = 1;
    v16 = 0;
    v15 = 0;
    sub_53128(v12, v14);
    if ( v18 )
      v5 = v19;
    v6 = *v5;
    v7 = *((_DWORD *)v5 + 3);
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v5 + 2);
    *(_DWORD *)(a2 + 12) = v7;
    *(_BYTE *)a2 = v6;
  }
  else
  {
    v8 = HIDWORD(v18);
    v9 = v17;
    *(_DWORD *)(a2 + 8) = v18;
    *(_DWORD *)(a2 + 12) = v8;
    *(_BYTE *)a2 = v9;
  }
  return _stack_chk_guard - v21;
}
