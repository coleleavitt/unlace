__int64 __fastcall CoinPackedMatrix::minorAppendOrthoOrdered(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 result; // rax
  int *v5; // rbp
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // xmm0_8
  int *v27; // rsi
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // eax
  void *exception; // r13
  __int64 v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h]
  __int64 v35; // [rsp+30h] [rbp-48h]

  if ( *((_DWORD *)this + 16) != *((_DWORD *)a2 + 17) )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v33 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v33 - 24);
    if ( (_UNKNOWN *)(v34 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v34 - 24);
    if ( (_UNKNOWN *)(v35 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v35 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  result = *((unsigned int *)a2 + 16);
  if ( (_DWORD)result )
  {
    v5 = (int *)CoinPackedMatrix::countOrthoLength(a2);
    v6 = *((_DWORD *)this + 16) - 1;
    if ( v6 >= 0 )
    {
      v7 = *((_QWORD *)this + 6);
      v8 = *((_QWORD *)this + 7);
      v9 = 4LL * v6;
      if ( v5[(unsigned __int64)v9 / 4] + *(_DWORD *)(v8 + v9) + *(_DWORD *)(v7 + v9) > *(_DWORD *)(v7 + v9 + 4) )
      {
LABEL_18:
        CoinPackedMatrix::resizeForAddingMinorVectors(this, v5);
        if ( !v5 )
          goto LABEL_10;
        goto LABEL_9;
      }
      v10 = 4 * (v6 - (unsigned __int64)(unsigned int)v6);
      while ( v10 != v9 )
      {
        v11 = v5[(unsigned __int64)v9 / 4 - 1] + *(_DWORD *)(v7 + v9 - 4) + *(_DWORD *)(v8 + v9 - 4);
        v9 -= 4;
        if ( v11 > *(_DWORD *)(v7 + v9 + 4) )
          goto LABEL_18;
      }
    }
    if ( !v5 )
    {
LABEL_10:
      v12 = *((_DWORD *)a2 + 16);
      if ( v12 > 0 )
      {
        v13 = *((_QWORD *)a2 + 6);
        v14 = 1;
        v32 = *((_QWORD *)a2 + 7);
        do
        {
          v15 = *(int *)(v13 + 4 * v14 - 4);
          v16 = *(_DWORD *)(v32 + 4 * v14 - 4);
          if ( (_DWORD)v15 != (_DWORD)v15 + v16 )
          {
            v17 = *((_QWORD *)this + 4);
            v18 = *((_QWORD *)this + 6);
            v19 = *((_QWORD *)this + 7);
            v20 = *((_QWORD *)this + 5);
            v21 = (unsigned int)(v16 - 1) + 1LL;
            v22 = *((_QWORD *)a2 + 5) + 4 * v15;
            v23 = *((_QWORD *)a2 + 4) + 8 * v15;
            v24 = 0;
            do
            {
              v25 = *(int *)(v22 + 4 * v24);
              v26 = *(_QWORD *)(v23 + 8 * v24++);
              v27 = (int *)(v19 + 4 * v25);
              v28 = *v27 + 1;
              v29 = *v27 + *(_DWORD *)(v18 + 4 * v25);
              *(_QWORD *)(v17 + 8 * v29) = v26;
              *v27 = v28;
              *(_DWORD *)(v20 + 4 * v29) = *((_DWORD *)this + 17);
            }
            while ( v21 != v24 );
            v12 = *((_DWORD *)a2 + 16);
          }
          v30 = v14;
          ++*((_DWORD *)this + 17);
          ++v14;
        }
        while ( v30 < v12 );
      }
      result = *((unsigned int *)a2 + 18);
      *((_DWORD *)this + 18) += result;
      return result;
    }
LABEL_9:
    operator delete[](v5);
    goto LABEL_10;
  }
  return result;
}

