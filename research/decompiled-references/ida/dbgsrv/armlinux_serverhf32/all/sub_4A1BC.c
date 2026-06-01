/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1BC
// Address: 0x0004A1BC

//----- (0004A1BC) --------------------------------------------------------
int __fastcall sub_4A1BC(int a1, int *a2, const char *a3, signed int a4)
{
  int v4; // r4
  int v6; // [sp+Ch] [bp+0h] BYREF
  int v7; // [sp+10h] [bp+4h] BYREF
  _DWORD *v8; // [sp+14h] [bp+8h]
  int *v9; // [sp+18h] [bp+Ch]
  int *v10; // [sp+1Ch] [bp+10h]
  int v11; // [sp+20h] [bp+14h]

  v7 = 0;
  v8 = nullptr;
  v11 = 0;
  v9 = &v7;
  v10 = &v7;
  v4 = sub_49A04(a1, a2, a3, a4, &v6);
  sub_42B7C((int)&v6, v8);
  return v4;
}
