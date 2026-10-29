void __fastcall sub_5C4D10(__int64 a1)
{
  _QWORD *v2; // r13
  char *v3; // rbp
  int v4; // r12d
  char *v5; // rdi
  char *v6; // rbp
  int v7; // r12d
  char *v8; // rdi

  if ( a1 && *(char *)(a1 + 17) >= 0 )
  {
    v2 = *(_QWORD **)(qword_2CCB598 + 1672);
    sub_5B9D80(v2, a1);
    qfree(*(void **)(a1 + 72));
    v3 = *(char **)(a1 + 88);
    *(_QWORD *)(a1 + 72) = 0;
    if ( v3 )
    {
      if ( *(int *)(a1 + 80) > 0 )
      {
        v4 = 0;
        do
        {
          v5 = v3;
          ++v4;
          v3 += 40;
          free_regvar(v5);
        }
        while ( v4 < *(_DWORD *)(a1 + 80) );
        v3 = *(char **)(a1 + 88);
      }
      qfree(v3);
      *(_QWORD *)(a1 + 88) = 0;
    }
    sub_63F9D0(v2, a1);
    v6 = *(char **)(a1 + 120);
    if ( v6 )
    {
      if ( *(int *)(a1 + 112) > 0 )
      {
        v7 = 0;
        do
        {
          v8 = v6;
          ++v7;
          v6 += 24;
          free_regarg(v8);
        }
        while ( v7 < *(_DWORD *)(a1 + 112) );
        v6 = *(char **)(a1 + 120);
      }
      qfree(v6);
      *(_QWORD *)(a1 + 120) = 0;
    }
    qfree(*(void **)(a1 + 136));
    *(_QWORD *)(a1 + 136) = 0;
  }
  else
  {
    qfree(*(void **)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0;
  }
}
