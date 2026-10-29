/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55054
// Address: 0x00055054

//----- (00055054) --------------------------------------------------------
int __fastcall sub_55054(int *a1, int a2, _DWORD *a3, int a4)
{
  int v5; // r5
  int result; // r0
  int v8; // [sp+8h] [bp-20h]
  int v9; // [sp+Ch] [bp-1Ch]
  int v10; // [sp+10h] [bp-18h]
  char v11[8]; // [sp+14h] [bp-14h] BYREF
  int v12; // [sp+1Ch] [bp-Ch]
  int v13; // [sp+20h] [bp-8h]

  v10 = a1[1];
  a1[1] = a2;
  v9 = a1[19];
  a1[19] = 0;
  v8 = a1[18];
  a1[18] = a4;
  v5 = *a1;
  v11[0] = 1;
  v13 = 0;
  v12 = 0;
  result = sub_54E2C((int)a1, (int)v11);
  if ( !result )
    *a3 = v12;
  *a1 = v5;
  a1[1] = v10;
  a1[18] = v8;
  a1[19] = v9;
  return result;
}
