/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_544EC
// Address: 0x000544EC

//----- (000544EC) --------------------------------------------------------
int __fastcall sub_544EC(int a1, unsigned __int8 *a2, int a3)
{
  _DWORD *v5; // r4
  int v6; // r0
  __int64 v7; // r0
  unsigned int v8; // r2
  __int64 v9; // kr00_8
  unsigned int v10; // r2
  unsigned __int8 *v12; // [sp+Ch] [bp-1Ch]
  unsigned __int8 v13[8]; // [sp+14h] [bp-14h] BYREF
  __int64 v14; // [sp+1Ch] [bp-Ch]
  int v15; // [sp+24h] [bp-4h]

  sub_539B0(a1, a2, a3);
  v12 = a2;
  v5 = a2 + 8;
  while ( 1 )
  {
    v13[0] = 1;
    v14 = 0;
    v6 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 444) + 12);
    if ( v6 != 8509 )
      break;
    sub_539B0(a1, v13, 1);
    v9 = v14;
    v10 = v5[1];
    v5[1] = 0;
    *v5 = v9 != __PAIR64__(v10, *v5);
LABEL_2:
    *v12 = 0;
  }
  if ( v6 == 15677 )
  {
    sub_539B0(a1, v13, 1);
    v7 = v14;
    v8 = v5[1];
    v5[1] = 0;
    *v5 = v7 == __PAIR64__(v8, *v5);
    goto LABEL_2;
  }
  return _stack_chk_guard - v15;
}
