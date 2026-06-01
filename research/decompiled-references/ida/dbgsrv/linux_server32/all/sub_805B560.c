/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805B560
// Address: 0x0805B560

//----- (0805B560) --------------------------------------------------------
int __cdecl sub_805B560(int *a1, _DWORD *a2)
{
  int (__cdecl *v2)(int *); // eax

  v2 = *(int (__cdecl **)(int *))(*a1 + 56);
  if ( v2 == sub_805B520 )
  {
    a1[179] = 0;
    sub_805AFC0(a1);
    sub_80B9F70((int)a1);
  }
  else
  {
    v2(a1);
  }
  if ( a2 )
  {
    *a2 = 0;
    a2[1] = 5;
  }
  sub_8059750(a1);
  return 1;
}
