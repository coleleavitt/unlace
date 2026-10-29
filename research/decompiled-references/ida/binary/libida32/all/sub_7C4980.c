unsigned __int64 __fastcall sub_7C4980(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 i; // r12
  unsigned int v22; // esi
  __int64 v23; // r13
  __int64 j; // r12
  unsigned int v25; // esi
  __int64 v26; // r13
  __int64 k; // r12
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 m; // r12
  unsigned int v31; // esi
  __int64 v32; // r13
  __int64 n; // r12
  const char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 ii; // r12
  unsigned int v38; // esi
  __int64 v39; // r13
  __int64 jj; // r12
  const char *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 kk; // r12
  __int64 v45; // rsi
  __int64 v46; // r13
  __int64 mm; // r12
  unsigned int v48; // esi
  __int64 v49; // r13
  __int64 nn; // r12
  const char *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 i1; // r12
  unsigned int v55; // esi
  __int64 v56; // r13
  __int64 i2; // r12
  const char *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 i3; // r12
  unsigned int v62; // esi
  __int64 v63; // r13
  __int64 i4; // r12
  const char *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 i5; // r12
  unsigned int v69; // esi
  __int64 v70; // r13
  __int64 i6; // r12
  const char *v72; // rsi
  __int64 v73; // rax

  v5 = *(_QWORD *)(a1 + 24);
  sub_407AD0(a2, v5);
  if ( v5 )
  {
    v8 = 0;
    do
    {
      v9 = 5 * v8++;
      v10 = *(_QWORD *)(a1 + 16) + 16 * v9;
      sub_7C4620((__int64 *)v10, a2, a3, v6, v7);
      sub_7BE190(a2, *(_QWORD *)(v10 + 64), v11, v12, v13);
      sub_407AD0(a2, *(_DWORD *)(v10 + 72));
      sub_407AD0(a2, *(_DWORD *)(v10 + 76));
    }
    while ( v5 != v8 );
  }
  v14 = *(_QWORD *)(a1 + 48);
  sub_407AD0(a2, v14);
  if ( v14 )
  {
    v17 = 0;
    do
    {
      v18 = 9 * v17++;
      v19 = *(_QWORD *)(a1 + 40) + 8 * v18;
      sub_7C4620((__int64 *)v19, a2, a3, v15, v16);
      sub_407AD0(a2, *(unsigned __int8 *)(v19 + 64));
    }
    while ( v14 != v17 );
  }
  v20 = *(_QWORD *)(a1 + 72);
  sub_407AD0(a2, v20);
  if ( v20 )
  {
    for ( i = 0; i != v20; ++i )
    {
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * i);
      sub_407AD0(a2, v22);
    }
  }
  v23 = *(_QWORD *)(a1 + 96);
  sub_407AD0(a2, v23);
  if ( v23 )
  {
    for ( j = 0; j != v23; ++j )
    {
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * j);
      sub_407AD0(a2, v25);
    }
  }
  v26 = *(_QWORD *)(a1 + 120);
  sub_407AD0(a2, v26);
  if ( v26 )
  {
    for ( k = 0; k != v26; ++k )
    {
      v28 = k;
      sub_7BB300(a2, (const void *)(*(_QWORD *)(a1 + 112) + 16 * v28), 0x10u);
    }
  }
  v29 = *(_QWORD *)(a1 + 144);
  sub_407AD0(a2, v29);
  if ( v29 )
  {
    for ( m = 0; m != v29; ++m )
    {
      v31 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * m);
      sub_407AD0(a2, v31);
    }
  }
  v32 = *(_QWORD *)(a1 + 168);
  sub_407AD0(a2, v32);
  if ( v32 )
  {
    for ( n = 0; n != v32; ++n )
    {
      v34 = haystack;
      v35 = *(_QWORD *)(a1 + 160) + 24 * n;
      if ( *(_QWORD *)(v35 + 8) )
        v34 = *(const char **)v35;
      sub_62C910(a2, v34);
    }
  }
  v36 = *(_QWORD *)(a1 + 192);
  sub_407AD0(a2, v36);
  if ( v36 )
  {
    for ( ii = 0; ii != v36; ++ii )
    {
      v38 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 4 * ii);
      sub_407AD0(a2, v38);
    }
  }
  v39 = *(_QWORD *)(a1 + 216);
  sub_407AD0(a2, v39);
  if ( v39 )
  {
    for ( jj = 0; jj != v39; ++jj )
    {
      v41 = haystack;
      v42 = *(_QWORD *)(a1 + 208) + 24 * jj;
      if ( *(_QWORD *)(v42 + 8) )
        v41 = *(const char **)v42;
      sub_62C910(a2, v41);
    }
  }
  v43 = *(_QWORD *)(a1 + 240);
  sub_407AD0(a2, v43);
  if ( v43 )
  {
    for ( kk = 0; kk != v43; ++kk )
    {
      v45 = kk;
      sub_7BB300(a2, (const void *)(*(_QWORD *)(a1 + 232) + 16 * v45), 0x10u);
    }
  }
  v46 = *(_QWORD *)(a1 + 264);
  sub_407AD0(a2, v46);
  if ( v46 )
  {
    for ( mm = 0; mm != v46; ++mm )
    {
      v48 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4 * mm);
      sub_407AD0(a2, v48);
    }
  }
  v49 = *(_QWORD *)(a1 + 288);
  sub_407AD0(a2, v49);
  if ( v49 )
  {
    for ( nn = 0; nn != v49; ++nn )
    {
      v51 = haystack;
      v52 = *(_QWORD *)(a1 + 280) + 24 * nn;
      if ( *(_QWORD *)(v52 + 8) )
        v51 = *(const char **)v52;
      sub_62C910(a2, v51);
    }
  }
  v53 = *(_QWORD *)(a1 + 312);
  sub_407AD0(a2, v53);
  if ( v53 )
  {
    for ( i1 = 0; i1 != v53; ++i1 )
    {
      v55 = *(_DWORD *)(*(_QWORD *)(a1 + 304) + 4 * i1);
      sub_407AD0(a2, v55);
    }
  }
  v56 = *(_QWORD *)(a1 + 336);
  sub_407AD0(a2, v56);
  if ( v56 )
  {
    for ( i2 = 0; i2 != v56; ++i2 )
    {
      v58 = haystack;
      v59 = *(_QWORD *)(a1 + 328) + 24 * i2;
      if ( *(_QWORD *)(v59 + 8) )
        v58 = *(const char **)v59;
      sub_62C910(a2, v58);
    }
  }
  v60 = *(_QWORD *)(a1 + 360);
  sub_407AD0(a2, v60);
  if ( v60 )
  {
    for ( i3 = 0; i3 != v60; ++i3 )
    {
      v62 = *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4 * i3);
      sub_407AD0(a2, v62);
    }
  }
  v63 = *(_QWORD *)(a1 + 384);
  sub_407AD0(a2, v63);
  if ( v63 )
  {
    for ( i4 = 0; i4 != v63; ++i4 )
    {
      v65 = haystack;
      v66 = *(_QWORD *)(a1 + 376) + 24 * i4;
      if ( *(_QWORD *)(v66 + 8) )
        v65 = *(const char **)v66;
      sub_62C910(a2, v65);
    }
  }
  v67 = *(_QWORD *)(a1 + 408);
  sub_407AD0(a2, v67);
  if ( v67 )
  {
    for ( i5 = 0; i5 != v67; ++i5 )
    {
      v69 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4 * i5);
      sub_407AD0(a2, v69);
    }
  }
  v70 = *(_QWORD *)(a1 + 432);
  sub_407AD0(a2, v70);
  if ( v70 )
  {
    for ( i6 = 0; i6 != v70; ++i6 )
    {
      v72 = haystack;
      v73 = *(_QWORD *)(a1 + 424) + 24 * i6;
      if ( *(_QWORD *)(v73 + 8) )
        v72 = *(const char **)v73;
      sub_62C910(a2, v72);
    }
  }
  return sub_407AD0(a2, *(unsigned __int8 *)(a1 + 448));
}

