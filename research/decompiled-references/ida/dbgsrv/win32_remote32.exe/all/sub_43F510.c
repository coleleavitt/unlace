/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F510
// Address: 0x0043F510

//----- (0043F510) --------------------------------------------------------
int __stdcall sub_43F510(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 8);
  LOBYTE(a1) = *(_BYTE *)(a1 + 32);
  v3 = sub_439DB0();
  v4 = (*(int (__stdcall **)(int, int, int *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v2, &a1, 1, 0);
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}
