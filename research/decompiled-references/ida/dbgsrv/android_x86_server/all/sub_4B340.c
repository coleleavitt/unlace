/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B340
// Address: 0x0004B340

//----- (0004B340) --------------------------------------------------------
int __cdecl sub_4B340(int a1)
{
  _DWORD *v1; // eax
  int v2; // eax
  char *v3; // eax
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _WORD *v8; // eax

  v1 = *(_DWORD **)(*(_DWORD *)(a1 + 188) + 4 * *(_DWORD *)(a1 + 192) - 4);
  if ( *v1 == 1 )
  {
    v2 = v1[2];
    if ( *(_DWORD *)(v2 + 4) )
      v3 = *(char **)v2;
    else
      v3 = byte_EF875;
  }
  else
  {
    v3 = &byte_DCEE2;
  }
  sub_4B430(a1 + 88, v3);
  v4 = *(_DWORD *)(a1 + 112);
  v5 = *(_DWORD *)(a1 + 144);
  if ( *(_DWORD *)(a1 + 148) >= (unsigned int)(v5 + 1) )
  {
    v6 = *(_DWORD **)(a1 + 140);
  }
  else
  {
    v6 = qvector_reserve(a1 + 140, *(void **)(a1 + 140), v5 + 1, 4u);
    *(_DWORD *)(a1 + 140) = v6;
    v5 = *(_DWORD *)(a1 + 144);
  }
  v6[v5] = v4;
  ++*(_DWORD *)(a1 + 144);
  v7 = *(_DWORD *)(a1 + 180);
  if ( *(_DWORD *)(a1 + 184) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_WORD **)(a1 + 176);
  }
  else
  {
    v8 = qvector_reserve(a1 + 176, *(void **)(a1 + 176), v7 + 1, 2u);
    *(_DWORD *)(a1 + 176) = v8;
    v7 = *(_DWORD *)(a1 + 180);
  }
  v8[v7] = 0;
  ++*(_DWORD *)(a1 + 180);
  return 0;
}
// DCEE2: using guessed type char byte_DCEE2;
