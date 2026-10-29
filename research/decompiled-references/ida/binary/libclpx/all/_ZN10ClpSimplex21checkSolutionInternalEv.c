__int64 __fastcall ClpSimplex::checkSolutionInternal(ClpSimplex *this)
{
  __int64 v2; // rdx
  double v3; // xmm4_8
  __int64 v4; // rax
  double v5; // xmm0_8
  int v6; // r10d
  double v7; // xmm6_8
  int v8; // r9d
  double v9; // xmm5_8
  __int64 v10; // rdi
  int v11; // r8d
  double v12; // xmm7_8
  double v13; // xmm0_8
  double v14; // xmm9_8
  double v15; // xmm1_8
  _BYTE *v16; // rdx
  double v17; // xmm2_8
  unsigned __int8 v18; // si
  unsigned int v19; // r11d
  double v20; // xmm6_8
  double v21; // xmm6_8
  double v22; // xmm6_8
  double v23; // xmm0_8
  __int64 v24; // rdx
  double v25; // xmm8_8
  double v26; // xmm7_8
  _BYTE *v27; // rdi
  double v28; // xmm0_8
  __int64 v29; // rcx
  double v30; // xmm1_8
  double v31; // xmm2_8
  double v32; // xmm7_8
  int v33; // ecx
  __int64 result; // rax
  double v35; // xmm2_8
  double v36; // xmm6_8
  double v37; // xmm10_8
  double v38; // xmm7_8
  double v39; // xmm7_8
  double v40; // xmm0_8
  double v41; // [rsp+0h] [rbp-28h]
  double v42; // [rsp+8h] [rbp-20h]
  double v43[2]; // [rsp+18h] [rbp-10h] BYREF

  v2 = *((_QWORD *)this + 15);
  v3 = *((double *)this + 3);
  v43[0] = 0.0;
  v42 = v3;
  v41 = *((double *)this + 4);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, ClpSimplex *, __int64, double *, __int64, __int64))this + 20))(
         *((_QWORD *)this + 20),
         this,
         v2,
         v43,
         1,
         2);
  v5 = v43[0];
  v6 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 112) = 0;
  *((_DWORD *)this + 308) = 0;
  *((_QWORD *)this + 111) = 0;
  *((_DWORD *)this + 306) = 0;
  v7 = -v5;
  v8 = *((_DWORD *)this + 27);
  v9 = *(double *)this;
  *((double *)this + 9) = -v5;
  if ( v6 > 0 )
  {
    v10 = 0;
    v11 = 0;
    v12 = -v42;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *(double *)(*((_QWORD *)this + 14) + v10);
        v14 = *(double *)(*((_QWORD *)this + 18) + v10);
        v15 = *(double *)(*((_QWORD *)this + 19) + v10);
        v16 = (_BYTE *)(*((_QWORD *)this + 33) + v11 + v8);
        v17 = v41 + v15;
        v18 = *v16 & 7;
        if ( v18 != 1 )
          break;
        if ( v13 > v17 )
          goto LABEL_27;
        if ( v14 - v41 > v13 )
        {
LABEL_36:
          ++*((_DWORD *)this + 308);
          *((double *)this + 112) = v14 - v13 - v41 + *((double *)this + 112);
        }
LABEL_28:
        ++v11;
        v10 += 8;
        if ( v11 >= v6 )
        {
LABEL_15:
          v7 = *((double *)this + 9);
          goto LABEL_16;
        }
      }
      if ( v14 == v15 )
      {
        v18 = 5;
        v19 = 5;
      }
      else if ( v13 > v15 - v41 )
      {
        v18 = 2;
        v19 = 2;
      }
      else
      {
        v19 = v18;
        if ( v41 + v14 > v13 )
        {
          v18 = 3;
          v19 = 3;
        }
      }
      v20 = *(double *)(*((_QWORD *)this + 16) + v10);
      *v16 = v18 | *v16 & 0xF8;
      v8 = *((_DWORD *)this + 27);
      v6 = *((_DWORD *)this + 26);
      if ( v13 > v17 )
      {
LABEL_27:
        ++*((_DWORD *)this + 308);
        *((double *)this + 112) = v13 - v15 - v41 + *((double *)this + 112);
        goto LABEL_28;
      }
      if ( v14 - v41 > v13 )
        goto LABEL_36;
      v21 = v20 * v9;
      if ( v19 == 2 )
        goto LABEL_43;
      if ( v19 <= 2 )
      {
LABEL_39:
        if ( v15 - v41 > v13 && v12 > v21 )
        {
          v35 = *((double *)this + 109);
          ++*((_DWORD *)this + 306);
          *((double *)this + 111) = *((double *)this + 111) - (v35 + v21);
        }
        if ( v13 <= v14 + v41 )
          goto LABEL_28;
LABEL_43:
        if ( v21 > v42 )
        {
          v36 = v21 - *((double *)this + 109);
          ++*((_DWORD *)this + 306);
          *((double *)this + 111) = v36 + *((double *)this + 111);
        }
        goto LABEL_28;
      }
      if ( v19 != 3 )
      {
        if ( v19 == 4 )
          goto LABEL_39;
        goto LABEL_28;
      }
      if ( v12 <= v21 )
        goto LABEL_28;
      v22 = v21 + *((double *)this + 109);
      v23 = *((double *)this + 111);
      ++v11;
      ++*((_DWORD *)this + 306);
      v10 += 8;
      *((double *)this + 111) = v23 - v22;
      if ( v11 >= v6 )
        goto LABEL_15;
    }
  }
