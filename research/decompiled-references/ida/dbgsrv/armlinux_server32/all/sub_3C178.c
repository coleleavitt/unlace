/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C178
// Address: 0x0003C178

//----- (0003C178) --------------------------------------------------------
void *__fastcall sub_3C178(char *a1, _DWORD *a2, size_t *a3)
{
  pthread_mutex_t *v6; // r8
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r5
  size_t v10; // r4
  void *v11; // r0
  void *v12; // r6

  v6 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v7 = (_DWORD *)sub_3E4E0();
  v8 = sub_3EEFC(v7, a1);
  if ( v8 == -1 || (v9 = *(_DWORD *)(*v7 + 4 * v8), (v10 = *(_DWORD *)(v9 + 20)) == 0) )
  {
    sub_7A290(v6);
    return nullptr;
  }
  else
  {
    if ( a3 )
      *a3 = v10;
    if ( a2 )
      *a2 = *(_DWORD *)(v9 + 12);
    v11 = sub_77EFC(v10);
    v12 = v11;
    if ( v11 )
      memcpy(v11, *(const void **)(v9 + 16), v10);
    sub_7A290(v6);
    return v12;
  }
}
// D4AB0: using guessed type int dword_D4AB0;
