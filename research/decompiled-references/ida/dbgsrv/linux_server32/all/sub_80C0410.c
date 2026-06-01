/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0410
// Address: 0x080C0410

//----- (080C0410) --------------------------------------------------------
int __cdecl sub_80C0410(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // edx
  int (__cdecl *v5)(_DWORD, int, int, _DWORD); // edx
  int v6; // eax

  sub_80BC000(a1[4]);
  a1[1] = 0;
  v4 = dword_811E820;
  a1[2] = 0;
  a1[3] = -1;
  if ( a3 && a2 >= 0 )
  {
    a1[1] = a3;
    a1[3] = a2;
    a1[2] = a4;
    v5 = *(int (__cdecl **)(_DWORD, int, int, _DWORD))(v4 + 108);
    v6 = 33;
  }
  else
  {
    v5 = *(int (__cdecl **)(_DWORD, int, int, _DWORD))(v4 + 108);
    v6 = 78;
  }
  return v5(a1[12], v6, 1, 0);
}
// 811E820: using guessed type int dword_811E820;
