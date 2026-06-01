/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44984
// Address: 0x00044984

//----- (00044984) --------------------------------------------------------
int __fastcall sub_44984(int a1, int a2, unsigned __int8 *a3)
{
  int v5; // r7
  _DWORD *v6; // r0
  int v7; // r1
  _DWORD *v8; // r0

  v5 = *(_DWORD *)(a1 + 16);
  v6 = (_DWORD *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 44) >= (unsigned int)(v7 + 1) )
  {
    v8 = (_DWORD *)*v6;
  }
  else
  {
    v8 = qvector_reserve((int)v6, *(void **)(a1 + 36), v7 + 1, 4u);
    *(_DWORD *)(a1 + 36) = v8;
    v7 = *(_DWORD *)(a1 + 40);
  }
  v8[v7] = v5;
  ++*(_DWORD *)(a1 + 40);
  sub_3DC40(a1 + 12, a3);
  return sub_47A68((void **)a1, 0, nullptr);
}
