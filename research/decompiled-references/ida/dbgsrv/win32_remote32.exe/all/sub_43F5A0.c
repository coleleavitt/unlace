/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F5A0
// Address: 0x0043F5A0

//----- (0043F5A0) --------------------------------------------------------
int __stdcall sub_43F5A0(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = sub_439DB0();
  if ( (*(int (__stdcall **)(int, int, int *, int, _DWORD))(*(_DWORD *)v3 + 140))(v3, v2, &a1, 4, 0) != 4 )
    return sub_41BD30(a2, "read error");
  *(_DWORD *)(a2 + 8) = a1;
  return 0;
}
