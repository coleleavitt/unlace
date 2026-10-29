__int64 __fastcall ClpDynamicMatrix::generalExpanded(ClpDynamicMatrix *this, ClpSimplex *a2, unsigned int a3, int *a4)
{
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  _BYTE *v12; // rax
  int v13; // ecx
  int v14; // edx
  __int64 result; // rax
  int v16; // eax
  __int64 *v17; // rdx
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  char *v24; // rdi
  size_t v25; // rdx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  char v29; // cl
  __int64 v30; // r14
  int v31; // eax
  int v32; // ecx
  int v33; // r13d
  int v34; // r12d
  __int64 v35; // rbp
  __int64 v36; // r10
  _QWORD *v37; // r9
  ClpNonLinearCost *v38; // rdi
  double v39; // xmm3_8
  __int64 v40; // r9
  double v41; // xmm2_8
  __int64 v42; // r9
  double v43; // xmm1_8
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // r9
  __int64 v47; // rbp
  double *v48; // rcx
  double v49; // xmm0_8
  ClpNonLinearCost *v50; // rdi
  double v51; // xmm1_8
  double v52; // xmm2_8
  int v53; // esi
  int v54; // r9d
  double v55; // xmm0_8
  __int64 v56; // rcx
  double *v57; // r10
  _BYTE *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // rdx
  __int64 v63; // rax
  _BYTE *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  char *v68; // rcx
  char v69; // al
  __int64 v70; // rax
  unsigned __int64 v71; // rdi
  __int64 v72; // [rsp+0h] [rbp-50h]
  __int64 v73; // [rsp+8h] [rbp-48h]
  __int64 v74; // [rsp+10h] [rbp-40h]

  switch ( a3 )
  {
    case 0u:
      if ( !*((_QWORD *)this + 1) )
      {
        v71 = *((int *)a2 + 26);
        if ( v71 > 0xFFFFFFFFFFFFFFFLL )
          __cxa_throw_bad_array_new_length();
        *((_QWORD *)this + 1) = operator new[](8 * v71);
        (*(void (__fastcall **)(ClpDynamicMatrix *, ClpSimplex *, __int64, _QWORD))(*(_QWORD *)this + 464LL))(
          this,
          a2,
          1,
          0);
      }
      v16 = *((_DWORD *)a2 + 27);
      v17 = *((__int64 **)a2 + 132);
      v18 = *a4;
      v19 = *v17;
      if ( v16 > 0 )
      {
        v20 = (unsigned int)(v16 - 1);
        v21 = 0;
        v22 = v20 + 1;
        do
        {
          if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v21) & 7) == 1 )
          {
            v23 = v18++;
            *(_DWORD *)(v19 + 4 * v23) = v21;
          }
          ++v21;
        }
        while ( v22 != v21 );
      }
      *a4 = v18;
      return a3;
    case 1u:
      return 0;
    case 2u:
      *a4 = *((_DWORD *)a2 + 26);
      return 0;
    case 3u:
      if ( *((_DWORD *)this + 51) + *((_DWORD *)this + 66) != *(_DWORD *)(*((_QWORD *)this + 30) + 104LL) )
        return 0;
      *a4 = -1;
      return 4;
    case 4u:
    case 0xAu:
      return 1;
    case 5u:
      memcpy((void *)(*((_QWORD *)this + 29) + *((int *)this + 50)), *((const void **)this + 29), *((int *)this + 50));
      *(_DWORD *)(*((_QWORD *)this + 29) + 2 * *((_DWORD *)this + 50)) = *((_DWORD *)this + 51);
      memcpy((void *)(*((_QWORD *)this + 46) + *((int *)this + 75)), *((const void **)this + 46), *((int *)this + 75));
      return 0;
    case 6u:
      memcpy(*((void **)this + 29), (const void *)(*((_QWORD *)this + 29) + *((int *)this + 50)), *((int *)this + 50));
      v24 = *((char **)this + 46);
      v25 = *((int *)this + 75);
      *((_DWORD *)this + 51) = *(_DWORD *)(*((_QWORD *)this + 29) + 2 * *((_DWORD *)this + 50));
      memcpy(v24, &v24[v25], v25);
      ClpDynamicMatrix::initialProblem(this);
      return 0;
    case 7u:
      v8 = *a4;
      v9 = *((_DWORD *)this + 64);
      if ( *a4 < v9 )
      {
        v10 = *((_DWORD *)this + 66);
        v11 = *(_DWORD *)(*((_QWORD *)this + 30) + 108LL);
        if ( v8 < v10 + v11 )
          return 0;
LABEL_4:
        v12 = (_BYTE *)(*((_QWORD *)this + 29) + *(int *)(*((_QWORD *)this + 24) + 4LL * (v8 - v11 - v10)));
        *v12 |= 8u;
        goto LABEL_5;
      }
      if ( v8 >= *((_DWORD *)this + 65) )
      {
        v10 = *((_DWORD *)this + 66);
        v11 = *(_DWORD *)(*((_QWORD *)this + 30) + 108LL);
        if ( v8 < v10 + v11 )
          goto LABEL_6;
        goto LABEL_4;
      }
      v58 = (_BYTE *)(*((_QWORD *)this + 46) + *(int *)(*((_QWORD *)this + 45) + 4LL * (v8 - v9)));
      *v58 |= 8u;
