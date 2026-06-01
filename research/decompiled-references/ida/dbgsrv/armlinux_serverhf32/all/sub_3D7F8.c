/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D7F8
// Address: 0x0003D7F8

//----- (0003D7F8) --------------------------------------------------------
int __fastcall sub_3D7F8(int a1, int a2)
{
  char *v4; // r0
  int v5; // r2
  int v6; // r2
  int v7; // r3
  int *v8; // r1
  void *v10; // [sp+8h] [bp-1010h] BYREF
  int v11; // [sp+Ch] [bp-100Ch]
  int v12; // [sp+10h] [bp-1008h]
  char v13[4]; // [sp+14h] [bp-1004h] BYREF

  v4 = sub_4C53C(v13, 4096, a1);
  if ( v4 )
  {
    v11 = 0;
    v12 = 0;
    v10 = nullptr;
    if ( sub_3C6D8((int)v4, &v10, 3) && (a2 = sub_4AFC0(nullptr, "main", nullptr, 0, (int)&v10, 0)) != 0 )
    {
      if ( v10 )
      {
        v11 = 0;
        sub_77E08(v10);
      }
    }
    else
    {
      v7 = v11;
      if ( v11 )
      {
        v8 = (int *)v10;
      }
      else
      {
        v7 = 1536;
        v8 = &dword_8DA5C;
      }
      sub_23388((int)"%s", (int)v8, v6, v7);
      if ( v10 )
      {
        v11 = 0;
        sub_77E08(v10);
      }
      return 0;
    }
  }
  else if ( a2 )
  {
    a2 = 0;
    sub_23388((int)"Could not locate system script file %s", a1, v5, 0);
  }
  return a2;
}
// 3D854: variable 'v6' is possibly undefined
// 3D8C2: variable 'v5' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
