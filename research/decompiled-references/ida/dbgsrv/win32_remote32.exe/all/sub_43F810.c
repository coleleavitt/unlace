/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F810
// Address: 0x0043F810

//----- (0043F810) --------------------------------------------------------
int __stdcall sub_43F810(_DWORD *a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  int v5; // eax

  v2 = a1[9];
  v3 = a1[8];
  v4 = a1[2];
  v5 = sub_439DB0();
  *(_DWORD *)(a2 + 8) = (*(int (__stdcall **)(int, int, int, int, _DWORD))(*(_DWORD *)v5 + 144))(
                          v5,
                          v4,
                          v3,
                          v2 != 0 ? v2 - 1 : 0,
                          0);
  return 0;
}
