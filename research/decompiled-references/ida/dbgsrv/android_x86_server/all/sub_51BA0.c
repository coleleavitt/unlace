/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51BA0
// Address: 0x00051BA0

//----- (00051BA0) --------------------------------------------------------
int __cdecl sub_51BA0(int a1, int a2, char *s, int a4)
{
  int v5[7]; // [esp+0h] [ebp-1Ch] BYREF

  v5[2] = __readgsdword(0x14u);
  if ( !s )
    return 0;
  v5[0] = (int)&off_137F60;
  v5[1] = a2;
  return compile_idc_snippet(a1, s, a4, (int)v5, 0);
}
// 137F60: using guessed type int (__cdecl *off_137F60)(int, int);
