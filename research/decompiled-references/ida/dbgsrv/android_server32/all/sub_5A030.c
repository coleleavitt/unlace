/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A030
// Address: 0x0005A030

//----- (0005A030) --------------------------------------------------------
int __fastcall sub_5A030(int a1, int a2)
{
  int v3; // r4
  int v4; // r7
  char *v7; // [sp+14h] [bp-10h] BYREF
  int v8; // [sp+18h] [bp-Ch]
  int v9; // [sp+1Ch] [bp-8h]

  v8 = 0;
  v7 = nullptr;
  v9 = 0;
  v3 = *(_DWORD *)(a1 + 12);
  sub_59EA8(a1 + 16, (int)&v7, v3 == 25);
  v4 = -1;
  if ( v3 != 25 )
    v4 = *(_DWORD *)(a1 + 20);
  sub_1DA58(a2, "%s|%d|%d|%s", *(const char **)a1, *(_DWORD *)(a1 + 12), v4, v7);
  if ( v7 )
  {
    v8 = 0;
    qfree(v7);
    v9 = 0;
    v7 = nullptr;
  }
  return 1;
}
