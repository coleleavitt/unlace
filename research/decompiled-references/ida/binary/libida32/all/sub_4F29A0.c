__int64 __fastcall sub_4F29A0(_QWORD *a1, char *a2)
{
  void **v2; // r12
  void **v3; // rbx
  _BYTE *v5; // rdi
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rdx
  signed __int32 v13; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // edx
  char v19; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-20h]

  v2 = (void **)a1[15];
  v3 = (void **)a1[14];
  v20 = __readfsqword(0x28u);
  if ( v2 != v3 )
  {
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        a2 = (char *)((_BYTE *)v3[2] - v5);
        operator delete(v5, (unsigned __int64)a2);
      }
      v3 += 3;
    }
    while ( v2 != v3 );
    v3 = (void **)a1[14];
  }
  if ( v3 )
  {
    a2 = (char *)(a1[16] - (_QWORD)v3);
    operator delete(v3, (unsigned __int64)a2);
  }
  v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[10];
  if ( v6 )
  {
    a2 = (char *)(a1 + 8);
    v6(a1 + 8, a1 + 8, 3);
  }
  v7 = (volatile signed __int32 *)a1[7];
  if ( v7 )
  {
    v8 = v7 + 2;
    if ( *((_QWORD *)v7 + 1) == 0x100000001LL )
    {
      v16 = *(_QWORD *)v7;
      v17 = a1[7];
      *((_QWORD *)v7 + 1) = 0;
      (*(void (__fastcall **)(__int64, char *, volatile signed __int32 *))(v16 + 16))(v17, a2, v8);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v9 = _InterlockedExchangeAdd(v8, 0xFFFFFFFF);
      }
      else
      {
        v9 = *((_DWORD *)v7 + 2);
        *((_DWORD *)v7 + 2) = v9 - 1;
      }
      if ( v9 == 1 )
        sub_420480(v7);
    }
  }
  v10 = a1[5];
  if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 - 8), 0xFFFFFFFF);
    }
    else
    {
      v18 = *(_DWORD *)(v10 - 8);
      *(_DWORD *)(v10 - 8) = v18 - 1;
    }
    if ( v18 <= 0 )
    {
      a2 = &v19;
      std::string::_Rep::_M_destroy();
    }
  }
  v11 = (volatile signed __int32 *)a1[3];
  if ( !v11 )
    return v20 - __readfsqword(0x28u);
  v12 = v11 + 2;
  if ( *((_QWORD *)v11 + 1) == 0x100000001LL )
  {
    v15 = *(_QWORD *)v11;
    *((_QWORD *)v11 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, char *, volatile signed __int32 *))(v15 + 16))(v11, a2, v12);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 24LL))(v11);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v13 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
    }
    else
    {
      v13 = *((_DWORD *)v11 + 2);
      *((_DWORD *)v11 + 2) = v13 - 1;
    }
    if ( v13 != 1 )
      return v20 - __readfsqword(0x28u);
    return sub_420480(v11);
  }
}

