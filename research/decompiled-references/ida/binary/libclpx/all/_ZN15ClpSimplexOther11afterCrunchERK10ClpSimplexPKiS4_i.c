__int64 __fastcall ClpSimplexOther::afterCrunch(
        ClpSimplexOther *this,
        const ClpSimplex *a2,
        const int *a3,
        const int *a4,
        int a5)
{
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 (*v10)(void); // rdx
  __int64 v11; // r15
  __int64 (*v12)(void); // rdx
  __int64 v13; // r13
  __int64 (*v14)(void); // rdx
  __int64 v15; // r14
  __int64 (*v16)(void); // rax
  __int64 result; // rax
  int v18; // ecx
  double v19; // xmm4_8
  double v20; // xmm5_8
  const int *v21; // rdi
  __int64 v22; // rsi
  int v23; // edx
  __int64 v24; // rcx
  double v25; // xmm0_8
  double v26; // xmm1_8
  double v27; // xmm3_8
  double v28; // xmm2_8
  _BYTE *v29; // r9
  char v30; // si
  char v31; // si
  _BYTE *v32; // rdx
  _BYTE *v33; // rdx
  int v34; // r9d
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // r9
  double v38; // xmm0_8
  double v39; // xmm1_8
  double v40; // xmm2_8
  double v41; // xmm0_8
  _BYTE *v42; // rcx
  char v43; // si
  char v44; // dl
  char v45; // si
  _BYTE *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax

  ClpSimplex::getbackSolution(this, a2, a3, a4);
  v8 = *((_QWORD **)this + 24);
  v9 = (_QWORD *)*v8;
  v10 = *(__int64 (**)(void))(*v8 + 40LL);
  if ( (char *)v10 == (char *)ClpPackedMatrix::getElements )
  {
    v11 = *(_QWORD *)(v8[11] + 32LL);
  }
  else
  {
    v49 = v10();
    v8 = *((_QWORD **)this + 24);
    v11 = v49;
    v9 = (_QWORD *)*v8;
  }
  v12 = (__int64 (*)(void))v9[6];
  if ( (char *)v12 == (char *)ClpPackedMatrix::getIndices )
  {
    v13 = *(_QWORD *)(v8[11] + 40LL);
  }
  else
  {
    v48 = v12();
    v8 = *((_QWORD **)this + 24);
    v13 = v48;
    v9 = (_QWORD *)*v8;
  }
  v14 = (__int64 (*)(void))v9[7];
  if ( (char *)v14 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v15 = *(_QWORD *)(v8[11] + 48LL);
  }
  else
  {
    v47 = v14();
    v8 = *((_QWORD **)this + 24);
    v15 = v47;
    v9 = (_QWORD *)*v8;
  }
  v16 = (__int64 (*)(void))v9[8];
  if ( (char *)v16 == (char *)ClpPackedMatrix::getVectorLengths )
    result = *(_QWORD *)(v8[11] + 56LL);
  else
    result = v16();
  v18 = *((_DWORD *)this + 26);
  v19 = *((double *)this + 4);
  v20 = *((double *)this + 3);
  if ( 2 * v18 > a5 )
  {
    v21 = &a3[a5];
    do
    {
      v22 = *((_QWORD *)this + 33);
      v23 = *v21;
      v24 = a3[a5 + v18];
      if ( (*(_BYTE *)(v22 + v24) & 7) == 1 )
      {
        v33 = (_BYTE *)(v22 + *((_DWORD *)this + 27) + v23);
        *v33 = *v33 & 0xF8 | 1;
      }
      else
      {
        v25 = *(double *)(*((_QWORD *)this + 22) + 8 * v24);
        v26 = *(double *)(*((_QWORD *)this + 23) + 8 * v24);
        v27 = *(double *)(*((_QWORD *)this + 15) + 8 * v24);
        v28 = *(double *)(*((_QWORD *)this + 17) + 8 * v24);
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v23) = 0;
        if ( v26 > v25 )
        {
          v29 = (_BYTE *)(v24 + *((_QWORD *)this + 33));
          v30 = *v29 & 0xF8;
          if ( v25 + v19 > v27 && v28 > -v20 )
          {
            v31 = v30 | 3;
          }
          else
          {
            if ( v27 <= v26 - v19 || v20 <= v28 )
            {
              *v29 = v30 | 1;
              v34 = *(_DWORD *)(result + 4 * v24);
              *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v24) = 0;
              v35 = *(_DWORD *)(v15 + 4 * v24);
              if ( v35 >= v35 + v34 )
                goto LABEL_29;
              v36 = v35;
              if ( v23 == *(_DWORD *)(v13 + 4LL * v35) )
              {
LABEL_36:
                v38 = *(double *)(v11 + 8 * v36);
              }
              else
              {
                v36 = v35 + 1LL;
                v37 = v36 + (unsigned int)(v34 - 1);
                while ( v37 != v36 )
                {
                  if ( *(_DWORD *)(v13 + 4 * (v36 + 1) - 4) == v23 )
                    goto LABEL_36;
                  ++v36;
                }
LABEL_29:
                v38 = 0.0;
              }
              *(double *)(*((_QWORD *)this + 16) + 8LL * v23) = v28 / v38;
              v39 = *(double *)(*((_QWORD *)this + 19) + 8LL * v23);
              v40 = *(double *)(*((_QWORD *)this + 18) + 8LL * v23);
              if ( v39 <= v40 )
              {
                v46 = (_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + v23);
                *v46 = *v46 & 0xF8 | 5;
              }
              else
              {
                v41 = *(double *)(*((_QWORD *)this + 14) + 8LL * v23);
                v42 = (_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + v23);
                v43 = *v42 & 0xF8;
                v44 = v43 | 2;
                v45 = v43 | 3;
                if ( fabs(v41 - v39) > fabs(v41 - v40) )
                  v44 = v45;
                *v42 = v44;
              }
              goto LABEL_20;
            }
            v31 = v30 | 2;
          }
          *v29 = v31;
        }
        v32 = (_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + v23);
        *v32 = *v32 & 0xF8 | 1;
      }
LABEL_20:
      v18 = *((_DWORD *)this + 26);
      ++a5;
      ++v21;
    }
    while ( 2 * v18 > a5 );
  }
  return result;
}

