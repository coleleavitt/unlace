void __fastcall CoinWarmStartBasis::CoinWarmStartBasis(
        CoinWarmStartBasis *this,
        const CoinWarmStartBasis *a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v4; // ecx
  int v5; // ebx
  int v6; // r12d
  int v7; // eax
  int v9; // ebx
  unsigned __int64 v11; // rax
  _BYTE *v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  _BYTE *v17; // rsi
  _BYTE *v18; // rcx
  signed int v19; // edi
  __int64 v20; // rcx
  _BYTE *v21; // rcx
  int v22; // r12d
  _BYTE *v23; // rsi
  _BYTE *v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  _BYTE *v29; // rdx
  _BYTE *v30; // rax
  signed int v31; // ecx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  char *v34; // rax
  char v35; // r8
  unsigned __int64 v36; // rcx
  char *v37; // rdx
  char v38; // si

  v3 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v3 - 56)) = *((_QWORD *)a2 + 1);
  LODWORD(v3) = *(_DWORD *)(a3 + 8);
  v4 = *(_DWORD *)(a3 + 12);
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = v3;
  *((_DWORD *)this + 3) = v4;
  v5 = ((int)v3 + 15) >> 4;
  v6 = (v4 + 15) >> 4;
  v7 = v5 + v6;
  *((_DWORD *)this + 4) = v5 + v6;
  if ( v5 + v6 > 0 )
  {
    v9 = 4 * v5;
    v11 = operator new[](4 * v7);
    *((_QWORD *)this + 3) = v11;
    v12 = *(_BYTE **)(a3 + 24);
    if ( v9 && v12 != (_BYTE *)v11 )
    {
      v13 = v9 >> 3;
      if ( v9 >> 3 <= 0 )
      {
        v21 = (_BYTE *)v11;
      }
      else
      {
        if ( ((unsigned __int64)v12 >= v11 + 16 || v11 >= (unsigned __int64)(v12 + 16)) && v13 > 1 )
        {
          v14 = 0;
          v15 = 0;
          do
          {
            ++v15;
            *(__m128i *)(v11 + v14) = _mm_loadu_si128((const __m128i *)&v12[v14]);
            v14 += 16;
          }
          while ( v15 < v13 >> 1 );
          v16 = 8LL * (v13 & 0xFFFFFFFE);
          v17 = &v12[v16];
          v18 = (_BYTE *)(v11 + v16);
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
          v36 = v11;
          v37 = *(char **)(a3 + 24);
          do
          {
            v38 = *v37;
            v37 += 8;
            v36 += 8LL;
            *(_BYTE *)(v36 - 8) = v38;
            *(_BYTE *)(v36 - 7) = *(v37 - 7);
            *(_BYTE *)(v36 - 6) = *(v37 - 6);
            *(_BYTE *)(v36 - 5) = *(v37 - 5);
            *(_BYTE *)(v36 - 4) = *(v37 - 4);
            *(_BYTE *)(v36 - 3) = *(v37 - 3);
            *(_BYTE *)(v36 - 2) = *(v37 - 2);
            *(_BYTE *)(v36 - 1) = *(v37 - 1);
          }
          while ( &v12[8 * v19 + 8] != v37 );
        }
        v20 = 8LL * v19 + 8;
        v12 += v20;
        v21 = (_BYTE *)(v11 + v20);
      }
      switch ( v9 % 8 )
      {
        case 1:
          goto LABEL_20;
        case 2:
          goto LABEL_19;
        case 3:
          goto LABEL_18;
        case 4:
          goto LABEL_17;
        case 5:
          goto LABEL_16;
        case 6:
          goto LABEL_15;
        case 7:
          v21[6] = v12[6];
LABEL_15:
          v21[5] = v12[5];
LABEL_16:
          v21[4] = v12[4];
LABEL_17:
          v21[3] = v12[3];
LABEL_18:
          v21[2] = v12[2];
LABEL_19:
          v21[1] = v12[1];
LABEL_20:
          *v21 = *v12;
          break;
        default:
          break;
      }
    }
    v22 = 4 * v6;
    v23 = (_BYTE *)(v11 + v9);
    *((_QWORD *)this + 4) = v23;
    v24 = *(_BYTE **)(a3 + 32);
    if ( v22 && v23 != v24 )
    {
      v25 = v22 >> 3;
      if ( v22 >> 3 > 0 )
      {
        if ( (v23 >= v24 + 16 || (unsigned __int64)v24 >= v11 + v9 + 16) && v25 > 1 )
        {
          v26 = 0;
          v27 = 0;
          do
          {
            ++v27;
            *(__m128i *)&v23[v26] = _mm_loadu_si128((const __m128i *)&v24[v26]);
            v26 += 16;
          }
          while ( v25 >> 1 > v27 );
          v28 = 8LL * (v25 & 0xFFFFFFFE);
          v29 = &v24[v28];
          v30 = &v23[v28];
          if ( v25 != (v25 & 0xFFFFFFFE) )
          {
            *v30 = *v29;
            v30[1] = v29[1];
            v30[2] = v29[2];
            v30[3] = v29[3];
            v30[4] = v29[4];
            v30[5] = v29[5];
            v30[6] = v29[6];
            v30[7] = v29[7];
          }
          v31 = v25 - 1;
        }
        else
        {
          v31 = v25 - 1;
          v33 = v11 + v9;
          v34 = *(char **)(a3 + 32);
          do
          {
            v35 = *v34;
            v34 += 8;
            v33 += 8LL;
            *(_BYTE *)(v33 - 8) = v35;
            *(_BYTE *)(v33 - 7) = *(v34 - 7);
            *(_BYTE *)(v33 - 6) = *(v34 - 6);
            *(_BYTE *)(v33 - 5) = *(v34 - 5);
            *(_BYTE *)(v33 - 4) = *(v34 - 4);
            *(_BYTE *)(v33 - 3) = *(v34 - 3);
            *(_BYTE *)(v33 - 2) = *(v34 - 2);
            *(_BYTE *)(v33 - 1) = *(v34 - 1);
          }
          while ( v34 != &v24[8 * v31 + 8] );
        }
        v32 = 8LL * v31 + 8;
        v24 += v32;
        v23 += v32;
      }
      switch ( v22 % 8 )
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
          v23[6] = v24[6];
LABEL_34:
          v23[5] = v24[5];
LABEL_35:
          v23[4] = v24[4];
LABEL_36:
          v23[3] = v24[3];
LABEL_37:
          v23[2] = v24[2];
LABEL_38:
          v23[1] = v24[1];
LABEL_39:
          *v23 = *v24;
          break;
        default:
          return;
      }
    }
  }
}

