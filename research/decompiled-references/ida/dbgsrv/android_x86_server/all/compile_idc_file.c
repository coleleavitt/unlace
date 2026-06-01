/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_file
// Address: 0x0004E170

//----- (0004E170) --------------------------------------------------------
int __cdecl compile_idc_file(char *a1, int a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // eax
  int v7; // [esp+18h] [ebp-24h]
  pthread_mutex_t *v8; // [esp+1Ch] [ebp-20h]
  _DWORD v9[7]; // [esp+20h] [ebp-1Ch] BYREF

  v9[2] = __readgsdword(0x14u);
  v8 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v3 = (_DWORD *)off_13B64C();
  sub_75060(v3, nullptr, 0);
  v4 = sub_50F20();
  if ( lex_init_file(*(_DWORD *)(v4 + 16), a1) )
  {
    sub_4DB20(*(_DWORD **)(v4 + 16), 0, a2);
    lex_term_file(*(_DWORD *)(v4 + 16), a3 & 1);
    v7 = 0;
  }
  else
  {
    v9[0] = &off_137F60;
    v9[1] = -1;
    LOBYTE(v5) = sub_4D7D0(v4, (a3 << 30 >> 31) & (unsigned int)v9, a2, (a3 & 4) == 0);
    v7 = v5;
    lex_term_file(*(_DWORD *)(v4 + 16), a3 & 1);
  }
  qmutex_unlock(v8);
  return v7;
}
// 4E254: variable 'v5' is possibly undefined
// 137F60: using guessed type int (__cdecl *off_137F60)(int, int);
// 13B64C: using guessed type int (*off_13B64C)();
// 13BD5C: using guessed type int dword_13BD5C;
