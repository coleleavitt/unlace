/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025CC0
// Address: 0x0000000140025CC0

//----- (0000000140025CC0) ----------------------------------------------------
char __fastcall sub_140025CC0(char *a1, int a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  char *v4; // rcx
  char v5; // al

  v2 = a2;
  v3 = sub_1400291D0(a1, 0);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( v5 == 2 || v5 == 9 )
    {
      *((_QWORD *)v4 + 1) += v2;
      return 1;
    }
    if ( v5 == 3 )
    {
      sub_140066690((__int16 *)v4 + 4, &xmmword_1400ACB48, (__int64)(v4 + 8), (int)v2 < 0);
      return 1;
    }
    sub_1400640B0(0x3Du);
  }
  return 0;
}
// 1400ACB48: using guessed type __int128 xmmword_1400ACB48;
