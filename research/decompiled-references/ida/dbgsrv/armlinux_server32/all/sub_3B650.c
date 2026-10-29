/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B650
// Address: 0x0003B650

//----- (0003B650) --------------------------------------------------------
int __fastcall sub_3B650(_DWORD *a1, int a2, signed int a3)
{
  int v3; // r3
  void *v4; // r4
  signed int v5; // r0
  int v6; // r0
  _UNKNOWN **v8; // r3
  signed int v9; // [sp+4h] [bp-Ch]
  unsigned __int8 v10; // [sp+Bh] [bp-5h] BYREF

  v10 = 0;
  if ( a2 < 0 )
  {
    if ( dword_D3CE8 <= (unsigned int)-a2 )
      return 0;
    v9 = a3;
    v8 = &off_D3CEC[-6 * a2];
    v4 = v8[4];
    v5 = sub_3F654((const char *)v8[2], (char *)&v10);
    a3 = v9;
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || (unsigned int)a2 >= a1[1] )
      return 0;
    v3 = *(_DWORD *)(*a1 + 4 * a2);
    v4 = *(void **)(v3 + 36);
    v5 = *(_DWORD *)(v3 + 12);
  }
  if ( (int)v4 + a3 < v5 )
    return 0;
  if ( v5 < a3 )
    v6 = (v10 ^ 1) & 1;
  else
    v6 = 0;
  return v6 ^ 1;
}
// D3CE8: using guessed type int dword_D3CE8;
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
