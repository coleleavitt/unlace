__int64 __fastcall sub_1AE9FB0(__int64 a1)
{
  _QWORD *v2; // rbp
  void **v3; // r12
  void **v4; // r13
  _QWORD *v5; // r12
  char *v6; // rdi
  _QWORD *v7; // rdi
  void *v8; // rdi

  if ( (*(_BYTE *)(a1 + 1624) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 1632), 8LL * *(unsigned int *)(a1 + 1640), 8);
  if ( (*(_BYTE *)(a1 + 1552) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 1560), 16LL * *(unsigned int *)(a1 + 1568), 8);
  v2 = (_QWORD *)(a1 + 1312);
  v3 = (void **)(a1 + 1504);
  v4 = (void **)(a1 + 1264);
  do
  {
    while ( *v3 != v3 + 2 )
    {
      free(*v3);
      v3 -= 6;
      if ( v4 == v3 )
        goto LABEL_8;
    }
    v3 -= 6;
  }
  while ( v3 != v4 );
LABEL_8:
  v5 = (_QWORD *)(a1 + 112);
  do
  {
    v2 -= 5;
    v6 = (char *)v2[3];
    if ( v6 != (char *)(v2 + 5) )
      free(v6);
    operator delete(*v2, 8LL * *((unsigned int *)v2 + 4), 8);
  }
  while ( v2 != v5 );
  v7 = *(_QWORD **)(a1 + 96);
  if ( v5 != v7 )
    free(v7);
  operator delete(*(_QWORD *)(a1 + 72), 8LL * *(unsigned int *)(a1 + 88), 8);
  v8 = *(void **)(a1 + 56);
  if ( (void *)(a1 + 72) != v8 )
    free(v8);
  return operator delete(*(_QWORD *)(a1 + 32), 8LL * *(unsigned int *)(a1 + 48), 8);
}
