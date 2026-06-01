/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55A90
// Address: 0x00055A90

//----- (00055A90) --------------------------------------------------------
void __cdecl sub_55A90(int a1)
{
  int *v1; // edi
  int v2; // esi
  int v3; // esi
  int v4; // esi
  void *v5; // [esp+8h] [ebp-14h]

  v1 = *(int **)a1;
  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 0x3FFFFFFF) == 0 )
  {
    v4 = a1;
    if ( !v1 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v3 = 4 * v2;
  do
  {
    if ( *v1 )
    {
      v5 = (void *)*v1;
      sub_55B60(*v1);
      operator delete(v5);
    }
    ++v1;
    v3 -= 4;
  }
  while ( v3 );
  v4 = a1;
  v1 = *(int **)a1;
  if ( *(_DWORD *)a1 )
  {
LABEL_7:
    *(_DWORD *)(v4 + 4) = 0;
    qfree(v1);
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 8) = 0;
  }
LABEL_8:
  sub_55250(v4);
  sub_580B0(v4 + 36);
  sub_6C460(*(void ***)(v4 + 12));
  *(_DWORD *)(v4 + 12) = 0;
  destroy_lexer(*(void **)(v4 + 16));
  *(_DWORD *)(v4 + 16) = 0;
}
