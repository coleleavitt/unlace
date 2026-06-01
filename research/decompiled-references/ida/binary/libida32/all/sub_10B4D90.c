void __fastcall sub_10B4D90(__int64 a1)
{
  void **v1; // r12
  void **v3; // rbp
  void *v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx

  v1 = *(void ***)(a1 + 184);
  *(_QWORD *)a1 = &off_2B39408;
  v3 = &v1[5 * *(unsigned int *)(a1 + 192)];
  if ( v1 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 5;
        if ( *v3 == v3 + 2 )
          break;
        free(*v3);
        if ( v1 == v3 )
          goto LABEL_4;
      }
    }
    while ( v1 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 184);
  }
  if ( v3 != (void **)(a1 + 200) )
    free(v3);
  v4 = *(void **)(a1 + 120);
  *(_QWORD *)a1 = &unk_2C0C288;
  if ( v4 != (void *)(a1 + 136) )
    free(v4);
  v5 = *(void **)(a1 + 72);
  if ( v5 != (void *)(a1 + 88) )
    free(v5);
  v6 = *(_QWORD **)(a1 + 16);
  v7 = (_QWORD *)(a1 + 32);
  *(v7 - 4) = &off_2B39338;
  if ( v6 != v7 )
    free(v6);
}

