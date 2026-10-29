/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477A81
// Address: 0x00477A81

//----- (00477A81) --------------------------------------------------------
double __cdecl sub_477A81(int a1, int a2, int a3, int a4, int a5, int a6, double a7)
{
  int *v7; // ecx
  int v8; // eax
  _DWORD v10[6]; // [esp+0h] [ebp-20h] BYREF
  double v11; // [esp+18h] [ebp-8h]

  v7 = nullptr;
  v8 = 0;
  while ( dword_4A6648[2 * v8] != a2 )
  {
    if ( ++v8 >= 29 )
      goto LABEL_6;
  }
  v7 = (&off_4A664C)[2 * v8];
LABEL_6:
  v10[1] = v7;
  if ( v7 )
  {
    v10[2] = a3;
    v10[3] = a4;
    v10[4] = a5;
    v10[5] = a6;
    v11 = a7;
    v10[0] = a1;
    sub_47E160();
    if ( !sub_477B99((int)v10) )
      sub_477A52(a1);
    return v11;
  }
  else
  {
    sub_47E160();
    sub_477A52(a1);
    return a7;
  }
}
// 4A6648: using guessed type int dword_4A6648[];
// 4A664C: using guessed type int *off_4A664C;
