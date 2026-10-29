/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D710
// Address: 0x0008D710

//----- (0008D710) --------------------------------------------------------
unsigned int __cdecl sub_8D710(int a1, int *a2)
{
  size_t v2; // esi
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  void *v7; // [esp+8h] [ebp-34h]
  int v8; // [esp+Ch] [ebp-30h]
  __int64 v9; // [esp+10h] [ebp-2Ch]
  __int64 v10; // [esp+18h] [ebp-24h]
  int v11; // [esp+20h] [ebp-1Ch]

  v8 = *a2;
  v2 = a2[2];
  if ( v2 )
  {
    v7 = qalloc_or_throw(a2[2]);
    memcpy(v7, (const void *)a2[1], v2);
  }
  else
  {
    v7 = nullptr;
  }
  v11 = a2[8];
  v10 = *((_QWORD *)a2 + 3);
  v9 = *((_QWORD *)a2 + 2);
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_DWORD **)a1;
  }
  else
  {
    v4 = qvector_reserve(a1, *(void **)a1, v3 + 1, 0x24u);
    *(_DWORD *)a1 = v4;
    v3 = *(_DWORD *)(a1 + 4);
  }
  v5 = 9 * v3;
  v4[v5] = v8;
  v4[v5 + 1] = v7;
  v4[v5 + 2] = v2;
  v4[v5 + 3] = v2;
  v4[v5 + 8] = v11;
  *(_QWORD *)&v4[v5 + 6] = v10;
  *(_QWORD *)&v4[v5 + 4] = v9;
  ++*(_DWORD *)(a1 + 4);
  return __readgsdword(0x14u);
}
