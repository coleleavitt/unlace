/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BAC90
// Address: 0x000BAC90

//----- (000BAC90) --------------------------------------------------------
int __cdecl sub_BAC90(int a1, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // esi
  int v7; // ecx
  int v8; // eax
  unsigned int v10; // esi
  unsigned int v11; // [esp+8h] [ebp-24h]
  int v12; // [esp+8h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-20h]
  int pipedes[2]; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v15; // [esp+18h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = 0;
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v2) != -1 )
        close(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v2));
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v2) != -1 )
        close(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v2));
      ++v2;
    }
    while ( v2 < *(_DWORD *)(a1 + 4) );
  }
  qfree(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  qfree(*(void **)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = qcalloc(a2, 4u);
  *(_DWORD *)(a1 + 12) = qcalloc(*(_DWORD *)(a1 + 4), 4u);
  if ( !*(_DWORD *)(a1 + 4) )
    return 0;
  v4 = 0;
  do
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v4) = -1;
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v4++) = -1;
    v5 = *(_DWORD *)(a1 + 4);
  }
  while ( v4 < v5 );
  if ( !v5 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v13 = v3;
    v11 = v5;
    if ( !pipe(pipedes) )
    {
      v5 = pipedes[0];
      v3 = pipedes[1];
      goto LABEL_17;
    }
    v8 = *(_DWORD *)__errno(v7);
    v5 = v11;
    v3 = v13;
    if ( v8 )
      break;
LABEL_17:
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v6) = v5;
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v6++) = v3;
    if ( v6 >= *(_DWORD *)(a1 + 4) )
      return 0;
  }
  v12 = v8;
  if ( *(_DWORD *)(a1 + 4) )
  {
    v10 = 0;
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v10) != -1 )
        close(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v10));
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v10) != -1 )
        close(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v10));
      ++v10;
    }
    while ( v10 < *(_DWORD *)(a1 + 4) );
  }
  qfree(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  qfree(*(void **)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  return v12;
}
// BAD80: variable 'v3' is possibly undefined
// BAD98: variable 'v7' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
