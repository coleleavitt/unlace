/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4781AE
// Address: 0x004781AE

//----- (004781AE) --------------------------------------------------------
void __cdecl sub_4781AE(LPVOID *a1)
{
  LPVOID *v1; // eax
  int v2; // [esp+0h] [ebp-10h] BYREF
  LPVOID **v3; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+8h] [ebp-8h] BYREF

  v1 = a1;
  if ( *a1 != dword_4A6528 )
  {
    sub_479216(*a1);
    v1 = a1;
  }
  sub_479216(v1[15]);
  sub_479216(a1[12]);
  sub_479216(a1[13]);
  sub_479216(a1[14]);
  sub_479216(a1[10]);
  sub_479216(a1[11]);
  sub_479216(a1[16]);
  sub_479216(a1[17]);
  sub_479216(a1[216]);
  v3 = &a1;
  v4 = 5;
  v2 = 5;
  sub_477FDA(&v2, (int)&v3, &v4);
  v3 = &a1;
  v2 = 4;
  v4 = 4;
  sub_478045(&v4, (int **)&v3, &v2);
}
// 4A6528: using guessed type int dword_4A6528[3];
