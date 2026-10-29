void __fastcall CoinWarmStartBasis::deleteColumns(CoinWarmStartBasis *this, int a2, const int *a3)
{
  char *v5; // r12
  int v6; // r14d
  const int *v7; // rdx
  const int *v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  char *v11; // rax
  int v12; // r15d
  __int64 v13; // r13
  _BYTE *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned int v17; // esi
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  _BYTE *v21; // rdx
  _BYTE *v22; // rax
  unsigned int v23; // esi
  __int64 v24; // rax
  _BYTE *v25; // rax
  int v26; // eax
  char *v27; // rdi
  __int64 v28; // rdx
  int v29; // r8d
  char v30; // r11
  _BYTE *v31; // rsi
  char *v32; // rdx
  __int64 v33; // rax
  char v34; // di

  v5 = (char *)operator new[](*((int *)this + 2));
  v6 = *((_DWORD *)this + 2);
  memset(v5, 0, v6);
  if ( a2 <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v7 = a3;
    v8 = &a3[a2 - 1 + 1];
    v9 = 0;
    do
    {
      v10 = *v7;
      if ( (int)v10 >= 0 && v6 > (int)v10 )
      {
        v11 = &v5[v10];
        if ( !*v11 )
        {
          ++v9;
          *v11 = 1;
        }
      }
      ++v7;
    }
    while ( v7 != v8 );
    v6 -= v9;
  }
  v12 = 4 * ((*((_DWORD *)this + 3) + 15) >> 4);
  v13 = operator new[](4 * *((_DWORD *)this + 4));
  v14 = *((_BYTE **)this + 4);
  v15 = 4 * ((v6 + 15) >> 4);
  v16 = v13 + v15;
  if ( v12 && (_BYTE *)v16 != v14 )
  {
    v17 = v12 >> 3;
    if ( v12 >> 3 <= 0 )
    {
      v25 = (_BYTE *)(v13 + v15);
    }
    else
    {
      if ( (v16 >= (unsigned __int64)(v14 + 16) || (unsigned __int64)v14 >= v13 + v15 + 16) && v17 > 1 )
      {
        v18 = 0;
        v19 = 0;
        do
        {
          ++v19;
          *(__m128i *)(v16 + v18) = _mm_loadu_si128((const __m128i *)&v14[v18]);
          v18 += 16;
        }
        while ( v19 < v17 >> 1 );
        v20 = 8LL * (v17 & 0xFFFFFFFE);
        v21 = &v14[v20];
        v22 = (_BYTE *)(v16 + v20);
        if ( v17 != (v17 & 0xFFFFFFFE) )
        {
          *v22 = *v21;
          v22[1] = v21[1];
          v22[2] = v21[2];
          v22[3] = v21[3];
          v22[4] = v21[4];
          v22[5] = v21[5];
          v22[6] = v21[6];
          v22[7] = v21[7];
        }
        v23 = v17 - 1;
      }
      else
      {
        v23 = v17 - 1;
        v32 = *((char **)this + 4);
        v33 = v13 + v15;
        do
        {
          v34 = *v32;
          v33 += 8;
          v32 += 8;
          *(_BYTE *)(v33 - 8) = v34;
          *(_BYTE *)(v33 - 7) = *(v32 - 7);
          *(_BYTE *)(v33 - 6) = *(v32 - 6);
          *(_BYTE *)(v33 - 5) = *(v32 - 5);
          *(_BYTE *)(v33 - 4) = *(v32 - 4);
          *(_BYTE *)(v33 - 3) = *(v32 - 3);
          *(_BYTE *)(v33 - 2) = *(v32 - 2);
          *(_BYTE *)(v33 - 1) = *(v32 - 1);
        }
        while ( v16 + 8LL * v23 + 8 != v33 );
      }
      v24 = 8LL * (int)v23 + 8;
      v14 += v24;
      v25 = (_BYTE *)(v16 + v24);
    }
    switch ( v12 % 8 )
    {
      case 1:
        goto LABEL_27;
      case 2:
        goto LABEL_26;
      case 3:
        goto LABEL_25;
      case 4:
        goto LABEL_24;
      case 5:
        goto LABEL_23;
      case 6:
        goto LABEL_22;
      case 7:
        v25[6] = v14[6];
LABEL_22:
        v25[5] = v14[5];
LABEL_23:
        v25[4] = v14[4];
LABEL_24:
        v25[3] = v14[3];
LABEL_25:
        v25[2] = v14[2];
LABEL_26:
        v25[1] = v14[1];
LABEL_27:
        *v25 = *v14;
        break;
      default:
        break;
    }
  }
  v26 = *((_DWORD *)this + 2);
  v27 = *((char **)this + 3);
  if ( v26 > 0 )
  {
    v28 = 0;
    v29 = 0;
    do
    {
      if ( !v5[v28] )
      {
        v30 = (2 * v29) & 6;
        v31 = (_BYTE *)(v13 + (v29++ >> 2));
        *v31 = (((v27[(int)v28 >> 2] >> ((2 * v28) & 6)) & 3) << v30) | *v31 & ~(3 << v30);
      }
      ++v28;
    }
    while ( v28 != (unsigned int)(v26 - 1) + 1LL );
  }
  if ( v27 )
    operator delete[](v27);
  *((_QWORD *)this + 3) = v13;
  *((_QWORD *)this + 4) = v16;
  operator delete[](v5);
  *((_DWORD *)this + 2) -= v9;
}

