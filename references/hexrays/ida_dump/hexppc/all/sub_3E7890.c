__int64 __fastcall sub_3E7890(_QWORD *a1)
{
  void *v2; // rdi
  void (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  *a1 = off_4D9AE8;
  v2 = (void *)a1[564];
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)sub_3E6020 )
      operator delete(v2, 0x10u);
    else
      v3();
  }
  v4 = a1[557];
  a1[564] = 0;
  if ( v4 )
  {
    a1[558] = 0;
    qfree(v4);
  }
  v5 = a1[41];
  *a1 = off_4D9030;
  if ( v5 )
  {
    a1[42] = 0;
    qfree(v5);
  }
  v6 = a1[38];
  if ( v6 )
  {
    a1[39] = 0;
    qfree(v6);
  }
  v7 = a1[35];
  if ( v7 )
  {
    a1[36] = 0;
    qfree(v7);
  }
  qfree(a1[33]);
  v8 = a1[30];
  if ( v8 )
  {
    a1[31] = 0;
    qfree(v8);
  }
  qfree(a1[28]);
  v9 = a1[25];
  if ( v9 )
  {
    a1[26] = 0;
    qfree(v9);
  }
  qfree(a1[23]);
  v10 = a1[20];
  if ( v10 )
  {
    a1[21] = 0;
    qfree(v10);
  }
  qfree(a1[18]);
  v11 = a1[15];
  if ( v11 )
  {
    a1[16] = 0;
    qfree(v11);
  }
  return qfree(a1[13]);
}
