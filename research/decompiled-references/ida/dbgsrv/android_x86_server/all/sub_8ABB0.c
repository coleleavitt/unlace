/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8ABB0
// Address: 0x0008ABB0

//----- (0008ABB0) --------------------------------------------------------
int __cdecl sub_8ABB0(int a1)
{
  int result; // eax
  void **v2; // esi
  int v3; // edi
  int v4; // edi
  _DWORD *v5; // edi
  void *v6; // eax
  int v7; // [esp+8h] [ebp-14h]

  if ( !*(_DWORD *)(a1 + 36) )
    return 1;
  result = sub_85150(a1, *(int **)(a1 + 32), *(char ***)(a1 + 44), *(_DWORD *)(a1 + 36));
  if ( !*(_DWORD *)(a1 + 36) )
    return result;
  v7 = result;
  v2 = *(void ***)(a1 + 44);
  v3 = *(_DWORD *)(a1 + 48);
  if ( (v3 & 0x3FFFFFFF) == 0 )
  {
    v5 = (_DWORD *)a1;
    if ( !v2 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v4 = 4 * v3;
  do
  {
    qfree(*v2++);
    v4 -= 4;
  }
  while ( v4 );
  v5 = (_DWORD *)a1;
  v2 = *(void ***)(a1 + 44);
  if ( v2 )
  {
LABEL_7:
    v5[12] = 0;
    qfree(v2);
    v5[11] = 0;
    v5[13] = 0;
  }
LABEL_8:
  v6 = (void *)v5[8];
  if ( v6 )
  {
    v5[9] = 0;
    qfree(v6);
    v5[8] = 0;
    v5[10] = 0;
  }
  return v7;
}
