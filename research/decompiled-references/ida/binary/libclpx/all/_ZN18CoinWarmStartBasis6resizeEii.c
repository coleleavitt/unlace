void __fastcall CoinWarmStartBasis::resize(CoinWarmStartBasis *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // eax
  int v7; // r10d
  int v8; // r15d
  bool v9; // cc
  int v11; // ecx
  int v12; // r14d
  int v13; // edx
  int v14; // edi
  char *v15; // rbp
  char *v16; // rdi
  int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rsi
  unsigned int v20; // r10d
  __int64 v21; // rsi
  char *v22; // r10
  char *v23; // rsi
  unsigned int v24; // edx
  __int64 v25; // rdx
  char *v26; // rsi
  char *v27; // rdx
  int v28; // edi
  char v29; // cl
  _BYTE *v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // r10
  char *v33; // rsi
  unsigned int v34; // r8d
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  char *v38; // rdx
  char *v39; // rax
  unsigned int v40; // r8d
  __int64 v41; // rax
  char *v42; // rax
  int v43; // edx
  int v44; // esi
  int v45; // eax
  int v46; // r15d
  int v47; // edi
  int v48; // r8d
  char v49; // cl
  _BYTE *v50; // rdx
  int v51; // eax
  __int64 v52; // rbp
  __int64 v53; // rcx
  char *v54; // r10
  char *v55; // rsi
  char v56; // al
  char *v57; // rdx
  char *v58; // rax
  char v59; // cl
  int v60; // [rsp+8h] [rbp-50h]
  int v61; // [rsp+8h] [rbp-50h]
  int v62; // [rsp+10h] [rbp-48h]
  int v63; // [rsp+14h] [rbp-44h]
  int v64; // [rsp+18h] [rbp-40h]

  v3 = *((_DWORD *)this + 3);
  v4 = *((_DWORD *)this + 2);
  if ( __PAIR64__(v3, v4) != __PAIR64__(a2, a3) )
  {
    v7 = (a3 + 15) >> 4;
    v8 = (a2 + 15) >> 4;
    v9 = a3 <= v4;
    v11 = 4 * v7;
    v12 = 4 * ((v3 + 15) >> 4);
    v13 = v7 + v8;
    v14 = *((_DWORD *)this + 4);
    if ( !v9 )
    {
      if ( v13 <= v14 )
      {
LABEL_4:
        v64 = 4 * v7;
        v63 = v7;
        v62 = (v3 + 15) >> 4;
        v60 = (v4 + 15) >> 4;
        v15 = (char *)operator new[](4 * v14);
        memset(v15, 0, 4 * *((_DWORD *)this + 4));
        v16 = *((char **)this + 3);
        v17 = 4 * v60;
        if ( v60 > v63 )
          v17 = v64;
        if ( v17 && v16 != v15 )
        {
          v18 = v17 >> 3;
          if ( v17 >> 3 <= 0 )
          {
            v27 = v15;
            v26 = *((char **)this + 3);
          }
          else
          {
            if ( (v15 >= v16 + 16 || v16 >= v15 + 16) && v18 > 1 )
            {
              v19 = 0;
              v20 = 0;
              do
              {
                ++v20;
                *(__m128i *)&v15[v19] = _mm_loadu_si128((const __m128i *)&v16[v19]);
                v19 += 16;
              }
              while ( v20 < v18 >> 1 );
              v21 = 8LL * (v18 & 0xFFFFFFFE);
              v22 = &v16[v21];
              v23 = &v15[v21];
              if ( v18 != (v18 & 0xFFFFFFFE) )
              {
                *v23 = *v22;
                v23[1] = v22[1];
                v23[2] = v22[2];
                v23[3] = v22[3];
                v23[4] = v22[4];
                v23[5] = v22[5];
                v23[6] = v22[6];
                v23[7] = v22[7];
              }
              v24 = v18 - 1;
            }
            else
            {
              v24 = v18 - 1;
              v54 = *((char **)this + 3);
              v61 = v17;
              v55 = v15;
              do
              {
                v56 = *v54;
                v55 += 8;
                v54 += 8;
                *(v55 - 8) = v56;
                *(v55 - 7) = *(v54 - 7);
                *(v55 - 6) = *(v54 - 6);
                *(v55 - 5) = *(v54 - 5);
                *(v55 - 4) = *(v54 - 4);
                *(v55 - 3) = *(v54 - 3);
                *(v55 - 2) = *(v54 - 2);
                *(v55 - 1) = *(v54 - 1);
              }
              while ( v55 != &v15[8 * v24 + 8] );
              v17 = v61;
            }
            v25 = 8LL * (int)v24 + 8;
            v26 = &v16[v25];
            v27 = &v15[v25];
          }
          switch ( v17 % 8 )
          {
            case 1:
              goto LABEL_30;
            case 2:
              goto LABEL_29;
            case 3:
              goto LABEL_28;
            case 4:
              goto LABEL_27;
            case 5:
              goto LABEL_26;
            case 6:
              goto LABEL_25;
            case 7:
              v27[6] = v26[6];
LABEL_25:
              v27[5] = v26[5];
LABEL_26:
              v27[4] = v26[4];
LABEL_27:
              v27[3] = v26[3];
LABEL_28:
              v27[2] = v26[2];
LABEL_29:
              v27[1] = v26[1];
LABEL_30:
              *v27 = *v26;
              break;
            default:
              break;
          }
        }
        v32 = (unsigned __int64)&v15[v64];
        v33 = *((char **)this + 4);
        if ( v62 > v8 )
          v12 = 4 * v8;
        if ( v12 && (char *)v32 != v33 )
        {
          v34 = v12 >> 3;
          if ( v12 >> 3 <= 0 )
          {
            v42 = &v15[v64];
          }
          else
          {
            if ( (v32 >= (unsigned __int64)(v33 + 16) || v33 >= &v15[v64 + 16]) && v34 > 1 )
            {
              v35 = 0;
              v36 = 0;
              do
              {
                ++v36;
                *(__m128i *)(v32 + v35) = _mm_loadu_si128((const __m128i *)&v33[v35]);
                v35 += 16;
              }
              while ( v34 >> 1 > v36 );
              v37 = 8LL * (v34 & 0xFFFFFFFE);
              v38 = &v33[v37];
              v39 = (char *)(v32 + v37);
              if ( (v34 & 0xFFFFFFFE) != v34 )
              {
                *v39 = *v38;
                v39[1] = v38[1];
                v39[2] = v38[2];
                v39[3] = v38[3];
                v39[4] = v38[4];
                v39[5] = v38[5];
                v39[6] = v38[6];
                v39[7] = v38[7];
              }
              v40 = v34 - 1;
            }
            else
            {
              v40 = v34 - 1;
              v57 = *((char **)this + 4);
              v58 = &v15[v64];
              do
              {
                v59 = *v57;
                v58 += 8;
                v57 += 8;
                *(v58 - 8) = v59;
                *(v58 - 7) = *(v57 - 7);
                *(v58 - 6) = *(v57 - 6);
                *(v58 - 5) = *(v57 - 5);
                *(v58 - 4) = *(v57 - 4);
                *(v58 - 3) = *(v57 - 3);
                *(v58 - 2) = *(v57 - 2);
                *(v58 - 1) = *(v57 - 1);
              }
              while ( (char *)(v32 + 8LL * v40 + 8) != v58 );
            }
            v41 = 8LL * (int)v40 + 8;
            v33 += v41;
            v42 = (char *)(v32 + v41);
          }
          switch ( v12 % 8 )
          {
            case 1:
              goto LABEL_51;
            case 2:
              goto LABEL_50;
            case 3:
              goto LABEL_49;
            case 4:
              goto LABEL_48;
            case 5:
              goto LABEL_47;
            case 6:
              goto LABEL_46;
            case 7:
              v42[6] = v33[6];
LABEL_46:
              v42[5] = v33[5];
LABEL_47:
              v42[4] = v33[4];
LABEL_48:
              v42[3] = v33[3];
LABEL_49:
              v42[2] = v33[2];
LABEL_50:
              v42[1] = v33[1];
LABEL_51:
              *v42 = *v33;
              break;
            default:
              break;
          }
        }
        if ( v16 )
        {
          operator delete[](v16);
          v32 = (unsigned __int64)&v15[v64];
        }
        v43 = *((_DWORD *)this + 2);
        *((_QWORD *)this + 3) = v15;
        *((_QWORD *)this + 4) = v32;
        if ( a3 > v43 )
        {
          v44 = 2 * v43;
          while ( 1 )
          {
            v45 = v43++ >> 2;
            v46 = 3 << (v44 & 6);
            v44 += 2;
            v15[v45] |= v46;
            if ( a3 == v43 )
              break;
            v15 = *((char **)this + 3);
          }
        }
        v47 = *((_DWORD *)this + 3);
        if ( a2 > v47 )
        {
          v48 = 2 * v47;
          do
          {
            v49 = v48 & 6;
            v50 = (_BYTE *)(*((_QWORD *)this + 4) + (v47 >> 2));
            v51 = ~(3 << (v48 & 6));
            ++v47;
            v48 += 2;
            *v50 = (1 << v49) | *v50 & v51;
          }
          while ( a2 != v47 );
        }
        goto LABEL_23;
      }
LABEL_63:
      v14 = v13 + 10;
      *((_DWORD *)this + 4) = v13 + 10;
      goto LABEL_4;
    }
    if ( v13 > v14 )
      goto LABEL_63;
    if ( a3 == v4 )
    {
      if ( a2 <= v3 )
      {
LABEL_23:
        *((_DWORD *)this + 2) = a3;
        *((_DWORD *)this + 3) = a2;
        return;
      }
    }
    else
    {
      v52 = v11;
      if ( v12 > 4 * v8 )
        v12 = 4 * v8;
      memmove((void *)(v11 + *((_QWORD *)this + 3)), *((const void **)this + 4), v12);
      v53 = v52 + *((_QWORD *)this + 3);
      v3 = *((_DWORD *)this + 3);
      *((_QWORD *)this + 4) = v53;
      if ( a2 <= v3 )
        goto LABEL_23;
    }
    v28 = 2 * v3;
    do
    {
      v29 = v28 & 6;
      v30 = (_BYTE *)(*((_QWORD *)this + 4) + (v3 >> 2));
      v31 = ~(3 << (v28 & 6));
      ++v3;
      v28 += 2;
      *v30 = (1 << v29) | *v30 & v31;
    }
    while ( a2 != v3 );
    goto LABEL_23;
  }
}

