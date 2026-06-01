/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71F64
// Address: 0x00071F64

//----- (00071F64) --------------------------------------------------------
int __fastcall sub_71F64(int a1, int a2, _DWORD *a3)
{
  int v5; // r9
  int result; // r0
  int v7; // r8
  _BOOL4 v8; // r1
  __int16 v9; // r3
  unsigned __int16 v10; // [sp+Ch] [bp+0h] BYREF
  unsigned __int16 v11; // [sp+Eh] [bp+2h]
  _WORD v12[12]; // [sp+24h] [bp+18h] BYREF

  sub_71698(a1, &v10);
  sub_71698(a2, v12);
  v5 = v12[1];
  result = 4;
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  if ( v5 )
  {
    v7 = v11;
    result = 1;
    if ( v11 )
    {
      v8 = sub_711E4((int)v12, (int)&v10) != 0;
      if ( sub_716CC((int)&v10, v8, 0, v7 + 0x3FFF - v5, 112) )
      {
        v9 = v10 - v12[0];
        if ( v10 != v12[0] )
          v9 = -1;
        v10 = v9;
        sub_71668(&v10, (int)a3);
        return 1;
      }
      else
      {
        return 2;
      }
    }
  }
  return result;
}
