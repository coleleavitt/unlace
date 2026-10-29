__int64 __fastcall sub_42A920(_QWORD *a1, char *a2)
{
  volatile signed __int32 *v2; // rbp
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v7; // rax
  void *v8; // rdi
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // edx
  char v16; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-20h]

  v2 = (volatile signed __int32 *)a1[15];
  v17 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = v2 + 2;
    if ( *((_QWORD *)v2 + 1) == 0x100000001LL )
    {
      v14 = *(_QWORD *)v2;
      *((_QWORD *)v2 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, char *, volatile signed __int32 *))(v14 + 16))(v2, a2, v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        v5 = *((_DWORD *)v2 + 2);
        *((_DWORD *)v2 + 2) = v5 - 1;
      }
      if ( v5 == 1 )
        sub_420480(v2);
    }
  }
  v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[12];
  if ( v6 )
  {
    a2 = (char *)(a1 + 10);
    v6(a1 + 10, a1 + 10, 3);
  }
  v7 = a1[8];
  if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 8), 0xFFFFFFFF);
    }
    else
    {
      v15 = *(_DWORD *)(v7 - 8);
      *(_DWORD *)(v7 - 8) = v15 - 1;
    }
    if ( v15 <= 0 )
    {
      a2 = &v16;
      std::string::_Rep::_M_destroy();
    }
  }
  v8 = (void *)a1[5];
  if ( v8 )
  {
    a1[6] = 0;
    qfree(v8);
  }
  v9 = (volatile signed __int32 *)a1[2];
  if ( !v9 )
    return v17 - __readfsqword(0x28u);
  v10 = v9 + 2;
  if ( *((_QWORD *)v9 + 1) == 0x100000001LL )
  {
    v13 = *(_QWORD *)v9;
    *((_QWORD *)v9 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, char *, volatile signed __int32 *))(v13 + 16))(v9, a2, v10);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v11 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
    }
    else
    {
      v11 = *((_DWORD *)v9 + 2);
      *((_DWORD *)v9 + 2) = v11 - 1;
    }
    if ( v11 != 1 )
      return v17 - __readfsqword(0x28u);
    return sub_420480(v9);
  }
}

