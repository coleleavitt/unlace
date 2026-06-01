/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B0D0
// Address: 0x0002B0D0

//----- (0002B0D0) --------------------------------------------------------
int __cdecl sub_2B0D0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax

  (*(void (__cdecl **)(_DWORD *))(*a1 + 56))(a1);
  if ( a2 )
  {
    a2[1] = 5;
    *a2 = 0;
  }
  sub_1C460(a1);
  (*(void (__cdecl **)(_DWORD *))(*a1 + 296))(a1);
  if ( a1[84] == -1 || a1[85] == -1 )
    goto LABEL_9;
  v2 = a1[71];
  if ( !v2 )
    v2 = a1[83];
  if ( v2 <= 0 )
  {
LABEL_9:
    if ( !(_BYTE)under_debugger )
      interr(30016);
    BUG();
  }
  sub_8E920();
  return 1;
}
// 13E34C: using guessed type int under_debugger;
