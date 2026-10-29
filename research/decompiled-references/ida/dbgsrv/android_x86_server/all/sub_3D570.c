/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D570
// Address: 0x0003D570

//----- (0003D570) --------------------------------------------------------
char __cdecl sub_3D570(int a1, _DWORD *a2, int a3, size_t n, char a5)
{
  char result; // al
  size_t v6; // esi
  _DWORD *v7; // edx
  void *v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  char v12; // [esp+Fh] [ebp-1Dh]
  char v13; // [esp+17h] [ebp-15h] BYREF
  unsigned int v14; // [esp+18h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  if ( ~a3 < n || n + a3 > a2[1] )
    return 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !a5 )
  {
    v13 = 0;
    sub_44400((char **)a1, n + 1, &v13);
    *(_BYTE *)(*(_DWORD *)a1 + n) = 0;
    memcpy(*(void **)a1, (const void *)(*a2 + a3), n);
    return 1;
  }
  if ( *(_DWORD *)(a1 + 8) < n )
  {
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, n, 1u);
    goto LABEL_11;
  }
  if ( !n )
    return 1;
LABEL_11:
  v6 = 0;
  do
  {
    result = 1;
    if ( !*(_BYTE *)(v6 + a3 + *a2) )
      break;
    v12 = *(_BYTE *)(v6 + a3 + *a2);
    v7 = (_DWORD *)a1;
    v8 = *(void **)a1;
    v9 = *(_DWORD *)(a1 + 4);
    v10 = v9 - 1;
    if ( !v9 )
      v10 = 0;
    v11 = v10 + 2;
    if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v10 + 2) )
    {
      v8 = qvector_reserve(a1, v8, v10 + 2, 1u);
      v11 = v10 + 2;
      v7 = (_DWORD *)a1;
      *(_DWORD *)a1 = v8;
    }
    v7[1] = v11;
    *((_BYTE *)v8 + v10) = v12;
    *(_BYTE *)(*v7 + v10 + 1) = 0;
    ++v6;
    result = 1;
  }
  while ( v6 < n );
  return result;
}
