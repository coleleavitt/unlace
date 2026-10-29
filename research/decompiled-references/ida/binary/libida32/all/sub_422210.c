__int64 __fastcall sub_422210(__int64 a1)
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
  _QWORD *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  unsigned __int64 v15; // rsi
  void *v16; // rdi
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rdx
  signed __int32 v19; // eax
  __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // [rsp+8h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_2BD02F0;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  v2 = *(_QWORD *)(a1 + 352);
  if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
    }
    else
    {
      v22 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v22 - 1;
    }
    if ( v22 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v3 = *(void **)(a1 + 328);
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 344) - (_QWORD)v3);
  v4 = *(void **)(a1 + 296);
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 312) - (_QWORD)v4);
  v5 = *(void **)(a1 + 272);
  if ( v5 )
    operator delete(v5, *(_QWORD *)(a1 + 288) - (_QWORD)v5);
  v6 = *(void **)(a1 + 248);
  if ( v6 )
    operator delete(v6, *(_QWORD *)(a1 + 264) - (_QWORD)v6);
  v7 = *(void **)(a1 + 224);
  if ( v7 )
    operator delete(v7, *(_QWORD *)(a1 + 240) - (_QWORD)v7);
  v8 = *(void **)(a1 + 192);
  if ( v8 )
    operator delete(v8, *(_QWORD *)(a1 + 208) - (_QWORD)v8);
  v9 = *(void **)(a1 + 168);
  if ( v9 )
    operator delete(v9, *(_QWORD *)(a1 + 184) - (_QWORD)v9);
  v10 = *(void **)(a1 + 144);
  if ( v10 )
    operator delete(v10, *(_QWORD *)(a1 + 160) - (_QWORD)v10);
  v11 = *(void **)(a1 + 112);
  if ( v11 )
    operator delete(v11, *(_QWORD *)(a1 + 128) - (_QWORD)v11);
  v12 = *(_QWORD **)(a1 + 72);
  while ( v12 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
    operator delete(v13, 0x10u);
  }
  memset(*(void **)(a1 + 56), 0, 8LL * *(_QWORD *)(a1 + 64));
  v14 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v15 = *(_QWORD *)(a1 + 64);
  if ( v14 != (void *)(a1 + 104) )
  {
    v15 *= 8LL;
    operator delete(v14, v15);
  }
  v16 = *(void **)(a1 + 24);
  if ( v16 )
  {
    v15 = *(_QWORD *)(a1 + 40) - (_QWORD)v16;
    operator delete(v16, v15);
  }
  v17 = *(volatile signed __int32 **)(a1 + 16);
  if ( !v17 )
    return v23 - __readfsqword(0x28u);
  v18 = v17 + 2;
  if ( *((_QWORD *)v17 + 1) == 0x100000001LL )
  {
    v21 = *(_QWORD *)v17;
    *((_QWORD *)v17 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64, volatile signed __int32 *))(v21 + 16))(
      v17,
      v15,
      v18);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v19 = _InterlockedExchangeAdd(v18, 0xFFFFFFFF);
    }
    else
    {
      v19 = *((_DWORD *)v17 + 2);
      *((_DWORD *)v17 + 2) = v19 - 1;
    }
    if ( v19 != 1 )
      return v23 - __readfsqword(0x28u);
    return sub_420480(v17);
  }
}

