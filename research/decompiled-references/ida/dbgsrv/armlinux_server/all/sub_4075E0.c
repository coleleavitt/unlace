/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4075E0
// Address: 0x00000000004075E0

//----- (00000000004075E0) ----------------------------------------------------
__int64 __fastcall sub_4075E0(int a1, char *a2, size_t a3)
{
  int v5; // w0
  FILE *v7; // x0
  FILE *v8; // x20
  int v9; // w23
  char v10[4096]; // [xsp+38h] [xbp-1008h] BYREF

  sub_49B748(v10, 0x1000u, "/proc/%u/exe", a1);
  v5 = readlink(v10, a2, a3 - 1);
  if ( v5 <= 0 )
  {
    v7 = sub_48DCD0(v10, (unsigned __int8 *)"r");
    v8 = v7;
    if ( v7 && (v9 = sub_4904B8(v7, a2, a3), sub_4906A0(v8), v9 > 1) && v9 < a3 && *a2 == 47 )
    {
      a2[v9] = 0;
      return 1;
    }
    else
    {
      *a2 = 0;
      return 0;
    }
  }
  else
  {
    a2[v5] = 0;
    return 1;
  }
}
// 4075E0: could not find valid save-restore pair for x23
