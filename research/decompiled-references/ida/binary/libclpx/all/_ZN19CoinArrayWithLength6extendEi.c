void __fastcall CoinArrayWithLength::extend(CoinArrayWithLength *this, int a2)
{
  unsigned __int64 v3; // r12
  int v5; // ecx
  _BYTE *v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  _BYTE *v12; // rax
  signed int v13; // edi
  __int64 v14; // rax
  _BYTE *v15; // rax
  void *v16; // r12
  unsigned __int64 v17; // rdx
  char *v18; // rax
  char v19; // r8

  if ( *((_DWORD *)this + 2) < a2 )
  {
    v3 = *(_QWORD *)this;
    CoinArrayWithLength::getArray(this, a2);
    if ( v3 )
    {
      v5 = *((_DWORD *)this + 2);
      v6 = *(_BYTE **)this;
      if ( v5 && v6 != (_BYTE *)v3 )
      {
        v7 = v5 >> 3;
        if ( v5 >> 3 <= 0 )
        {
          v15 = (_BYTE *)v3;
        }
        else
        {
          if ( ((unsigned __int64)v6 >= v3 + 16 || v3 >= (unsigned __int64)(v6 + 16)) && v7 > 1 )
          {
            v8 = 0;
            v9 = 0;
            do
            {
              ++v9;
              *(__m128i *)(v3 + v8) = _mm_loadu_si128((const __m128i *)&v6[v8]);
              v8 += 16;
            }
            while ( v9 < v7 >> 1 );
            v10 = 8LL * (v7 & 0xFFFFFFFE);
            v11 = &v6[v10];
            v12 = (_BYTE *)(v3 + v10);
            if ( v7 != (v7 & 0xFFFFFFFE) )
            {
              *v12 = *v11;
              v12[1] = v11[1];
              v12[2] = v11[2];
              v12[3] = v11[3];
              v12[4] = v11[4];
              v12[5] = v11[5];
              v12[6] = v11[6];
              v12[7] = v11[7];
            }
            v13 = v7 - 1;
          }
          else
          {
            v13 = v7 - 1;
            v17 = v3;
            v18 = *(char **)this;
            do
            {
              v19 = *v18;
              v18 += 8;
              v17 += 8LL;
              *(_BYTE *)(v17 - 8) = v19;
              *(_BYTE *)(v17 - 7) = *(v18 - 7);
              *(_BYTE *)(v17 - 6) = *(v18 - 6);
              *(_BYTE *)(v17 - 5) = *(v18 - 5);
              *(_BYTE *)(v17 - 4) = *(v18 - 4);
              *(_BYTE *)(v17 - 3) = *(v18 - 3);
              *(_BYTE *)(v17 - 2) = *(v18 - 2);
              *(_BYTE *)(v17 - 1) = *(v18 - 1);
            }
            while ( &v6[8 * v13 + 8] != v18 );
          }
          v14 = 8LL * v13 + 8;
          v6 += v14;
          v15 = (_BYTE *)(v3 + v14);
        }
        switch ( v5 % 8 )
        {
          case 1:
            goto LABEL_21;
          case 2:
            goto LABEL_20;
          case 3:
            goto LABEL_19;
          case 4:
            goto LABEL_18;
          case 5:
            goto LABEL_17;
          case 6:
            goto LABEL_16;
          case 7:
            v15[6] = v6[6];
LABEL_16:
            v15[5] = v6[5];
LABEL_17:
            v15[4] = v6[4];
LABEL_18:
            v15[3] = v6[3];
LABEL_19:
            v15[2] = v6[2];
LABEL_20:
            v15[1] = v6[1];
LABEL_21:
            *v15 = *v6;
            break;
          default:
            break;
        }
      }
      v16 = (void *)(v3 - *((int *)this + 3));
      if ( v16 )
        operator delete[](v16);
    }
    *((_DWORD *)this + 2) = a2;
  }
}

