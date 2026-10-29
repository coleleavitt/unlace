__int64 __fastcall CMessageHandler::print(CMessageHandler *this)
{
  void **v2; // rbx
  int v3; // eax
  bool v4; // zf
  _QWORD *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r12
  const __m128i *v8; // rax
  __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  char *v16; // r14
  int v17; // r13d
  char *v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rdx
  char *v23; // rcx
  char *v24; // rdx
  unsigned int v25; // esi
  __int64 v26; // rcx
  char *v27; // rsi
  char *v28; // rcx
  __int64 (__fastcall *v29)(_QWORD, char *); // rax
  void *v31; // rdi
  int v32; // eax
  char *v33; // rcx
  char *v34; // rdx
  char v35; // di
  int v36; // ecx
  int v37; // [rsp+8h] [rbp-2B0h]
  unsigned int v38; // [rsp+14h] [rbp-2A4h]
  unsigned int v39; // [rsp+14h] [rbp-2A4h]
  unsigned int v40; // [rsp+18h] [rbp-2A0h]
  unsigned int v41; // [rsp+20h] [rbp-298h]
  __int64 v42; // [rsp+38h] [rbp-280h]
  unsigned int v43; // [rsp+40h] [rbp-278h]
  char *s; // [rsp+58h] [rbp-260h] BYREF
  __m128i v45; // [rsp+60h] [rbp-258h] BYREF
  __m128i v46; // [rsp+70h] [rbp-248h] BYREF
  __int32 v47; // [rsp+80h] [rbp-238h]
  __int32 v48; // [rsp+84h] [rbp-234h]
  _QWORD v49[10]; // [rsp+90h] [rbp-228h] BYREF
  _QWORD v50[59]; // [rsp+E0h] [rbp-1D8h] BYREF

  if ( *((_QWORD *)this + 201) )
  {
    v2 = (void **)v50;
    CoinOneMessage::CoinOneMessage((CoinOneMessage *)v50, (CMessageHandler *)((char *)this + 128));
    v38 = v50[0];
    CoinOneMessage::~CoinOneMessage((CoinOneMessage *)v50);
    std::string::string((std::string *)v50, (CMessageHandler *)((char *)this + 1560));
    v3 = std::string::compare((std::string *)v50, "Clp");
    if ( (_UNKNOWN *)(v50[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v36 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v36 = *(_DWORD *)(v50[0] - 8LL);
        *(_DWORD *)(v50[0] - 8LL) = v36 - 1;
      }
      if ( v36 <= 0 )
      {
        v37 = v3;
        std::string::_Rep::_M_destroy();
        v3 = v37;
      }
    }
    v4 = v3 == 0;
    v5 = *((_QWORD **)this + 1);
    v6 = v38 + 1000000;
    if ( v4 )
      v6 = v38;
    v7 = (__int64)(*((_QWORD *)this + 2) - (_QWORD)v5) >> 3;
    v39 = v6;
    if ( (int)v7 > 0 )
    {
      v49[0] = *v5;
      if ( (_DWORD)v7 != 1 )
      {
        v49[1] = v5[1];
        if ( (_DWORD)v7 != 2 )
        {
          v49[2] = v5[2];
          if ( (_DWORD)v7 != 3 )
          {
            v49[3] = v5[3];
            if ( (_DWORD)v7 != 4 )
            {
              v49[4] = v5[4];
              if ( (_DWORD)v7 != 5 )
              {
                v49[5] = v5[5];
                if ( (_DWORD)v7 != 6 )
                {
                  v49[6] = v5[6];
                  if ( (_DWORD)v7 != 7 )
                  {
                    v49[7] = v5[7];
                    if ( (_DWORD)v7 != 8 )
                    {
                      v49[8] = v5[8];
                      if ( (_DWORD)v7 != 9 )
                        v49[9] = v5[9];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v8 = *((const __m128i **)this + 4);
    v9 = (__int64)(*((_QWORD *)this + 5) - (_QWORD)v8) >> 2;
    v40 = v9;
    if ( (int)v9 > 0 )
    {
      if ( (v8 >= &v46 || &v45 >= &v8[1]) && (unsigned int)v9 > 9 )
      {
        v10 = v9 & 0x7FFFFFFC;
        v45 = _mm_loadu_si128(v8);
        v46 = _mm_loadu_si128(v8 + 1);
        if ( (_DWORD)v9 != (v9 & 0xFFFFFFFC) )
        {
          v45.m128i_i32[v10] = v8->m128i_i32[v10];
          v11 = v10 + 1;
          if ( (int)v9 > v10 + 1 )
          {
            v12 = v10 + 2;
            v45.m128i_i32[v11] = v8->m128i_i32[v11];
            if ( (int)v9 > v12 )
              v45.m128i_i32[v12] = v8->m128i_i32[v12];
          }
        }
      }
      else
      {
        v45.m128i_i32[0] = v8->m128i_i32[0];
        if ( (_DWORD)v9 != 1 )
        {
          v45.m128i_i32[1] = v8->m128i_i32[1];
          if ( (_DWORD)v9 != 2 )
          {
            v45.m128i_i32[2] = v8->m128i_i32[2];
            if ( (_DWORD)v9 != 3 )
            {
              v45.m128i_i32[3] = v8->m128i_i32[3];
              if ( (_DWORD)v9 != 4 )
              {
                v46.m128i_i32[0] = v8[1].m128i_i32[0];
                if ( (_DWORD)v9 != 5 )
                {
                  v46.m128i_i32[1] = v8[1].m128i_i32[1];
                  if ( (_DWORD)v9 != 6 )
                  {
                    v46.m128i_i32[2] = v8[1].m128i_i32[2];
                    if ( (_DWORD)v9 != 7 )
                    {
                      v46.m128i_i32[3] = v8[1].m128i_i32[3];
                      if ( (_DWORD)v9 != 8 )
                      {
                        v47 = v8[2].m128i_i32[0];
                        if ( (_DWORD)v9 != 9 )
                          v48 = v8[2].m128i_i32[1];
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v13 = *((_QWORD *)this + 10);
    v14 = (*((_QWORD *)this + 11) - v13) >> 3;
    v41 = v14;
    if ( (int)v14 <= 0 )
    {
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, _QWORD, __m128i *, _QWORD, _QWORD *))this + 201))(
        *((_QWORD *)this + 200),
        v39,
        (unsigned int)v7,
        v49,
        (unsigned int)v9,
        &v45,
        (unsigned int)v14,
        v50);
    }
    else
    {
      v42 = (unsigned int)(v14 - 1);
      v43 = v7;
      v15 = 0;
      while ( 1 )
      {
        std::string::string((std::string *)&s, (const std::string *)(v15 + v13));
        v16 = s;
        if ( s )
        {
          v17 = strlen(s);
          v18 = (char *)malloc(v17 + 1);
          if ( v17 && v16 != v18 )
          {
            v19 = v17 >> 3;
            if ( v17 >> 3 <= 0 )
            {
              v28 = v18;
              v27 = v16;
            }
            else
            {
              if ( (v18 >= v16 + 16 || v16 >= v18 + 16) && v19 > 1 )
              {
                v20 = 0;
                v21 = 0;
                do
                {
                  ++v21;
                  *(__m128i *)&v18[v20] = _mm_loadu_si128((const __m128i *)&v16[v20]);
                  v20 += 16;
                }
                while ( v19 >> 1 > v21 );
                v22 = 8LL * (v19 & 0xFFFFFFFE);
                v23 = &v16[v22];
                v24 = &v18[v22];
                if ( (v19 & 0xFFFFFFFE) != v19 )
                {
                  *v24 = *v23;
                  v24[1] = v23[1];
                  v24[2] = v23[2];
                  v24[3] = v23[3];
                  v24[4] = v23[4];
                  v24[5] = v23[5];
                  v24[6] = v23[6];
                  v24[7] = v23[7];
                }
                v25 = v19 - 1;
              }
              else
              {
                v25 = v19 - 1;
                v33 = v16;
                v34 = v18;
                do
                {
                  v35 = *v33;
                  v34 += 8;
                  v33 += 8;
                  *(v34 - 8) = v35;
                  *(v34 - 7) = *(v33 - 7);
                  *(v34 - 6) = *(v33 - 6);
                  *(v34 - 5) = *(v33 - 5);
                  *(v34 - 4) = *(v33 - 4);
                  *(v34 - 3) = *(v33 - 3);
                  *(v34 - 2) = *(v33 - 2);
                  *(v34 - 1) = *(v33 - 1);
                }
                while ( v34 != &v18[8 * v25 + 8] );
              }
              v26 = 8LL * (int)v25 + 8;
              v27 = &v16[v26];
              v28 = &v18[v26];
            }
            switch ( v17 % 8 )
            {
              case 1:
                goto LABEL_47;
              case 2:
                goto LABEL_46;
              case 3:
                goto LABEL_45;
              case 4:
                goto LABEL_44;
              case 5:
                goto LABEL_43;
              case 6:
                goto LABEL_42;
              case 7:
                v28[6] = v27[6];
LABEL_42:
                v28[5] = v27[5];
LABEL_43:
                v28[4] = v27[4];
LABEL_44:
                v28[3] = v27[3];
LABEL_45:
                v28[2] = v27[2];
LABEL_46:
                v28[1] = v27[1];
LABEL_47:
                *v28 = *v27;
                break;
              default:
                break;
            }
          }
          v18[v17] = 0;
        }
        else
        {
          v18 = nullptr;
        }
        v50[v15 / 8] = v18;
        if ( v16 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v32 = _InterlockedExchangeAdd((volatile signed __int32 *)v16 - 2, 0xFFFFFFFF);
          }
          else
          {
            v32 = *((_DWORD *)v16 - 2);
            *((_DWORD *)v16 - 2) = v32 - 1;
          }
          if ( v32 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        v15 += 8LL;
        if ( v15 == 8 * v42 + 8 )
          break;
        v13 = *((_QWORD *)this + 10);
      }
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, _QWORD, __m128i *, _QWORD))this + 201))(
        *((_QWORD *)this + 200),
        v39,
        v43,
        v49,
        v40,
        &v45,
        v41);
      do
      {
        v31 = *v2++;
        free(v31);
      }
      while ( v2 != &v50[v42 + 1] );
    }
  }
  v29 = *((__int64 (__fastcall **)(_QWORD, char *))this + 202);
  if ( v29 )
    return v29(*((_QWORD *)this + 200), (char *)this + 552);
  else
    return CoinMessageHandler::print(this);
}

