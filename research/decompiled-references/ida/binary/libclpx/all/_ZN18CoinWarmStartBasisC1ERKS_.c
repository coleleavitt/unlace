void __fastcall CoinWarmStartBasis::CoinWarmStartBasis(CoinWarmStartBasis *this, const CoinWarmStartBasis *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // r12d
  int v5; // ebx
  int v6; // eax
  int v8; // ebx
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rdx
  signed int v18; // esi
  __int64 v19; // rcx
  _BYTE *v20; // rcx
  int v21; // r12d
  _BYTE *v22; // rcx
  _BYTE *v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  _BYTE *v28; // rdx
  _BYTE *v29; // rax
  signed int v30; // esi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char *v33; // rax
  char v34; // r8
  unsigned __int64 v35; // rcx
  char *v36; // rdx
  char v37; // r8

  v2 = *((_DWORD *)a2 + 3);
  *(_QWORD *)this = off_4D2418;
  v3 = *((_DWORD *)a2 + 2);
  v4 = (v2 + 15) >> 4;
  *((_DWORD *)this + 3) = v2;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = v3;
  v5 = (v3 + 15) >> 4;
  v6 = v5 + v4;
  *((_DWORD *)this + 4) = v5 + v4;
  if ( v5 + v4 > 0 )
  {
    v8 = 4 * v5;
    v10 = operator new[](4 * v6);
    *((_QWORD *)this + 3) = v10;
    v11 = *((_BYTE **)a2 + 3);
    if ( v8 && v11 != (_BYTE *)v10 )
    {
      v12 = v8 >> 3;
      if ( v8 >> 3 <= 0 )
      {
        v20 = (_BYTE *)v10;
      }
      else
      {
        if ( ((unsigned __int64)v11 >= v10 + 16 || v10 >= (unsigned __int64)(v11 + 16)) && v12 > 1 )
        {
          v13 = 0;
          v14 = 0;
          do
          {
            ++v14;
            *(__m128i *)(v10 + v13) = _mm_loadu_si128((const __m128i *)&v11[v13]);
            v13 += 16;
          }
          while ( v14 < v12 >> 1 );
          v15 = 8LL * (v12 & 0xFFFFFFFE);
          v16 = &v11[v15];
          v17 = (_BYTE *)(v10 + v15);
          if ( v12 != (v12 & 0xFFFFFFFE) )
          {
            *v17 = *v16;
            v17[1] = v16[1];
            v17[2] = v16[2];
            v17[3] = v16[3];
            v17[4] = v16[4];
            v17[5] = v16[5];
            v17[6] = v16[6];
            v17[7] = v16[7];
          }
          v18 = v12 - 1;
        }
        else
        {
          v18 = v12 - 1;
          v35 = v10;
          v36 = *((char **)a2 + 3);
          do
          {
            v37 = *v36;
            v36 += 8;
            v35 += 8LL;
            *(_BYTE *)(v35 - 8) = v37;
            *(_BYTE *)(v35 - 7) = *(v36 - 7);
            *(_BYTE *)(v35 - 6) = *(v36 - 6);
            *(_BYTE *)(v35 - 5) = *(v36 - 5);
            *(_BYTE *)(v35 - 4) = *(v36 - 4);
            *(_BYTE *)(v35 - 3) = *(v36 - 3);
            *(_BYTE *)(v35 - 2) = *(v36 - 2);
            *(_BYTE *)(v35 - 1) = *(v36 - 1);
          }
          while ( &v11[8 * v18 + 8] != v36 );
        }
        v19 = 8LL * v18 + 8;
        v11 += v19;
        v20 = (_BYTE *)(v10 + v19);
      }
      switch ( v8 % 8 )
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
          v20[6] = v11[6];
LABEL_15:
          v20[5] = v11[5];
LABEL_16:
          v20[4] = v11[4];
LABEL_17:
          v20[3] = v11[3];
LABEL_18:
          v20[2] = v11[2];
LABEL_19:
          v20[1] = v11[1];
LABEL_20:
          *v20 = *v11;
          break;
        default:
          break;
      }
    }
    v21 = 4 * v4;
    v22 = (_BYTE *)(v10 + v8);
    *((_QWORD *)this + 4) = v22;
    v23 = *((_BYTE **)a2 + 4);
    if ( v21 && v22 != v23 )
    {
      v24 = v21 >> 3;
      if ( v21 >> 3 > 0 )
      {
        if ( (v22 >= v23 + 16 || (unsigned __int64)v23 >= v10 + v8 + 16) && v24 > 1 )
        {
          v25 = 0;
          v26 = 0;
          do
          {
            ++v26;
            *(__m128i *)&v22[v25] = _mm_loadu_si128((const __m128i *)&v23[v25]);
            v25 += 16;
          }
          while ( v24 >> 1 > v26 );
          v27 = 8LL * (v24 & 0xFFFFFFFE);
          v28 = &v23[v27];
          v29 = &v22[v27];
          if ( v24 != (v24 & 0xFFFFFFFE) )
          {
            *v29 = *v28;
            v29[1] = v28[1];
            v29[2] = v28[2];
            v29[3] = v28[3];
            v29[4] = v28[4];
            v29[5] = v28[5];
            v29[6] = v28[6];
            v29[7] = v28[7];
          }
          v30 = v24 - 1;
        }
        else
        {
          v30 = v24 - 1;
          v32 = v10 + v8;
          v33 = *((char **)a2 + 4);
          do
          {
            v34 = *v33;
            v33 += 8;
            v32 += 8LL;
            *(_BYTE *)(v32 - 8) = v34;
            *(_BYTE *)(v32 - 7) = *(v33 - 7);
            *(_BYTE *)(v32 - 6) = *(v33 - 6);
            *(_BYTE *)(v32 - 5) = *(v33 - 5);
            *(_BYTE *)(v32 - 4) = *(v33 - 4);
            *(_BYTE *)(v32 - 3) = *(v33 - 3);
            *(_BYTE *)(v32 - 2) = *(v33 - 2);
            *(_BYTE *)(v32 - 1) = *(v33 - 1);
          }
          while ( v33 != &v23[8 * v30 + 8] );
        }
        v31 = 8LL * v30 + 8;
        v23 += v31;
        v22 += v31;
      }
      switch ( v21 % 8 )
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
          v22[6] = v23[6];
LABEL_34:
          v22[5] = v23[5];
LABEL_35:
          v22[4] = v23[4];
LABEL_36:
          v22[3] = v23[3];
LABEL_37:
          v22[2] = v23[2];
LABEL_38:
          v22[1] = v23[1];
LABEL_39:
          *v22 = *v23;
          break;
        default:
          return;
      }
    }
  }
}

