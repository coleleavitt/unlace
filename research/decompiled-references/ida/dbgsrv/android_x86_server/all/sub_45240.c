/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45240
// Address: 0x00045240

//----- (00045240) --------------------------------------------------------
int __cdecl sub_45240(int a1, int a2)
{
  int v2; // esi
  char v3; // al
  char *v4; // edx
  int v5; // ecx
  int v6; // eax
  char *v8; // [esp+18h] [ebp-20h] BYREF
  int v9; // [esp+1Ch] [ebp-1Ch]
  int v10; // [esp+20h] [ebp-18h]
  char v11; // [esp+2Bh] [ebp-Dh] BYREF
  unsigned int v12; // [esp+2Ch] [ebp-Ch]

  v12 = __readgsdword(0x14u);
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 <= 0 )
  {
    v6 = 0;
    v5 = 0;
    v4 = nullptr;
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 4);
    v9 = 0;
    v11 = v3;
    sub_44400(&v8, v2 + 1, &v11);
    v8[v2] = 0;
    v4 = v8;
    v5 = v9;
    v6 = v10;
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v4;
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 12) = v6;
  return 0;
}
