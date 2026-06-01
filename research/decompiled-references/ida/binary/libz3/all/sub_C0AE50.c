__int64 __fastcall sub_C0AE50(__int64 a1)
{
  __int64 *v2; // r12
  void *v3; // rbx
  __int64 v4; // r13
  void (__fastcall ***v5)(__int64); // rbx
  void (__fastcall ***v6)(__int64); // rbx
  __int64 v7; // rbx
  __int64 v8; // r14
  void *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r14
  void *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r14
  void *v15; // rdi
  char *v16; // rdi
  char *v17; // rbx
  char *v18; // r14
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // rbx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 16);
  v3 = (void *)v2[339];
  v4 = *v2;
  if ( v3 )
  {
    sub_C0B9F0(v2[339]);
    sub_186B220(v3);
  }
  sub_16234F0(v2 + 333);
  v5 = (void (__fastcall ***)(__int64))v2[332];
  if ( v5 )
  {
    (**v5)(v2[332]);
    sub_186B220(v5);
  }
  v6 = (void (__fastcall ***)(__int64))v2[331];
  if ( v6 )
  {
    (**v6)(v2[331]);
    sub_186B220(v6);
  }
  sub_1867230(v2 + 317);
  sub_1845400(v2 + 305);
  sub_184C8D0(v2 + 208);
  sub_182EF00(*(_QWORD *)(v2[197] + 728), v2 + 201);
  sub_182EF00(*(_QWORD *)(v2[197] + 728), v2 + 205);
  v7 = v2[185];
  v8 = v7 + 24LL * *((unsigned int *)v2 + 372);
  if ( v7 != v8 )
  {
    while ( *(_DWORD *)(v7 + 4) != 2 )
    {
      v7 += 24;
      if ( v8 == v7 )
        goto LABEL_17;
    }
    if ( v8 != v7 )
    {
      do
      {
        sub_182EF00(v2[184], *(_QWORD *)(v7 + 16));
        v9 = *(void **)(v7 + 16);
        if ( v9 )
          sub_186B220(v9);
        do
          v7 += 24;
        while ( v8 != v7 && *(_DWORD *)(v7 + 4) != 2 );
      }
      while ( v7 != v2[185] + 24LL * *((unsigned int *)v2 + 372) );
    }
  }
LABEL_17:
  v10 = v2[188];
  v11 = v10 + 24LL * *((unsigned int *)v2 + 378);
  if ( v10 != v11 )
  {
    while ( *(_DWORD *)(v10 + 4) != 2 )
    {
      v10 += 24;
      if ( v11 == v10 )
        goto LABEL_27;
    }
    if ( v11 != v10 )
    {
      do
      {
        sub_182EF00(v2[184], *(_QWORD *)(v10 + 16));
        v12 = *(void **)(v10 + 16);
        if ( v12 )
          sub_186B220(v12);
        do
          v10 += 24;
        while ( v11 != v10 && *(_DWORD *)(v10 + 4) != 2 );
      }
      while ( v10 != v2[188] + 24LL * *((unsigned int *)v2 + 378) );
    }
  }
LABEL_27:
  v13 = v2[191];
  v14 = v13 + 24LL * *((unsigned int *)v2 + 384);
  if ( v13 != v14 )
  {
    while ( *(_DWORD *)(v13 + 4) != 2 )
    {
      v13 += 24;
      if ( v14 == v13 )
        goto LABEL_37;
    }
    if ( v14 != v13 )
    {
      do
      {
        sub_182EF00(v2[184], *(_QWORD *)(v13 + 16));
        v15 = *(void **)(v13 + 16);
        if ( v15 )
          sub_186B220(v15);
        do
          v13 += 24;
        while ( v14 != v13 && *(_DWORD *)(v13 + 4) != 2 );
      }
      while ( v13 != v2[191] + 24LL * *((unsigned int *)v2 + 384) );
    }
  }
LABEL_37:
  v16 = (char *)v2[194];
  v17 = v16;
  v18 = &v16[24 * *((unsigned int *)v2 + 390)];
  if ( v16 != v18 )
  {
    while ( *((_DWORD *)v17 + 1) != 2 )
    {
      v17 += 24;
      if ( v18 == v17 )
        goto LABEL_47;
    }
    if ( v18 != v17 )
    {
      do
      {
        sub_182EF00(v2[184], *((_QWORD *)v17 + 2));
        v19 = *((void **)v17 + 2);
        if ( v19 )
          sub_186B220(v19);
        do
          v17 += 24;
        while ( v18 != v17 && *((_DWORD *)v17 + 1) != 2 );
        v16 = (char *)v2[194];
      }
      while ( v17 != &v16[24 * *((unsigned int *)v2 + 390)] );
    }
  }
LABEL_47:
  if ( v16 )
    sub_186B220(v16);
  v20 = (void *)v2[191];
  if ( v20 )
    sub_186B220(v20);
  v21 = (void *)v2[188];
  if ( v21 )
    sub_186B220(v21);
  v22 = (void *)v2[185];
  if ( v22 )
    sub_186B220(v22);
  sub_184C8D0(v2 + 92);
  sub_184C8D0(v2 + 1);
  sub_186B220(v2);
  v23 = sub_186B270(0xAA8u);
  *(_QWORD *)v23 = v4;
  sub_1839FF0(v23 + 8);
  *(_QWORD *)(v23 + 608) = 0;
  *(_QWORD *)(v23 + 616) = 0;
  *(_QWORD *)(v23 + 624) = 0;
  *(_QWORD *)(v23 + 632) = 0;
  *(_QWORD *)(v23 + 640) = 0;
  *(_QWORD *)(v23 + 648) = 0;
  *(_QWORD *)(v23 + 656) = 0;
  *(_QWORD *)(v23 + 664) = 0;
  *(_QWORD *)(v23 + 672) = 0;
  *(_QWORD *)(v23 + 680) = 0;
  *(_QWORD *)(v23 + 688) = 1;
  *(_QWORD *)(v23 + 696) = 0;
  *(_QWORD *)(v23 + 704) = 0;
  *(_QWORD *)(v23 + 712) = 0;
  *(_QWORD *)(v23 + 720) = 1;
  *(_QWORD *)(v23 + 728) = 0;
  sub_181A810(v23 + 736);
  *(_QWORD *)(v23 + 1576) = v23 + 736;
  *(_DWORD *)(v23 + 1592) = 53;
  *(_QWORD *)(v23 + 1584) = 0xB00000002LL;
  sub_181A6B0(v23 + 1600);
  sub_181A6B0(v23 + 1632);
  sub_181AAB0(*(_QWORD *)(v23 + 1576), v23 + 1632, 11, 53, 1);
  sub_1808AF0(v23 + 1664);
  *(_QWORD *)(v23 + 2400) = v23 + 1664;
  *(_QWORD *)(v23 + 2408) = 0xB00000002LL;
  *(_DWORD *)(v23 + 2416) = 53;
  sub_1808BE0(v23 + 1664, v23 + 2432, 1);
  sub_1844F10(v23 + 2440, 2, 1024);
  sub_1869A00(v23 + 2536, 2, 1, 1024);
  sub_16669D0(v23 + 2624, v4);
  *(_DWORD *)(v23 + 2640) = 5;
  *(_OWORD *)(v23 + 2648) = 0;
  sub_16234C0(v23 + 2664, v4);
  *(_QWORD *)(v23 + 2712) = 0;
  result = sub_C09920(v23, a1 + 24);
  *(_QWORD *)(a1 + 16) = v23;
  return result;
}

