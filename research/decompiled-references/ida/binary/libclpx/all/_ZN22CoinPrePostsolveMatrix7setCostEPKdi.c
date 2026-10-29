__int64 __fastcall CoinPrePostsolveMatrix::setCost(CoinPrePostsolveMatrix *this, const double *a2, int a3)
{
  const double *v4; // rbp
  int v5; // ebx
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  const double *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // xmm0_8
  __int64 v12; // rdx
  void *exception; // r13
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  __int64 v16; // [rsp+20h] [rbp-48h]

  v4 = a2;
  if ( a3 < 0 )
  {
    v5 = *(_DWORD *)this;
  }
  else
  {
    v5 = a3;
    if ( *((_DWORD *)this + 3) < a3 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_2407B0(v14 - 24);
      if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_2407B0(v15 - 24);
      if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_2407B0(v16 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  result = *((_QWORD *)this + 9);
  if ( !result )
  {
    v7 = *((int *)this + 3);
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    result = operator new[](8 * v7);
    *((_QWORD *)this + 9) = result;
  }
  if ( v5 && a2 != (const double *)result )
  {
    if ( v5 >> 3 > 0 )
    {
      v8 = result;
      v9 = a2;
      v10 = (unsigned int)((v5 >> 3) - 1);
      do
      {
        v11 = *(_QWORD *)v9;
        v8 += 64;
        v9 += 8;
        *(_QWORD *)(v8 - 64) = v11;
        *(double *)(v8 - 56) = *(v9 - 7);
        *(double *)(v8 - 48) = *(v9 - 6);
        *(double *)(v8 - 40) = *(v9 - 5);
        *(double *)(v8 - 32) = *(v9 - 4);
        *(double *)(v8 - 24) = *(v9 - 3);
        *(double *)(v8 - 16) = *(v9 - 2);
        *(double *)(v8 - 8) = *(v9 - 1);
      }
      while ( result + ((v10 + 1) << 6) != v8 );
      v12 = ((int)v10 + 1LL) << 6;
      v4 = (const double *)((char *)v4 + v12);
      result += v12;
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_19;
      case 2:
        goto LABEL_18;
      case 3:
        goto LABEL_17;
      case 4:
        goto LABEL_16;
      case 5:
        goto LABEL_15;
      case 6:
        goto LABEL_14;
      case 7:
        *(double *)(result + 48) = v4[6];
LABEL_14:
        *(double *)(result + 40) = v4[5];
LABEL_15:
        *(double *)(result + 32) = v4[4];
LABEL_16:
        *(double *)(result + 24) = v4[3];
LABEL_17:
        *(double *)(result + 16) = v4[2];
LABEL_18:
        *(double *)(result + 8) = v4[1];
LABEL_19:
        *(double *)result = *v4;
        break;
      default:
        return result;
    }
  }
  return result;
}

