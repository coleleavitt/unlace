__int64 __fastcall ClpSimplexDual::setupForStrongBranching(
        ClpSimplexDual *this,
        double *a2,
        int a3,
        int a4,
        char a5,
        double a6)
{
  __int64 v9; // r12
  int v10; // r14d
  CoinFactorization *v11; // rdi
  int v12; // eax
  char *v13; // r11
  __int64 v14; // r15
  char *v15; // r10
  char *v16; // r9
  char *v17; // r8
  char *v18; // rdi
  char *v19; // r14
  int v20; // esi
  __int64 v21; // r13
  bool v22; // zf
  int v23; // ecx
  bool v24; // r12
  __int64 *v25; // rdx
  char *v26; // rax
  __int64 v27; // xmm0_8
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  char *v31; // rdx
  unsigned int v32; // esi
  __int64 v33; // rax
  char *v34; // r12
  __int64 v35; // rax
  unsigned int v36; // r11d
  __int64 v37; // rax
  char *v38; // r11
  char *v39; // rax
  signed int v40; // esi
  __int64 v41; // rax
  _QWORD *v42; // r14
  char *v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // r13
  __int64 v46; // xmm0_8
  __int64 v47; // r13
  char *v48; // r13
  char *v49; // rax
  __int64 *v50; // rdx
  __int64 v51; // r11
  __int64 v52; // xmm0_8
  __int64 v53; // r11
  _QWORD *v54; // r9
  char *v55; // rax
  __int64 *v56; // rdx
  __int64 v57; // r11
  __int64 v58; // xmm0_8
  __int64 v59; // r11
  char *v60; // rcx
  unsigned int v61; // r9d
  __int64 v62; // r13
  char *v63; // rdx
  const __m128i *v64; // rax
  __int64 v65; // r9
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 result; // rax
  int v70; // eax
  int v71; // edx
  int v72; // r15d
  int v73; // eax
  CoinMessageHandler *v74; // rax
  __int64 v75; // rax
  __int64 v76; // r11
  char *v77; // rax
  char v78; // r13
  char *v79; // rax
  int *v80; // rdx
  int v81; // r10d
  __int64 v82; // [rsp+0h] [rbp-68h]
  __int64 v83; // [rsp+8h] [rbp-60h]
  int v84; // [rsp+18h] [rbp-50h]
  double v85[8]; // [rsp+28h] [rbp-40h] BYREF

  v9 = a3;
  v10 = *((_DWORD *)this + 84);
  if ( a5 )
  {
    v70 = *((_DWORD *)this + 84);
    v71 = *((_DWORD *)this + 26);
    v72 = *((_DWORD *)this + 74);
    BYTE1(v70) = BYTE1(v10) | 0x40;
    *((_DWORD *)this + 84) = v70;
    *((_DWORD *)this + 74) = v71 + *((_DWORD *)this + 27) + 100;
    ClpSimplexDual::dual(this, 0, 7);
    v73 = *((_DWORD *)this + 80);
    if ( v73 == 10 )
    {
      ClpSimplex::dual(this, 0, 7);
      v73 = *((_DWORD *)this + 80);
    }
    *((_DWORD *)this + 74) = v72;
    *((_DWORD *)this + 84) = v10;
    if ( v73 )
      return 0;
    if ( *((_QWORD *)this + 150) )
      goto LABEL_8;
  }
  else
  {
    *((_DWORD *)this + 80) = 0;
  }
  *((_DWORD *)this + 325) = -1;
  if ( (v10 & 0x1000) == 0 )
  {
    ClpSimplex::createRim(this, 63, 1, 0);
    v11 = *(CoinFactorization **)(*((_QWORD *)this + 158) + 8LL);
    goto LABEL_5;
  }
  ClpSimplex::createRim(this, 63, 1, 7);
  v29 = *((_QWORD *)this + 158);
  v11 = *(CoinFactorization **)(v29 + 8);
  if ( (*((_DWORD *)this + 79) & 0x202) != 0x202 || **((int **)this + 157) < 0 )
  {
LABEL_5:
    if ( !v11 )
    {
LABEL_7:
      v12 = ClpSimplex::internalFactorize(this, 0);
      if ( v12 > 0 && *((_DWORD *)this + 26) >= v12 )
      {
        v74 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      20,
                                      (ClpSimplexDual *)((char *)this + 416));
        v75 = CoinMessageHandler::operator<<(v74);
        CoinMessageHandler::operator<<(v75, 0, a6);
      }
      goto LABEL_8;
    }
LABEL_6:
    a6 = 1.0e-13;
    CoinFactorization::zeroTolerance(v11, 1.0e-13);
    goto LABEL_7;
  }
  v30 = *((_DWORD *)this + 26);
  if ( v11 )
  {
    if ( *((_DWORD *)v11 + 8) != v30 )
      goto LABEL_6;
  }
  else if ( *(_DWORD *)(*(_QWORD *)(v29 + 16) + 36LL) != v30 )
  {
    goto LABEL_7;
  }
