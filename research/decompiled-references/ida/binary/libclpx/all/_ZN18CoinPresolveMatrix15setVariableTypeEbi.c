__m128i *__fastcall CoinPresolveMatrix::setVariableType(CoinPresolveMatrix *this, char a2, int a3)
{
  __m128i *result; // rax
  unsigned int v4; // edi
  __m128i si128; // xmm0
  __m128i *v6; // rsi
  unsigned int v7; // ecx
  __int64 *v8; // rcx
  unsigned int v9; // edi
  __m128i *v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rcx
  void *exception; // r13
  int v14; // [rsp+Ch] [rbp-6Ch]
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]

  if ( a3 < 0 )
  {
    result = *((__m128i **)this + 39);
    a3 = *(_DWORD *)this;
    if ( result )
      goto LABEL_4;
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 3) < a3 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v15 - 24);
    if ( (_UNKNOWN *)(v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v16 - 24);
    if ( (_UNKNOWN *)(v17 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v17 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  result = *((__m128i **)this + 39);
  if ( !result )
  {
LABEL_17:
    v14 = a3;
    result = (__m128i *)operator new[](*((int *)this + 3));
    a3 = v14;
    *((_QWORD *)this + 39) = result;
  }
LABEL_4:
  if ( !a2 )
  {
    if ( !a3 )
      return result;
    v9 = a3 / 8;
    if ( a3 / 8 <= 0 )
      goto LABEL_32;
    if ( v9 == 1 )
    {
      v12 = (__int64 *)result;
    }
    else
    {
      v10 = result;
      v11 = 0;
      do
      {
        ++v11;
        ++v10;
        v10[-1] = 0;
      }
      while ( v11 < v9 >> 1 );
      v12 = &result->m128i_i64[v9 & 0xFFFFFFFE];
      if ( v9 == (v9 & 0xFFFFFFFE) )
        goto LABEL_31;
    }
    *v12 = 0;
LABEL_31:
    result = (__m128i *)((char *)result + 8 * (int)(v9 - 1) + 8);
LABEL_32:
    switch ( a3 % 8 )
    {
      case 1:
        goto LABEL_39;
      case 2:
        goto LABEL_38;
      case 3:
        goto LABEL_37;
      case 4:
        goto LABEL_36;
      case 5:
        goto LABEL_35;
      case 6:
        goto LABEL_34;
      case 7:
        result->m128i_i8[6] = 0;
LABEL_34:
        result->m128i_i8[5] = 0;
LABEL_35:
        result->m128i_i8[4] = 0;
LABEL_36:
        result->m128i_i8[3] = 0;
LABEL_37:
        result->m128i_i8[2] = 0;
LABEL_38:
        result->m128i_i8[1] = 0;
LABEL_39:
        result->m128i_i8[0] = 0;
        break;
      default:
        return result;
    }
    return result;
  }
  if ( !a3 )
    return result;
  v4 = a3 / 8;
  if ( a3 / 8 > 0 )
  {
    if ( v4 == 1 )
    {
      v8 = (__int64 *)result;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
      v6 = result;
      v7 = 0;
      do
      {
        ++v7;
        ++v6;
        v6[-1] = si128;
      }
      while ( v4 >> 1 > v7 );
      v8 = &result->m128i_i64[v4 & 0xFFFFFFFE];
      if ( v4 == (v4 & 0xFFFFFFFE) )
        goto LABEL_14;
    }
    *v8 = 0x101010101010101LL;
LABEL_14:
    result = (__m128i *)((char *)result + 8 * (int)(v4 - 1) + 8);
  }
  switch ( a3 % 8 )
  {
    case 1:
      goto LABEL_24;
    case 2:
      goto LABEL_23;
    case 3:
      goto LABEL_22;
    case 4:
      goto LABEL_21;
    case 5:
      goto LABEL_20;
    case 6:
      goto LABEL_19;
    case 7:
      result->m128i_i8[6] = 1;
LABEL_19:
      result->m128i_i8[5] = 1;
LABEL_20:
      result->m128i_i8[4] = 1;
LABEL_21:
      result->m128i_i8[3] = 1;
LABEL_22:
      result->m128i_i8[2] = 1;
LABEL_23:
      result->m128i_i8[1] = 1;
LABEL_24:
      result->m128i_i8[0] = 1;
      break;
    default:
      return result;
  }
  return result;
}

