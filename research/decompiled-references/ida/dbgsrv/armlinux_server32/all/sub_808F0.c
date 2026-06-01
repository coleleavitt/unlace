/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808F0
// Address: 0x000808F0

//----- (000808F0) --------------------------------------------------------
int __fastcall sub_808F0(int a1, int a2, int *a3)
{
  int v4; // r2
  void (__fastcall *v5)(int, int, int, int *); // r6
  int v6; // r3
  bool v7; // zf
  int result; // r0
  int v9; // [sp+0h] [bp-14h] BYREF
  int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+8h] [bp-Ch]
  int v12; // [sp+Ch] [bp-8h]

  v4 = *a3;
  v5 = *(void (__fastcall **)(int, int, int, int *))(*(_DWORD *)a1 + 24);
  v9 = 0;
  v10 = 0;
  v11 = 16;
  v12 = 0;
  v5(a1, a2, v4, &v9);
  v6 = v10 & 6;
  v7 = v6 == 6;
  if ( v6 == 6 )
  {
    v6 = v9;
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( v7 )
    *a3 = v6;
  return result;
}
