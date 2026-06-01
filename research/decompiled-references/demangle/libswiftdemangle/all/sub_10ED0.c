_QWORD *__fastcall sub_10ED0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  _BYTE *v3; // rdx
  unsigned __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rcx
  bool v13; // zf
  char v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // edx
  __int64 v19; // [rsp+8h] [rbp-60h]
  char v20; // [rsp+1Fh] [rbp-49h] BYREF
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v2 = a2[9];
  if ( v2 >= a2[8] )
    goto LABEL_5;
  v3 = (_BYTE *)(v2 + a2[7]);
  v4 = v2 + 1;
  if ( *v3 == 95 )
  {
    a2[9] = v4;
    *a1 = &std::string::_Rep::_S_empty_rep_storage + 3;
    return a1;
  }
  a2[9] = v4;
  v21[0] = &std::string::_Rep::_S_empty_rep_storage + 3;
  v5 = (unsigned __int8)*v3;
  if ( (unsigned __int8)(v5 - 97) <= 0xFu && (v6 = 53249, _bittest64(&v6, (unsigned int)(v5 - 97))) )
  {
    v8 = std::string::_Rep::_S_empty_rep_storage;
    v9 = std::string::_Rep::_S_empty_rep_storage + 1LL;
    if ( (unsigned __int64)(std::string::_Rep::_S_empty_rep_storage + 1LL) > *(&std::string::_Rep::_S_empty_rep_storage
                                                                             + 1)
      || *((int *)&std::string::_Rep::_S_empty_rep_storage + 4) > 0 )
    {
      std::string::reserve((std::string *)v21, std::string::_Rep::_S_empty_rep_storage + 1LL);
    }
    *(_BYTE *)(v21[0] + *(_QWORD *)(v21[0] - 24LL)) = v5;
    v10 = v21[0];
    if ( (_QWORD *)(v21[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v21[0] - 8LL) = 0;
      *(_QWORD *)(v10 - 24) = v9;
      *(_BYTE *)(v10 + v8 + 1) = 0;
      v10 = v21[0];
    }
    while ( 1 )
    {
      v11 = a2[9];
      if ( v11 >= a2[8] )
        break;
      v12 = (char *)(v11 + a2[7]);
      v13 = *v12 == 95;
      a2[9] = v11 + 1;
      if ( v13 )
      {
        *a1 = v10;
        return a1;
      }
      v14 = *v12;
      if ( *v12 != 110 && v14 != 98 && v14 != 103 )
        break;
      v15 = *(_QWORD *)(v10 - 24);
      v19 = v15;
      v16 = v15 + 1;
      if ( (unsigned __int64)(v15 + 1) > *(_QWORD *)(v10 - 16) || *(int *)(v10 - 8) > 0 )
        std::string::reserve((std::string *)v21, v15 + 1);
      *(_BYTE *)(v21[0] + *(_QWORD *)(v21[0] - 24LL)) = v14;
      v10 = v21[0];
      v17 = v21[0] - 24LL;
      if ( (_QWORD *)(v21[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v21[0] - 8LL) = 0;
        *(_QWORD *)(v10 - 24) = v16;
        *(_BYTE *)(v17 + v19 + 25) = 0;
        v10 = v21[0];
      }
    }
    *a1 = &std::string::_Rep::_S_empty_rep_storage + 3;
    if ( (_QWORD *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
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
        std::string::_Rep::_M_destroy(v10 - 24, &v20);
    }
  }
  else
  {
LABEL_5:
    *a1 = &std::string::_Rep::_S_empty_rep_storage + 3;
  }
  return a1;
}
