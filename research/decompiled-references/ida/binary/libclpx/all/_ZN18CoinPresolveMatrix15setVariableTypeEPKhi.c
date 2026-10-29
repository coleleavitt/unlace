unsigned __int64 __fastcall CoinPresolveMatrix::setVariableType(
        CoinPresolveMatrix *this,
        const unsigned __int8 *a2,
        int a3)
{
  unsigned __int64 result; // rax
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rcx
  const unsigned __int8 *v7; // rsi
  _BYTE *v8; // rdx
  const unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rdx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  const unsigned __int8 *v13; // rcx
  _BYTE *v14; // rax
  const unsigned __int8 *v15; // r9
  _BYTE *v16; // rdi
  const unsigned __int8 *v17; // rcx
  unsigned __int64 v18; // rax
  char v19; // al
  char v20; // al
  const unsigned __int8 *v21; // rcx
  _BYTE *v22; // rax
  const unsigned __int8 *v23; // r9
  _BYTE *v24; // rdi
  const unsigned __int8 *v25; // rcx
  _BYTE *v26; // rax
  void *exception; // r13
  int v28; // [rsp+Ch] [rbp-6Ch]
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]

  if ( a3 < 0 )
  {
    result = *((_QWORD *)this + 39);
    a3 = *(_DWORD *)this;
    if ( result )
      goto LABEL_4;
LABEL_32:
    v28 = a3;
    result = operator new[](*((int *)this + 3));
    a3 = v28;
    *((_QWORD *)this + 39) = result;
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 3) < a3 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v29 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v29 - 24);
    if ( (_UNKNOWN *)(v30 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v30 - 24);
    if ( (_UNKNOWN *)(v31 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v31 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  result = *((_QWORD *)this + 39);
  if ( !result )
    goto LABEL_32;
LABEL_4:
  if ( a3 && a2 != (const unsigned __int8 *)result )
  {
    v4 = a3 + 14;
    if ( a3 + 7 >= 0 )
      v4 = a3 + 7;
    v5 = v4 >> 3;
    v6 = (unsigned int)(a3 % 8);
    if ( (unsigned __int64)a2 >= result )
    {
      v9 = a2 - 1;
      v10 = (unsigned __int8 *)(result - 1);
      switch ( v6 )
      {
        case 0LL:
          goto LABEL_11;
        case 1LL:
          goto LABEL_18;
        case 2LL:
          v18 = result - 1;
          v17 = v9;
          goto LABEL_17;
        case 3LL:
          v16 = (_BYTE *)(result - 1);
          v15 = v9;
          goto LABEL_16;
        case 4LL:
          goto LABEL_15;
        case 5LL:
          v14 = (_BYTE *)(result - 1);
          v13 = v9;
          goto LABEL_14;
        case 6LL:
          goto LABEL_13;
        case 7LL:
          while ( 1 )
          {
            v12 = v9[1];
            ++v10;
            ++v9;
            *v10 = v12;
LABEL_13:
            v13 = v9 + 1;
            v14 = v10 + 1;
            v10[1] = v9[1];
LABEL_14:
            v9 = v13 + 1;
            v10 = v14 + 1;
            v14[1] = v13[1];
LABEL_15:
            v15 = v9 + 1;
            v16 = v10 + 1;
            v10[1] = v9[1];
LABEL_16:
            v17 = v15 + 1;
            v18 = (unsigned __int64)(v16 + 1);
            v16[1] = v15[1];
LABEL_17:
            v9 = v17 + 1;
            v10 = (unsigned __int8 *)(v18 + 1);
            *(_BYTE *)(v18 + 1) = v17[1];
LABEL_18:
            result = v9[1];
            --v5;
            v10[1] = result;
            if ( v5 <= 0 )
              break;
            ++v9;
            ++v10;
LABEL_11:
            v11 = v9[1];
            ++v10;
            ++v9;
            *v10 = v11;
          }
          break;
        default:
          return result;
      }
    }
    else
    {
      v7 = &a2[a3];
      v8 = (_BYTE *)(result + a3);
      switch ( v6 )
      {
        case 0LL:
          goto LABEL_22;
        case 1LL:
          goto LABEL_29;
        case 2LL:
          v26 = v8;
          v25 = v7;
          goto LABEL_28;
        case 3LL:
          v24 = v8;
          v23 = v7;
          goto LABEL_27;
        case 4LL:
          goto LABEL_26;
        case 5LL:
          v22 = v8;
          v21 = v7;
          goto LABEL_25;
        case 6LL:
          goto LABEL_24;
        case 7LL:
          while ( 1 )
          {
            v20 = *(v7 - 1);
            --v8;
            --v7;
            *v8 = v20;
LABEL_24:
            v21 = v7 - 1;
            v22 = v8 - 1;
            *(v8 - 1) = *(v7 - 1);
LABEL_25:
            v7 = v21 - 1;
            v8 = v22 - 1;
            *(v22 - 1) = *(v21 - 1);
LABEL_26:
            v23 = v7 - 1;
            v24 = v8 - 1;
            *(v8 - 1) = *(v7 - 1);
LABEL_27:
            v25 = v23 - 1;
            v26 = v24 - 1;
            *(v24 - 1) = *(v23 - 1);
LABEL_28:
            v7 = v25 - 1;
            v8 = v26 - 1;
            *(v26 - 1) = *(v25 - 1);
LABEL_29:
            result = *(v7 - 1);
            --v5;
            *(v8 - 1) = result;
            if ( v5 <= 0 )
              break;
            --v7;
            --v8;
LABEL_22:
            v19 = *(v7 - 1);
            --v8;
            --v7;
            *v8 = v19;
          }
          break;
        default:
          return result;
      }
    }
  }
  return result;
}

