/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_file
// Address: 0x0003D8F4

//----- (0003D8F4) --------------------------------------------------------
int __fastcall compile_idc_file(char *a1, int a2, int a3)
{
  _DWORD *v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r7
  pthread_mutex_t *mutex; // [sp+10h] [bp-10h]
  _DWORD v12[2]; // [sp+14h] [bp-Ch] BYREF

  mutex = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v4 = (_DWORD *)off_DD644(off_DD644);
  sub_55988(v4, nullptr, 0);
  v5 = a3 & 1;
  v6 = sub_3F7BC();
  if ( lex_init_file(*(_DWORD **)(v6 + 16), a1) )
  {
    v7 = 0;
    sub_3D53C(*(_DWORD **)(v6 + 16), 0, a2);
    lex_term_file(*(_DWORD *)(v6 + 16), v5);
  }
  else
  {
    v12[1] = -1;
    v12[0] = &off_D9BC0;
    v7 = sub_3D434(v6, (unsigned int)v12 & (a3 << 30 >> 31), a2, (a3 & 4) == 0);
    lex_term_file(*(_DWORD *)(v6 + 16), v5);
  }
  qmutex_unlock(mutex);
  return v7;
}
// D9BC0: using guessed type _UNKNOWN *off_D9BC0;
// DD644: using guessed type int (__fastcall *off_DD644)(_DWORD);
// DE374: using guessed type int dword_DE374;
