/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74608
// Address: 0x00074608

//----- (00074608) --------------------------------------------------------
unsigned int __fastcall sub_74608(int a1, unsigned __int64 a2, void *dest, unsigned int a4)
{
  unsigned __int64 v5; // r4
  unsigned int v6; // r3
  unsigned int v7; // r4
  size_t v9; // r2
  int v10; // r1
  unsigned int v11; // r4

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 >= a2 )
  {
    v6 = a4;
    v7 = v5 - a2;
    v10 = a2;
    if ( a4 >= v7 )
      v6 = v7;
    v9 = v6;
    v11 = v6;
  }
  else
  {
    v9 = 0;
    v10 = *(_DWORD *)(a1 + 8);
    v11 = 0;
  }
  memcpy(dest, (const void *)(v10 + *(_DWORD *)(a1 + 20)), v9);
  return v11;
}
