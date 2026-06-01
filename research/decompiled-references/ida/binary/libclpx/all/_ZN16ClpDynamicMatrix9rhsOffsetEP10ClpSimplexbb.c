__int64 __fastcall ClpDynamicMatrix::rhsOffset(ClpDynamicMatrix *this, ClpSimplex *a2, char a3)
{
  __int64 result; // rax
  int v4; // ecx
  _QWORD *v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r12
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // ecx
  double v16; // xmm2_8
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  double v22; // xmm1_8
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  void *v27; // rbp
  __int64 v28; // r14
  double v29; // xmm4_8
  __int64 v30; // r12
  double v31; // xmm0_8
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rax
  int v35; // edx
  int v36; // edi
  int v37; // esi
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // r12
  int v43; // r11d
  __int64 v44; // rdx
  __int64 v45; // r10
  double v46; // xmm1_8
  __int64 v47; // rsi
  __int64 v48; // rax
  int v49; // ecx
  __int64 v50; // r9
  __int64 v51; // rsi
  __int64 v52; // r8
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  double v56; // xmm2_8
  ClpSimplex *v57; // r15
  double v58; // xmm4_8
  _QWORD *v59; // rdx
  _QWORD *v60; // r8
  int v61; // edx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // r8
  double v68; // xmm1_8
  __int64 v69; // r9
  double v70; // xmm0_8
  __int64 v71; // r8
  int v72; // ecx
  __int64 v73; // r9
  __int64 v74; // r11
  __int64 v75; // r10
  __int64 v76; // rcx
  __int64 v77; // r8
  double v78; // xmm2_8
  __int64 v79; // [rsp+0h] [rbp-50h]
  double v80; // [rsp+0h] [rbp-50h]
  double v81; // [rsp+0h] [rbp-50h]

  result = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 308LL) )
  {
    if ( result )
    {
      if ( a3 )
        goto LABEL_3;
      v35 = *((_DWORD *)this + 15);
      if ( v35 )
      {
        if ( *((_DWORD *)this + 14) + v35 <= *((_DWORD *)a2 + 77) )
          goto LABEL_3;
      }
    }
  }
  else if ( result )
  {
LABEL_3:
    v4 = *((_DWORD *)a2 + 26);
    if ( v4 )
    {
      if ( v4 / 8 <= 0 )
      {
        v60 = *((_QWORD **)this + 1);
      }
      else
      {
        v59 = *((_QWORD **)this + 1);
        do
        {
          *v59 = 0;
          v59[1] = 0;
          v59 += 8;
          *(v59 - 6) = 0;
          *(v59 - 5) = 0;
          *(v59 - 4) = 0;
          *(v59 - 3) = 0;
          *(v59 - 2) = 0;
          *(v59 - 1) = 0;
        }
        while ( v59 != (_QWORD *)(result + (((unsigned int)(v4 / 8 - 1) + 1LL) << 6)) );
        v60 = (_QWORD *)(result + ((v4 / 8 - 1 + 1LL) << 6));
      }
      switch ( v4 % 8 )
      {
        case 1:
          goto LABEL_67;
        case 2:
          goto LABEL_66;
        case 3:
          goto LABEL_65;
        case 4:
          goto LABEL_64;
        case 5:
          goto LABEL_63;
        case 6:
          goto LABEL_62;
        case 7:
          v60[6] = 0;
LABEL_62:
          v60[5] = 0;
LABEL_63:
          v60[4] = 0;
LABEL_64:
          v60[3] = 0;
LABEL_65:
          v60[2] = 0;
LABEL_66:
          v60[1] = 0;
LABEL_67:
          *v60 = 0;
          break;
        default:
          break;
      }
    }
    v5 = *((_QWORD **)this + 11);
    v6 = *((_QWORD *)a2 + 150);
    v7 = v5[4];
    v8 = v5[5];
    v9 = v5[6];
    v10 = v5[7];
    v11 = *((_DWORD *)this + 64);
    if ( v11 > 0 )
    {
      v12 = 0;
      v13 = (unsigned int)(v11 - 1) + 1LL;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v12) & 7) != 1 )
        {
          v14 = *(int *)(v9 + 4 * v12);
          v15 = *(_DWORD *)(v10 + 4 * v12);
          v16 = *(double *)(v6 + 8 * v12);
          if ( (int)v14 < (int)v14 + v15 )
          {
            v17 = v8 + 4 * v14;
            v18 = v7 + 8 * v14;
            v19 = 0;
            v20 = (unsigned int)(v15 - 1) + 1LL;
            do
            {
              v21 = *(int *)(v17 + 4 * v19);
              v22 = *(double *)(v18 + 8 * v19++);
              *(double *)(result + 8 * v21) = *(double *)(result + 8 * v21) - v22 * v16;
            }
            while ( v20 != v19 );
          }
        }
        ++v12;
      }
      while ( v13 != v12 );
    }
    if ( *(_OWORD *)((char *)this + 376) == 0 )
    {
      v61 = *((_DWORD *)this + 50);
      if ( v61 <= 0 )
      {
        v58 = 0.0;
        v57 = a2;
      }
      else
      {
        v62 = (unsigned int)(v61 - 1);
        v63 = *((_QWORD *)this + 23);
        v64 = 0;
        v65 = v62 + 1;
        v58 = 0.0;
        do
        {
          if ( *(int *)(v63 + 4 * v64) < 0 )
          {
            v66 = *(int *)(*((_QWORD *)this + 22) + 4 * v64);
            if ( *((_DWORD *)this + 75) > (int)v66 )
            {
              v67 = (*(_BYTE *)(*((_QWORD *)this + 29) + v64) & 7) == 3
                  ? *((_QWORD *)this + 27)
                  : *((_QWORD *)this + 28);
              v68 = *(double *)(v67 + 8 * v64);
              if ( v68 != 0.0 )
              {
                v69 = *((_QWORD *)this + 41);
                v70 = *(double *)(*((_QWORD *)this + 44) + 8 * v66);
                v71 = *(int *)(v69 + 4 * v66);
                v72 = *(_DWORD *)(v69 + 4 * v66 + 4);
                v58 = v58 + v70 * v68;
                if ( (int)v71 < v72 )
                {
                  v73 = (unsigned int)(v72 - v71 - 1) + 1LL;
                  v74 = *((_QWORD *)this + 42) + 4 * v71;
                  v75 = *((_QWORD *)this + 43) + 8 * v71;
                  v76 = 0;
                  do
                  {
                    v77 = *(int *)(v74 + 4 * v76);
                    v78 = *(double *)(v75 + 8 * v76++);
                    *(double *)(result + 8 * v77) = *(double *)(result + 8 * v77) - v78 * v68;
                  }
                  while ( v73 != v76 );
                }
              }
            }
          }
          ++v64;
        }
        while ( v65 != v64 );
        v57 = a2;
      }
      goto LABEL_53;
    }
    v24 = *((int *)this + 74);
    if ( v24 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v25 = operator new[](8 * v24);
    v26 = *((_DWORD *)this + 50);
    v27 = (void *)v25;
    if ( v26 <= 0 )
    {
      v36 = *((_DWORD *)this + 64);
      v37 = *((_DWORD *)this + 62);
      if ( v36 >= v37 )
      {
        v29 = 0.0;
LABEL_52:
        v80 = v29;
        operator delete[](v27);
        v57 = a2;
        v58 = v80;
LABEL_53:
        ClpModel::setObjectiveOffset(v57, *((double *)this + 26) - v58);
        *((_DWORD *)this + 14) = *((_DWORD *)v57 + 77);
        return *((_QWORD *)this + 1);
      }
      v29 = 0.0;
LABEL_34:
      v38 = *((_QWORD *)this + 30);
      v39 = v36;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v38 + 264) + v39) & 7) != 1 )
          *((_QWORD *)v27 + *(int *)(*((_QWORD *)this + 45) + 4LL * ((int)v39 - v36))) = *(_QWORD *)(v6 + 8 * v39);
        ++v39;
      }
      while ( v37 > (int)v39 );
