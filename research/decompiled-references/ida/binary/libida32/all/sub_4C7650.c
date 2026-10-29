__int64 __fastcall sub_4C7650(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
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
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  _QWORD *v23; // rbp
  void *v24; // rdi
  void *v25; // rdi
  unsigned __int64 v26; // rsi
  void *v27; // rdi
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rdx
  signed __int32 v30; // eax
  __int64 v32; // rax
  int v33; // edx
  int v34; // edx
  unsigned __int64 v35; // [rsp+8h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  ++*(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v2 = *(_QWORD *)(a1 + 608);
  if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
    }
    else
    {
      v33 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v33 - 1;
    }
    if ( v33 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v3 = *(_QWORD *)(a1 + 600);
  if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
    }
    else
    {
      v34 = *(_DWORD *)(v3 - 8);
      *(_DWORD *)(v3 - 8) = v34 - 1;
    }
    if ( v34 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v4 = *(void **)(a1 + 576);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 584) = 0;
    qfree(v4);
  }
  v5 = *(void **)(a1 + 544);
  if ( v5 )
    operator delete(v5, *(_QWORD *)(a1 + 560) - (_QWORD)v5);
  v6 = *(void **)(a1 + 512);
  if ( v6 )
    operator delete(v6, *(_QWORD *)(a1 + 528) - (_QWORD)v6);
  v7 = *(void **)(a1 + 488);
  if ( v7 )
    operator delete(v7, *(_QWORD *)(a1 + 504) - (_QWORD)v7);
  v8 = *(void **)(a1 + 464);
  if ( v8 )
    operator delete(v8, *(_QWORD *)(a1 + 480) - (_QWORD)v8);
  v9 = *(void **)(a1 + 440);
  if ( v9 )
    operator delete(v9, *(_QWORD *)(a1 + 456) - (_QWORD)v9);
  v10 = *(void **)(a1 + 408);
  if ( v10 )
    operator delete(v10, *(_QWORD *)(a1 + 424) - (_QWORD)v10);
  v11 = *(void **)(a1 + 384);
  if ( v11 )
    operator delete(v11, *(_QWORD *)(a1 + 400) - (_QWORD)v11);
  v12 = *(void **)(a1 + 360);
  if ( v12 )
    operator delete(v12, *(_QWORD *)(a1 + 376) - (_QWORD)v12);
  v13 = *(void **)(a1 + 336);
  if ( v13 )
    operator delete(v13, *(_QWORD *)(a1 + 352) - (_QWORD)v13);
  v14 = *(void **)(a1 + 304);
  if ( v14 )
    operator delete(v14, *(_QWORD *)(a1 + 320) - (_QWORD)v14);
  v15 = *(void **)(a1 + 280);
  if ( v15 )
    operator delete(v15, *(_QWORD *)(a1 + 296) - (_QWORD)v15);
  v16 = *(void **)(a1 + 256);
  if ( v16 )
    operator delete(v16, *(_QWORD *)(a1 + 272) - (_QWORD)v16);
  v17 = *(void **)(a1 + 232);
  if ( v17 )
    operator delete(v17, *(_QWORD *)(a1 + 248) - (_QWORD)v17);
  v18 = *(void **)(a1 + 200);
  if ( v18 )
    operator delete(v18, *(_QWORD *)(a1 + 216) - (_QWORD)v18);
  v19 = *(void **)(a1 + 176);
  if ( v19 )
    operator delete(v19, *(_QWORD *)(a1 + 192) - (_QWORD)v19);
  v20 = *(void **)(a1 + 152);
  if ( v20 )
    operator delete(v20, *(_QWORD *)(a1 + 168) - (_QWORD)v20);
  v21 = *(void **)(a1 + 128);
  if ( v21 )
    operator delete(v21, *(_QWORD *)(a1 + 144) - (_QWORD)v21);
  v22 = *(void **)(a1 + 104);
  if ( v22 )
    operator delete(v22, *(_QWORD *)(a1 + 120) - (_QWORD)v22);
  v23 = *(_QWORD **)(a1 + 64);
  while ( v23 )
  {
    v24 = v23;
    v23 = (_QWORD *)*v23;
    operator delete(v24, 0x10u);
  }
  memset(*(void **)(a1 + 48), 0, 8LL * *(_QWORD *)(a1 + 56));
  v25 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v26 = *(_QWORD *)(a1 + 56);
  if ( v25 != (void *)(a1 + 96) )
  {
    v26 *= 8LL;
    operator delete(v25, v26);
  }
  v27 = *(void **)(a1 + 16);
  if ( v27 )
  {
    v26 = *(_QWORD *)(a1 + 32) - (_QWORD)v27;
    operator delete(v27, v26);
  }
  v28 = *(volatile signed __int32 **)(a1 + 8);
  if ( !v28 )
    return v35 - __readfsqword(0x28u);
  v29 = v28 + 2;
  if ( *((_QWORD *)v28 + 1) == 0x100000001LL )
  {
    v32 = *(_QWORD *)v28;
    *((_QWORD *)v28 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64, volatile signed __int32 *))(v32 + 16))(
      v28,
      v26,
      v29);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 24LL))(v28);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v30 = _InterlockedExchangeAdd(v29, 0xFFFFFFFF);
    }
    else
    {
      v30 = *((_DWORD *)v28 + 2);
      *((_DWORD *)v28 + 2) = v30 - 1;
    }
    if ( v30 != 1 )
      return v35 - __readfsqword(0x28u);
    return sub_420480(v28);
  }
}

