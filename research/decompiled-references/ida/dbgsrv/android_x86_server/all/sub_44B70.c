/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B70
// Address: 0x00044B70

//----- (00044B70) --------------------------------------------------------
int __cdecl sub_44B70(int a1, int a2)
{
  char *v2; // eax
  int v4; // [esp+10h] [ebp-18h] BYREF
  int v5; // [esp+14h] [ebp-14h]
  int v6; // [esp+18h] [ebp-10h]
  unsigned int v7; // [esp+1Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  qgetenv(v2, (int)&v4);
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v4;
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 12) = v6;
  return 0;
}
