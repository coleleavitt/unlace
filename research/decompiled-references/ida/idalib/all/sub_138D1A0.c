void __fastcall sub_138D1A0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rdi

  *a1 = &off_2C43E18;
  v2 = (_QWORD *)a1[134];
  if ( v2 != a1 + 136 )
    operator delete(v2);
  v3 = (_QWORD *)a1[130];
  if ( v3 != a1 + 132 )
    operator delete(v3);
  v4 = a1[8];
  v5 = v4 + 120LL * *((unsigned int *)a1 + 18);
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
    v5 = a1[8];
  }
  if ( (_QWORD *)v5 != a1 + 10 )
    free((void *)v5);
  v8 = a1[3];
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  nullsub_558();
  operator delete(a1, 0x450u);
}
