/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429E40
// Address: 0x00429E40

//----- (00429E40) --------------------------------------------------------
int __stdcall sub_429E40(int a1)
{
  unsigned int v1; // eax
  int v2; // ebx
  __int128 v3; // xmm0
  int v4; // eax

  v1 = *(_DWORD *)(a1 + 212) + 1;
  v2 = *(_DWORD *)(a1 + 196) + 16 * *(_DWORD *)(a1 + 200);
  v3 = *(_OWORD *)(v2 - 16);
  if ( v1 > *(_DWORD *)(a1 + 216) )
  {
    v3 = *(_OWORD *)(v2 - 16);
    *(_DWORD *)(a1 + 208) = sub_453B00(a1 + 208, *(void **)(a1 + 208), v1, 0x10u);
  }
  *(_OWORD *)(*(_DWORD *)(a1 + 208) + 16 * (*(_DWORD *)(a1 + 212))++) = v3;
  sub_428740(*(_DWORD **)(a1 + 104), *(_DWORD *)(v2 - 12) - 4, *(_DWORD *)(a1 + 108) - *(_DWORD *)(v2 - 12));
  v4 = *(_DWORD *)(a1 + 200);
  if ( v4 )
    *(_DWORD *)(a1 + 200) = v4 - 1;
  return 0;
}
