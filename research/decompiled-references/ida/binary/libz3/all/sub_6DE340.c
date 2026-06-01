void __fastcall sub_6DE340(__int64 *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi
  __int64 *v3; // rbp
  __int64 v4; // rdi
  char *v5; // rdi
  char *v6; // rcx
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    sub_2334C0((__int64 *)(v1 + 1136));
    v2 = *(void **)(v1 + 1088);
    if ( v2 )
      sub_186B220(v2);
    v3 = *(__int64 **)(v1 + 1064);
    if ( v3 )
    {
      sub_2334C0(v3 + 11);
      v4 = v3[10];
      if ( v4 )
        sub_186B220((void *)(v4 - 8));
      sub_186B220(v3);
    }
    v5 = *(char **)(v1 + 896);
    v6 = &v5[8 * *(unsigned int *)(v1 + 904)];
    if ( v5 != v6 )
    {
      v7 = *(char **)(v1 + 896);
      do
      {
        v8 = *(_QWORD *)v7;
        v7 += 8;
        *(_BYTE *)(v8 + 6) &= ~1u;
      }
      while ( v7 != v6 );
    }
    *(_DWORD *)(v1 + 904) = 0;
    if ( v5 != (char *)(v1 + 912) && v5 )
      sub_186B220(v5);
    v9 = *(_QWORD *)(v1 + 888);
    if ( v9 )
      sub_186B220((void *)(v9 - 8));
    v10 = *(_QWORD *)(v1 + 880);
    if ( v10 )
      sub_186B220((void *)(v10 - 8));
    v11 = *(_QWORD *)(v1 + 872);
    if ( v11 )
      sub_186B220((void *)(v11 - 8));
    v12 = *(_QWORD *)(v1 + 864);
    if ( v12 )
      sub_186B220((void *)(v12 - 8));
    v13 = *(void **)(v1 + 200);
    if ( v13 != (void *)(v1 + 216) )
      operator delete(v13, *(_QWORD *)(v1 + 216) + 1LL);
    v14 = *(void **)(v1 + 168);
    if ( v14 != (void *)(v1 + 184) )
      operator delete(v14, *(_QWORD *)(v1 + 184) + 1LL);
    sub_6DE2A0(*(_QWORD *)(v1 + 48), *(_QWORD *)(v1 + 56));
    sub_6DE2A0(*(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
    sub_186B220((void *)v1);
  }
}