LABEL_8:
  ClpSimplexDual::changeBounds(this, 3, nullptr, v85);
  v13 = (char *)(a2 + 1);
  v14 = (int)v9 + a4;
  v82 = 2 * a4;
  v15 = (char *)&a2[v14 + 1];
  v16 = &v15[8 * v14];
  v17 = &v16[8 * v14];
  v18 = &v17[16 * a4 + 8 * v14];
  v83 = v82 + v9 + 3 * (int)v9;
  v19 = &v18[4 * v83 + 4];
  *a2 = (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this;
  v20 = *((_DWORD *)this + 26);
  v21 = *((_QWORD *)this + 150);
  v22 = *((_DWORD *)this + 27) + v20 == 0;
  v23 = *((_DWORD *)this + 27) + v20;
  v24 = v22;
  if ( (double *)v21 != a2 + 1 && *((_DWORD *)this + 27) + v20 )
  {
    if ( v23 >> 3 > 0 )
    {
      v25 = *((__int64 **)this + 150);
      v84 = (v23 >> 3) - 1;
      v26 = (char *)(a2 + 1);
      do
      {
        v27 = *v25;
        v26 += 64;
        v25 += 8;
        *((_QWORD *)v26 - 8) = v27;
        *((_QWORD *)v26 - 7) = *(v25 - 7);
        *((_QWORD *)v26 - 6) = *(v25 - 6);
        *((_QWORD *)v26 - 5) = *(v25 - 5);
        *((_QWORD *)v26 - 4) = *(v25 - 4);
        *((_QWORD *)v26 - 3) = *(v25 - 3);
        *((_QWORD *)v26 - 2) = *(v25 - 2);
        *((_QWORD *)v26 - 1) = *(v25 - 1);
      }
      while ( v26 != (char *)&a2[8 * (unsigned __int64)(unsigned int)v84 + 9] );
      v28 = (v84 + 1LL) << 6;
      v21 += v28;
      v13 += v28;
    }
    switch ( v23 % 8 )
    {
      case 1:
        goto LABEL_26;
      case 2:
        goto LABEL_25;
      case 3:
        goto LABEL_24;
      case 4:
        goto LABEL_23;
      case 5:
        goto LABEL_22;
      case 6:
        goto LABEL_21;
      case 7:
        *((_QWORD *)v13 + 6) = *(_QWORD *)(v21 + 48);
LABEL_21:
        *((_QWORD *)v13 + 5) = *(_QWORD *)(v21 + 40);
LABEL_22:
        *((_QWORD *)v13 + 4) = *(_QWORD *)(v21 + 32);
LABEL_23:
        *((_QWORD *)v13 + 3) = *(_QWORD *)(v21 + 24);
LABEL_24:
        *((_QWORD *)v13 + 2) = *(_QWORD *)(v21 + 16);
LABEL_25:
        *((_QWORD *)v13 + 1) = *(_QWORD *)(v21 + 8);
LABEL_26:
        *(_QWORD *)v13 = *(_QWORD *)v21;
        break;
      default:
        break;
    }
  }
  v31 = *((char **)this + 33);
  if ( v31 != v19 && !v22 )
  {
    v32 = v23 >> 3;
    if ( v23 >> 3 > 0 )
    {
      v33 = 2 * (v82 + 4 * v14);
      v34 = (char *)a2 + 4 * v83 + 4 * v33 + 12;
      if ( (v34 >= v31 + 16 || v31 >= (char *)a2 + 4 * v83 + 4 * v33 + 28) && v32 > 1 )
      {
        v35 = 0;
        v36 = 0;
        do
        {
          ++v36;
          *(__m128i *)&v34[v35] = _mm_loadu_si128((const __m128i *)&v31[v35]);
          v35 += 16;
        }
        while ( v36 < v32 >> 1 );
        v37 = 8LL * (v32 & 0xFFFFFFFE);
        v38 = &v31[v37];
        v39 = &v19[v37];
        if ( v32 != (v32 & 0xFFFFFFFE) )
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
        v40 = v32 - 1;
      }
      else
      {
        v40 = v32 - 1;
        v76 = (__int64)&v18[4 * v83 + 4];
        v77 = *((char **)this + 33);
        do
        {
          v78 = *v77;
          v77 += 8;
          v76 += 8;
          *(_BYTE *)(v76 - 8) = v78;
          *(_BYTE *)(v76 - 7) = *(v77 - 7);
          *(_BYTE *)(v76 - 6) = *(v77 - 6);
          *(_BYTE *)(v76 - 5) = *(v77 - 5);
          *(_BYTE *)(v76 - 4) = *(v77 - 4);
          *(_BYTE *)(v76 - 3) = *(v77 - 3);
          *(_BYTE *)(v76 - 2) = *(v77 - 2);
          *(_BYTE *)(v76 - 1) = *(v77 - 1);
        }
        while ( &v31[8 * v40 + 8] != v77 );
      }
      v41 = 8LL * v40 + 8;
      v31 += v41;
      v19 += v41;
    }
    switch ( v23 % 8 )
    {
      case 1:
        goto LABEL_45;
      case 2:
        goto LABEL_44;
      case 3:
        goto LABEL_43;
      case 4:
        goto LABEL_42;
      case 5:
        goto LABEL_41;
      case 6:
        goto LABEL_40;
      case 7:
        v19[6] = v31[6];
LABEL_40:
        v19[5] = v31[5];
LABEL_41:
        v19[4] = v31[4];
LABEL_42:
        v19[3] = v31[3];
LABEL_43:
        v19[2] = v31[2];
LABEL_44:
        v19[1] = v31[1];
LABEL_45:
        *v19 = *v31;
        break;
      default:
        break;
    }
    v20 = *((_DWORD *)this + 26);
    v23 = *((_DWORD *)this + 27) + v20;
    v24 = v23 == 0;
  }
  v42 = *((_QWORD **)this + 123);
  if ( v42 != (_QWORD *)v15 && !v24 )
  {
    if ( v23 >> 3 > 0 )
    {
      v43 = (char *)&a2[v14 + 1];
      v44 = *((__int64 **)this + 123);
      v45 = (unsigned int)((v23 >> 3) - 1);
      do
      {
        v46 = *v44;
        v44 += 8;
        v43 += 64;
        *((_QWORD *)v43 - 8) = v46;
        *((_QWORD *)v43 - 7) = *(v44 - 7);
        *((_QWORD *)v43 - 6) = *(v44 - 6);
        *((_QWORD *)v43 - 5) = *(v44 - 5);
        *((_QWORD *)v43 - 4) = *(v44 - 4);
        *((_QWORD *)v43 - 3) = *(v44 - 3);
        *((_QWORD *)v43 - 2) = *(v44 - 2);
        *((_QWORD *)v43 - 1) = *(v44 - 1);
      }
      while ( v44 != &v42[8 * v45 + 8] );
      v47 = ((int)v45 + 1LL) << 6;
      v42 = (_QWORD *)((char *)v42 + v47);
      v15 += v47;
    }
    switch ( v23 % 8 )
    {
      case 1:
        goto LABEL_60;
      case 2:
        goto LABEL_59;
      case 3:
        goto LABEL_58;
      case 4:
        goto LABEL_57;
      case 5:
        goto LABEL_56;
      case 6:
        goto LABEL_55;
      case 7:
        *((_QWORD *)v15 + 6) = v42[6];
LABEL_55:
        *((_QWORD *)v15 + 5) = v42[5];
LABEL_56:
        *((_QWORD *)v15 + 4) = v42[4];
LABEL_57:
        *((_QWORD *)v15 + 3) = v42[3];
LABEL_58:
        *((_QWORD *)v15 + 2) = v42[2];
LABEL_59:
        *((_QWORD *)v15 + 1) = v42[1];
LABEL_60:
        *(_QWORD *)v15 = *v42;
        break;
      default:
        break;
    }
  }
  v48 = *((char **)this + 126);
  if ( v48 != v16 && !v24 )
  {
    if ( v23 >> 3 > 0 )
    {
      v49 = v16;
      v50 = *((__int64 **)this + 126);
      v51 = (unsigned int)((v23 >> 3) - 1);
      do
      {
        v52 = *v50;
        v49 += 64;
        v50 += 8;
        *((_QWORD *)v49 - 8) = v52;
        *((_QWORD *)v49 - 7) = *(v50 - 7);
        *((_QWORD *)v49 - 6) = *(v50 - 6);
        *((_QWORD *)v49 - 5) = *(v50 - 5);
        *((_QWORD *)v49 - 4) = *(v50 - 4);
        *((_QWORD *)v49 - 3) = *(v50 - 3);
        *((_QWORD *)v49 - 2) = *(v50 - 2);
        *((_QWORD *)v49 - 1) = *(v50 - 1);
      }
      while ( v49 != &v16[64 * v51 + 64] );
      v53 = ((int)v51 + 1LL) << 6;
      v48 += v53;
      v16 += v53;
    }
    switch ( v23 % 8 )
    {
      case 1:
        goto LABEL_74;
      case 2:
        goto LABEL_73;
      case 3:
        goto LABEL_72;
      case 4:
        goto LABEL_71;
      case 5:
        goto LABEL_70;
      case 6:
        goto LABEL_69;
      case 7:
        *((_QWORD *)v16 + 6) = *((_QWORD *)v48 + 6);
LABEL_69:
        *((_QWORD *)v16 + 5) = *((_QWORD *)v48 + 5);
LABEL_70:
        *((_QWORD *)v16 + 4) = *((_QWORD *)v48 + 4);
LABEL_71:
        *((_QWORD *)v16 + 3) = *((_QWORD *)v48 + 3);
LABEL_72:
        *((_QWORD *)v16 + 2) = *((_QWORD *)v48 + 2);
LABEL_73:
        *((_QWORD *)v16 + 1) = *((_QWORD *)v48 + 1);
LABEL_74:
        *(_QWORD *)v16 = *(_QWORD *)v48;
        break;
      default:
        break;
    }
  }
  v54 = *((_QWORD **)this + 129);
  if ( v54 != (_QWORD *)v17 && !v24 )
  {
    if ( v23 >> 3 > 0 )
    {
      v55 = v17;
      v56 = *((__int64 **)this + 129);
      v57 = (unsigned int)((v23 >> 3) - 1);
      do
      {
        v58 = *v56;
        v55 += 64;
        v56 += 8;
        *((_QWORD *)v55 - 8) = v58;
        *((_QWORD *)v55 - 7) = *(v56 - 7);
        *((_QWORD *)v55 - 6) = *(v56 - 6);
        *((_QWORD *)v55 - 5) = *(v56 - 5);
        *((_QWORD *)v55 - 4) = *(v56 - 4);
        *((_QWORD *)v55 - 3) = *(v56 - 3);
        *((_QWORD *)v55 - 2) = *(v56 - 2);
        *((_QWORD *)v55 - 1) = *(v56 - 1);
      }
      while ( &v17[64 * v57 + 64] != v55 );
      v59 = ((int)v57 + 1LL) << 6;
      v54 = (_QWORD *)((char *)v54 + v59);
      v17 += v59;
    }
    switch ( v23 % 8 )
    {
      case 1:
        goto LABEL_88;
      case 2:
        goto LABEL_87;
      case 3:
        goto LABEL_86;
      case 4:
        goto LABEL_85;
      case 5:
        goto LABEL_84;
      case 6:
        goto LABEL_83;
      case 7:
        *((_QWORD *)v17 + 6) = v54[6];
LABEL_83:
        *((_QWORD *)v17 + 5) = v54[5];
LABEL_84:
        *((_QWORD *)v17 + 4) = v54[4];
LABEL_85:
        *((_QWORD *)v17 + 3) = v54[3];
LABEL_86:
        *((_QWORD *)v17 + 2) = v54[2];
LABEL_87:
        *((_QWORD *)v17 + 1) = v54[1];
LABEL_88:
        *(_QWORD *)v17 = *v54;
        break;
      default:
        break;
    }
  }
  v60 = *((char **)this + 157);
  if ( v20 && v60 != v18 )
  {
    v61 = v20 >> 3;
    if ( v20 >> 3 > 0 )
    {
      v62 = v82 + 3 * v14;
      v63 = (char *)&a2[v14 + 1 + v62];
      if ( (v63 >= v60 + 32 || v60 >= (char *)&a2[v14 + 5 + v62]) && v61 > 1 )
      {
        v64 = *((const __m128i **)this + 157);
        v65 = v61 - 1;
        do
        {
          v66 = _mm_loadu_si128(v64);
          v64 += 2;
          v63 += 32;
          v67 = _mm_loadu_si128(v64 - 1);
          *((__m128i *)v63 - 2) = v66;
          *((__m128i *)v63 - 1) = v67;
        }
        while ( &v60[32 * v65 + 32] != (char *)v64 );
      }
      else
      {
        v79 = v18;
        v80 = *((int **)this + 157);
        v65 = v61 - 1;
        do
        {
          v81 = *v80;
          v79 += 32;
          v80 += 8;
          *((_DWORD *)v79 - 8) = v81;
          *((_DWORD *)v79 - 7) = *(v80 - 7);
          *((_DWORD *)v79 - 6) = *(v80 - 6);
          *((_DWORD *)v79 - 5) = *(v80 - 5);
          *((_DWORD *)v79 - 4) = *(v80 - 4);
          *((_DWORD *)v79 - 3) = *(v80 - 3);
          *((_DWORD *)v79 - 2) = *(v80 - 2);
          *((_DWORD *)v79 - 1) = *(v80 - 1);
        }
        while ( &v18[32 * v65 + 32] != v79 );
      }
      v68 = 32 * ((int)v65 + 1LL);
      v60 += v68;
      v18 += v68;
    }
    switch ( v20 % 8 )
    {
      case 1:
        goto LABEL_104;
      case 2:
        goto LABEL_103;
      case 3:
        goto LABEL_102;
      case 4:
        goto LABEL_101;
      case 5:
        goto LABEL_100;
      case 6:
        goto LABEL_99;
      case 7:
        *((_DWORD *)v18 + 6) = *((_DWORD *)v60 + 6);
LABEL_99:
        *((_DWORD *)v18 + 5) = *((_DWORD *)v60 + 5);
LABEL_100:
        *((_DWORD *)v18 + 4) = *((_DWORD *)v60 + 4);
LABEL_101:
        *((_DWORD *)v18 + 3) = *((_DWORD *)v60 + 3);
LABEL_102:
        *((_DWORD *)v18 + 2) = *((_DWORD *)v60 + 2);
LABEL_103:
        *((_DWORD *)v18 + 1) = *((_DWORD *)v60 + 1);
LABEL_104:
        *(_DWORD *)v18 = *(_DWORD *)v60;
        break;
      default:
        break;
    }
  }
  result = *((_QWORD *)this + 158);
  *((_QWORD *)this + 158) = 0;
  return result;
}

