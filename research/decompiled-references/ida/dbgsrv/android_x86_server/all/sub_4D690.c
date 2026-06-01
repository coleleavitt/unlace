/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D690
// Address: 0x0004D690

//----- (0004D690) --------------------------------------------------------
int __cdecl sub_4D690(int a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // ecx
  char *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+4h] [ebp-28h]
  __int64 v9; // [esp+8h] [ebp-24h]
  __int64 v10; // [esp+10h] [ebp-1Ch]

  v1 = *(_DWORD *)(a1 + 200);
  v2 = 16 * (*(_DWORD *)(a1 + 204) - 1);
  v8 = v1;
  v10 = *(_QWORD *)(v1 + v2 + 8);
  v9 = *(_QWORD *)(v1 + v2);
  v3 = *(_DWORD *)(a1 + 216);
  if ( *(_DWORD *)(a1 + 220) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(char **)(a1 + 212);
  }
  else
  {
    v4 = (char *)qvector_reserve(a1 + 212, *(void **)(a1 + 212), v3 + 1, 0x10u);
    *(_DWORD *)(a1 + 212) = v4;
    v3 = *(_DWORD *)(a1 + 216);
  }
  v5 = 16 * v3;
  *(_QWORD *)&v4[v5 + 8] = v10;
  *(_QWORD *)&v4[v5] = v9;
  ++*(_DWORD *)(a1 + 216);
  sub_52090(*(_DWORD **)(a1 + 108), *(_DWORD *)(v8 + v2 + 4) - 4, *(_DWORD *)(a1 + 112) - *(_DWORD *)(v8 + v2 + 4));
  v6 = *(_DWORD *)(a1 + 204);
  if ( v6 )
    *(_DWORD *)(a1 + 204) = v6 - 1;
  return 0;
}
