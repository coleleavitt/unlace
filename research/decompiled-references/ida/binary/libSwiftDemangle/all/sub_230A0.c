_QWORD *__fastcall sub_230A0(_QWORD *a1, __int64 *a2, _WORD *a3, size_t a4, __int64 a5)
{
  const void **v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r13
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rcx
  int v18; // edx
  char v19; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v20[1] = __readfsqword(0x28u);
  v8 = sub_22FC0(a2, a3, a4);
  if ( v8 )
  {
    sub_23BD0(v20, v8, a5);
    v9 = v20[0];
    if ( *(_QWORD *)(v20[0] - 24LL) )
    {
      *a1 = v20[0];
    }
    else
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v11 = std::string::_Rep::_S_create(a4, 0, &v19);
          v12 = (_QWORD *)(v11 + 24);
          v13 = v11;
          v14 = (_QWORD *)(v11 + 24);
          if ( a4 == 1 )
          {
            *(_BYTE *)(v11 + 24) = *(_BYTE *)a3;
          }
          else
          {
            memcpy((void *)(v11 + 24), a3, a4);
            v12 = v14;
          }
          if ( (_QWORD *)v13 == &std::string::_Rep::_S_empty_rep_storage )
          {
            v9 = v20[0];
            v14 = v12;
          }
          else
          {
            *(_DWORD *)(v13 + 16) = 0;
            *(_QWORD *)v13 = a4;
            *(_BYTE *)(v13 + a4 + 24) = 0;
            v9 = v20[0];
          }
        }
        else
        {
          v14 = &std::string::_Rep::_S_empty_rep_storage + 3;
        }
        *a1 = v14;
      }
      else
      {
        *a1 = &std::string::_Rep::_S_empty_rep_storage + 3;
      }
      if ( (_QWORD *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 - 8), 0xFFFFFFFF);
        }
        else
        {
          v18 = *(_DWORD *)(v9 - 8);
          *(_DWORD *)(v9 - 8) = v18 - 1;
        }
        if ( v18 <= 0 )
          std::string::_Rep::_M_destroy(v9 - 24, &v19);
      }
    }
  }
  else if ( a3 )
  {
    if ( a4 )
    {
      v15 = std::string::_Rep::_S_create(a4, 0, v20);
      v16 = v15;
      v17 = (_QWORD *)(v15 + 24);
      if ( a4 == 1 )
        *(_BYTE *)(v15 + 24) = *(_BYTE *)a3;
      else
        v17 = memcpy((void *)(v15 + 24), a3, a4);
      if ( (_QWORD *)v16 != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v16 + 16) = 0;
        *(_QWORD *)v16 = a4;
        *(_BYTE *)(v16 + a4 + 24) = 0;
      }
    }
    else
    {
      v17 = &std::string::_Rep::_S_empty_rep_storage + 3;
    }
    *a1 = v17;
  }
  else
  {
    *a1 = &std::string::_Rep::_S_empty_rep_storage + 3;
  }
  return a1;
}

