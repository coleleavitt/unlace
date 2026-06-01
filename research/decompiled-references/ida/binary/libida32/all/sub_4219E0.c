unsigned __int64 __fastcall sub_4219E0(_QWORD *a1, unsigned int a2, unsigned __int64 a3, char *a4)
{
  __int64 v5; // rdx
  __int64 v7; // r15
  _QWORD *v8; // rax
  size_t v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r14
  _QWORD *v12; // rax
  size_t v13; // rdx
  __int64 v14; // rax
  _BYTE *v15; // rdx
  int v17; // edx
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v5 = a1[24];
  v18 = __readfsqword(0x28u);
  v7 = *(unsigned int *)(a1[28] + 4LL * a2);
  v8 = (_QWORD *)(v5 + 8 * v7);
  v9 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 1)) - *v8;
  a1[27] += v9;
  memset((void *)(a1[18] + *v8), 0, v9);
  *(_DWORD *)(a1[21] + 4 * v7) = -1;
  v10 = a1[37];
  v11 = *(unsigned int *)(a1[41] + 4LL * a2);
  v12 = (_QWORD *)(v10 + 8 * v11);
  v13 = *(_QWORD *)(v10 + 8LL * (unsigned int)(v11 + 1)) - *v12;
  a1[40] += v13;
  memset((void *)(a1[31] + *v12), 0, v13);
  *(_DWORD *)(a1[34] + 4 * v11) = -1;
  sub_421400((__int64)(a1 + 18), a2, a3, a4);
  sub_427E80((std::string *)(a1 + 44), a3, a4);
  sub_421400((__int64)(a1 + 31), a2, *(_QWORD *)(a1[44] - 24LL), (_BYTE *)a1[44]);
  v14 = a1[44];
  if ( &_pthread_key_create )
  {
    if ( *(int *)(v14 - 8) <= 0 )
    {
      v15 = (_BYTE *)a1[44];
      goto LABEL_4;
    }
    v14 = a1[44];
  }
  else
  {
    v15 = (_BYTE *)a1[44];
    if ( *(int *)(v14 - 8) <= 0 )
    {
LABEL_4:
      if ( v15 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
      {
        *((_DWORD *)v15 - 2) = 0;
        *((_QWORD *)v15 - 3) = 0;
        *v15 = 0;
      }
      return v18 - __readfsqword(0x28u);
    }
  }
  if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 8), 0xFFFFFFFF);
    }
    else
    {
      v17 = *(_DWORD *)(v14 - 8);
      *(_DWORD *)(v14 - 8) = v17 - 1;
    }
    if ( v17 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  a1[44] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  return v18 - __readfsqword(0x28u);
}

