/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A4B8
// Address: 0x0008A4B8

//----- (0008A4B8) --------------------------------------------------------
int __fastcall sub_8A4B8(int a1, int a2, unsigned int *a3)
{
  unsigned int v4; // r3
  bool v5; // cc
  int v6; // r7
  int v7; // r3
  int v10; // r1
  int result; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r2
  int (__fastcall *v15)(int, int, int); // r3

  v4 = *a3;
  v5 = *a3 > 0x30;
  if ( *a3 != 48 )
    v5 = v4 > 1;
  v6 = !v5;
  if ( !v5 || v4 == 6 )
    return sub_86C84(a1, a2, (int)a3);
  v7 = *(_DWORD *)(a1 + 256);
  if ( v7 == 255 )
  {
    *(_BYTE *)(a1 + 255) = v6;
    (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
    v10 = 1;
    v7 = v6;
    ++*(_DWORD *)(a1 + 292);
  }
  else
  {
    v10 = v7 + 1;
  }
  *(_DWORD *)(a1 + 256) = v10;
  *(_BYTE *)(a1 + v7) = 40;
  *(_BYTE *)(a1 + 260) = 40;
  result = sub_86C84(a1, a2, (int)a3);
  v12 = *(_DWORD *)(a1 + 256);
  if ( v12 == 255 )
  {
    v14 = *(_DWORD *)(a1 + 268);
    v15 = *(int (__fastcall **)(int, int, int))(a1 + 264);
    *(_BYTE *)(a1 + 255) = 0;
    result = v15(a1, 255, v14);
    v13 = 1;
    v12 = 0;
    ++*(_DWORD *)(a1 + 292);
  }
  else
  {
    v13 = v12 + 1;
  }
  *(_DWORD *)(a1 + 256) = v13;
  *(_BYTE *)(a1 + v12) = 41;
  *(_BYTE *)(a1 + 260) = 41;
  return result;
}
