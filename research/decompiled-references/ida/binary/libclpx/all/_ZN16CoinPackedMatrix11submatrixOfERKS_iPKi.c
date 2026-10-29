void __fastcall CoinPackedMatrix::submatrixOf(
        CoinPackedMatrix *this,
        const CoinPackedMatrix *a2,
        int a3,
        unsigned int *a4)
{
  unsigned __int64 v4; // r9
  signed __int64 v6; // rcx
  signed int v10; // eax
  unsigned __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // edi
  int v16; // edx
  int v17; // edi
  int v18; // edx
  __int64 v19; // r8
  unsigned int *v20; // rax
  const int *v21; // r8
  signed int v22; // edx
  signed int v23; // edx
  signed int v24; // edi
  signed int v25; // edx
  int v26; // edi
  int v27; // edi
  __int64 v28; // rax
  char *v29; // rbx
  const __m128i *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // r8
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int64 v35; // rax
  char *v36; // r14
  char *v37; // r9
  char *v38; // r15
  char *v39; // r10
  int v40; // ecx
  int v41; // esi
  int v42; // edx
  char *v43; // rax
  char *v44; // rax
  int v45; // edx
  __int64 v46; // rcx
  double v47; // xmm0_8
  double v48; // xmm3_8
  double v49; // xmm1_8
  double v50; // xmm2_8
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rdi
  _DWORD *v53; // rax
  unsigned __int64 v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rdi
  unsigned int v57; // eax
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // ecx
  int v62; // edx
  char *v63; // rax
  int v64; // edx
  char *v65; // rax
  char *v66; // rax
  int v67; // edx
  int v68; // eax
  int v69; // edx
  int v70; // eax
  int v71; // edx
  int v72; // eax
  signed int v73; // [rsp+0h] [rbp-98h]
  char *v74; // [rsp+0h] [rbp-98h]
  __int64 v75; // [rsp+8h] [rbp-90h]
  char *v76; // [rsp+8h] [rbp-90h]
  char *v77; // [rsp+8h] [rbp-90h]
  char *v78; // [rsp+10h] [rbp-88h]
  int v79; // [rsp+10h] [rbp-88h]
  int v80; // [rsp+1Ch] [rbp-7Ch]
  _QWORD v81[15]; // [rsp+20h] [rbp-78h] BYREF

  v4 = a3;
  v6 = 4LL * a3;
  v10 = *((_DWORD *)a2 + 16);
  v11 = v6 >> 2;
  v73 = v10;
  if ( (unsigned int)(v6 >> 2) )
  {
    v12 = v11 + 6;
    if ( (int)v11 - 1 >= 0 )
      v12 = v11 - 1;
    v13 = v12 >> 3;
    if ( v13 <= 0 )
    {
      v21 = (const int *)a4;
LABEL_84:
      switch ( ((int)v11 - 1) % 8 )
      {
        case 1:
          v72 = v21[1];
          goto LABEL_91;
        case 2:
          v71 = v21[2];
          goto LABEL_90;
        case 3:
          v70 = v21[3];
          goto LABEL_89;
        case 4:
          v69 = v21[4];
          goto LABEL_88;
        case 5:
          v68 = v21[5];
          goto LABEL_87;
        case 6:
          v67 = v21[6];
          goto LABEL_86;
        case 7:
          v67 = v21[6];
          if ( v21[7] < v67 )
            goto LABEL_20;
LABEL_86:
          v68 = v21[5];
          if ( v68 > v67 )
            goto LABEL_20;
LABEL_87:
          v69 = v21[4];
          if ( v69 > v68 )
            goto LABEL_20;
LABEL_88:
          v70 = v21[3];
          if ( v70 > v69 )
            goto LABEL_20;
LABEL_89:
          v71 = v21[2];
          if ( v71 > v70 )
            goto LABEL_20;
LABEL_90:
          v72 = v21[1];
          if ( v72 > v71 )
            goto LABEL_20;
LABEL_91:
          if ( *v21 <= v72 )
            goto LABEL_92;
          goto LABEL_20;
        default:
          goto LABEL_92;
      }
    }
    v14 = a4[7];
    if ( v14 <= (int)a4[8] )
    {
      v15 = a4[6];
      if ( v15 <= v14 )
      {
        v16 = a4[5];
        if ( v16 <= v15 )
        {
          v17 = a4[4];
          if ( v17 <= v16 )
          {
            v18 = a4[3];
            if ( v17 >= v18 )
            {
              v19 = (unsigned int)(v13 - 1);
              v20 = a4;
              v21 = (const int *)&a4[8 * v19 + 8];
              do
              {
                v27 = v20[2];
                if ( v27 > v18 )
                  break;
                v22 = v20[1];
                if ( v27 < v22 || v22 < (int)*v20 )
                  break;
                v20 += 8;
                if ( v20 == (unsigned int *)v21 )
                  goto LABEL_84;
                v23 = v20[7];
                if ( (int)v20[8] < v23 )
                  break;
                v24 = v20[6];
                if ( v23 < v24 )
                  break;
                v25 = v20[5];
                if ( v24 < v25 )
                  break;
                v26 = v20[4];
                if ( v25 < v26 )
                  break;
                v18 = v20[3];
              }
              while ( v26 >= v18 );
            }
          }
        }
      }
    }
LABEL_20:
    if ( v4 > 0x1FFFFFFFFFFFFFFELL )
LABEL_100:
      __cxa_throw_bad_array_new_length();
    v75 = v6;
    v28 = operator new[](v6);
    v29 = (char *)v28;
    if ( a3 && a4 != (unsigned int *)v28 )
    {
      if ( a3 >> 3 > 0 )
      {
        v30 = (const __m128i *)a4;
        v31 = (unsigned int)((a3 >> 3) - 1);
        v32 = v28 + 32 * v31 + 32;
        do
        {
          v33 = _mm_loadu_si128(v30 + 1);
          v28 += 32;
          v30 += 2;
          v34 = _mm_loadu_si128(v30 - 2);
          *(__m128i *)(v28 - 16) = v33;
          *(__m128i *)(v28 - 32) = v34;
        }
        while ( v32 != v28 );
        v35 = 32 * ((int)v31 + 1LL);
        a4 = (unsigned int *)((char *)a4 + v35);
        v28 = (__int64)&v29[v35];
      }
      switch ( a3 % 8 )
      {
        case 1:
          goto LABEL_34;
        case 2:
          goto LABEL_33;
        case 3:
          goto LABEL_32;
        case 4:
          goto LABEL_31;
        case 5:
          goto LABEL_30;
        case 6:
          goto LABEL_29;
        case 7:
          *(_DWORD *)(v28 + 24) = a4[6];
LABEL_29:
          *(_DWORD *)(v28 + 20) = a4[5];
LABEL_30:
          *(_DWORD *)(v28 + 16) = a4[4];
LABEL_31:
          *(_DWORD *)(v28 + 12) = a4[3];
LABEL_32:
          *(_DWORD *)(v28 + 8) = a4[2];
LABEL_33:
          *(_DWORD *)(v28 + 4) = a4[1];
LABEL_34:
          *(_DWORD *)v28 = *a4;
          break;
        default:
          break;
      }
    }
    v36 = &v29[v75];
    if ( v29 != &v29[v75] )
    {
      _BitScanReverse64(&v11, v11);
      sub_232330(v29, &v29[v75], 2 * (63LL - (int)(v11 ^ 0x3F)));
      v37 = v29 + 4;
      v38 = v29 + 4;
      if ( v75 <= 64 )
      {
        if ( v36 != v37 )
        {
          v61 = *(_DWORD *)v38;
          if ( *(_DWORD *)v38 >= *(_DWORD *)v29 )
            goto LABEL_72;
LABEL_67:
          if ( v38 != v29 )
          {
            v79 = v61;
            v77 = v37;
            memmove(v37, v29, v38 - v29);
            v61 = v79;
            v37 = v77;
          }
          *(_DWORD *)v29 = v61;
          while ( 1 )
          {
            v38 += 4;
            if ( v36 == v38 )
              break;
            v61 = *(_DWORD *)v38;
            if ( *(_DWORD *)v38 < *(_DWORD *)v29 )
              goto LABEL_67;
LABEL_72:
            v62 = *((_DWORD *)v38 - 1);
            v63 = v38 - 4;
            if ( v61 < v62 )
            {
              while ( 1 )
              {
                *((_DWORD *)v63 + 1) = v62;
                v62 = *((_DWORD *)v63 - 1);
                if ( v61 >= v62 )
                  break;
                v63 -= 4;
              }
              *(_DWORD *)v63 = v61;
            }
            else
            {
              *(_DWORD *)v38 = v61;
            }
          }
        }
      }
      else
      {
        v39 = v29 + 64;
        do
        {
          v40 = *(_DWORD *)v38;
          if ( *(_DWORD *)v38 >= *(_DWORD *)v29 )
          {
            v64 = *((_DWORD *)v38 - 1);
            v65 = v38 - 4;
            if ( v40 < v64 )
            {
              while ( 1 )
              {
                *((_DWORD *)v65 + 1) = v64;
                v64 = *((_DWORD *)v65 - 1);
                if ( v40 >= v64 )
                  break;
                v65 -= 4;
              }
              *(_DWORD *)v65 = v40;
            }
            else
            {
              *(_DWORD *)v38 = v40;
            }
          }
          else
          {
            if ( v38 != v29 )
            {
              v80 = *(_DWORD *)v38;
              v78 = v39;
              v76 = v37;
              memmove(v37, v29, v38 - v29);
              v40 = v80;
              v39 = v78;
              v37 = v76;
            }
            *(_DWORD *)v29 = v40;
          }
          v38 += 4;
        }
        while ( v39 != v38 );
        while ( v36 != v38 )
        {
          v41 = *(_DWORD *)v38;
          v42 = *((_DWORD *)v38 - 1);
          v43 = v38 - 4;
          if ( *(_DWORD *)v38 < v42 )
          {
            while ( 1 )
            {
              *((_DWORD *)v43 + 1) = v42;
              v42 = *((_DWORD *)v43 - 1);
              if ( v41 >= v42 )
                break;
              v43 -= 4;
            }
            *(_DWORD *)v43 = v41;
            v38 += 4;
          }
          else
          {
            v66 = v38;
            v38 += 4;
            *(_DWORD *)v66 = v41;
          }
        }
      }
    }
    sub_223E30(a3, (unsigned int *)v29, v73);
    v74 = v29;
  }
  else
  {
LABEL_92:
    v29 = (char *)a4;
    sub_223E30(a3, a4, v73);
    v74 = nullptr;
  }
  CoinPackedMatrix::gutsOfDestructor(this);
  if ( a3 <= 0 )
  {
    v47 = 0.0;
  }
  else
  {
    v44 = v29;
    v45 = 0;
    do
    {
      v46 = *(int *)v44;
      v44 += 4;
      v45 += *(_DWORD *)(*((_QWORD *)a2 + 7) + 4 * v46);
    }
    while ( v44 != &v29[4 * (a3 - 1) + 4] );
    v47 = (double)v45;
  }
  v48 = *((double *)this + 3) + 1.0;
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  v49 = (double)a3 * v48 + 1.0;
  v50 = (*((double *)this + 2) + 1.0) * (v47 * v48) + 100.0;
  *((_DWORD *)this + 19) = (int)v49;
  v51 = (int)v49;
  *((_DWORD *)this + 20) = (int)v50;
  if ( v51 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_100;
  *((_QWORD *)this + 7) = operator new[](4 * v51);
  v52 = *((_DWORD *)this + 19) + 1;
  if ( v52 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_100;
  v53 = (_DWORD *)operator new[](4 * v52);
  v54 = *((int *)this + 20);
  *((_QWORD *)this + 6) = v53;
  *v53 = 0;
  if ( v54 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_100;
  v55 = operator new[](4 * v54);
  v56 = *((int *)this + 20);
  *((_QWORD *)this + 5) = v55;
  if ( v56 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_100;
  *((_QWORD *)this + 4) = operator new[](8 * v56);
  v57 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 68) = v57;
  if ( a3 > 0 )
  {
    v58 = (__int64)&v29[4 * (a3 - 1) + 4];
    do
    {
      v59 = *(int *)v29;
      v60 = *(int *)(*((_QWORD *)a2 + 6) + 4 * v59);
      CoinShallowPackedVector::CoinShallowPackedVector(
        (CoinShallowPackedVector *)v81,
        *(_DWORD *)(*((_QWORD *)a2 + 7) + 4 * v59),
        (const int *)(*((_QWORD *)a2 + 5) + 4 * v60),
        (const double *)(*((_QWORD *)a2 + 4) + 8 * v60),
        0);
      CoinPackedMatrix::appendMajorVector(this, (const CoinPackedVectorBase *)v81);
      v29 += 4;
      v81[0] = off_4D1798;
      CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v81);
    }
    while ( (char *)v58 != v29 );
  }
  if ( v74 )
    operator delete[](v74);
}

