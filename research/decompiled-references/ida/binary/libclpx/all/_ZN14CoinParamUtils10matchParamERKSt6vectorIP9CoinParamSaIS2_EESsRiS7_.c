__int64 __fastcall CoinParamUtils::matchParam(__int64 *a1, const std::string *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // [rsp+10h] [rbp-68h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  unsigned int v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+2Ch] [rbp-4Ch]
  int v19; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v20[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *a1;
  v5 = a1[1];
  *a3 = -1;
  *a4 = 0;
  v6 = (v5 - v4) >> 3;
  if ( (int)v6 <= 0 )
    return 0;
  if ( &_pthread_key_create )
  {
    v8 = 0;
    v17 = 0;
    v14 = (unsigned int)(v6 - 1) + 1LL;
    while ( 1 )
    {
      if ( *(_QWORD *)(v4 + 8 * v8) )
      {
        std::string::string((std::string *)v20, a2);
        v9 = CoinParam::matches();
        if ( (_UNKNOWN *)(v20[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v20[0] - 8LL), 0xFFFFFFFF) <= 0 )
        {
          v18 = v9;
          std::string::_Rep::_M_destroy();
          v9 = v18;
        }
        if ( v9 == 1 )
        {
          ++v17;
          *a3 = v8;
          if ( !(unsigned int)std::string::compare(a2, "?") )
            return 1;
        }
        else
        {
          *a4 += v9 >> 1;
        }
      }
      if ( ++v8 == v14 )
        return v17;
      v4 = *a1;
    }
  }
  v11 = 0;
  v17 = 0;
  v15 = (unsigned int)(v6 - 1) + 1LL;
  while ( 1 )
  {
    if ( *(_QWORD *)(v4 + 8 * v11) )
    {
      std::string::string((std::string *)v20, a2);
      v12 = CoinParam::matches();
      if ( (_UNKNOWN *)(v20[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v13 = *(_DWORD *)(v20[0] - 8LL);
        *(_DWORD *)(v20[0] - 8LL) = v13 - 1;
        if ( v13 <= 0 )
        {
          v19 = v12;
          std::string::_Rep::_M_destroy();
          v12 = v19;
        }
      }
      if ( v12 != 1 )
      {
        *a4 += v12 >> 1;
        goto LABEL_15;
      }
      ++v17;
      *a3 = v11;
      if ( !(unsigned int)std::string::compare(a2, "?") )
        return 1;
    }
LABEL_15:
    if ( ++v11 == v15 )
      return v17;
    v4 = *a1;
  }
}