LABEL_16:
  if ( v8 > 0 )
  {
    v24 = 0;
    *(_QWORD *)&v25 = *(_QWORD *)&v42 ^ 0x8000000000000000LL;
    do
    {
      while ( 1 )
      {
        v26 = *(double *)(*((_QWORD *)this + 17) + 8 * v24);
        v27 = (_BYTE *)(v24 + *((_QWORD *)this + 33));
        v28 = *(double *)(*((_QWORD *)this + 15) + 8 * v24);
        v29 = *((_QWORD *)this + 22);
        v7 = v7 + *(double *)(v4 + 8 * v24) * v28;
        *((double *)this + 9) = v7;
        v30 = *(double *)(v29 + 8 * v24);
        v31 = *(double *)(*((_QWORD *)this + 23) + 8 * v24);
        if ( (*v27 & 7) != 1 && v30 == v31 )
          break;
        if ( v28 <= v41 + v31 )
        {
          if ( v30 - v41 <= v28 )
          {
            v32 = v26 * v9;
            switch ( *v27 & 7 )
            {
              case 0:
              case 4:
                if ( v31 - v41 > v28 && v25 > v32 )
                {
                  v37 = *((double *)this + 109);
                  ++*((_DWORD *)this + 306);
                  *((double *)this + 111) = *((double *)this + 111) - (v37 + v32);
                }
                if ( v28 > v30 + v41 )
                  goto LABEL_49;
                break;
              case 1:
                v32 = fabs(v32);
                if ( v32 > 10.0 * v42 )
                  goto LABEL_50;
                break;
              case 2:
LABEL_49:
                if ( v32 > v42 )
                {
LABEL_50:
                  v38 = v32 - *((double *)this + 109);
                  ++*((_DWORD *)this + 306);
                  *((double *)this + 111) = v38 + *((double *)this + 111);
                }
                break;
              case 3:
                if ( v25 > v32 )
                {
                  v39 = v32 + *((double *)this + 109);
                  v40 = *((double *)this + 111);
                  ++*((_DWORD *)this + 306);
                  *((double *)this + 111) = v40 - v39;
                }
                break;
              default:
                goto LABEL_22;
            }
            goto LABEL_22;
          }
LABEL_21:
          ++*((_DWORD *)this + 308);
          *((double *)this + 112) = v30 - v28 - v41 + *((double *)this + 112);
          goto LABEL_22;
        }
LABEL_30:
        ++*((_DWORD *)this + 308);
        ++v24;
        *((double *)this + 112) = v28 - v31 - v41 + *((double *)this + 112);
        if ( (int)v24 >= v8 )
          goto LABEL_31;
      }
      *v27 = *v27 & 0xF8 | 5;
      v8 = *((_DWORD *)this + 27);
      v7 = *((double *)this + 9);
      if ( v28 > v41 + v31 )
        goto LABEL_30;
      if ( v30 - v41 > v28 )
        goto LABEL_21;
LABEL_22:
      ++v24;
    }
    while ( (int)v24 < v8 );
  }
LABEL_31:
  v33 = *((_DWORD *)this + 306);
  result = 0xFFFFFFFFLL;
  *((double *)this + 9) = *(double *)this * (v7 + *(double *)(*((_QWORD *)this + 20) + 8LL));
  if ( !v33 )
    result = (unsigned int)-(*((_DWORD *)this + 308) != 0);
  *((_DWORD *)this + 80) = result;
  return result;
}

