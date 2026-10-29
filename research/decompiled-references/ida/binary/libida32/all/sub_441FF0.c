void __fastcall sub_441FF0(__int64 a1)
{
  _QWORD *v2; // rbp
  void *v3; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // r13
  void *v9; // rdi
  void *v10; // rdi
  _QWORD *v11; // r13
  __int64 v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  _QWORD *v15; // r13
  __int64 v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  _QWORD *v19; // r13
  __int64 v20; // rbx
  void *v21; // rdi
  void *v22; // rdi
  _QWORD *v23; // r13
  __int64 v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  _QWORD *v27; // r13
  __int64 v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  char *v31; // r13
  __int64 v32; // rbx
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)a1 = &off_2BD0430;
  if ( v2 )
  {
    v3 = (void *)v2[129];
    if ( v3 )
    {
      v2[130] = 0;
      qfree(v3);
    }
    v4 = v2 + 123;
    do
    {
      v5 = v4[2];
      while ( v5 )
      {
        sub_441840(*(_QWORD **)(v5 + 24));
        v6 = (void *)v5;
        v5 = *(_QWORD *)(v5 + 16);
        operator delete(v6, 0x28u);
      }
      v4 -= 6;
    }
    while ( v4 != v2 + 105 );
    do
    {
      v7 = v4[2];
      while ( v7 )
      {
        v8 = (_QWORD *)v7;
        sub_441D30(*(_QWORD **)(v7 + 24));
        v9 = *(void **)(v7 + 40);
        v7 = *(_QWORD *)(v7 + 16);
        if ( v9 )
        {
          v8[6] = 0;
          qfree(v9);
        }
        operator delete(v8, 0x40u);
      }
      v4 -= 6;
    }
    while ( v4 != v2 + 87 );
    v10 = (void *)v2[90];
    if ( v10 )
    {
      v2[91] = 0;
      qfree(v10);
    }
    v11 = v2 + 84;
    do
    {
      v12 = v11[2];
      while ( v12 )
      {
        sub_4412D0(*(_QWORD **)(v12 + 24));
        v13 = (void *)v12;
        v12 = *(_QWORD *)(v12 + 16);
        operator delete(v13, 0x30u);
      }
      v11 -= 6;
    }
    while ( v2 + 72 != v11 );
    v14 = (void *)v2[75];
    if ( v14 )
    {
      v2[76] = 0;
      qfree(v14);
    }
    v15 = v2 + 69;
    do
    {
      v16 = v15[2];
      while ( v16 )
      {
        sub_4414A0(*(_QWORD **)(v16 + 24));
        v17 = (void *)v16;
        v16 = *(_QWORD *)(v16 + 16);
        operator delete(v17, 0x30u);
      }
      v15 -= 6;
    }
    while ( v15 != v2 + 57 );
    v18 = (void *)v2[60];
    if ( v18 )
    {
      v2[61] = 0;
      qfree(v18);
    }
    v19 = v2 + 54;
    do
    {
      v20 = v19[2];
      while ( v20 )
      {
        sub_4414A0(*(_QWORD **)(v20 + 24));
        v21 = (void *)v20;
        v20 = *(_QWORD *)(v20 + 16);
        operator delete(v21, 0x30u);
      }
      v19 -= 6;
    }
    while ( v2 + 42 != v19 );
    v22 = (void *)v2[45];
    if ( v22 )
    {
      v2[46] = 0;
      qfree(v22);
    }
    v23 = v2 + 39;
    do
    {
      v24 = v23[2];
      while ( v24 )
      {
        sub_4414A0(*(_QWORD **)(v24 + 24));
        v25 = (void *)v24;
        v24 = *(_QWORD *)(v24 + 16);
        operator delete(v25, 0x30u);
      }
      v23 -= 6;
    }
    while ( v23 != v2 + 27 );
    v26 = (void *)v2[30];
    if ( v26 )
    {
      v2[31] = 0;
      qfree(v26);
    }
    v27 = v2 + 24;
    do
    {
      v28 = v27[2];
      while ( v28 )
      {
        sub_441670(*(_QWORD **)(v28 + 24));
        v29 = (void *)v28;
        v28 = *(_QWORD *)(v28 + 16);
        operator delete(v29, 0x30u);
      }
      v27 -= 6;
    }
    while ( v27 != v2 + 12 );
    v30 = (void *)v2[15];
    if ( v30 )
    {
      v2[16] = 0;
      qfree(v30);
    }
    v31 = (char *)(v2 + 9);
    do
    {
      v32 = *((_QWORD *)v31 + 2);
      while ( v32 )
      {
        sub_441670(*(_QWORD **)(v32 + 24));
        v33 = (void *)v32;
        v32 = *(_QWORD *)(v32 + 16);
        operator delete(v33, 0x30u);
      }
      v31 -= 48;
    }
    while ( v31 != (char *)(v2 - 3) );
    v34 = (void *)*v2;
    if ( *v2 )
    {
      v2[1] = 0;
      qfree(v34);
    }
    operator delete(v2, 0x430u);
  }
  v35 = *(void **)(a1 + 32);
  *(_OWORD *)(a1 + 56) = 0;
  if ( v35 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v35);
  }
}

