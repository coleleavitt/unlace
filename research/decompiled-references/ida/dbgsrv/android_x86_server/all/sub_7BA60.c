/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BA60
// Address: 0x0007BA60

//----- (0007BA60) --------------------------------------------------------
_BOOL4 __cdecl sub_7BA60(int a1, char *a2, int a3)
{
  _DWORD *v3; // eax
  void *v4; // esi
  _BOOL4 v5; // edi

  v3 = open_linput(a2, 0);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = a3 == 11 && sub_7A380(a1, (int)v3);
  close_linput(v4);
  return v5;
}
