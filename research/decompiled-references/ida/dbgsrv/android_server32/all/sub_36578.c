/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36578
// Address: 0x00036578

//----- (00036578) --------------------------------------------------------
int __fastcall sub_36578(int a1, int a2)
{
  size_t v4; // r5
  void *v5; // r6
  int v6; // r1
  _DWORD *v7; // r0
  char *v8; // r0
  int v10; // [sp+Ch] [bp-14h]
  int v11; // [sp+10h] [bp-10h]
  int v12; // [sp+14h] [bp-Ch]
  char v13; // [sp+18h] [bp-8h]
  int v14; // [sp+1Ch] [bp-4h]

  v4 = *(_DWORD *)(a2 + 4);
  v5 = nullptr;
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    qmemcpy(v5, *(const void **)a2, v4);
  }
  v13 = *(_BYTE *)(a2 + 24);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(_DWORD *)(a2 + 16);
  v12 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v6 + 1) )
  {
    v7 = *(_DWORD **)a1;
  }
  else
  {
    v7 = qvector_reserve(a1, *(void **)a1, v6 + 1, 0x1Cu);
    *(_DWORD *)a1 = v7;
    v6 = *(_DWORD *)(a1 + 4);
  }
  v7[7 * v6] = v5;
  v8 = (char *)&v7[7 * v6];
  v8[24] = v13;
  *((_DWORD *)v8 + 1) = v4;
  *((_DWORD *)v8 + 2) = v4;
  *((_DWORD *)v8 + 3) = v10;
  *((_DWORD *)v8 + 4) = v11;
  *((_DWORD *)v8 + 5) = v12;
  ++*(_DWORD *)(a1 + 4);
  return _stack_chk_guard - v14;
}
// 365FC: variable 'v14' is possibly undefined
