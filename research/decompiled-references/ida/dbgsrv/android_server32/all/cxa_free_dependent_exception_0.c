/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_free_dependent_exception_0
// Address: 0x000910AC

//----- (000910AC) --------------------------------------------------------
void __fastcall _cxa_free_dependent_exception_0(int *a1)
{
  char *v2; // r0
  int *v3; // lr
  int *i; // r5
  int *v5; // r2
  int v6; // r4
  int v7; // r5
  pthread_mutex_t *v8[8]; // [sp+0h] [bp-28h] BYREF
  char v9; // [sp+20h] [bp-8h] BYREF

  if ( a1 >= &dword_E07C0 || a1 < dword_E05C0 )
  {
    j_free(a1);
  }
  else
  {
    v8[1] = (pthread_mutex_t *)&v9;
    v8[0] = (pthread_mutex_t *)&dword_E07C0;
    pthread_mutex_lock((pthread_mutex_t *)&dword_E07C0);
    v2 = (char *)(a1 - 1);
    v3 = nullptr;
    for ( i = (int *)dword_E07C4; ; i = &dword_E05C0[*(unsigned __int16 *)v5] )
    {
      if ( !i || (v5 = i, i == &dword_E07C0) )
      {
        *(_WORD *)v2 = (unsigned int)(dword_E07C4 - (_DWORD)dword_E05C0) >> 2;
        dword_E07C4 = (int)(a1 - 1);
        goto LABEL_15;
      }
      v6 = *((unsigned __int16 *)i + 1);
      v7 = *((unsigned __int16 *)a1 - 1);
      if ( &v5[v6] == (int *)v2 )
      {
        *((_WORD *)v5 + 1) = v7 + v6;
        goto LABEL_15;
      }
      if ( &v2[4 * v7] == (char *)v5 )
        break;
      v3 = v5;
    }
    *((_WORD *)a1 - 1) = v7 + v6;
    if ( v3 )
    {
      *(_WORD *)v3 = (unsigned int)(v2 - (char *)dword_E05C0) >> 2;
    }
    else
    {
      dword_E07C4 = (int)(a1 - 1);
      *(_WORD *)v2 = *(_WORD *)v5;
    }
LABEL_15:
    sub_911AC(v8);
  }
}
// E05C0: using guessed type int dword_E05C0[];
// E07C0: using guessed type int dword_E07C0;
// E07C4: using guessed type int dword_E07C4;
