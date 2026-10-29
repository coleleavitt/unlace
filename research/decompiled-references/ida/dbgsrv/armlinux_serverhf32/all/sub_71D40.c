/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71D40
// Address: 0x00071D40

//----- (00071D40) --------------------------------------------------------
int __fastcall sub_71D40(int a1, int a2, _DWORD *a3)
{
  int v5; // r10
  int v6; // r8
  int result; // r0
  _BOOL4 v8; // r4
  _BOOL4 v9; // r1
  __int16 v10; // r3
  _WORD v11[12]; // [sp+Ch] [bp+0h] BYREF
  __int16 v12[12]; // [sp+24h] [bp+18h] BYREF

  sub_7152C(a1, v11);
  sub_7152C(a2, v12);
  v5 = (unsigned __int16)v12[1];
  v6 = v11[1];
  result = 1;
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  if ( v6 )
    v8 = v5 == 0;
  else
    v8 = 1;
  if ( !v8 )
  {
    v9 = sub_71224(v11, v12) != 0;
    if ( sub_71560((int)v12, v9, 0, v6 + v5 - 16382, 112) )
    {
      v10 = v11[0] - v12[0];
      if ( v11[0] != (unsigned __int16)v12[0] )
        v10 = -1;
      v12[0] = v10;
      sub_714FC(v12, (int)a3);
      return 1;
    }
    else
    {
      return 2;
    }
  }
  return result;
}
