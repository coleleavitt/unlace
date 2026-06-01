void __fastcall sub_5AA780(__int64 a1)
{
  _QWORD *v2; // r13
  char *v3; // rbp
  int v4; // r12d
  char *v5; // rdi
  char *v6; // rbp
  int v7; // r12d
  char *v8; // rdi

  if ( a1 && *(char *)(a1 + 9) >= 0 )
  {
    v2 = *(_QWORD **)(qword_2CA1698 + 1480);
    sub_59F920(v2, a1);
    qfree(*(void **)(a1 + 48));
    v3 = *(char **)(a1 + 64);
    *(_QWORD *)(a1 + 48) = 0;
    if ( v3 )
    {
      if ( *(int *)(a1 + 56) > 0 )
      {
        v4 = 0;
        do
        {
          v5 = v3;
          ++v4;
          v3 += 32;
          free_regvar(v5);
        }
        while ( v4 < *(_DWORD *)(a1 + 56) );
        v3 = *(char **)(a1 + 64);
      }
      qfree(v3);
      *(_QWORD *)(a1 + 64) = 0;
    }
    sub_6227D0(v2, a1);
    v6 = *(char **)(a1 + 96);
    if ( v6 )
    {
      if ( *(int *)(a1 + 88) > 0 )
      {
        v7 = 0;
        do
        {
          v8 = v6;
          ++v7;
          v6 += 24;
          free_regarg(v8);
        }
        while ( v7 < *(_DWORD *)(a1 + 88) );
        v6 = *(char **)(a1 + 96);
      }
      qfree(v6);
      *(_QWORD *)(a1 + 96) = 0;
    }
    qfree(*(void **)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0;
  }
  else
  {
    qfree(*(void **)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0;
  }
}

