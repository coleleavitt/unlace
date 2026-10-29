void __fastcall sub_436740(char *a1)
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
  char *v14; // rdi
  unsigned __int64 v15; // rsi
  void *v16; // rdi
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rdx
  signed __int32 v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  char v23; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_2BFA2F0;
  ++*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL);
  v2 = *((_QWORD *)a1 + 44);
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
      std::string::_Rep::_M_destroy(v2 - 24, &v23);
  }
  v3 = *((void **)a1 + 41);
  if ( v3 )
    operator delete(v3, *((_QWORD *)a1 + 43) - (_QWORD)v3);
  v4 = *((void **)a1 + 37);
  if ( v4 )
    operator delete(v4, *((_QWORD *)a1 + 39) - (_QWORD)v4);
  v5 = *((void **)a1 + 34);
  if ( v5 )
    operator delete(v5, *((_QWORD *)a1 + 36) - (_QWORD)v5);
  v6 = *((void **)a1 + 31);
  if ( v6 )
    operator delete(v6, *((_QWORD *)a1 + 33) - (_QWORD)v6);
  v7 = *((void **)a1 + 28);
  if ( v7 )
    operator delete(v7, *((_QWORD *)a1 + 30) - (_QWORD)v7);
  v8 = *((void **)a1 + 24);
  if ( v8 )
    operator delete(v8, *((_QWORD *)a1 + 26) - (_QWORD)v8);
  v9 = *((void **)a1 + 21);
  if ( v9 )
    operator delete(v9, *((_QWORD *)a1 + 23) - (_QWORD)v9);
  v10 = *((void **)a1 + 18);
  if ( v10 )
    operator delete(v10, *((_QWORD *)a1 + 20) - (_QWORD)v10);
  v11 = *((void **)a1 + 14);
  if ( v11 )
    operator delete(v11, *((_QWORD *)a1 + 16) - (_QWORD)v11);
  v12 = *((_QWORD **)a1 + 9);
  while ( v12 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
    operator delete(v13, 0x18u);
  }
  memset(*((void **)a1 + 7), 0, 8LL * *((_QWORD *)a1 + 8));
  v14 = *((char **)a1 + 7);
  *((_QWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 9) = 0;
  v15 = *((_QWORD *)a1 + 8);
  if ( v14 != a1 + 104 )
  {
    v15 *= 8LL;
    operator delete(v14, v15);
  }
  v16 = *((void **)a1 + 3);
  if ( v16 )
  {
    v15 = *((_QWORD *)a1 + 5) - (_QWORD)v16;
    operator delete(v16, v15);
  }
  v17 = *((volatile signed __int32 **)a1 + 2);
  if ( v17 )
  {
    v18 = v17 + 2;
    if ( *((_QWORD *)v17 + 1) == 0x100000001LL )
    {
      v20 = *(_QWORD *)v17;
      v21 = *((_QWORD *)a1 + 2);
      *((_QWORD *)v17 + 1) = 0;
      (*(void (__fastcall **)(__int64, unsigned __int64, volatile signed __int32 *))(v20 + 16))(v21, v15, v18);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
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
      if ( v19 == 1 )
        sub_434350(v17);
    }
  }
  operator delete(a1, 0x168u);
}
