/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE110
// Address: 0x080CE110

//----- (080CE110) --------------------------------------------------------
int __cdecl sub_80CE110(int a1, char *a2, int a3)
{
  char *v3; // edi
  char *v4; // eax

  v3 = a2;
  sub_80C74C0((_BYTE *)(a1 + 4120), a2, 4096);
  v4 = strrchr((const char *)(a1 + 4120), 47);
  if ( v4 )
  {
    *v4 = 0;
    v3 = v4 + 1;
  }
  else
  {
    sub_80C74C0((_BYTE *)(a1 + 4120), ".", 4096);
  }
  *(_DWORD *)(a1 + 4108) = 0;
  *(_DWORD *)(a1 + 4112) = 0;
  sub_80C74C0((_BYTE *)(a1 + 8216), v3, 4096);
  *(_DWORD *)(a1 + 12312) = a3;
  return a3;
}
