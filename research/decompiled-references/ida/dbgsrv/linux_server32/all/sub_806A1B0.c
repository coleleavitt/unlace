/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806A1B0
// Address: 0x0806A1B0

//----- (0806A1B0) --------------------------------------------------------
int __cdecl sub_806A1B0(int a1, void *a2, int a3, char a4)
{
  char v4; // al
  int result; // eax
  int v6; // esi
  void (__cdecl *v7)(int, int, int, int, int, int); // ebp
  int v8; // eax
  int v9; // edx

  v4 = 0;
  if ( a4 )
    v4 = *(_BYTE *)(a1 + 476);
  result = sub_80CD820(*(_DWORD *)(a1 + 360), a2, a3, v4);
  v6 = result;
  if ( result < 0 )
  {
    v7 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
    v8 = sub_80CD730(*(_DWORD *)(a1 + 360), 0, 1);
    v7(a1, 19, a3, v6, v8, v9);
    return v6;
  }
  return result;
}
// 806A223: variable 'v9' is possibly undefined
