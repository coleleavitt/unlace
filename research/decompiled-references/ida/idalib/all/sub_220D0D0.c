void __fastcall sub_220D0D0(char *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  char *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  char *v9; // rdi

  *(_QWORD *)a1 = &unk_2C759E8;
  v2 = *((_QWORD *)a1 + 24);
  *((_QWORD *)a1 + 24) = 0;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)a1 + 24);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_QWORD **)a1 + 12);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  memset(*((void **)a1 + 10), 0, 8LL * *((_QWORD *)a1 + 11));
  v6 = *((char **)a1 + 10);
  *((_QWORD *)a1 + 13) = 0;
  *((_QWORD *)a1 + 12) = 0;
  if ( v6 != a1 + 128 )
    operator delete(v6);
  v7 = *((_QWORD **)a1 + 5);
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      operator delete(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  memset(*((void **)a1 + 3), 0, 8LL * *((_QWORD *)a1 + 4));
  v9 = *((char **)a1 + 3);
  *((_QWORD *)a1 + 6) = 0;
  *((_QWORD *)a1 + 5) = 0;
  if ( v9 != a1 + 72 )
    operator delete(v9);
  operator delete(a1, 0xC8u);
}
