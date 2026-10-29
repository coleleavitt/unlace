/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E0F8
// Address: 0x0005E0F8

//----- (0005E0F8) --------------------------------------------------------
int __fastcall sub_5E0F8(int a1, int a2)
{
  int *v3; // r0
  int v4; // r6
  int *v5; // r6
  void *v6; // r0
  void *v7; // r0
  int *v8; // r0
  void *ptr; // [sp+0h] [bp-10h] BYREF
  int v11; // [sp+4h] [bp-Ch]
  int v12; // [sp+8h] [bp-8h]

  ptr = nullptr;
  v11 = 0;
  v12 = 0;
  sub_5D780(a2, (int)&ptr);
  v3 = sub_5D8BC(a1, (const char **)&ptr);
  if ( (int *)(a1 + 4) == v3 )
  {
    v4 = 0;
  }
  else
  {
    v5 = sub_81494(v3, (_DWORD *)(a1 + 4));
    v6 = (void *)v5[7];
    if ( v6 )
    {
      v5[8] = 0;
      sub_77E08(v6);
    }
    v7 = (void *)v5[4];
    if ( v7 )
    {
      v5[5] = 0;
      sub_77E08(v7);
    }
    v8 = v5;
    v4 = 1;
    sub_80648(v8);
    --*(_DWORD *)(a1 + 20);
  }
  if ( ptr )
  {
    v11 = 0;
    sub_77E08(ptr);
  }
  return v4;
}
