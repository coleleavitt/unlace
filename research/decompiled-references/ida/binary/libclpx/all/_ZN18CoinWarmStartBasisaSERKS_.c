__int64 __fastcall CoinWarmStartBasis::operator=(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // edx
  int v6; // ebx
  int v7; // ebp
  int v8; // r14d
  void *v9; // rdi
  __int64 result; // rax
  int v11; // ebx
  _BYTE *v12; // rsi
  _BYTE *v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  _BYTE *v19; // rax
  signed int v20; // ecx
  __int64 v21; // rax
  int v22; // ebp
  _BYTE *v23; // rcx
  _BYTE *v24; // rdx
  unsigned int v25; // edi
  __int64 v26; // rax
  unsigned int v27; // esi
  __int64 v28; // rax
  _BYTE *v29; // r8
  _BYTE *v30; // rax
  signed int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // rax
  char v35; // r8
  char *v36; // rsi
  _BYTE *v37; // rax
  char v38; // r8

  if ( a1 == a2 )
    return a1;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = v4;
  v6 = (v3 + 15) >> 4;
  v7 = (v4 + 15) >> 4;
  v8 = v6 + v7;
  if ( *(_DWORD *)(a1 + 16) < v6 + v7 )
  {
    v9 = *(void **)(a1 + 24);
    if ( v9 )
      operator delete[](v9);
    *(_DWORD *)(a1 + 16) = v8 + 10;
    *(_QWORD *)(a1 + 24) = operator new[](4 * (v8 + 10));
  }
  if ( v8 <= 0 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    return a1;
  }
  v11 = 4 * v6;
  v12 = *(_BYTE **)(a1 + 24);
  v13 = *(_BYTE **)(a2 + 24);
  if ( v11 && v12 != v13 )
  {
    v14 = v11 >> 3;
    if ( v11 >> 3 > 0 )
    {
      if ( (v12 >= v13 + 16 || v13 >= v12 + 16) && v14 > 1 )
      {
        v15 = 0;
        v16 = 0;
        do
        {
          ++v16;
          *(__m128i *)&v12[v15] = _mm_loadu_si128((const __m128i *)&v13[v15]);
          v15 += 16;
        }
        while ( v16 < v14 >> 1 );
        v17 = 8LL * (v14 & 0xFFFFFFFE);
        v18 = &v13[v17];
        v19 = &v12[v17];
        if ( v14 != (v14 & 0xFFFFFFFE) )
        {
          *v19 = *v18;
          v19[1] = v18[1];
          v19[2] = v18[2];
          v19[3] = v18[3];
          v19[4] = v18[4];
          v19[5] = v18[5];
          v19[6] = v18[6];
          v19[7] = v18[7];
        }
        v20 = v14 - 1;
      }
      else
      {
        v20 = v14 - 1;
        v33 = *(_QWORD *)(a1 + 24);
        v34 = *(char **)(a2 + 24);
        do
        {
          v35 = *v34;
          v34 += 8;
          v33 += 8;
          *(_BYTE *)(v33 - 8) = v35;
          *(_BYTE *)(v33 - 7) = *(v34 - 7);
          *(_BYTE *)(v33 - 6) = *(v34 - 6);
          *(_BYTE *)(v33 - 5) = *(v34 - 5);
          *(_BYTE *)(v33 - 4) = *(v34 - 4);
          *(_BYTE *)(v33 - 3) = *(v34 - 3);
          *(_BYTE *)(v33 - 2) = *(v34 - 2);
          *(_BYTE *)(v33 - 1) = *(v34 - 1);
        }
        while ( &v13[8 * v20 + 8] != v34 );
      }
      v21 = 8LL * v20 + 8;
      v13 += v21;
      v12 += v21;
    }
    switch ( v11 % 8 )
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
        v12[6] = v13[6];
LABEL_22:
        v12[5] = v13[5];
LABEL_23:
        v12[4] = v13[4];
LABEL_24:
        v12[3] = v13[3];
LABEL_25:
        v12[2] = v13[2];
LABEL_26:
        v12[1] = v13[1];
LABEL_27:
        *v12 = *v13;
        break;
      default:
        break;
    }
    v12 = *(_BYTE **)(a1 + 24);
  }
  v22 = 4 * v7;
  v23 = &v12[v11];
  *(_QWORD *)(a1 + 32) = v23;
  v24 = *(_BYTE **)(a2 + 32);
  if ( !v22 || v23 == v24 )
    return a1;
  v25 = v22 >> 3;
  if ( v22 >> 3 > 0 )
  {
    if ( (v23 >= v24 + 16 || v24 >= &v12[v11 + 16]) && v25 > 1 )
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
      v36 = *(char **)(a2 + 32);
      v37 = v23;
      do
      {
        v38 = *v36;
        v37 += 8;
        v36 += 8;
        *(v37 - 8) = v38;
        *(v37 - 7) = *(v36 - 7);
        *(v37 - 6) = *(v36 - 6);
        *(v37 - 5) = *(v36 - 5);
        *(v37 - 4) = *(v36 - 4);
        *(v37 - 3) = *(v36 - 3);
        *(v37 - 2) = *(v36 - 2);
        *(v37 - 1) = *(v36 - 1);
      }
      while ( v37 != &v23[8 * v31 + 8] );
    }
    v32 = 8LL * v31 + 8;
    v24 += v32;
    v23 += v32;
  }
  switch ( v22 % 8 )
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
      v23[6] = v24[6];
LABEL_42:
      v23[5] = v24[5];
LABEL_43:
      v23[4] = v24[4];
LABEL_44:
      v23[3] = v24[3];
LABEL_45:
      v23[2] = v24[2];
LABEL_46:
      v23[1] = v24[1];
LABEL_47:
      *v23 = *v24;
      result = a1;
      break;
    default:
      return a1;
  }
  return result;
}

