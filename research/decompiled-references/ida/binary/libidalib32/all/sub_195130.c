void __fastcall sub_195130(TGroup *this)
{
  __m128i v1; // xmm0
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 i; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 k; // rbp
  _QWORD *v20; // rax

  v1 = _mm_loadl_epi64((const __m128i *)off_234F80);
  *(_QWORD *)this = &off_23C308;
  *(__m128i *)((char *)this + 152) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_23C510);
  sub_195020((__int64)this);
  *((_QWORD *)this + 339) = &off_234F30;
  sub_18FA80((_QWORD *)this + 339);
  *((_QWORD *)this + 336) = &off_22E278;
  sub_8E960((_QWORD *)this + 336);
  *((_QWORD *)this + 333) = &off_234EB0;
  sub_18F7C0((_QWORD *)this + 333);
  *((_QWORD *)this + 330) = &off_234E30;
  sub_18F500((_QWORD *)this + 330);
  if ( *((_QWORD *)this + 322) )
  {
    *((_QWORD *)this + 323) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 311) )
  {
    *((_QWORD *)this + 312) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 308) )
  {
    *((_QWORD *)this + 309) = 0;
    qfree();
  }
  v3 = *((_QWORD *)this + 304);
  while ( v3 )
  {
    sub_191F00(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x30u);
  }
  v5 = *((_QWORD *)this + 298);
  while ( v5 )
  {
    sub_191F00(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  if ( *((_QWORD *)this + 293) )
  {
    *((_QWORD *)this + 294) = 0;
    qfree();
  }
  v7 = *((_QWORD *)this + 289);
  while ( v7 )
  {
    sub_191600(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x30u);
  }
  if ( *((_QWORD *)this + 282) )
  {
    *((_QWORD *)this + 283) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 276) )
  {
    *((_QWORD *)this + 277) = 0;
    qfree();
  }
  v9 = *((_QWORD *)this + 273);
  if ( v9 )
  {
    v10 = *((_QWORD *)this + 274);
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = (_QWORD *)(v9 + 24 * i);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
          v9 = *((_QWORD *)this + 273);
        }
      }
    }
    *((_QWORD *)this + 274) = 0;
    qfree();
  }
  v13 = *((_QWORD *)this + 269);
  if ( v13 )
  {
    v14 = *((_QWORD *)this + 270);
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = (_QWORD *)(v13 + 24 * j);
        if ( *v16 )
        {
          v16[1] = 0;
          qfree();
          v13 = *((_QWORD *)this + 269);
        }
      }
    }
    *((_QWORD *)this + 270) = 0;
    qfree();
  }
  v17 = *((_QWORD *)this + 266);
  if ( v17 )
  {
    v18 = *((_QWORD *)this + 267);
    if ( v18 )
    {
      for ( k = 0; k != v18; ++k )
      {
        v20 = (_QWORD *)(v17 + 24 * k);
        if ( *v20 )
        {
          v20[1] = 0;
          qfree();
          v17 = *((_QWORD *)this + 266);
        }
      }
    }
    *((_QWORD *)this + 267) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 260) )
  {
    *((_QWORD *)this + 261) = 0;
    qfree();
  }
  sub_17FD70((__int64)this + 160);
  sub_176A50((_QWORD *)this + 16);
  TGroup::~TGroup(this);
}

