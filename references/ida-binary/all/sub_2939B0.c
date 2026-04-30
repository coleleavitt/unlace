void __fastcall sub_2939B0(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 k; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 m; // rbp
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  _QWORD *v26; // r13
  __int64 v27; // rbp
  _QWORD *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rdi

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 88) = 0;
    qfree(v3, a2);
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 96) = 0;
  }
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v4, a2);
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 136);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = *(_QWORD *)(a1 + 128);
        }
      }
    }
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v5, a2);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 160);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 24 * j);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2);
          v10 = *(_QWORD *)(a1 + 152);
        }
      }
    }
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v10, a2);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  v15 = *(_QWORD *)(a1 + 176);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 184);
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (__int64 *)(v15 + 24 * k);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, a2);
          v15 = *(_QWORD *)(a1 + 176);
        }
      }
    }
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v15, a2);
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
  v20 = *(_QWORD *)(a1 + 200);
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 208);
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = (__int64 *)(v20 + 24 * m);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24, a2);
          v20 = *(_QWORD *)(a1 + 200);
        }
      }
    }
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v20, a2);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v25 = *(_QWORD *)(a1 + 224);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v25, a2);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  v26 = *(_QWORD **)(a1 + 248);
  v27 = v26[2];
  while ( v27 )
  {
    v28 = (_QWORD *)v27;
    sub_2919A0(*(_QWORD **)(v27 + 24), a2);
    v29 = *(_QWORD *)(v27 + 56);
    v27 = *(_QWORD *)(v27 + 16);
    if ( v29 )
    {
      v28[8] = 0;
      qfree(v29, a2);
    }
    a2 = (_BYTE *)off_50;
    operator delete(v28, 0x50u);
  }
  v26[2] = 0;
  v26[3] = v26 + 1;
  v26[4] = v26 + 1;
  v26[5] = 0;
  v30 = *(_QWORD *)(a1 + 8);
  if ( v30 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v30, a2);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  *(_BYTE *)(a1 + 32) = 0;
}
