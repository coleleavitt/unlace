/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42494
// Address: 0x00042494

//----- (00042494) --------------------------------------------------------
int __fastcall sub_42494(int *a1, int *a2)
{
  bool v2; // zf
  int v5; // r8
  int v6; // lr
  int v7; // r3
  int result; // r0
  int v9; // r1
  int v10; // lr
  int v11; // [sp+4h] [bp-1Ch]
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]
  int v14; // [sp+10h] [bp-10h]

  v2 = a2 == nullptr;
  if ( a2 )
    v2 = a1 == nullptr;
  if ( v2 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(2657);
  }
  v5 = *a2;
  v6 = a2[1];
  v11 = *a1;
  v12 = a1[1];
  v13 = a1[2];
  v14 = a1[3];
  v7 = a2[3];
  result = a1[4];
  v9 = a1[5];
  a1[2] = a2[2];
  a1[3] = v7;
  *a1 = v5;
  a1[1] = v6;
  v10 = a2[5];
  a1[4] = a2[4];
  a1[5] = v10;
  a2[2] = v13;
  a2[3] = v14;
  *a2 = v11;
  a2[1] = v12;
  a2[4] = result;
  a2[5] = v9;
  return result;
}
// D5C00: using guessed type char under_debugger;
