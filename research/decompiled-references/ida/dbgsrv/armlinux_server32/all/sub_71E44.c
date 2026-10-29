/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71E44
// Address: 0x00071E44

//----- (00071E44) --------------------------------------------------------
int __fastcall sub_71E44(int a1, int a2, _DWORD *a3)
{
  _WORD v6[12]; // [sp+Ch] [bp-1Ch] BYREF

  sub_71698(a1, v6);
  if ( sub_716CC((int)v6, 0, 0, v6[1] + a2, 112) )
  {
    sub_71668(v6, (int)a3);
    return 1;
  }
  else
  {
    *a3 = 0;
    a3[1] = 0;
    a3[2] = 0;
    a3[3] = 0;
    return 2;
  }
}