LABEL_5:
      v8 = *a4;
      if ( *a4 < *((_DWORD *)this + 64) )
        goto LABEL_7;
LABEL_6:
      if ( *((_DWORD *)this + 65) <= v8 )
      {
LABEL_7:
        v13 = *(_DWORD *)(*((_QWORD *)this + 30) + 108LL);
        v14 = *((_DWORD *)this + 66);
        if ( v14 + v13 <= v8 )
          printf("what now - set %d\n", *(_DWORD *)(*((_QWORD *)this + 24) + 4LL * (v8 - v13 - v14)));
        return 0;
      }
      v59 = *((_QWORD *)a2 + 129);
      v60 = *((_QWORD *)a2 + 123);
      v61 = *((_QWORD *)a2 + 126);
      v62 = *(_QWORD *)(*((_QWORD *)this + 11) + 56LL);
      v63 = *((int *)this + 62);
      *(_QWORD *)(*((_QWORD *)a2 + 150) + 8 * v63) = 0;
      *(_QWORD *)(v59 + 8 * v63) = 0;
      *(_DWORD *)(v62 + 4 * v63) = 0;
      ClpNonLinearCost::setOne(
        *((ClpNonLinearCost **)a2 + 165),
        *((_DWORD *)this + 62),
        0.0,
        0.0,
        1.797693134862316e308,
        0.0);
      v64 = (_BYTE *)(*((_QWORD *)a2 + 33) + *((int *)this + 62));
      *v64 = *v64 & 0xF8 | 3;
      v65 = *((int *)this + 62);
      v66 = *((_QWORD *)this + 45);
      *(_QWORD *)(v60 + 8 * v65) = 0;
      *(_QWORD *)(v61 + 8 * v65) = 0x7FEFFFFFFFFFFFFFLL;
      v67 = *(int *)(v66 + 4LL * (*a4 - *((_DWORD *)this + 64)));
      v68 = (char *)(v67 + *((_QWORD *)this + 46));
      v69 = *v68;
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + *a4) & 7) == 3 )
      {
        *v68 = v69 & 0xF8 | 3;
        v70 = *((_QWORD *)this + 47);
        if ( !v70 )
          return 0;
      }
      else
      {
        *v68 = v69 & 0xF8 | 2;
        v70 = *((_QWORD *)this + 48);
      }
      ClpDynamicMatrix::modifyOffset(this, *a4, *(double *)(v70 + 8 * v67));
      return 0;
    case 8u:
      v26 = *((_DWORD *)this + 74);
      if ( v26 <= 0 )
        return 0;
      v27 = 0;
      result = 0;
      do
      {
        v28 = *((_QWORD *)this + 46);
        while ( 1 )
        {
          v29 = *(_BYTE *)(v28 + v27);
          if ( (v29 & 8) != 0 )
            break;
          if ( (int)++v27 >= v26 )
            return result;
        }
        result = (unsigned int)(result + 1);
        *(_BYTE *)(v28 + v27) = v29 & 0xF7;
        v26 = *((_DWORD *)this + 74);
        ++v27;
      }
      while ( (int)v27 < v26 );
      return result;
    case 9u:
      v30 = *((_QWORD *)a2 + 150);
      v74 = *((_QWORD *)a2 + 129);
      v72 = *((_QWORD *)a2 + 123);
      v73 = *((_QWORD *)a2 + 126);
      v31 = *a4;
      v32 = *((_DWORD *)this + 64);
      v33 = v31 & 4;
      v34 = v31 & 1;
      if ( v32 >= *((_DWORD *)this + 62) )
        goto LABEL_49;
      v35 = v32;
      while ( 2 )
      {
        v44 = *(int *)(*((_QWORD *)this + 45) + 4LL * ((int)v35 - v32));
        if ( !v34 )
          goto LABEL_34;
        v45 = *((_QWORD *)this + 47);
        v46 = *((_QWORD *)this + 48);
        if ( v45 )
        {
          v36 = 8LL * (int)v44;
          *(_QWORD *)(v72 + 8 * v35) = *(_QWORD *)(v45 + v36);
          if ( !v46 )
            goto LABEL_46;
LABEL_33:
          *(_QWORD *)(v73 + 8 * v35) = *(_QWORD *)(v46 + v36);
          goto LABEL_34;
        }
        v36 = 8LL * (int)v44;
        *(_QWORD *)(v72 + 8 * v35) = 0;
        if ( v46 )
          goto LABEL_33;
LABEL_46:
        *(_QWORD *)(v73 + 8 * v35) = 0x7FEFFFFFFFFFFFFFLL;
LABEL_34:
        if ( v33 )
        {
          v37 = (_QWORD *)(*((_QWORD *)this + 44) + 8 * v44);
          *(_QWORD *)(v74 + 8 * v35) = *v37;
          v38 = *((ClpNonLinearCost **)a2 + 165);
          if ( v38 )
          {
            v39 = *(double *)v37;
            v40 = *((_QWORD *)this + 48);
            v41 = 1.797693134862316e308;
            if ( v40 )
              v41 = *(double *)(v40 + 8 * v44);
            v42 = *((_QWORD *)this + 47);
            v43 = 0.0;
            if ( v42 )
              v43 = *(double *)(v42 + 8 * v44);
            ClpNonLinearCost::setOne(v38, v35, *(double *)(v30 + 8 * v35), v43, v41, v39);
          }
        }
        if ( *((_DWORD *)this + 62) > (int)++v35 )
        {
          v32 = *((_DWORD *)this + 64);
          continue;
        }
        break;
      }
