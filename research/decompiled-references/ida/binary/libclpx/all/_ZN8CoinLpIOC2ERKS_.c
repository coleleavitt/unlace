// Alternative name is '_ZN8CoinLpIOC1ERKS_'
void __fastcall CoinLpIO::CoinLpIO(CoinLpIO *this, const CoinLpIO *a2)
{
  char *v4; // r13
  __int64 v5; // rbp
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  int v8; // r8d
  char v9; // al
  char *v10; // r14
  int v11; // r15d
  char *v12; // rax
  unsigned int v13; // esi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // rcx
  char *v21; // rcx
  char v22; // al
  CoinMessageHandler *v23; // rbp
  char *v24; // rcx
  char *v25; // rdx
  char v26; // di
  int v27; // [rsp+4h] [rbp-64h]
  _BYTE v28[88]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (char *)this + 24;
  v5 = 0;
  v6 = malloc(1u);
  *v6 = 0;
  *(_QWORD *)this = v6;
  *((_BYTE *)this + 16) = 1;
  CoinMessages::CoinMessages((CoinLpIO *)((char *)this + 24), 0);
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_DWORD *)this + 50) = 0;
  v7 = malloc(1u);
  *((_QWORD *)this + 26) = v7;
  *v7 = 0;
  *((_DWORD *)this + 58) = 10;
  *((_QWORD *)this + 172) = 0;
  *((_QWORD *)this + 27) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 28) = 0x3EE4F8B588E368F1LL;
  v8 = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 40) = v8;
  while ( 1 )
  {
    *((_QWORD *)this + v5 + 18) = 0;
    if ( v8 > (int)v5 )
    {
      v10 = *((char **)a2 + v5 + 30);
      if ( v10 )
      {
        v27 = v8;
        v11 = strlen(*((const char **)a2 + v5 + 30));
        v12 = (char *)malloc(v11 + 1);
        v8 = v27;
        if ( v11 && v10 != v12 )
        {
          v13 = v11 >> 3;
          if ( v11 >> 3 <= 0 )
          {
            v21 = v12;
          }
          else
          {
            if ( (v12 >= v10 + 16 || v10 >= v12 + 16) && v13 > 1 )
            {
              v14 = 0;
              v15 = 0;
              do
              {
                ++v15;
                *(__m128i *)&v12[v14] = _mm_loadu_si128((const __m128i *)&v10[v14]);
                v14 += 16;
              }
              while ( v13 >> 1 > v15 );
              v16 = 8LL * (v13 & 0xFFFFFFFE);
              v17 = &v10[v16];
              v18 = &v12[v16];
              if ( v13 != (v13 & 0xFFFFFFFE) )
              {
                *v18 = *v17;
                v18[1] = v17[1];
                v18[2] = v17[2];
                v18[3] = v17[3];
                v18[4] = v17[4];
                v18[5] = v17[5];
                v18[6] = v17[6];
                v18[7] = v17[7];
              }
              v19 = v13 - 1;
            }
            else
            {
              v19 = v13 - 1;
              v24 = v10;
              v25 = v12;
              do
              {
                v26 = *v24;
                v25 += 8;
                v24 += 8;
                *(v25 - 8) = v26;
                *(v25 - 7) = *(v24 - 7);
                *(v25 - 6) = *(v24 - 6);
                *(v25 - 5) = *(v24 - 5);
                *(v25 - 4) = *(v24 - 4);
                *(v25 - 3) = *(v24 - 3);
                *(v25 - 2) = *(v24 - 2);
                *(v25 - 1) = *(v24 - 1);
              }
              while ( &v12[8 * v19 + 8] != v25 );
            }
            v20 = 8LL * (int)v19 + 8;
            v10 += v20;
            v21 = &v12[v20];
          }
          switch ( v11 % 8 )
          {
            case 1:
              goto LABEL_29;
            case 2:
              goto LABEL_28;
            case 3:
              goto LABEL_27;
            case 4:
              goto LABEL_26;
            case 5:
              goto LABEL_25;
            case 6:
              goto LABEL_24;
            case 7:
              v21[6] = v10[6];
LABEL_24:
              v21[5] = v10[5];
LABEL_25:
              v21[4] = v10[4];
LABEL_26:
              v21[3] = v10[3];
LABEL_27:
              v21[2] = v10[2];
LABEL_28:
              v21[1] = v10[1];
LABEL_29:
              *v21 = *v10;
              break;
            default:
              break;
          }
        }
        v12[v11] = 0;
      }
      else
      {
        v12 = nullptr;
      }
      *((_QWORD *)this + v5 + 30) = v12;
    }
    else
    {
      *((_QWORD *)this + v5 + 30) = 0;
    }
    *((_QWORD *)this + v5 + 21) = 0;
    if ( v5 == 1 )
      break;
    v5 = 1;
  }
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 38) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_QWORD *)this + 40) = 0;
  *((_QWORD *)this + 41) = 0;
  if ( *((_QWORD *)a2 + 11) || *((_QWORD *)a2 + 13) )
  {
    CoinLpIO::gutsOfCopy(this, a2);
    v9 = *((_BYTE *)a2 + 16);
    *((_BYTE *)this + 16) = v9;
    if ( v9 )
    {
LABEL_34:
      v23 = (CoinMessageHandler *)operator new(0x640u);
      CoinMessageHandler::CoinMessageHandler(v23, *((const CoinMessageHandler **)a2 + 1));
      *((_QWORD *)this + 1) = v23;
      goto LABEL_8;
    }
  }
  else
  {
    v22 = *((_BYTE *)a2 + 16);
    *((_BYTE *)this + 16) = v22;
    if ( v22 )
      goto LABEL_34;
  }
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
LABEL_8:
  CoinMessage::CoinMessage(v28, 0);
  CoinMessages::operator=(v4, v28);
  CoinMessages::~CoinMessages((CoinMessages *)v28);
}

