void __fastcall sub_443B70(char *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // rbp
  char *v11; // rbx
  void *v12; // rdi

  sub_443AA0((__int64)a1);
  v2 = *((void **)a1 + 52);
  if ( v2 )
  {
    *((_QWORD *)a1 + 53) = 0;
    qfree(v2);
  }
  sub_441FF0((__int64)(a1 + 344));
  v3 = *((void **)a1 + 40);
  if ( v3 )
  {
    *((_QWORD *)a1 + 41) = 0;
    qfree(v3);
  }
  sub_440D80(*((void **)a1 + 33));
  v4 = *((void **)a1 + 26);
  if ( v4 )
  {
    *((_QWORD *)a1 + 27) = 0;
    qfree(v4);
  }
  v5 = *((void **)a1 + 23);
  if ( v5 )
  {
    *((_QWORD *)a1 + 24) = 0;
    qfree(v5);
  }
  v6 = *((void **)a1 + 20);
  if ( v6 )
  {
    *((_QWORD *)a1 + 21) = 0;
    qfree(v6);
  }
  v7 = *((void **)a1 + 17);
  if ( v7 )
  {
    *((_QWORD *)a1 + 18) = 0;
    qfree(v7);
  }
  v8 = *((void **)a1 + 14);
  if ( v8 )
  {
    *((_QWORD *)a1 + 15) = 0;
    qfree(v8);
  }
  v9 = *((void **)a1 + 11);
  if ( v9 )
  {
    *((_QWORD *)a1 + 12) = 0;
    qfree(v9);
  }
  v10 = a1 + 16;
  v11 = a1 + 88;
  while ( v11 != v10 )
  {
    while ( 1 )
    {
      v12 = *((void **)v11 - 3);
      v11 -= 24;
      if ( !v12 )
        break;
      *((_QWORD *)v11 + 1) = 0;
      qfree(v12);
      if ( v11 == v10 )
        return;
    }
  }
}

