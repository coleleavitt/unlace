void __fastcall CoinPackedMatrix::modifyCoefficient(CoinPackedMatrix *this, int a2, int a3, double a4, char a5)
{
  int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r10d
  int v10; // r14d
  _DWORD *v11; // r15
  int v12; // r13d
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // esi
  int v18; // r10d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // r13
  unsigned int v30; // r9d
  unsigned int v31; // edx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int64 v40; // rax
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // r8d
  int v45; // eax
  int v46; // eax
  int v47; // esi
  __int64 v48; // rdi
  __int64 v49; // r8
  int v50; // ecx
  int *v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // xmm1_8
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // xmm0_8
  int v57; // eax
  void *v58; // r13
  __int64 v59; // [rsp+0h] [rbp-48h]

  v6 = a3;
  if ( *((_BYTE *)this + 8) )
  {
    v6 = a2;
    a2 = a3;
  }
  if ( a2 >= 0 )
  {
    v7 = *((int *)this + 16);
    if ( v6 >= 0 && (int)v7 > a2 && *((_DWORD *)this + 17) > v6 )
    {
      v8 = a2;
      v59 = 4LL * a2;
      v9 = *(_DWORD *)(*((_QWORD *)this + 6) + v59);
      v10 = *(_DWORD *)(*((_QWORD *)this + 7) + v59);
      v11 = (_DWORD *)(*((_QWORD *)this + 7) + v59);
      v12 = v9 + v10;
      if ( v9 >= v9 + v10 )
      {
        v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 4LL * a2);
LABEL_13:
        if ( v12 == v17 && (a4 != 0.0 || a5) )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 6) + v59 + 4) <= v12 )
          {
            v58 = (void *)operator new[](4 * v7);
            memset(v58, 0, 4LL * *((int *)this + 16));
            *((_DWORD *)v58 + v8) = 1;
            CoinPackedMatrix::resizeForAddingMinorVectors(this, (const int *)v58);
            operator delete[](v58);
            v11 = (_DWORD *)(*((_QWORD *)this + 7) + v59);
            v9 = *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v8);
            v17 = v9 + *v11;
          }
          v47 = v17 - 1;
          v48 = *((_QWORD *)this + 5);
          v49 = *((_QWORD *)this + 4);
          if ( v47 >= v9 )
          {
            v50 = *(_DWORD *)(v48 + 4LL * v47);
            if ( v6 <= v50 )
            {
              v51 = (int *)(v48 + 4LL * v47 - 4);
              v52 = (_QWORD *)(v49 + 8LL * v47 + 8);
              do
              {
                v53 = *(v52 - 1);
                --v47;
                v51[2] = v50;
                *v52 = v53;
                if ( v47 < v9 )
                  break;
                v50 = *v51;
                --v52;
                --v51;
              }
              while ( v50 >= v6 );
            }
          }
          v54 = v47 + 1;
          *(_DWORD *)(v48 + 4 * v54) = v6;
          *(double *)(v49 + 8 * v54) = a4;
          ++*((_DWORD *)this + 18);
          ++*v11;
        }
        return;
      }
      v13 = *((_QWORD *)this + 5);
      v14 = v9;
      if ( v6 != *(_DWORD *)(v13 + 4LL * v9) )
      {
        v14 = v9 + 1;
        v15 = v14 + (unsigned int)(v10 - 1);
        v16 = v13 + 4LL * v9 - 4 * v14;
        while ( 1 )
        {
          v17 = v14;
          if ( v14 == v15 )
            goto LABEL_13;
          if ( *(_DWORD *)(v16 + 4 * (v14 + 1)) == v6 )
            goto LABEL_16;
          ++v14;
        }
      }
      v17 = *(_DWORD *)(*((_QWORD *)this + 6) + 4LL * a2);
