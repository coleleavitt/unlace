__int64 __fastcall sub_3EDB60(_QWORD *a1)
{
  void *v2; // rdi
  void (*v3)(void); // rax
  void *v4; // rdi
  void (*v5)(void); // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  *a1 = off_4E9AB8;
  v2 = (void *)a1[474];
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)sub_3EA420 )
      operator delete(v2, 0x18u);
    else
      v3();
  }
  v4 = (void *)a1[473];
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)sub_3EA410 )
      operator delete(v4, 0x10u);
    else
      v5();
  }
  a1[44] = &off_4EC308;
  remove_event_listener(a1 + 44);
  v6 = a1[41];
  *a1 = off_4EC150;
  if ( v6 )
  {
    a1[42] = 0;
    qfree(v6);
  }
  v7 = a1[38];
  if ( v7 )
  {
    a1[39] = 0;
    qfree(v7);
  }
  v8 = a1[35];
  if ( v8 )
  {
    a1[36] = 0;
    qfree(v8);
  }
  qfree(a1[33]);
  v9 = a1[30];
  if ( v9 )
  {
    a1[31] = 0;
    qfree(v9);
  }
  qfree(a1[28]);
  v10 = a1[25];
  if ( v10 )
  {
    a1[26] = 0;
    qfree(v10);
  }
  qfree(a1[23]);
  v11 = a1[20];
  if ( v11 )
  {
    a1[21] = 0;
    qfree(v11);
  }
  qfree(a1[18]);
  v12 = a1[15];
  if ( v12 )
  {
    a1[16] = 0;
    qfree(v12);
  }
  return qfree(a1[13]);
}
