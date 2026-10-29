/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8ACA0
// Address: 0x0008ACA0

//----- (0008ACA0) --------------------------------------------------------
char *__cdecl sub_8ACA0(int a1, int a2, char *s)
{
  int v3; // ecx
  _DWORD *v4; // eax
  char *v5; // eax
  unsigned int v6; // esi
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // edx
  void *v10; // esi
  char *result; // eax
  void *v12; // [esp+0h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-18h]
  _DWORD v14[5]; // [esp+8h] [ebp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 36);
  if ( *(_DWORD *)(a1 + 40) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_DWORD **)(a1 + 32);
  }
  else
  {
    v4 = qvector_reserve(a1 + 32, *(void **)(a1 + 32), v3 + 1, 4u);
    *(_DWORD *)(a1 + 32) = v4;
    v3 = *(_DWORD *)(a1 + 36);
  }
  v4[v3] = a2;
  ++*(_DWORD *)(a1 + 36);
  v13 = a1 + 44;
  v12 = qstrdup(s);
  v14[0] = v12;
  v5 = *(char **)(a1 + 44);
  v6 = *(_DWORD *)(a1 + 52);
  v7 = *(_DWORD *)(a1 + 48);
  v8 = v7 + 1;
  if ( v5 <= (char *)v14 && &v5[4 * v6] > (char *)v14 )
  {
    if ( v6 < v8 )
    {
      v5 = (char *)qvector_reserve(v13, v5, v7 + 1, 4u);
      v9 = a1;
      *(_DWORD *)(a1 + 44) = v5;
      v7 = *(_DWORD *)(a1 + 48);
LABEL_11:
      v10 = v12;
      goto LABEL_12;
    }
LABEL_10:
    v9 = a1;
    goto LABEL_11;
  }
  if ( v6 >= v8 )
    goto LABEL_10;
  v5 = (char *)qvector_reserve(v13, v5, v7 + 1, 4u);
  v9 = a1;
  *(_DWORD *)(a1 + 44) = v5;
  v7 = *(_DWORD *)(a1 + 48);
  v10 = (void *)v14[0];
LABEL_12:
  result = &v5[4 * v7];
  *(_DWORD *)result = v10;
  ++*(_DWORD *)(v9 + 48);
  return result;
}
