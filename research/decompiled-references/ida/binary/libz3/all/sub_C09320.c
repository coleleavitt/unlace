void __fastcall sub_C09320(_QWORD *a1)
{
  __int64 v2; // rbp
  void *v3; // rbx
  void (__fastcall ***v4)(_QWORD); // rbx
  void (__fastcall ***v5)(_QWORD); // rbx
  __int64 v6; // rbx
  __int64 v7; // r13
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r13
  void *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r13
  void *v14; // rdi
  char *v15; // rdi
  char *v16; // rbx
  char *v17; // r13
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax

  v2 = a1[2];
  *a1 = &off_1C58070;
  if ( v2 )
  {
    v3 = *(void **)(v2 + 2712);
    if ( v3 )
    {
      sub_C0B9F0(*(_QWORD *)(v2 + 2712));
      sub_186B220(v3);
    }
    sub_16234F0(v2 + 2664);
    v4 = *(void (__fastcall ****)(_QWORD))(v2 + 2656);
    if ( v4 )
    {
      (**v4)(*(_QWORD *)(v2 + 2656));
      sub_186B220(v4);
    }
    v5 = *(void (__fastcall ****)(_QWORD))(v2 + 2648);
    if ( v5 )
    {
      (**v5)(*(_QWORD *)(v2 + 2648));
      sub_186B220(v5);
    }
    sub_1867230(v2 + 2536);
    sub_1845400(v2 + 2440);
    sub_184C8D0((void *)(v2 + 1664));
    sub_182EF00(*(_QWORD *)(*(_QWORD *)(v2 + 1576) + 728LL), v2 + 1608);
    sub_182EF00(*(_QWORD *)(*(_QWORD *)(v2 + 1576) + 728LL), v2 + 1640);
    v6 = *(_QWORD *)(v2 + 1480);
    v7 = v6 + 24LL * *(unsigned int *)(v2 + 1488);
    if ( v6 != v7 )
    {
      while ( *(_DWORD *)(v6 + 4) != 2 )
      {
        v6 += 24;
        if ( v7 == v6 )
          goto LABEL_18;
      }
      if ( v7 != v6 )
      {
        do
        {
          sub_182EF00(*(_QWORD *)(v2 + 1472), *(_QWORD *)(v6 + 16));
          v8 = *(void **)(v6 + 16);
          if ( v8 )
            sub_186B220(v8);
          do
            v6 += 24;
          while ( v7 != v6 && *(_DWORD *)(v6 + 4) != 2 );
        }
        while ( v6 != *(_QWORD *)(v2 + 1480) + 24LL * *(unsigned int *)(v2 + 1488) );
      }
    }
LABEL_18:
    v9 = *(_QWORD *)(v2 + 1504);
    v10 = v9 + 24LL * *(unsigned int *)(v2 + 1512);
    if ( v9 != v10 )
    {
      while ( *(_DWORD *)(v9 + 4) != 2 )
      {
        v9 += 24;
        if ( v10 == v9 )
          goto LABEL_28;
      }
      if ( v10 != v9 )
      {
        do
        {
          sub_182EF00(*(_QWORD *)(v2 + 1472), *(_QWORD *)(v9 + 16));
          v11 = *(void **)(v9 + 16);
          if ( v11 )
            sub_186B220(v11);
          do
            v9 += 24;
          while ( v10 != v9 && *(_DWORD *)(v9 + 4) != 2 );
        }
        while ( v9 != *(_QWORD *)(v2 + 1504) + 24LL * *(unsigned int *)(v2 + 1512) );
      }
    }
LABEL_28:
    v12 = *(_QWORD *)(v2 + 1528);
    v13 = v12 + 24LL * *(unsigned int *)(v2 + 1536);
    if ( v12 != v13 )
    {
      while ( *(_DWORD *)(v12 + 4) != 2 )
      {
        v12 += 24;
        if ( v13 == v12 )
          goto LABEL_38;
      }
      if ( v13 != v12 )
      {
        do
        {
          sub_182EF00(*(_QWORD *)(v2 + 1472), *(_QWORD *)(v12 + 16));
          v14 = *(void **)(v12 + 16);
          if ( v14 )
            sub_186B220(v14);
          do
            v12 += 24;
          while ( v13 != v12 && *(_DWORD *)(v12 + 4) != 2 );
        }
        while ( v12 != *(_QWORD *)(v2 + 1528) + 24LL * *(unsigned int *)(v2 + 1536) );
      }
    }
LABEL_38:
    v15 = *(char **)(v2 + 1552);
    v16 = v15;
    v17 = &v15[24 * *(unsigned int *)(v2 + 1560)];
    if ( v15 != v17 )
    {
      while ( *((_DWORD *)v16 + 1) != 2 )
      {
        v16 += 24;
        if ( v17 == v16 )
          goto LABEL_48;
      }
      if ( v17 != v16 )
      {
        do
        {
          sub_182EF00(*(_QWORD *)(v2 + 1472), *((_QWORD *)v16 + 2));
          v18 = *((void **)v16 + 2);
          if ( v18 )
            sub_186B220(v18);
          do
            v16 += 24;
          while ( v17 != v16 && *((_DWORD *)v16 + 1) != 2 );
          v15 = *(char **)(v2 + 1552);
        }
        while ( v16 != &v15[24 * *(unsigned int *)(v2 + 1560)] );
      }
    }
LABEL_48:
    if ( v15 )
      sub_186B220(v15);
    v19 = *(void **)(v2 + 1528);
    if ( v19 )
      sub_186B220(v19);
    v20 = *(void **)(v2 + 1504);
    if ( v20 )
      sub_186B220(v20);
    v21 = *(void **)(v2 + 1480);
    if ( v21 )
      sub_186B220(v21);
    sub_184C8D0((void *)(v2 + 736));
    sub_184C8D0((void *)(v2 + 8));
    sub_186B220((void *)v2);
  }
  v22 = a1[5];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = a1[4];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x30u);
}

