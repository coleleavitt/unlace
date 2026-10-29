/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A40
// Address: 0x00045A40

//----- (00045A40) --------------------------------------------------------
int __fastcall sub_45A40(int a1, int a2, int a3)
{
  int v6; // r0
  pthread_mutex_t *v7; // r6
  pthread_mutex_t *v8; // r0
  int v9; // r2
  int v10; // r3
  char *v11; // r1
  int v12; // r2
  time_t v13; // r0
  int savedregs; // [sp+0h] [bp+0h]

  *(_DWORD *)a1 = 289621065;
  *(_DWORD *)(a1 + 4) = sub_3E4E0();
  v6 = sub_6AF18();
  *(_DWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a1 + 8) = v6;
  *(_BYTE *)(a1 + 76) = a3;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 77) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  if ( !a3 )
  {
    v7 = (pthread_mutex_t *)dword_D4AB0;
    v8 = sub_7A268((pthread_mutex_t *)dword_D4AB0);
    v9 = *(_DWORD *)(a1 + 4);
    v10 = *(_DWORD *)(v9 + 68) + 1;
    *(_DWORD *)(v9 + 68) = v10;
    if ( v10 == 1 && off_D3CF0 )
      ((void (__fastcall *)(pthread_mutex_t *))off_D3CF0)(v8);
    *(_BYTE *)(a1 + 77) = 1;
    sub_7A290(v7);
  }
  if ( sub_7A104() )
  {
    if ( *(_BYTE *)(a1 + 76) )
      v13 = -1;
    else
      v13 = time((time_t *)*(unsigned __int8 *)(a1 + 76));
  }
  else
  {
    v13 = -1;
    *(_BYTE *)(a1 + 76) = 1;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 64) = v13;
  if ( !*(_BYTE *)(a1 + 76) )
    ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x19u, v11, v12, (int)callui, savedregs);
  return a1;
}
// 45ADA: variable 'v11' is possibly undefined
// 45ADA: variable 'v12' is possibly undefined
// 45ADA: variable 'savedregs' is possibly undefined
// D3CF0: using guessed type _UNKNOWN *off_D3CF0;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D4AB0: using guessed type int dword_D4AB0;
