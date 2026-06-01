__int64 __fastcall CoinOslFactorization::factorize(
        CoinOslFactorization *this,
        const CoinPackedMatrix *a2,
        int *a3,
        int *a4,
        double a5)
{
  int *v6; // r14
  int *v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  int *v10; // r15
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(CoinOslFactorization *, const int *); // r8
  __int64 (__fastcall *v21)(CoinOslFactorization *); // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(CoinOslFactorization *); // rax
  __int64 (__fastcall *v24)(CoinOslFactorization *); // rax
  __int64 (__fastcall *v25)(CoinOslFactorization *); // rax
  __int64 v26; // rbp
  __int64 (__fastcall *v27)(CoinOslFactorization *); // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  int *v30; // r8
  int *v31; // rdi
  int v32; // r15d
  int *v33; // r9
  __int64 v34; // rsi
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // r11
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // xmm0_8
  int v43; // esi
  __int64 v44; // rax
  __int64 (__fastcall *v45)(CoinOslFactorization *); // rax
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // r8
  int *v49; // r9
  __int64 v50; // rax
  int *v51; // rcx
  int v52; // esi
  __int64 v53; // rdx
  bool v54; // cc
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r10
  __int64 v58; // rdx
  int v59; // r11d
  __int64 (__fastcall *v60)(CoinOslFactorization *); // rax
  int v61; // eax
  int v62; // edx
  int v63; // ecx
  char *v64; // rax
  __int64 (__fastcall *v65)(CoinOslFactorization *, const int *, int *); // rcx
  int v66; // edx
  int v67; // esi
  __int64 v68; // r8
  __int64 v69; // rdi
  int v70; // edx
  int *v71; // rcx
  __int64 v72; // rsi
  int v73; // esi
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rdx
  int v80; // esi
  int v81; // edi
  _OWORD *v82; // rax
  __int64 v83; // rdx
  _DWORD *v84; // rax
  __int64 v85; // rdx
  _OWORD *v86; // rax
  _DWORD *v87; // rax
  _QWORD *v88; // [rsp+0h] [rbp-A8h]
  unsigned int v89; // [rsp+0h] [rbp-A8h]
  char *v90; // [rsp+0h] [rbp-A8h]
  int v91; // [rsp+Ch] [rbp-9Ch]
  __int64 v92; // [rsp+10h] [rbp-98h]
  __int64 v93; // [rsp+18h] [rbp-90h]
  __int64 v94; // [rsp+20h] [rbp-88h]
  __int64 v95; // [rsp+28h] [rbp-80h]
  __int64 v96; // [rsp+30h] [rbp-78h]
  __int64 v97; // [rsp+38h] [rbp-70h]
  int *v100; // [rsp+50h] [rbp-58h]
  int v101[15]; // [rsp+6Ch] [rbp-3Ch] BYREF

  *((_DWORD *)this + 24) = 10;
  if ( a5 != 0.0 )
    *((double *)this + 17) = a5;
  v6 = *((int **)a2 + 6);
  v7 = *((int **)a2 + 7);
  v97 = *((_QWORD *)a2 + 5);
  v96 = *((_QWORD *)a2 + 4);
  v91 = *((_DWORD *)a2 + 16);
  v8 = *((int *)a2 + 17);
  if ( !*((_BYTE *)a2 + 8) )
  {
    v91 = *((_DWORD *)a2 + 17);
    v8 = *((int *)a2 + 16);
  }
  v101[0] = v8;
  if ( v8 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_115;
  v9 = (unsigned int)v101[0];
  v10 = (int *)operator new[](4 * v8);
  if ( v101[0] > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      if ( a3[v11] >= 0 )
      {
        v13 = v12++;
        v10[v13] = v11;
      }
      ++v11;
    }
    while ( (unsigned int)(v9 - 1) + 1LL != v11 );
    if ( v91 > 0 )
      goto LABEL_12;
LABEL_108:
    v14 = v12;
    v15 = 0;
    goto LABEL_16;
  }
  v12 = 0;
  if ( v91 <= 0 )
    goto LABEL_108;
LABEL_12:
  v14 = v12;
  v15 = 0;
  v16 = 0;
  do
  {
    if ( a4[v16] >= 0 )
    {
      v17 = v14++;
      v10[v17] = v16;
      v15 += v7[v16];
    }
    ++v16;
  }
  while ( (unsigned int)(v91 - 1) + 1LL != v16 );
LABEL_16:
  if ( (int)v9 >= v14 )
  {
    v18 = *(_QWORD *)this;
    v19 = (unsigned int)(3 * (v9 + v15) + 20000);
    v20 = *(__int64 (__fastcall **)(CoinOslFactorization *, const int *))(*(_QWORD *)this + 104LL);
    if ( v20 == CoinOslFactorization::setUsefulInformation )
    {
      *((_DWORD *)this + 105) = v9;
    }
    else
    {
      v89 = v19;
      ((void (__fastcall *)(CoinOslFactorization *, int *, _QWORD))v20)(this, v101, 0);
      v18 = *(_QWORD *)this;
      v9 = (unsigned int)v101[0];
      v19 = v89;
    }
    (*(void (__fastcall **)(CoinOslFactorization *, __int64, _QWORD, __int64, _QWORD))(v18 + 144))(
      this,
      v9,
      (unsigned int)v9,
      v19,
      (unsigned int)(2 * v19));
    v88 = *(_QWORD **)this;
    v21 = *(__int64 (__fastcall **)(CoinOslFactorization *))(*(_QWORD *)this + 32LL);
    if ( v21 == CoinOslFactorization::elements )
    {
      v94 = *((_QWORD *)this + 35) + 8LL;
      v22 = *(_QWORD *)this;
    }
    else
    {
      v94 = v21(this);
      v22 = *(_QWORD *)this;
      v88 = *(_QWORD **)this;
    }
    v23 = *(__int64 (__fastcall **)(CoinOslFactorization *))(v22 + 120);
    if ( v23 == CoinOslFactorization::indices )
    {
      v95 = *((_QWORD *)this + 34) + 4LL;
      v24 = (__int64 (__fastcall *)(CoinOslFactorization *))v88[10];
      if ( v24 == CoinOslFactorization::starts )
        goto LABEL_23;
    }
    else
    {
      v95 = v23(this);
      v88 = *(_QWORD **)this;
      v24 = *(__int64 (__fastcall **)(CoinOslFactorization *))(*(_QWORD *)this + 80LL);
      if ( v24 == CoinOslFactorization::starts )
      {
LABEL_23:
        v92 = *((_QWORD *)this + 19) + 4LL;
        v25 = (__int64 (__fastcall *)(CoinOslFactorization *))v88[8];
        if ( v25 == CoinOslFactorization::numberInRow )
          goto LABEL_24;
        goto LABEL_103;
      }
    }
    v92 = v24(this);
    v88 = *(_QWORD **)this;
    v25 = *(__int64 (__fastcall **)(CoinOslFactorization *))(*(_QWORD *)this + 64LL);
    if ( v25 == CoinOslFactorization::numberInRow )
    {
LABEL_24:
      v26 = *((_QWORD *)this + 20) + 4LL;
      v27 = (__int64 (__fastcall *)(CoinOslFactorization *))v88[9];
      if ( v27 == CoinOslFactorization::numberInColumn )
      {
LABEL_25:
        v93 = *((_QWORD *)this + 21) + 4LL;
        goto LABEL_26;
      }
LABEL_104:
      v93 = v27(this);
      v88 = *(_QWORD **)this;
LABEL_26:
      if ( v101[0] )
      {
        v80 = v101[0] % 8;
        v81 = v101[0] % 8;
        if ( v101[0] / 8 <= 0 )
        {
          switch ( v101[0] % 8 )
          {
            case 1:
              v84 = (_DWORD *)v26;
              goto LABEL_74;
            case 2:
              v84 = (_DWORD *)v26;
LABEL_89:
              v84[1] = 0;
              goto LABEL_74;
            case 3:
              v84 = (_DWORD *)v26;
LABEL_91:
              v84[2] = 0;
              goto LABEL_92;
            case 4:
              v84 = (_DWORD *)v26;
LABEL_94:
              v84[3] = 0;
              goto LABEL_95;
            case 5:
              v84 = (_DWORD *)v26;
              goto LABEL_97;
            case 6:
              v84 = (_DWORD *)v26;
              goto LABEL_99;
            case 7:
              v84 = (_DWORD *)v26;
LABEL_111:
              v84[6] = 0;
LABEL_99:
              v84[5] = 0;
LABEL_97:
              v84[4] = 0;
              v84[3] = 0;
LABEL_95:
              v84[2] = 0;
LABEL_92:
              v84[1] = 0;
LABEL_74:
              *v84 = 0;
              break;
            default:
              goto LABEL_113;
          }
        }
        else
        {
          v82 = (_OWORD *)v26;
          v83 = (unsigned int)(v101[0] / 8 - 1);
          do
          {
            *v82 = 0;
            v82 += 2;
            *(v82 - 1) = 0;
          }
          while ( (_OWORD *)(v26 + 32 * v83 + 32) != v82 );
          v84 = (_DWORD *)(v26 + 32 * ((int)v83 + 1LL));
          switch ( v80 )
          {
            case 1:
              goto LABEL_74;
            case 2:
              goto LABEL_89;
            case 3:
              goto LABEL_91;
            case 4:
              goto LABEL_94;
            case 5:
              goto LABEL_97;
            case 6:
              goto LABEL_99;
            case 7:
              goto LABEL_111;
            default:
              break;
          }
        }
        if ( v101[0] )
        {
          v81 = v101[0] % 8;
          if ( v101[0] / 8 <= 0 )
          {
LABEL_113:
            v87 = (_DWORD *)v93;
          }
          else
          {
            v85 = (unsigned int)(v101[0] / 8 - 1);
            v86 = (_OWORD *)v93;
            do
            {
              *v86 = 0;
              v86 += 2;
              *(v86 - 1) = 0;
            }
            while ( (_OWORD *)(v93 + 32 * v85 + 32) != v86 );
            v87 = (_DWORD *)(v93 + 32 * ((int)v85 + 1LL));
          }
          switch ( v81 )
          {
            case 1:
              goto LABEL_87;
            case 2:
              goto LABEL_86;
            case 3:
              goto LABEL_85;
            case 4:
              goto LABEL_84;
            case 5:
              goto LABEL_83;
            case 6:
              goto LABEL_82;
            case 7:
              v87[6] = 0;
LABEL_82:
              v87[5] = 0;
LABEL_83:
              v87[4] = 0;
LABEL_84:
              v87[3] = 0;
LABEL_85:
              v87[2] = 0;
LABEL_86:
              v87[1] = 0;
LABEL_87:
              *v87 = 0;
              break;
            default:
              break;
          }
        }
      }
      if ( v12 )
      {
        v28 = 0;
        do
        {
          v29 = v10[v28];
          v10[v28] = v91 + v29;
          *(_DWORD *)(v95 + 4 * v28) = v29;
          *(_DWORD *)(v92 + 4 * v28) = v28;
          *(_QWORD *)(v94 + 8 * v28) = 0xBFF0000000000000LL;
          *(_DWORD *)(v26 + 4 * v29) = 1;
          *(_DWORD *)(v93 + 4 * v28++) = 1;
        }
        while ( (unsigned int)(v12 - 1) + 1LL != v28 );
      }
      *(_DWORD *)(v92 + 4LL * v12) = v12;
      if ( v91 > 0 )
      {
        v100 = v10;
        v30 = v6;
        v31 = v7;
        v32 = v12;
        v33 = a4;
        do
        {
          if ( *v33 >= 0 )
          {
            v34 = *v30;
            v35 = *v31;
            if ( (int)v34 < (int)v34 + *v31 )
            {
              v36 = (int)v34 + 1;
              v37 = v96 + -8 * v36 + 8 * v34;
              v38 = v97 + -4 * v36 + 4 * v34;
              v39 = v95 + -4 * v36 + 4LL * v12;
              v40 = v94 + -8 * v36 + 8LL * v12;
              do
              {
                v41 = *(int *)(v38 + 4 * v36);
                v42 = *(_QWORD *)(v37 + 8 * v36);
                ++v12;
                ++*(_DWORD *)(v26 + 4 * v41);
                *(_DWORD *)(v39 + 4 * v36) = v41;
                LODWORD(v41) = v36;
                v35 = *v31;
                v43 = *v30;
                *(_QWORD *)(v40 + 8 * v36++) = v42;
              }
              while ( v35 + v43 > (int)v41 );
            }
            v44 = v32++;
            *(_DWORD *)(v93 + 4 * v44) = v35;
            *(_DWORD *)(v92 + 4 * v44 + 4) = v12;
          }
          ++v33;
          ++v30;
          ++v31;
        }
        while ( &a4[v91 - 1 + 1] != v33 );
        v10 = v100;
      }
      v45 = (__int64 (__fastcall *)(CoinOslFactorization *))v88[19];
      if ( v45 == CoinOslFactorization::preProcess )
      {
        v46 = *((_QWORD *)this + 19);
        v47 = *((_QWORD *)this + 33);
        v48 = *((_QWORD *)this + 34);
        *((_QWORD *)this + 15) = *((_QWORD *)this + 1);
        v49 = (int *)(v46 + 4);
        v50 = *((int *)this + 9);
        if ( (int)v50 > 0 )
        {
          v51 = v49;
          v52 = 0;
          do
          {
            v53 = *v51;
            ++v52;
            v54 = (int)v53 < v51[1];
            LODWORD(v55) = v53 + 1;
            *v51 = v53 + 1;
            if ( v54 )
            {
              v55 = (int)v55;
              v56 = 4 * (v53 - (int)v55);
              v57 = v48 + v56;
              v58 = v47 + v56;
              do
              {
                ++*(_DWORD *)(v57 + 4 * v55 + 4);
                v59 = v55;
                *(_DWORD *)(v58 + 4 * v55++ + 4) = v52;
              }
              while ( v51[1] > v59 );
            }
            v50 = *((int *)this + 9);
            ++v51;
          }
          while ( (int)v50 > v52 );
        }
        ++v49[v50];
        c_ekkslcf((char *)this + 104);
      }
      else
      {
        v45(this);
      }
      v60 = *(__int64 (__fastcall **)(CoinOslFactorization *))(*(_QWORD *)this + 160LL);
      if ( v60 != CoinOslFactorization::factor )
      {
        v60(this);
        if ( *((_DWORD *)this + 14) )
          goto LABEL_66;
LABEL_53:
        if ( (unsigned __int64)v101[0] <= 0x1FFFFFFFFFFFFFFELL )
        {
          v64 = (char *)operator new[](4LL * v101[0]);
          v65 = *(__int64 (__fastcall **)(CoinOslFactorization *, const int *, int *))(*(_QWORD *)this + 168LL);
          if ( v65 == CoinOslFactorization::postProcess )
          {
            v66 = *((_DWORD *)this + 105);
            v67 = *((_DWORD *)this + 9);
            *((_DWORD *)this + 100) = 0;
            *((_DWORD *)this + 13) = 0;
            v68 = *((_QWORD *)this + 24);
            v69 = *((_QWORD *)this + 39);
            *((_DWORD *)this + 92) = v66;
            v70 = 0;
            v71 = *((int **)this + 38);
            if ( v67 > 0 )
            {
              do
              {
                v72 = *v71++;
                *(_DWORD *)(v69 + 4 * v72 - 4) = v70;
                v73 = *((_DWORD *)this + 9);
                ++v70;
              }
              while ( v73 > v70 );
              if ( v73 > 0 )
              {
                v74 = 0;
                v75 = 4LL * (unsigned int)(v73 - 1) + 4;
                do
                {
                  *(_DWORD *)&v64[v74] = v10[*(int *)(v69 + 4LL * (*(_DWORD *)(v68 + v74 + 4) - 1))];
                  v74 += 4;
                }
                while ( v74 != v75 );
              }
            }
          }
          else
          {
            v90 = v64;
            v65(this, v10, (int *)v64);
            v64 = v90;
          }
          if ( v101[0] > 0 )
          {
            v76 = 0;
            v77 = (unsigned int)(v101[0] - 1) + 1LL;
            do
            {
              while ( 1 )
              {
                v78 = *(int *)&v64[4 * v76];
                if ( v91 <= (int)v78 )
                  break;
                a4[v78] = v76++;
                if ( v76 == v77 )
                  goto LABEL_65;
              }
              a3[(int)v78 - v91] = v76++;
            }
            while ( v76 != v77 );
          }
LABEL_65:
          operator delete[](v64);
          goto LABEL_66;
        }
LABEL_115:
        __cxa_throw_bad_array_new_length();
      }
      v61 = c_ekklfct((char *)this + 104);
      v62 = *((_DWORD *)this + 120);
      v63 = *((_DWORD *)this + 121);
      *((_DWORD *)this + 14) = 0;
      if ( v62 > v63 )
      {
        *((double *)this + 17) = (double)v62 * *((double *)this + 17) / (double)v63;
        if ( v61 != 5 )
        {
LABEL_50:
          if ( v61 )
          {
            *((_DWORD *)this + 14) = -1;
LABEL_66:
            operator delete[](v10);
            return *((unsigned int *)this + 14);
          }
          goto LABEL_53;
        }
      }
      else if ( v61 != 5 )
      {
        goto LABEL_50;
      }
      *((_DWORD *)this + 14) = -99;
      goto LABEL_66;
    }
LABEL_103:
    v26 = v25(this);
    v88 = *(_QWORD **)this;
    v27 = *(__int64 (__fastcall **)(CoinOslFactorization *))(*(_QWORD *)this + 72LL);
    if ( v27 == CoinOslFactorization::numberInColumn )
      goto LABEL_25;
    goto LABEL_104;
  }
  return 4294967294LL;
}

