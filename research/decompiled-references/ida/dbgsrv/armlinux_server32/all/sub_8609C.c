/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8609C
// Address: 0x0008609C

//----- (0008609C) --------------------------------------------------------
int __fastcall sub_8609C(int a1)
{
  unsigned __int8 *v1; // r1
  int *v3; // r5
  int v4; // r3
  bool v5; // zf
  int v6; // r2
  bool v7; // zf
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r2
  int result; // r0
  _DWORD *v12; // r2
  int v13; // r2
  int v14; // [sp+4h] [bp-8h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 12);
  v14 = 0;
  v3 = &v14;
  v4 = *v1;
  v5 = v4 == 0;
  if ( *v1 )
    v5 = v4 == 69;
  v6 = v5;
  if ( v4 == 46 )
    v6 |= 1u;
  if ( v6 )
    return 0;
  do
  {
    v7 = v4 == 79;
    if ( v4 != 79 )
      v7 = v4 == 82;
    if ( v7 && v1[1] == 69 )
      break;
    v8 = sub_857B4(a1);
    if ( !v8 )
      return 0;
    v9 = sub_841E0(a1, 46, (unsigned int)v8);
    *v3 = v9;
    v3 = (int *)(v9 + 12);
    if ( !v9 )
      return 0;
    v1 = *(unsigned __int8 **)(a1 + 12);
    v4 = *v1;
    v10 = v4 == 69;
    if ( !*v1 )
      v10 = 1;
    if ( v4 == 46 )
      v10 |= 1u;
  }
  while ( !v10 );
  result = v14;
  if ( !v14 )
    return 0;
  if ( !*(_DWORD *)(v14 + 12) )
  {
    v12 = *(_DWORD **)(v14 + 8);
    if ( *v12 == 39 )
    {
      v13 = v12[2];
      if ( *(_DWORD *)(v13 + 16) == 9 )
      {
        *(_DWORD *)(a1 + 48) -= *(_DWORD *)(v13 + 4);
        *(_DWORD *)(result + 8) = 0;
      }
    }
  }
  return result;
}
