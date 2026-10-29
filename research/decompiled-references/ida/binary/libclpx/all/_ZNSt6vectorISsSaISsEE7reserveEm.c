unsigned __int64 __fastcall std::vector<std::string>::reserve(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rbx
  unsigned __int64 result; // rax
  char *v4; // r13
  __int64 v5; // rax
  char *v6; // r8
  char *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rdx
  int v12; // ecx
  signed __int64 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-58h]
  char *v15; // [rsp+10h] [rbp-58h]
  char *v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+18h] [rbp-50h]

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v2 = *(char **)a1;
  result = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( a2 > result )
  {
    v4 = *(char **)(a1 + 8);
    v13 = v4 - v2;
    if ( a2 )
    {
      v5 = operator new(8 * a2);
      v6 = *(char **)(a1 + 8);
      v7 = *(char **)a1;
    }
    else
    {
      v7 = *(char **)a1;
      v6 = *(char **)(a1 + 8);
      v5 = 0;
    }
    if ( v4 != v2 )
    {
      v8 = v5;
      do
      {
        if ( !v8 )
        {
          v2 += 8;
          if ( v4 == v2 )
            break;
          v8 = 8;
        }
        v9 = *(_QWORD *)v2;
        v2 += 8;
        v8 += 8;
        *(_QWORD *)(v8 - 8) = v9;
        *((_QWORD *)v2 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      }
      while ( v4 != v2 );
    }
    if ( v7 != v6 )
    {
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*(_QWORD *)v7 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v7 - 8LL), 0xFFFFFFFF) <= 0 )
          {
            v17 = v5;
            v15 = v6;
            std::string::_Rep::_M_destroy();
            v5 = v17;
            v6 = v15;
          }
          v7 += 8;
        }
        while ( v7 != v6 );
      }
      else
      {
        do
        {
          v11 = *(_QWORD *)v7;
          if ( (_UNKNOWN *)(*(_QWORD *)v7 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v12 = *(_DWORD *)(v11 - 8);
            *(_DWORD *)(v11 - 8) = v12 - 1;
            if ( v12 <= 0 )
            {
              v18 = v5;
              v16 = v6;
              std::string::_Rep::_M_destroy();
              v6 = v16;
              v5 = v18;
            }
          }
          v7 += 8;
        }
        while ( v6 != v7 );
      }
      v6 = *(char **)a1;
    }
    if ( v6 )
    {
      v14 = v5;
      operator delete(v6);
      v5 = v14;
    }
    *(_QWORD *)a1 = v5;
    v10 = v5 + v13;
    result = 8 * a2 + v5;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}

