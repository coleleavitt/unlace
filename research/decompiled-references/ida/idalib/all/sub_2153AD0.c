void __fastcall sub_2153AD0(__int64 a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  void *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbx
  void *v8; // rdi

  v2 = *(_QWORD **)(a1 + 224);
  *(_QWORD *)a1 = &unk_2C736A0;
  v3 = &v2[14 * *(unsigned int *)(a1 + 232)];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 14;
        v4 = (_QWORD *)v3[1];
        if ( v4 == v3 + 4 )
          break;
        free(v4);
        if ( v2 == v3 )
          goto LABEL_4;
      }
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(_QWORD **)(a1 + 224);
  }
  if ( v3 != (_QWORD *)(a1 + 240) )
    free(v3);
  v5 = *(void **)(a1 + 136);
  if ( v5 != (void *)(a1 + 152) )
    operator delete(v5);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = v6 + 40LL * *(unsigned int *)(a1 + 56);
  if ( v6 != v7 )
  {
    do
    {
      v7 -= 40;
      if ( *(_DWORD *)(v7 + 32) > 0x40u )
      {
        v8 = *(void **)(v7 + 24);
        if ( v8 )
          operator delete[](v8);
      }
    }
    while ( v6 != v7 );
    v7 = *(_QWORD *)(a1 + 48);
  }
  if ( v7 != a1 + 64 )
    free((void *)v7);
}
