unsigned __int64 __fastcall sub_4356D0(_QWORD *a1, unsigned int a2, unsigned __int64 a3, char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // r15
  _QWORD *v9; // rax
  size_t v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD *v13; // rax
  size_t v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rdx
  int v18; // edx
  char v19; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v5 = a1[30];
  v6 = a1[26];
  v20 = __readfsqword(0x28u);
  v8 = *(unsigned int *)(v5 + 4LL * a2);
  v9 = (_QWORD *)(v6 + 8 * v8);
  v10 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v8 + 1)) - *v9;
  a1[29] += v10;
  memset((void *)(a1[20] + *v9), 0, v10);
  *(_DWORD *)(a1[23] + 4 * v8) = -1;
  v11 = a1[39];
  v12 = *(unsigned int *)(a1[43] + 4LL * a2);
  v13 = (_QWORD *)(v11 + 8 * v12);
  v14 = *(_QWORD *)(v11 + 8LL * (unsigned int)(v12 + 1)) - *v13;
  a1[42] += v14;
  memset((void *)(a1[33] + *v13), 0, v14);
  *(_DWORD *)(a1[36] + 4 * v12) = -1;
  sub_4352D0((__int64)(a1 + 20), a2, a3, a4);
  sub_43BD80((std::string *)(a1 + 46), a3, a4);
  sub_4352D0((__int64)(a1 + 33), a2, *(_QWORD *)(a1[46] - 24LL), (_BYTE *)a1[46]);
  v15 = a1[46];
  if ( &_pthread_key_create )
  {
    if ( *(int *)(v15 - 8) <= 0 )
    {
      v16 = (_BYTE *)a1[46];
      goto LABEL_4;
    }
    v15 = a1[46];
  }
  else
  {
    v16 = (_BYTE *)a1[46];
    if ( *(int *)(v15 - 8) <= 0 )
    {
LABEL_4:
      if ( v16 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
      {
        *((_DWORD *)v16 - 2) = 0;
        *((_QWORD *)v16 - 3) = 0;
        *v16 = 0;
      }
      return v20 - __readfsqword(0x28u);
    }
  }
  if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 - 8), 0xFFFFFFFF);
    }
    else
    {
      v18 = *(_DWORD *)(v15 - 8);
      *(_DWORD *)(v15 - 8) = v18 - 1;
    }
    if ( v18 <= 0 )
      std::string::_Rep::_M_destroy(v15 - 24, &v19);
  }
  a1[46] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  return v20 - __readfsqword(0x28u);
}
