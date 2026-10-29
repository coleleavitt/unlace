void __fastcall sub_16729C0(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  char *v7; // rdi
  char *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1 + 320LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v3 )
    goto LABEL_22;
LABEL_2:
  v3 -= 320;
  if ( *(_BYTE *)(v3 + 312) )
    goto LABEL_28;
  while ( 1 )
  {
    v4 = *(_QWORD **)(v3 + 168);
    v5 = *(_QWORD **)(v3 + 176);
    v6 = v4;
    if ( v5 != v4 )
    {
      do
      {
        while ( 1 )
        {
          v7 = (char *)v6[10];
          if ( v7 != (char *)(v6 + 12) )
            operator delete(v7);
          v8 = (char *)v6[5];
          if ( v8 != (char *)(v6 + 7) )
            operator delete(v8);
          if ( (_QWORD *)*v6 == v6 + 2 )
            break;
          operator delete((void *)*v6);
          v6 += 15;
          if ( v6 == v5 )
            goto LABEL_10;
        }
        v6 += 15;
      }
      while ( v5 != v6 );
LABEL_10:
      v4 = *(_QWORD **)(v3 + 168);
    }
    if ( v4 )
      operator delete(v4);
    v9 = *(void **)(v3 + 136);
    if ( v9 != (void *)(v3 + 152) )
      operator delete(v9);
    v10 = *(void **)(v3 + 104);
    if ( v10 != (void *)(v3 + 120) )
      operator delete(v10);
    v11 = *(void **)(v3 + 56);
    if ( v11 != (void *)(v3 + 72) )
      operator delete(v11);
    v12 = *(void **)(v3 + 16);
    if ( v12 != (void *)(v3 + 32) )
    {
      operator delete(v12);
      if ( v3 == v2 )
        break;
      goto LABEL_2;
    }
    if ( v3 == v2 )
      break;
    v3 -= 320;
    if ( *(_BYTE *)(v3 + 312) )
LABEL_28:
      sub_A09CE0(v3 + 192);
  }
  v3 = *(_QWORD *)a1;
LABEL_22:
  if ( v3 != a1 + 16 )
    free((void *)v3);
}
