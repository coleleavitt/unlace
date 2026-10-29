/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D380
// Address: 0x0041D380

//----- (0041D380) --------------------------------------------------------
int __thiscall sub_41D380(int ***this, int a2)
{
  _DWORD *v3; // esi
  void *v4; // eax
  int v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-4h]

  v6 = a2;
  sub_40B5E0(&v6);
  v3 = (_DWORD *)sub_40BA90(this, a2);
  v7 = 0;
  sub_423B70((int)(v3 + 8));
  v4 = (void *)v3[4];
  v7 = 1;
  if ( v4 )
  {
    v3[5] = 0;
    sub_453A20(v4);
    v3[4] = 0;
    v3[6] = 0;
  }
  sub_4627F2(v3);
  return v6;
}
