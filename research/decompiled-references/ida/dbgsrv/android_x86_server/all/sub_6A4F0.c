/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A4F0
// Address: 0x0006A4F0

//----- (0006A4F0) --------------------------------------------------------
int __cdecl sub_6A4F0(int a1, int a2)
{
  FILE **v2; // esi
  int v3; // ecx
  void **v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int result; // eax
  void **v9; // [esp+Ch] [ebp-20h]
  int v10; // [esp+18h] [ebp-14h]

  if ( a2 )
    sub_69C70(a1, 0, 0);
  if ( *(_DWORD *)(a1 + 132) )
  {
    v2 = (FILE **)(a1 + 140);
    while ( 1 )
    {
      if ( *v2 )
        qfclose(*v2);
      qfree(*(void **)(a1 + 144));
      *(_DWORD *)(a1 + 144) = 0;
      v3 = *(_DWORD *)(a1 + 128);
      v10 = *(_DWORD *)(a1 + 132);
      *(_DWORD *)(a1 + 140) = *(_DWORD *)(v3 + 24 * (v10 - 1) + 4);
      *(_DWORD *)(a1 + 148) = *(_DWORD *)(v3 + 24 * (v10 - 1) + 16);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(v3 + 24 * (v10 - 1));
      *(_BYTE *)(a1 + 68) = *(_BYTE *)(v3 + 24 * (v10 - 1) + 20);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(v3 + 24 * (v10 - 1) + 8);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(v3 + 24 * (v10 - 1) + 12);
      if ( !v10 )
        break;
      *(_DWORD *)(a1 + 132) = v10 - 1;
      v2 = (FILE **)(a1 + 140);
      if ( v10 == 1 )
        goto LABEL_12;
    }
    v2 = (FILE **)(a1 + 140);
LABEL_12:
    v4 = (void **)(a1 + 144);
  }
  else
  {
    v4 = (void **)(a1 + 144);
    v2 = (FILE **)(a1 + 140);
  }
  v9 = v4;
  qfree(*v4);
  *v9 = nullptr;
  if ( *v2 )
    qfclose(*v2);
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 148) = -1;
  *(_BYTE *)(a1 + 68) = 0;
  while ( 1 )
  {
    result = *(_DWORD *)(a1 + 32);
    if ( !result )
      break;
    v5 = *(_DWORD *)(a1 + 28);
    v6 = result - 1;
    v7 = result + 27 * (result - 1) - 1;
    *(_DWORD *)a1 = *(_DWORD *)(v5 + v7 + 12);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v5 + v7 + 16);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(v5 + v7 + 24);
    *(_DWORD *)(a1 + 32) = v6;
    sub_1BC40((char **)(v5 + v7));
  }
  return result;
}
