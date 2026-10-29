/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_762D0
// Address: 0x000762D0

//----- (000762D0) --------------------------------------------------------
int __cdecl sub_762D0(size_t *a1, int a2)
{
  int v2; // ecx
  size_t *v3; // edi
  size_t v4; // edx
  const void *v5; // ecx
  void *v6; // eax
  size_t v7; // esi
  void *v8; // esi
  size_t v9; // esi
  void *v10; // eax
  int result; // eax
  size_t v12; // [esp+14h] [ebp-18h]
  const void *v13; // [esp+18h] [ebp-14h]

  v2 = a2;
  v3 = a1;
  a1[1] = 0;
  *a1 = 0;
  a1[2] = 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    a1[2] = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    goto LABEL_10;
  }
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 >= 0xFFFFFFF0 )
    sub_758B0();
  v5 = *(const void **)(a2 + 8);
  v12 = *(_DWORD *)(a2 + 4);
  if ( v4 >= 0xB )
  {
    v7 = (v4 + 16) & 0xFFFFFFF0;
    v13 = *(const void **)(a2 + 8);
    v6 = operator new(v7);
    v5 = v13;
    v4 = v12;
    a1[2] = (size_t)v6;
    *a1 = v7 | 1;
    a1[1] = v12;
  }
  else
  {
    *(_BYTE *)a1 = 2 * v4;
    v6 = (char *)a1 + 1;
    if ( !v4 )
      goto LABEL_9;
  }
  v8 = v6;
  memcpy(v6, v5, v4);
  v6 = v8;
  v4 = v12;
LABEL_9:
  *((_BYTE *)v6 + v4) = 0;
  v2 = a2;
LABEL_10:
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  v9 = *(_DWORD *)(v2 + 16);
  if ( v9 )
  {
    v10 = qalloc_or_throw(*(_DWORD *)(v2 + 16));
    a1[3] = (size_t)v10;
    a1[5] = v9;
    memcpy(v10, *(const void **)(a2 + 12), v9);
    v2 = a2;
    v3 = a1;
    a1[4] = v9;
  }
  result = *(unsigned __int16 *)(v2 + 24);
  *((_WORD *)v3 + 12) = result;
  return result;
}
