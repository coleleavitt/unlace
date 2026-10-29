void __fastcall sub_138CF40(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rdi

  *(_QWORD *)a1 = &off_2C43E18;
  v2 = *(void **)(a1 + 1072);
  if ( v2 != (void *)(a1 + 1088) )
    operator delete(v2);
  v3 = *(void **)(a1 + 1040);
  if ( v3 != (void *)(a1 + 1056) )
    operator delete(v3);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = v4 + 120LL * *(unsigned int *)(a1 + 72);
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 120;
        v6 = *(void **)(v5 + 80);
        if ( v6 != (void *)(v5 + 96) )
          operator delete(v6);
        v7 = *(void **)(v5 + 32);
        if ( v7 != (void *)(v5 + 48) )
          operator delete(v7);
        if ( *(_QWORD *)v5 == v5 + 16 )
          break;
        operator delete(*(void **)v5);
        if ( v4 == v5 )
          goto LABEL_12;
      }
    }
    while ( v4 != v5 );
LABEL_12:
    v5 = *(_QWORD *)(a1 + 64);
  }
  if ( v5 != a1 + 80 )
    free((void *)v5);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  nullsub_558();
}