LABEL_16:
      if ( a4 != 0.0 || a5 )
      {
        *(double *)(*((_QWORD *)this + 4) + 8 * v14) = a4;
        return;
      }
      v18 = v12 - 1;
      *v11 = v10 - 1;
      --*((_DWORD *)this + 18);
      if ( v12 - 1 > v17 )
      {
        v19 = *((_QWORD *)this + 4);
        v20 = v17;
        v21 = 8LL * v17;
        v22 = 4LL * v17;
        v23 = v19 + v21;
        v24 = v13 + v22;
        v25 = (unsigned int)(v12 - v17 - 1);
        if ( v13 + v22 < (unsigned __int64)(v19 + 8 * (v17 + v25))
          && v19 + v21 < (unsigned __int64)(v13 + 4 * (v17 + v25))
          || (unsigned int)v25 <= 0xB )
        {
          v55 = v19 + 8 * ((unsigned int)(v12 - 2 - v17) + (__int64)v17) + 8;
          do
          {
            v56 = *(_QWORD *)(v23 + 8);
            v57 = *(_DWORD *)(v24 + 4);
            v23 += 8;
            v24 += 4;
            *(_QWORD *)(v23 - 8) = v56;
            *(_DWORD *)(v24 - 4) = v57;
          }
          while ( v23 != v55 );
          return;
        }
        v26 = v17 + 1LL;
        v27 = ((unsigned __int64)(v19 + v21 + 8) >> 3) & 1;
        if ( 4 - (unsigned int)((_DWORD)v27 == 0) > v12 - 2 - v17 )
          goto LABEL_28;
        if ( (_DWORD)v27 )
        {
          v28 = *(_DWORD *)(v13 + 4 * v26);
          ++v17;
          *(_QWORD *)(v19 + 8 * v26 - 8) = *(_QWORD *)(v19 + 8 * v26);
          *(_DWORD *)(v13 + 4 * v26 - 4) = v28;
        }
        v29 = ((unsigned __int64)(v19 + v21 + 8) >> 3) & 1;
        v30 = v25 - v27;
        v31 = 0;
        v32 = v29 + v26;
        v33 = v21 + 8 * v29;
        v34 = v19 + 8 * v32;
        v35 = v13 + 4 * v32;
        v36 = v19 + v33;
        v37 = v13 + v22 + 4 * v29;
        v38 = 0;
        do
        {
          ++v31;
          v39 = *(_OWORD *)(v34 + 2 * v38);
          *(_OWORD *)(v36 + 2 * v38 + 16) = *(_OWORD *)(v34 + 2 * v38 + 16);
          *(_OWORD *)(v36 + 2 * v38) = v39;
          *(__m128i *)(v37 + v38) = _mm_loadu_si128((const __m128i *)(v35 + v38));
          v38 += 16;
        }
        while ( v30 >> 2 > v31 );
        v17 += v30 & 0xFFFFFFFC;
        if ( v30 != (v30 & 0xFFFFFFFC) )
        {
          v20 = v17;
LABEL_28:
          v40 = v20 + 1;
          v41 = *(_DWORD *)(v13 + 4 * v40);
          v42 = 8 * v40;
          v43 = 4 * v40;
          *(_QWORD *)(v19 + 8 * v40 - 8) = *(_QWORD *)(v19 + 8 * v40);
          *(_DWORD *)(v13 + 4 * v40 - 4) = v41;
          if ( v18 > v17 + 1 )
          {
            v44 = *(_DWORD *)(v13 + v43 + 4);
            *(_QWORD *)(v19 + 8 * v40) = *(_QWORD *)(v19 + 8 * v40 + 8);
            *(_DWORD *)(v13 + 4 * v40) = v44;
            if ( v18 > v17 + 2 )
            {
              v45 = *(_DWORD *)(v13 + v43 + 8);
              *(_QWORD *)(v19 + v42 + 8) = *(_QWORD *)(v19 + v42 + 16);
              *(_DWORD *)(v13 + v43 + 4) = v45;
              if ( v18 > v17 + 3 )
              {
                v46 = *(_DWORD *)(v13 + v43 + 12);
                *(_QWORD *)(v19 + v42 + 16) = *(_QWORD *)(v19 + v42 + 24);
                *(_DWORD *)(v13 + v43 + 8) = v46;
              }
            }
          }
        }
      }
    }
  }
}

