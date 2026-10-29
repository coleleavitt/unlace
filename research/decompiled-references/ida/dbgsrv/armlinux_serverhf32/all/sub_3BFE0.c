/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BFE0
// Address: 0x0003BFE0

//----- (0003BFE0) --------------------------------------------------------
void *__fastcall sub_3BFE0(char *a1, _DWORD *a2, size_t *a3)
{
  pthread_mutex_t *v6; // r8
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r5
  size_t v10; // r4
  void *v11; // r0
  void *v12; // r6

  v6 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v7 = (_DWORD *)sub_3E348();
  v8 = sub_3ED68(v7, a1);
  if ( v8 == -1 || (v9 = *(_DWORD *)(*v7 + 4 * v8), (v10 = *(_DWORD *)(v9 + 20)) == 0) )
  {
    sub_7A128(v6);
    return nullptr;
  }
  else
  {
    if ( a3 )
      *a3 = v10;
    if ( a2 )
      *a2 = *(_DWORD *)(v9 + 12);
    v11 = sub_77D94(v10);
    v12 = v11;
    if ( v11 )
      memcpy(v11, *(const void **)(v9 + 16), v10);
    sub_7A128(v6);
    return v12;
  }
}
// D3A90: using guessed type int dword_D3A90;
