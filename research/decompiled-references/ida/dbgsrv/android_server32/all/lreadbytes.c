/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lreadbytes
// Address: 0x0007B990

//----- (0007B990) --------------------------------------------------------
int __fastcall lreadbytes(int a1, void *a2, signed int a3, int a4)
{
  int v7; // r5
  bool v8; // zf
  size_t v9; // r0
  int v11; // [sp+4h] [bp-4h]

  v7 = -1;
  v8 = a1 == 0;
  v9 = -1;
  if ( !v8 )
  {
    v11 = a4;
    if ( *(int *)a1 < 2 )
      v9 = qfread(*(FILE **)(a1 + 8), a2, a3);
    else
      v9 = sub_7B4E0(a1, a2, a3);
    a4 = v11;
  }
  if ( v9 == a3 )
  {
    v7 = 0;
    if ( a4 )
    {
      memrev((char *)a2, a3);
      return 0;
    }
  }
  return v7;
}
