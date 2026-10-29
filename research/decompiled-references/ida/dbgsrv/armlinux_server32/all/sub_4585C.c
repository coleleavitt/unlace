/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4585C
// Address: 0x0004585C

//----- (0004585C) --------------------------------------------------------
bool __fastcall sub_4585C(int a1, _BYTE *a2)
{
  pthread_mutex_t *v4; // r9
  int v5; // r0
  unsigned int v6; // r7
  _BOOL4 v7; // r10
  _DWORD *v9; // r8
  _DWORD *v10; // r6
  int v11; // r1

  v4 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v5 = sub_3E4E0();
  v6 = *(_DWORD *)(v5 + 52);
  v7 = (unsigned int)(a2 - 16) < v6 + 40 * *(_DWORD *)(v5 + 56);
  if ( (unsigned int)(a2 - 16) < v6 )
    v7 = 0;
  if ( !v7 )
    goto LABEL_6;
  sub_45758((unsigned __int8 *)a1);
  *(_BYTE *)a1 = 10;
  if ( *a2 != 10 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = ~(-858993459 * ((int)&a2[-v6 - 16] >> 3));
LABEL_6:
    sub_7A290(v4);
    return v7;
  }
  v9 = a2 + 8;
  v10 = (_DWORD *)(a1 + 8);
  v11 = v9[1];
  *v10 = *v9;
  v10[1] = v11;
  sub_7A290(v4);
  return v7;
}
// D4AB0: using guessed type int dword_D4AB0;
