__int64 __fastcall sub_422C80(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  _QWORD *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  unsigned __int64 v16; // rsi
  void *v17; // rdi
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rdx
  signed __int32 v20; // eax
  __int64 v22; // rax
  int v23; // edx
  unsigned __int64 v24; // [rsp+8h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_2BD0340;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  v2 = *(_QWORD *)(a1 + 368);
  if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
    }
    else
    {
      v23 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v23 - 1;
    }
    if ( v23 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v3 = *(void **)(a1 + 344);
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 360) - (_QWORD)v3);
  v4 = *(void **)(a1 + 312);
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 328) - (_QWORD)v4);
  v5 = *(void **)(a1 + 288);
  if ( v5 )
    operator delete(v5, *(_QWORD *)(a1 + 304) - (_QWORD)v5);
  v6 = *(void **)(a1 + 264);
  if ( v6 )
    operator delete(v6, *(_QWORD *)(a1 + 280) - (_QWORD)v6);
  v7 = *(void **)(a1 + 240);
  if ( v7 )
    operator delete(v7, *(_QWORD *)(a1 + 256) - (_QWORD)v7);
  v8 = *(void **)(a1 + 208);
  if ( v8 )
    operator delete(v8, *(_QWORD *)(a1 + 224) - (_QWORD)v8);
  v9 = *(void **)(a1 + 184);
  if ( v9 )
    operator delete(v9, *(_QWORD *)(a1 + 200) - (_QWORD)v9);
  v10 = *(void **)(a1 + 160);
  if ( v10 )
    operator delete(v10, *(_QWORD *)(a1 + 176) - (_QWORD)v10);
  v11 = *(void **)(a1 + 136);
  if ( v11 )
    operator delete(v11, *(_QWORD *)(a1 + 152) - (_QWORD)v11);
  v12 = *(void **)(a1 + 112);
  if ( v12 )
    operator delete(v12, *(_QWORD *)(a1 + 128) - (_QWORD)v12);
  v13 = *(_QWORD **)(a1 + 72);
  while ( v13 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    operator delete(v14, 0x10u);
  }
  memset(*(void **)(a1 + 56), 0, 8LL * *(_QWORD *)(a1 + 64));
  v15 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v16 = *(_QWORD *)(a1 + 64);
  if ( v15 != (void *)(a1 + 104) )
  {
    v16 *= 8LL;
    operator delete(v15, v16);
  }
  v17 = *(void **)(a1 + 24);
  if ( v17 )
  {
    v16 = *(_QWORD *)(a1 + 40) - (_QWORD)v17;
    operator delete(v17, v16);
  }
  v18 = *(volatile signed __int32 **)(a1 + 16);
  if ( !v18 )
    return v24 - __readfsqword(0x28u);
  v19 = v18 + 2;
  if ( *((_QWORD *)v18 + 1) == 0x100000001LL )
  {
    v22 = *(_QWORD *)v18;
    *((_QWORD *)v18 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64, volatile signed __int32 *))(v22 + 16))(
      v18,
      v16,
      v19);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v20 = _InterlockedExchangeAdd(v19, 0xFFFFFFFF);
    }
    else
    {
      v20 = *((_DWORD *)v18 + 2);
      *((_DWORD *)v18 + 2) = v20 - 1;
    }
    if ( v20 != 1 )
      return v24 - __readfsqword(0x28u);
    return sub_420480(v18);
  }
}

