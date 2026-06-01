void __fastcall CoinPackedMatrix::deleteMajorVectors(CoinPackedMatrix *this, int a2, unsigned int *a3)
{
  signed int v4; // ebx
  void *v5; // rdi
  void *v6; // rdi
  _DWORD *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned __int64 v13; // r12
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // r10d
  __int64 v21; // rsi
  unsigned int *v22; // rax
  const int *v23; // rsi
  signed int v24; // ecx
  signed int v25; // edx
  signed int v26; // ecx
  signed int v27; // edx
  int v28; // ecx
  int v29; // edx
  char *v30; // r13
  char *v31; // r14
  char *v32; // r8
  char *v33; // r12
  char *v34; // r10
  int v35; // ecx
  int v36; // edx
  char *v37; // rax
  unsigned int *v38; // rbx
  int *v39; // rdi
  int v40; // r14d
  __int64 v41; // r12
  int v42; // esi
  __int64 v43; // rax
  __int64 v44; // r11
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // r14d
  int v48; // edx
  __int64 v49; // rcx
  int v50; // eax
  int v51; // r12d
  __int64 v52; // rbx
  __int64 v53; // r14
  int v54; // eax
  double v55; // xmm0_8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __m128d v58; // xmm1
  double v59; // xmm0_8
  __m128d v60; // xmm2
  int v61; // eax
  char *v62; // rax
  int v63; // esi
  int v64; // edx
  char *v65; // rax
  int v66; // ecx
  int v67; // edx
  char *v68; // rax
  int v69; // edx
  int v70; // eax
  int v71; // edx
  int v72; // eax
  int v73; // edx
  int v74; // eax
  char *v75; // [rsp+0h] [rbp-68h]
  __int64 v76; // [rsp+0h] [rbp-68h]
  char *v77; // [rsp+0h] [rbp-68h]
  char *v78; // [rsp+8h] [rbp-60h]
  __int64 v79; // [rsp+8h] [rbp-60h]
  int v80; // [rsp+8h] [rbp-60h]
  int v81; // [rsp+10h] [rbp-58h]
  __int64 v82; // [rsp+10h] [rbp-58h]
  __int64 v83; // [rsp+18h] [rbp-50h]
  char *v84; // [rsp+20h] [rbp-48h]

  v4 = *((_DWORD *)this + 16);
  if ( v4 == a2 )
  {
    *((_OWORD *)this + 4) = 0;
    v5 = *((void **)this + 7);
    if ( v5 )
      operator delete[](v5);
    v6 = *((void **)this + 6);
    *((_QWORD *)this + 7) = 0;
    if ( v6 )
      operator delete[](v6);
    v7 = (_DWORD *)operator new[](4u);
    v8 = *((void **)this + 4);
    *((_QWORD *)this + 6) = v7;
    *v7 = 0;
    if ( v8 )
      operator delete[](v8);
    v9 = *((void **)this + 5);
    *((_QWORD *)this + 4) = 0;
    if ( v9 )
      operator delete[](v9);
    *((_QWORD *)this + 5) = 0;
    *((_DWORD *)this + 20) = 0;
  }
  else
  {
    v10 = a2;
    v83 = 4LL * a2;
    v13 = v83 >> 2;
    if ( (unsigned int)(v83 >> 2) )
    {
      v14 = v13 + 6;
      if ( (int)v13 - 1 >= 0 )
        v14 = v13 - 1;
      v15 = v14 >> 3;
      if ( v15 <= 0 )
      {
        v23 = (const int *)a3;
LABEL_81:
        switch ( ((int)v13 - 1) % 8 )
        {
          case 1:
            v74 = v23[1];
            goto LABEL_88;
          case 2:
            v73 = v23[2];
            goto LABEL_87;
          case 3:
            v72 = v23[3];
            goto LABEL_86;
          case 4:
            v71 = v23[4];
            goto LABEL_85;
          case 5:
            v70 = v23[5];
            goto LABEL_84;
          case 6:
            v69 = v23[6];
            goto LABEL_83;
          case 7:
            v69 = v23[6];
            if ( v23[7] < v69 )
              goto LABEL_31;
LABEL_83:
            v70 = v23[5];
            if ( v70 > v69 )
              goto LABEL_31;
LABEL_84:
            v71 = v23[4];
            if ( v71 > v70 )
              goto LABEL_31;
LABEL_85:
            v72 = v23[3];
            if ( v72 > v71 )
              goto LABEL_31;
LABEL_86:
            v73 = v23[2];
            if ( v73 > v72 )
              goto LABEL_31;
LABEL_87:
            v74 = v23[1];
            if ( v74 > v73 )
              goto LABEL_31;
LABEL_88:
            if ( *v23 <= v74 )
              goto LABEL_89;
            goto LABEL_31;
          default:
            goto LABEL_89;
        }
      }
      v16 = a3[7];
      if ( v16 <= (int)a3[8] )
      {
        v17 = a3[6];
        if ( v16 >= v17 )
        {
          v18 = a3[5];
          if ( v18 <= v17 )
          {
            v19 = a3[4];
            if ( v19 <= v18 )
            {
              v20 = a3[3];
              if ( v19 >= v20 )
              {
                v21 = (unsigned int)(v15 - 1);
                v22 = a3;
                v23 = (const int *)&a3[8 * v21 + 8];
                do
                {
                  v29 = v22[2];
                  if ( v29 > v20 )
                    break;
                  v24 = v22[1];
                  if ( v29 < v24 || v24 < (int)*v22 )
                    break;
                  v22 += 8;
                  if ( v22 == (unsigned int *)v23 )
                    goto LABEL_81;
                  v25 = v22[7];
                  if ( (int)v22[8] < v25 )
                    break;
                  v26 = v22[6];
                  if ( v25 < v26 )
                    break;
                  v27 = v22[5];
                  if ( v26 < v27 )
                    break;
                  v28 = v22[4];
                  if ( v27 < v28 )
                    break;
                  v20 = v22[3];
                }
                while ( v28 >= v20 );
              }
            }
          }
        }
      }
LABEL_31:
      if ( v10 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v30 = (char *)operator new[](v83);
      CoinMemcpyN<int>(a3, (unsigned int)a2, v30);
      v31 = &v30[v83];
      if ( v30 != &v30[v83] )
      {
        _BitScanReverse64(&v13, v13);
        sub_232330(v30, &v30[v83], 2 * (63LL - (int)(v13 ^ 0x3F)));
        v32 = v30 + 4;
        v33 = v30 + 4;
        if ( v83 <= 64 )
        {
          if ( v31 != v32 )
          {
            do
            {
              v66 = *(_DWORD *)v33;
              if ( *(_DWORD *)v33 < *(_DWORD *)v30 )
              {
                if ( v33 != v30 )
                {
                  v80 = *(_DWORD *)v33;
                  v77 = v32;
                  memmove(v32, v30, v33 - v30);
                  v66 = v80;
                  v32 = v77;
                }
                *(_DWORD *)v30 = v66;
              }
              else
              {
                v67 = *((_DWORD *)v33 - 1);
                v68 = v33 - 4;
                if ( v66 < v67 )
                {
                  while ( 1 )
                  {
                    *((_DWORD *)v68 + 1) = v67;
                    v67 = *((_DWORD *)v68 - 1);
                    if ( v66 >= v67 )
                      break;
                    v68 -= 4;
                  }
                  *(_DWORD *)v68 = v66;
                }
                else
                {
                  *(_DWORD *)v33 = v66;
                }
              }
              v33 += 4;
            }
            while ( v31 != v33 );
          }
        }
        else
        {
          v34 = v30 + 64;
          do
          {
            v35 = *(_DWORD *)v33;
            if ( *(_DWORD *)v33 < *(_DWORD *)v30 )
            {
              if ( v33 != v30 )
              {
                v81 = *(_DWORD *)v33;
                v78 = v34;
                v75 = v32;
                memmove(v32, v30, v33 - v30);
                v35 = v81;
                v34 = v78;
                v32 = v75;
              }
              *(_DWORD *)v30 = v35;
            }
            else
            {
              v36 = *((_DWORD *)v33 - 1);
              v37 = v33 - 4;
              if ( v36 > v35 )
              {
                while ( 1 )
                {
                  *((_DWORD *)v37 + 1) = v36;
                  v36 = *((_DWORD *)v37 - 1);
                  if ( v35 >= v36 )
                    break;
                  v37 -= 4;
                }
                *(_DWORD *)v37 = v35;
              }
              else
              {
                *(_DWORD *)v33 = v35;
              }
            }
            v33 += 4;
          }
          while ( v34 != v33 );
          while ( v31 != v33 )
          {
            v63 = *(_DWORD *)v33;
            v64 = *((_DWORD *)v33 - 1);
            v65 = v33 - 4;
            if ( v64 > *(_DWORD *)v33 )
            {
              while ( 1 )
              {
                *((_DWORD *)v65 + 1) = v64;
                v64 = *((_DWORD *)v65 - 1);
                if ( v63 >= v64 )
                  break;
                v65 -= 4;
              }
              *(_DWORD *)v65 = v63;
              v33 += 4;
            }
            else
            {
              v62 = v33;
              v33 += 4;
              *(_DWORD *)v62 = v63;
            }
          }
        }
      }
      sub_223E30(a2, (unsigned int *)v30, v4);
      v84 = v30;
    }
    else
    {
LABEL_89:
      v30 = (char *)a3;
      sub_223E30(a2, a3, v4);
      v84 = nullptr;
    }
    v38 = *((unsigned int **)this + 7);
    v39 = *((int **)this + 6);
    if ( a2 - 1 <= 0 )
    {
      v40 = 0;
    }
    else
    {
      v40 = 0;
      v41 = 0;
      do
      {
        v42 = *(_DWORD *)&v30[4 * v41 + 4];
        v43 = *(int *)&v30[4 * v41];
        v40 += v38[v43];
        v44 = 4 * v43;
        if ( v42 - (int)v43 > 1 )
        {
          v79 = v44 + 4;
          v45 = (4LL * v42 - (v44 + 4)) >> 2;
          v82 = (int)v43 - (int)v41;
          CoinCopyN<int>(&v39[(unsigned __int64)v44 / 4 + 1], (unsigned int)v45, &v39[v82]);
          CoinCopyN<int>(v79 + *((_QWORD *)this + 7), (unsigned int)v45, *((_QWORD *)this + 7) + v82 * 4);
          v38 = *((unsigned int **)this + 7);
          v39 = *((int **)this + 6);
        }
        ++v41;
      }
      while ( v41 != (unsigned int)(a2 - 2) + 1LL );
    }
    v46 = *(int *)&v30[v83 - 4];
    v47 = v38[v46] + v40;
    v48 = *(_DWORD *)&v30[v83 - 4];
    v49 = 4 * v46;
    v50 = *((_DWORD *)this + 16);
    v51 = v47;
    if ( v48 != v50 - 1 )
    {
      v76 = v49 + 4;
      v52 = (4LL * v50 - (v49 + 4)) >> 2;
      v53 = v48 - (a2 - 1);
      CoinCopyN<int>(&v39[(unsigned __int64)v49 / 4 + 1], (unsigned int)v52, &v39[v53]);
      CoinCopyN<int>(v76 + *((_QWORD *)this + 7), (unsigned int)v52, *((_QWORD *)this + 7) + v53 * 4);
      v50 = *((_DWORD *)this + 16);
      v38 = *((unsigned int **)this + 7);
      v39 = *((int **)this + 6);
    }
    v54 = v50 - a2;
    v55 = *((double *)this + 2);
    v56 = v54;
    *((_DWORD *)this + 16) = v54;
    v58 = 0;
    v57 = v54;
    v58.m128d_f64[0] = (double)(int)v38[v57 - 1] * (v55 + 1.0);
    v59 = v58.m128d_f64[0];
    if ( fabs(v58.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v60.m128d_f64[0] = (double)(int)v58.m128d_f64[0];
      *(_QWORD *)&v59 = COERCE_UNSIGNED_INT64(
                          COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v58, v60).m128d_f64[0] & 0x3FF0000000000000LL)
                        + v60.m128d_f64[0])
                      | *(_QWORD *)&v58.m128d_f64[0] & 0x8000000000000000LL;
    }
    v61 = v39[v57 - 1] + (int)v59;
    if ( v61 > *((_DWORD *)this + 20) )
      v61 = *((_DWORD *)this + 20);
    v39[v56] = v61;
    *((_DWORD *)this + 18) -= v51;
    if ( !*(_DWORD *)v30 )
    {
      CoinCopyN<int>(*((_QWORD *)this + 5) + 4LL * *v39, *v38, *((_QWORD *)this + 5));
      CoinCopyN<double>(*((_QWORD *)this + 4) + 8LL * **((int **)this + 6), **((unsigned int **)this + 7));
      **((_DWORD **)this + 6) = 0;
    }
    if ( v84 )
      operator delete[](v84);
  }
}

