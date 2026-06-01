unsigned __int64 __fastcall sub_7E7D20(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 i; // r12
  unsigned int v13; // esi
  __int64 v14; // r13
  __int64 j; // r12
  unsigned int v16; // esi
  __int64 v17; // r13
  __int64 k; // r12
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 m; // r12
  unsigned int v22; // esi
  __int64 v23; // r13
  __int64 n; // r12
  const char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 ii; // r12
  unsigned int v29; // esi
  __int64 v30; // r13
  __int64 jj; // r12
  const char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 kk; // r12
  __int64 v36; // rsi
  __int64 v37; // r13
  __int64 mm; // r12
  unsigned int v39; // esi
  __int64 v40; // r13
  __int64 nn; // r12
  const char *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 i1; // r12
  unsigned int v46; // esi
  __int64 v47; // r13
  __int64 i2; // r12
  const char *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 i3; // r12
  unsigned int v53; // esi
  __int64 v54; // r13
  __int64 i4; // r12
  const char *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 i5; // r12
  unsigned int v60; // esi
  __int64 v61; // r13
  __int64 i6; // r12
  const char *v63; // rsi
  __int64 v64; // rax

  v3 = *(_QWORD *)(a1 + 24);
  sub_3A0970(a2, v3);
  if ( v3 )
  {
    v4 = 0;
    do
    {
      v5 = 5 * v4++;
      v6 = *(_QWORD *)(a1 + 16) + 16 * v5;
      sub_7E79C0((__int64 *)v6, a2);
      sub_3A0A80(a2, *(_QWORD *)(v6 + 64));
      sub_3A0970(a2, *(_DWORD *)(v6 + 72));
      sub_3A0970(a2, *(_DWORD *)(v6 + 76));
    }
    while ( v3 != v4 );
  }
  v7 = *(_QWORD *)(a1 + 48);
  sub_3A0970(a2, v7);
  if ( v7 )
  {
    v8 = 0;
    do
    {
      v9 = 9 * v8++;
      v10 = *(_QWORD *)(a1 + 40) + 8 * v9;
      sub_7E79C0((__int64 *)v10, a2);
      sub_3A0970(a2, *(unsigned __int8 *)(v10 + 64));
    }
    while ( v7 != v8 );
  }
  v11 = *(_QWORD *)(a1 + 72);
  sub_3A0970(a2, v11);
  if ( v11 )
  {
    for ( i = 0; i != v11; ++i )
    {
      v13 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * i);
      sub_3A0970(a2, v13);
    }
  }
  v14 = *(_QWORD *)(a1 + 96);
  sub_3A0970(a2, v14);
  if ( v14 )
  {
    for ( j = 0; j != v14; ++j )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * j);
      sub_3A0970(a2, v16);
    }
  }
  v17 = *(_QWORD *)(a1 + 120);
  sub_3A0970(a2, v17);
  if ( v17 )
  {
    for ( k = 0; k != v17; ++k )
    {
      v19 = k;
      sub_7DE6E0(a2, (const void *)(*(_QWORD *)(a1 + 112) + 16 * v19), 0x10u);
    }
  }
  v20 = *(_QWORD *)(a1 + 144);
  sub_3A0970(a2, v20);
  if ( v20 )
  {
    for ( m = 0; m != v20; ++m )
    {
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * m);
      sub_3A0970(a2, v22);
    }
  }
  v23 = *(_QWORD *)(a1 + 168);
  sub_3A0970(a2, v23);
  if ( v23 )
  {
    for ( n = 0; n != v23; ++n )
    {
      v25 = haystack;
      v26 = *(_QWORD *)(a1 + 160) + 24 * n;
      if ( *(_QWORD *)(v26 + 8) )
        v25 = *(const char **)v26;
      sub_649F10(a2, v25);
    }
  }
  v27 = *(_QWORD *)(a1 + 192);
  sub_3A0970(a2, v27);
  if ( v27 )
  {
    for ( ii = 0; ii != v27; ++ii )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 4 * ii);
      sub_3A0970(a2, v29);
    }
  }
  v30 = *(_QWORD *)(a1 + 216);
  sub_3A0970(a2, v30);
  if ( v30 )
  {
    for ( jj = 0; jj != v30; ++jj )
    {
      v32 = haystack;
      v33 = *(_QWORD *)(a1 + 208) + 24 * jj;
      if ( *(_QWORD *)(v33 + 8) )
        v32 = *(const char **)v33;
      sub_649F10(a2, v32);
    }
  }
  v34 = *(_QWORD *)(a1 + 240);
  sub_3A0970(a2, v34);
  if ( v34 )
  {
    for ( kk = 0; kk != v34; ++kk )
    {
      v36 = kk;
      sub_7DE6E0(a2, (const void *)(*(_QWORD *)(a1 + 232) + 16 * v36), 0x10u);
    }
  }
  v37 = *(_QWORD *)(a1 + 264);
  sub_3A0970(a2, v37);
  if ( v37 )
  {
    for ( mm = 0; mm != v37; ++mm )
    {
      v39 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4 * mm);
      sub_3A0970(a2, v39);
    }
  }
  v40 = *(_QWORD *)(a1 + 288);
  sub_3A0970(a2, v40);
  if ( v40 )
  {
    for ( nn = 0; nn != v40; ++nn )
    {
      v42 = haystack;
      v43 = *(_QWORD *)(a1 + 280) + 24 * nn;
      if ( *(_QWORD *)(v43 + 8) )
        v42 = *(const char **)v43;
      sub_649F10(a2, v42);
    }
  }
  v44 = *(_QWORD *)(a1 + 312);
  sub_3A0970(a2, v44);
  if ( v44 )
  {
    for ( i1 = 0; i1 != v44; ++i1 )
    {
      v46 = *(_DWORD *)(*(_QWORD *)(a1 + 304) + 4 * i1);
      sub_3A0970(a2, v46);
    }
  }
  v47 = *(_QWORD *)(a1 + 336);
  sub_3A0970(a2, v47);
  if ( v47 )
  {
    for ( i2 = 0; i2 != v47; ++i2 )
    {
      v49 = haystack;
      v50 = *(_QWORD *)(a1 + 328) + 24 * i2;
      if ( *(_QWORD *)(v50 + 8) )
        v49 = *(const char **)v50;
      sub_649F10(a2, v49);
    }
  }
  v51 = *(_QWORD *)(a1 + 360);
  sub_3A0970(a2, v51);
  if ( v51 )
  {
    for ( i3 = 0; i3 != v51; ++i3 )
    {
      v53 = *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4 * i3);
      sub_3A0970(a2, v53);
    }
  }
  v54 = *(_QWORD *)(a1 + 384);
  sub_3A0970(a2, v54);
  if ( v54 )
  {
    for ( i4 = 0; i4 != v54; ++i4 )
    {
      v56 = haystack;
      v57 = *(_QWORD *)(a1 + 376) + 24 * i4;
      if ( *(_QWORD *)(v57 + 8) )
        v56 = *(const char **)v57;
      sub_649F10(a2, v56);
    }
  }
  v58 = *(_QWORD *)(a1 + 408);
  sub_3A0970(a2, v58);
  if ( v58 )
  {
    for ( i5 = 0; i5 != v58; ++i5 )
    {
      v60 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4 * i5);
      sub_3A0970(a2, v60);
    }
  }
  v61 = *(_QWORD *)(a1 + 432);
  sub_3A0970(a2, v61);
  if ( v61 )
  {
    for ( i6 = 0; i6 != v61; ++i6 )
    {
      v63 = haystack;
      v64 = *(_QWORD *)(a1 + 424) + 24 * i6;
      if ( *(_QWORD *)(v64 + 8) )
        v63 = *(const char **)v64;
      sub_649F10(a2, v63);
    }
  }
  return sub_3A0970(a2, *(unsigned __int8 *)(a1 + 448));
}
