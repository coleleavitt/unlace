/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90FB8
// Address: 0x00090FB8

//----- (00090FB8) --------------------------------------------------------
int *__fastcall sub_90FB8(int a1)
{
  int *v2; // r0
  unsigned int v3; // r1
  int *v4; // r3
  int *v5; // r5
  unsigned int v6; // r5
  int v7; // r2
  int *v8; // r0
  int v9; // r1
  pthread_mutex_t *v11; // [sp+0h] [bp-18h] BYREF

  v11 = (pthread_mutex_t *)&dword_E07C0;
  pthread_mutex_lock((pthread_mutex_t *)&dword_E07C0);
  v2 = (int *)dword_E07C4;
  v3 = ((unsigned int)(a1 + 3) >> 2) + 1;
  if ( !dword_E07C4 )
  {
    v2 = dword_E05C0;
    dword_E07C4 = (int)dword_E05C0;
    dword_E05C0[0] = 8388736;
  }
  v4 = nullptr;
  while ( 1 )
  {
    v5 = nullptr;
    if ( !v2 || v2 == &dword_E07C0 )
      break;
    v6 = *((unsigned __int16 *)v2 + 1);
    if ( v3 < v6 )
    {
      *((_WORD *)v2 + 1) = v6 - v3;
      v7 = (unsigned __int16)(v6 - v3);
      LOWORD(v2[v7]) = 0;
      v8 = &v2[v7];
      v5 = v8 + 1;
      *((_WORD *)v8 + 1) = v3;
      break;
    }
    if ( v3 == v6 )
    {
      v9 = *(unsigned __int16 *)v2;
      if ( v4 )
        *(_WORD *)v4 = v9;
      else
        dword_E07C4 = (int)&dword_E05C0[v9];
      *(_WORD *)v2 = 0;
      v5 = v2 + 1;
      break;
    }
    v4 = v2;
    v2 = &dword_E05C0[*(unsigned __int16 *)v2];
  }
  sub_911AC(&v11);
  return v5;
}
// E05C0: using guessed type int dword_E05C0[];
// E07C0: using guessed type int dword_E07C0;
// E07C4: using guessed type int dword_E07C4;