LABEL_49:
      if ( *((int *)this + 51) > 0 )
      {
        v47 = 0;
        do
        {
          v53 = v47 + *((_DWORD *)this + 65) + *((_DWORD *)this + 66);
          v54 = *(_DWORD *)(*((_QWORD *)this + 24) + 4 * v47);
          if ( v34 )
          {
            v55 = *(double *)(*((_QWORD *)this + 27) + 8LL * v54);
            v56 = 8LL * v53;
            v57 = (double *)(v72 + v56);
            if ( v55 > -1.0e20 )
              *v57 = v55;
            else
              *v57 = -1.797693134862316e308;
            v48 = (double *)(v73 + v56);
            v49 = *(double *)(*((_QWORD *)this + 28) + 8LL * v54);
            if ( v49 >= 1.0e20 )
              *v48 = 1.797693134862316e308;
            else
              *v48 = v49;
          }
          if ( v33 )
          {
            v50 = *((ClpNonLinearCost **)a2 + 165);
            if ( v50 )
            {
              v51 = *(double *)(*((_QWORD *)this + 27) + 8LL * v54);
              if ( v51 <= -1.0e20 )
                v51 = -1.797693134862316e308;
              v52 = *(double *)(*((_QWORD *)this + 28) + 8LL * v54);
              if ( v52 >= 1.0e20 )
                v52 = 1.797693134862316e308;
              ClpNonLinearCost::setOne(v50, v53, *(double *)(v30 + 8LL * v53), v51, v52, 0.0);
            }
          }
          ++v47;
        }
        while ( *((_DWORD *)this + 51) > (int)v47 );
      }
      return 0;
    case 0xBu:
      goto LABEL_5;
    default:
      return 0;
  }
}

