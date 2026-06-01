__int64 __fastcall CoinModel::associateElement(CoinModel *this, const char *a2, double a3)
{
  int v4; // ebx
  int v5; // ebp
  __int64 v6; // r13
  int v7; // eax
  char *v8; // rdi
  char *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // xmm0_8
  __int64 v12; // rdx
  char *v13; // r8
  _QWORD *v14; // rdx
  int v15; // ecx
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rsi
  int v20; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rax

  v4 = CoinModelHash::hash((CoinModel *)((char *)this + 248), a2);
  if ( v4 < 0 )
    v4 = CoinModel::addString(this, a2);
  if ( *((_DWORD *)this + 154) > v4 )
  {
    v6 = *((_QWORD *)this + 78);
  }
  else
  {
    v5 = 3 * v4 / 2 + 100;
    if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v6 = operator new[](8LL * v5);
    v7 = *((_DWORD *)this + 154);
    v8 = *((char **)this + 78);
    if ( v7 && v8 != (char *)v6 )
    {
      if ( v7 >> 3 <= 0 )
      {
        v14 = (_QWORD *)v6;
        v13 = *((char **)this + 78);
      }
      else
      {
        v9 = *((char **)this + 78);
        v10 = v6;
        do
        {
          v11 = *(_QWORD *)v9;
          v9 += 64;
          v10 += 64;
          *(_QWORD *)(v10 - 64) = v11;
          *(_QWORD *)(v10 - 56) = *((_QWORD *)v9 - 7);
          *(_QWORD *)(v10 - 48) = *((_QWORD *)v9 - 6);
          *(_QWORD *)(v10 - 40) = *((_QWORD *)v9 - 5);
          *(_QWORD *)(v10 - 32) = *((_QWORD *)v9 - 4);
          *(_QWORD *)(v10 - 24) = *((_QWORD *)v9 - 3);
          *(_QWORD *)(v10 - 16) = *((_QWORD *)v9 - 2);
          *(_QWORD *)(v10 - 8) = *((_QWORD *)v9 - 1);
        }
        while ( v9 != &v8[64 * ((v7 >> 3) - 1) + 64] );
        v12 = ((v7 >> 3) - 1 + 1LL) << 6;
        v13 = &v8[v12];
        v14 = (_QWORD *)(v6 + v12);
      }
      switch ( v7 % 8 )
      {
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
          v14[6] = *((_QWORD *)v13 + 6);
LABEL_13:
          v14[5] = *((_QWORD *)v13 + 5);
LABEL_14:
          v14[4] = *((_QWORD *)v13 + 4);
LABEL_15:
          v14[3] = *((_QWORD *)v13 + 3);
LABEL_16:
          v14[2] = *((_QWORD *)v13 + 2);
LABEL_17:
          v14[1] = *((_QWORD *)v13 + 1);
LABEL_18:
          *v14 = *(_QWORD *)v13;
          break;
        default:
          break;
      }
    }
    v15 = v5 - v7;
    if ( v5 != v7 )
    {
      v17 = v7;
      v18 = v15 + 7;
      v19 = (_QWORD *)(v6 + 8 * v17);
      if ( v15 >= 0 )
        v18 = v15;
      v20 = v18 >> 3;
      if ( v20 > 0 )
      {
        v21 = (_QWORD *)(v6 + 8 * v17);
        v22 = (unsigned int)(v20 - 1);
        do
        {
          *v21 = 0xABD0E07EC39EA8F1LL;
          v21 += 8;
          *(v21 - 7) = 0xABD0E07EC39EA8F1LL;
          *(v21 - 6) = 0xABD0E07EC39EA8F1LL;
          *(v21 - 5) = 0xABD0E07EC39EA8F1LL;
          *(v21 - 4) = 0xABD0E07EC39EA8F1LL;
          *(v21 - 3) = 0xABD0E07EC39EA8F1LL;
          *(v21 - 2) = 0xABD0E07EC39EA8F1LL;
          *(v21 - 1) = 0xABD0E07EC39EA8F1LL;
        }
        while ( v21 != &v19[8 * v22 + 8] );
        v19 += 8 * (int)v22 + 8;
      }
      switch ( v15 % 8 )
      {
        case 1:
          goto LABEL_37;
        case 2:
          goto LABEL_36;
        case 3:
          goto LABEL_35;
        case 4:
          goto LABEL_34;
        case 5:
          goto LABEL_33;
        case 6:
          goto LABEL_32;
        case 7:
          v19[6] = 0xABD0E07EC39EA8F1LL;
LABEL_32:
          v19[5] = 0xABD0E07EC39EA8F1LL;
LABEL_33:
          v19[4] = 0xABD0E07EC39EA8F1LL;
LABEL_34:
          v19[3] = 0xABD0E07EC39EA8F1LL;
LABEL_35:
          v19[2] = 0xABD0E07EC39EA8F1LL;
LABEL_36:
          v19[1] = 0xABD0E07EC39EA8F1LL;
LABEL_37:
          *v19 = 0xABD0E07EC39EA8F1LL;
          if ( !v8 )
            goto LABEL_22;
          goto LABEL_21;
        default:
          break;
      }
    }
    if ( v8 )
LABEL_21:
      operator delete[](v8);
LABEL_22:
    *((_QWORD *)this + 78) = v6;
    *((_DWORD *)this + 154) = v5;
  }
  *(double *)(v6 + 8LL * v4) = a3;
  return (unsigned int)v4;
}

