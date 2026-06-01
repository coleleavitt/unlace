/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_text
// Address: 0x0003D9D0

//----- (0003D9D0) --------------------------------------------------------
int __fastcall compile_idc_text(int a1, int a2, int a3, char a4)
{
  pthread_mutex_t *v6; // r4
  int v7; // r6
  int v8; // r5

  v6 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v7 = sub_3F7BC();
  lex_init_string(*(_DWORD *)(v7 + 16), a1, *(_DWORD *)(v7 + 12));
  v8 = sub_3D434(v7, a3, a2, a4 ^ 1);
  qmutex_unlock(v6);
  return v8;
}
// DE374: using guessed type int dword_DE374;
