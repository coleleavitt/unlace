void __fastcall sub_3E9820(_QWORD *a1)
{
  void (*v2)(void); // rax
  void *v3; // rdi
  void (*v4)(void); // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 416LL);
    if ( (char *)v2 == (char *)sub_3E7A10 )
    {
      *a1 = off_4D9AE8;
      v3 = (void *)a1[564];
      if ( v3 )
      {
        v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
        if ( (char *)v4 == (char *)sub_3E6020 )
          operator delete(v3, 0x10u);
        else
          v4();
      }
      v5 = a1[557];
      a1[564] = 0;
      if ( v5 )
      {
        a1[558] = 0;
        qfree(v5);
      }
      v6 = a1[41];
      *a1 = off_4D9030;
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
      qfree(a1[13]);
      operator delete(a1, 0x11A8u);
    }
    else
    {
      v2();
    }
  }
}
