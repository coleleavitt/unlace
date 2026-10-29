__int64 __fastcall CoinLpIO::is_invalid_name(CoinMessageHandler **this, const char *a2, char a3)
{
  unsigned __int64 v3; // rbx
  __m128i v4; // xmm0
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // rax
  __int64 result; // rax
  CoinMessageHandler *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  CoinMessageHandler *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  CoinMessageHandler *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  CoinMessageHandler *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33[2]; // [rsp+0h] [rbp-288h] BYREF
  __m128i si128; // [rsp+10h] [rbp-278h]
  __m128i v35; // [rsp+20h] [rbp-268h]
  __m128i v36; // [rsp+30h] [rbp-258h]
  __m128i v37; // [rsp+40h] [rbp-248h]
  __int16 v38; // [rsp+50h] [rbp-238h]
  char s[552]; // [rsp+60h] [rbp-228h] BYREF

  v38 = 126;
  *(__m128i *)v33 = _mm_load_si128((const __m128i *)&xmmword_296A30);
  v3 = a3 == 0 ? 100LL : 96LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_296A40);
  v35 = _mm_load_si128((const __m128i *)&xmmword_296A50);
  v36 = _mm_load_si128((const __m128i *)&xmmword_296A60);
  v4 = _mm_load_si128((const __m128i *)&xmmword_296A70);
  v37 = v4;
  if ( a2 && (v5 = strlen(a2), (v6 = v5) != 0) )
  {
    if ( v3 < v5 )
    {
      sprintf(s, "### CoinLpIO::is_invalid_name(): Name %s is too long", a2);
      v9 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
      v14 = CoinMessageHandler::operator<<(v9, (__int64)s, v10, v11, v12, v13, v33[0]);
      CoinMessageHandler::operator<<(v14, 0, *(double *)v4.m128i_i64);
      return 1;
    }
    else if ( (unsigned int)CoinLpIO::first_is_number((CoinLpIO *)this, a2) )
    {
      sprintf(s, "### CoinLpIO::is_invalid_name(): Name %s should not start with a number", a2);
      v27 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
      v32 = CoinMessageHandler::operator<<(v27, (__int64)s, v28, v29, v30, v31, v33[0]);
      CoinMessageHandler::operator<<(v32, 0, *(double *)v4.m128i_i64);
      return 2;
    }
    else
    {
      v7 = strspn(a2, (const char *)v33);
      if ( v6 == v7 )
      {
        if ( (unsigned int)CoinLpIO::is_keyword((CoinLpIO *)this, a2) )
          return 4;
        if ( (unsigned int)CoinLpIO::is_free((CoinLpIO *)this, a2) )
          return 4;
        result = CoinLpIO::is_inf((CoinLpIO *)this, a2);
        if ( (_DWORD)result )
          return 4;
      }
      else
      {
        sprintf(s, "### CoinLpIO::is_invalid_name(): Name %s contains illegal character '%c'", a2, (unsigned int)a2[v7]);
        v21 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
        v26 = CoinMessageHandler::operator<<(v21, (__int64)s, v22, v23, v24, v25, v33[0]);
        CoinMessageHandler::operator<<(v26, 0, *(double *)v4.m128i_i64);
        return 3;
      }
    }
  }
  else
  {
    v15 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
    v20 = CoinMessageHandler::operator<<(
            v15,
            (__int64)"### CoinLpIO::is_invalid_name(): Name is empty",
            v16,
            v17,
            v18,
            v19,
            v33[0]);
    CoinMessageHandler::operator<<(v20, 0, *(double *)v4.m128i_i64);
    return 5;
  }
  return result;
}

