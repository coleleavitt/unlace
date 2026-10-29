/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E740
// Address: 0x0004E740

//----- (0004E740) --------------------------------------------------------
unsigned int __cdecl sub_4E740(int a1, char *a2)
{
  int v2; // ecx
  _BYTE *v3; // eax
  int v4; // ecx
  char v6[4]; // [esp+10h] [ebp-2Ch] BYREF
  int v7; // [esp+14h] [ebp-28h]
  int v8; // [esp+18h] [ebp-24h]
  int v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+20h] [ebp-1Ch]
  unsigned int v11; // [esp+28h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  v6[0] = 2;
  v8 = 0;
  v7 = 0;
  v10 = 0;
  v9 = 0;
  copy_idcv(v6, a2);
  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v2 + 1) )
  {
    v3 = *(_BYTE **)a1;
  }
  else
  {
    v3 = qvector_reserve(a1, *(void **)a1, v2 + 1, 0x14u);
    *(_DWORD *)a1 = v3;
    v2 = *(_DWORD *)(a1 + 4);
  }
  v4 = 5 * v2;
  v3[4 * v4] = 2;
  *(_DWORD *)&v3[4 * v4 + 8] = 0;
  *(_DWORD *)&v3[4 * v4 + 4] = 0;
  *(_DWORD *)&v3[4 * v4 + 16] = 0;
  *(_DWORD *)&v3[4 * v4 + 12] = 0;
  copy_idcv(&v3[4 * v4], v6);
  ++*(_DWORD *)(a1 + 4);
  free_idcv(v6);
  return __readgsdword(0x14u);
}
