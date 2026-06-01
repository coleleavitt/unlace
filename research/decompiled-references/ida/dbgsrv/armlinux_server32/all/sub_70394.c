/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70394
// Address: 0x00070394

//----- (00070394) --------------------------------------------------------
int __fastcall sub_70394(int *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v4; // r6
  unsigned int v5; // r3
  int v6; // r0
  unsigned __int8 *v8; // r3
  int v9; // r7
  unsigned __int8 v10; // r0
  unsigned __int8 *v11; // r8
  int v12; // r0
  unsigned __int8 *v14; // [sp+8h] [bp-8h] BYREF

  if ( a1 )
    *a1 = -1;
  v4 = *a2;
  v5 = *a2 - 1;
  if ( v5 < a3 )
    return 0;
  v6 = *(unsigned __int8 *)(v4 - 1);
  if ( (v6 & 0x80) == 0 )
  {
    if ( a1 )
      *a1 = v6;
    *a2 = v5;
    return 1;
  }
  if ( (v6 & 0xC0) != 0x80 )
    return 0;
  v8 = (unsigned __int8 *)(v4 - 2);
  if ( a3 > v4 - 2 )
    return 0;
  v9 = 2;
  while ( 1 )
  {
    v10 = *v8;
    v11 = v8--;
    if ( (v10 & 0xC0) != 0x80 )
      break;
    if ( a3 <= (unsigned int)v8 && ++v9 != 5 )
      continue;
    return 0;
  }
  v14 = v11;
  v12 = sub_70290(&v14);
  if ( v12 == -1 || (unsigned int)v14 > v4 )
    return 0;
  if ( a1 )
    *a1 = v12;
  *a2 = (unsigned int)v11;
  return 1;
}