LABEL_38:
      if ( v26 > 0 )
      {
        v40 = *((_QWORD *)this + 23);
        v41 = *((_QWORD *)this + 39);
        v42 = 0;
        v79 = 4LL * (unsigned int)(v26 - 1) + 4;
        do
        {
          v43 = *(_DWORD *)(v40 + v42);
          if ( v43 >= 0 )
            v43 += *((_DWORD *)this + 66);
          v44 = *(int *)(v41 + v42);
          if ( (int)v44 >= 0 )
          {
            v45 = *((_QWORD *)this + 40);
            do
            {
              while ( 1 )
              {
                v46 = *((double *)v27 + v44);
                if ( v46 != 0.0 )
                {
                  v47 = *((_QWORD *)this + 41);
                  v48 = *(int *)(v47 + 4 * v44);
                  v49 = *(_DWORD *)(v47 + 4 * v44 + 4);
                  if ( (int)v48 < v49 )
                  {
                    v50 = *((_QWORD *)this + 1);
                    v51 = (unsigned int)(v49 - v48 - 1) + 1LL;
                    v52 = *((_QWORD *)this + 42) + 4 * v48;
                    v53 = *((_QWORD *)this + 43) + 8 * v48;
                    v54 = 0;
                    do
                    {
                      v55 = *(int *)(v52 + 4 * v54);
                      v56 = *(double *)(v53 + 8 * v54++);
                      *(double *)(v50 + 8 * v55) = *(double *)(v50 + 8 * v55) - v56 * v46;
                    }
                    while ( v51 != v54 );
                  }
                  if ( v43 >= 0 )
                    break;
                }
                v44 = *(int *)(v45 + 4 * v44);
                if ( (int)v44 < 0 )
                  goto LABEL_51;
              }
              v44 = *(int *)(v45 + 4 * v44);
              *(double *)(8LL * v43 + *((_QWORD *)this + 1)) = *(double *)(8LL * v43 + *((_QWORD *)this + 1)) - v46;
            }
            while ( (int)v44 >= 0 );
          }
LABEL_51:
          v42 += 4;
        }
        while ( v79 != v42 );
      }
      goto LABEL_52;
    }
    v28 = 0;
    v29 = 0.0;
    while ( 1 )
    {
      v30 = *(int *)(*((_QWORD *)this + 39) + 4 * v28);
      if ( (int)v30 >= 0 )
        break;
LABEL_32:
      if ( v26 <= (int)++v28 )
      {
        v36 = *((_DWORD *)this + 64);
        v37 = *((_DWORD *)this + 62);
        if ( v36 >= v37 )
          goto LABEL_38;
        goto LABEL_34;
      }
    }
    while ( 1 )
    {
      v31 = 0.0;
      v33 = *(_BYTE *)(*((_QWORD *)this + 46) + v30) & 7;
      if ( v33 == 1 )
        goto LABEL_21;
      if ( v33 != 3 )
        break;
      v34 = *((_QWORD *)this + 47);
      if ( v34 )
        goto LABEL_25;
LABEL_20:
      v29 = v29 + *(double *)(*((_QWORD *)this + 44) + 8 * v30) * v31;
LABEL_21:
      v32 = *((_QWORD *)this + 40);
      *((double *)v27 + v30) = v31;
      v30 = *(int *)(v32 + 4 * v30);
      if ( (int)v30 < 0 )
      {
        v26 = *((_DWORD *)this + 50);
        goto LABEL_32;
      }
    }
    if ( v33 != 2 )
    {
      v31 = 0.0;
      if ( !v33 )
      {
        v81 = v29;
        ClpDynamicMatrix::keyValue(this, v28);
        v29 = v81;
      }
      goto LABEL_20;
    }
    v34 = *((_QWORD *)this + 48);
LABEL_25:
    v31 = *(double *)(v34 + 8 * v30);
    goto LABEL_20;
  }
  return result;
}

