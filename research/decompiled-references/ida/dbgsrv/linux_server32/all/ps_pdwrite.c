/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdwrite
// Address: 0x08063840

//----- (08063840) --------------------------------------------------------
int __cdecl ps_pdwrite(int *a1, int a2, int a3, int a4)
{
  int v4; // edx
  int (__cdecl **v6[2])(_DWORD, int); // [esp+0h] [ebp-2Ch] BYREF
  int v7; // [esp+8h] [ebp-24h]
  unsigned int v8; // [esp+Ch] [ebp-20h]

  v8 = __readgsdword(0x14u);
  v7 = 0;
  v6[1] = (int (__cdecl **)(_DWORD, int))*a1;
  v6[0] = &off_811B7C8;
  sub_80A4C60(v6);
  if ( v7 )
  {
    v4 = 1;
    if ( !*(_BYTE *)(v7 + 733) && *(_DWORD *)(v7 + 724) != -1 )
      v4 = sub_8063570(v7, *a1, a2, a3, a4, 0) <= 0;
  }
  else
  {
    v4 = 2;
  }
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
// 811B7C8: using guessed type int (__cdecl *off_811B7C8)(int, int);
