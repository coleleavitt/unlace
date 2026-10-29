/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50ED8
// Address: 0x00050ED8

//----- (00050ED8) --------------------------------------------------------
int __fastcall sub_50ED8(int *a1, int a2, _DWORD *a3, int a4)
{
  int v5; // r7
  int v6; // r5
  int v7; // r9
  int v9; // r2
  int v10; // r10
  int result; // r0
  char v12[8]; // [sp+0h] [bp-1Ch] BYREF
  int v13; // [sp+8h] [bp-14h]
  int v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+14h] [bp-8h]

  v5 = a1[1];
  v6 = a1[21];
  a1[1] = a2;
  v7 = a1[20];
  v9 = _stack_chk_guard;
  a1[21] = 0;
  a1[20] = a4;
  v13 = 0;
  v14 = 0;
  v12[0] = 1;
  v15 = v9;
  v10 = *a1;
  result = sub_50C78((int)a1, (int)v12);
  if ( !result )
    *a3 = v13;
  *a1 = v10;
  a1[1] = v5;
  a1[20] = v7;
  a1[21] = v6;
  return result;
}
