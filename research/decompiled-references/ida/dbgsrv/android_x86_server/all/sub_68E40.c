/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68E40
// Address: 0x00068E40

//----- (00068E40) --------------------------------------------------------
int __userpurge sub_68E40@<eax>(int a1, int a2, int a3, int *a4)
{
  _DWORD *v4; // edi
  int v5; // eax
  size_t v6; // esi
  void *v7; // eax
  const void **v9; // [esp+18h] [ebp-14h]

  v4 = operator new(0x30u);
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = a2 + 4;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *a4;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v6 = *(_DWORD *)(v5 + 4);
  if ( v6 )
  {
    v9 = (const void **)v5;
    v7 = qalloc_or_throw(v6);
    v4[4] = v7;
    v4[6] = v6;
    memcpy(v7, *v9, v6);
    v4[5] = v6;
  }
  *((_BYTE *)v4 + 28) = 2;
  v4[11] = 0;
  v4[10] = 0;
  v4[9] = 0;
  v4[8] = 0;
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}
