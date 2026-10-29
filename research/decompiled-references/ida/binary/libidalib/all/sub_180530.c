void __fastcall sub_180530(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbp
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  _QWORD *v6; // rbp
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 i; // r12
  _QWORD *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdi

  v3 = *(volatile signed __int32 **)(a1 + 496);
  if ( v3 )
  {
    v4 = v3 + 2;
    if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
    {
      v23 = *(_QWORD *)v3;
      v24 = *(_QWORD *)(a1 + 496);
      *((_QWORD *)v3 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v23 + 16))(v24, a2, v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        v5 = *((_DWORD *)v3 + 2);
        *((_DWORD *)v3 + 2) = v5 - 1;
      }
      if ( v5 == 1 )
        sub_1804E0(v3);
    }
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    *(_QWORD *)(a1 + 472) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 440) )
  {
    *(_QWORD *)(a1 + 448) = 0;
    qfree();
  }
  v6 = *(_QWORD **)(a1 + 400);
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    operator delete(v7, 0x18u);
  }
  memset(*(void **)(a1 + 384), 0, 8LL * *(_QWORD *)(a1 + 392));
  v8 = *(void **)(a1 + 384);
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  if ( v8 != (void *)(a1 + 432) )
    operator delete(v8, 8LL * *(_QWORD *)(a1 + 392));
  if ( *(_QWORD *)(a1 + 344) )
  {
    *(_QWORD *)(a1 + 352) = 0;
    qfree();
  }
  v9 = *(void **)(a1 + 312);
  if ( v9 )
    operator delete(v9, *(_QWORD *)(a1 + 328) - (_QWORD)v9);
  v10 = *(void **)(a1 + 288);
  if ( v10 )
    operator delete(v10, *(_QWORD *)(a1 + 304) - (_QWORD)v10);
  v11 = *(void **)(a1 + 256);
  if ( v11 )
    operator delete(v11, *(_QWORD *)(a1 + 272) - (_QWORD)v11);
  v12 = *(void **)(a1 + 232);
  if ( v12 )
    operator delete(v12, *(_QWORD *)(a1 + 248) - (_QWORD)v12);
  v13 = *(void **)(a1 + 208);
  if ( v13 )
    operator delete(v13, *(_QWORD *)(a1 + 224) - (_QWORD)v13);
  if ( *(_QWORD *)(a1 + 184) )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree();
  }
  v14 = *(void **)(a1 + 152);
  if ( v14 )
    operator delete(v14, *(_QWORD *)(a1 + 168) - (_QWORD)v14);
  v15 = *(void **)(a1 + 128);
  if ( v15 )
    operator delete(v15, *(_QWORD *)(a1 + 144) - (_QWORD)v15);
  v16 = *(void **)(a1 + 96);
  if ( v16 )
    operator delete(v16, *(_QWORD *)(a1 + 112) - (_QWORD)v16);
  v17 = *(void **)(a1 + 72);
  if ( v17 )
    operator delete(v17, *(_QWORD *)(a1 + 88) - (_QWORD)v17);
  v18 = *(void **)(a1 + 48);
  if ( v18 )
    operator delete(v18, *(_QWORD *)(a1 + 64) - (_QWORD)v18);
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 32);
    if ( v20 )
    {
      for ( i = 0; i != v20; ++i )
      {
        v22 = (_QWORD *)(v19 + (i << 7));
        if ( v22[6] )
        {
          v22[7] = 0;
          qfree();
        }
        if ( v22[3] )
        {
          v22[4] = 0;
          qfree();
        }
        if ( *v22 )
        {
          v22[1] = 0;
          qfree();
        }
        v19 = *(_QWORD *)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree();
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree();
  }
}

