/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64F94
// Address: 0x00064F94

//----- (00064F94) --------------------------------------------------------
int __fastcall sub_64F94(_DWORD *a1, unsigned int *a2, int a3)
{
  int v4; // r6
  int v5; // r3
  _DWORD *v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r4
  int result; // r0
  int (*v10)(); // r6
  int v11; // r0
  unsigned int *v12; // [sp+0h] [bp-8h]
  int v13; // [sp+4h] [bp-4h]

  v4 = a1[114];
  if ( v4 < 0 )
  {
    v10 = *(int (**)())(*a1 + 308);
    if ( v10 == sub_150C8 || (v12 = a2, v13 = a3, v11 = v10(), v4 = v11, v11 < 0) )
    {
      a1[114] = 0;
      return 6;
    }
    a2 = v12;
    a3 = v13;
    if ( v11 >= 16 )
      v4 = 16;
    a1[114] = v4;
  }
  if ( !v4 )
    return 6;
  v5 = a1[117];
  if ( a3 == v5 )
    return 4;
  v6 = a1;
  v7 = -1;
  v8 = 0;
  while ( 1 )
  {
    v6 += 3;
    if ( ((v5 == -1) & (v7 >> 31)) != 0 )
      v7 = v8;
    if ( ++v8 == v4 )
      break;
    v5 = v6[117];
    if ( v5 == a3 )
      return 4;
  }
  if ( v7 == -1 )
    return 6;
  result = (int)a2;
  if ( a2 )
  {
    result = 0;
    *a2 = v7;
  }
  return result;
}
