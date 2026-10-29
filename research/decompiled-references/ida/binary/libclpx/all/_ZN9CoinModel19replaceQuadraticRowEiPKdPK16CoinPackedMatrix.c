void __fastcall CoinModel::replaceQuadraticRow(CoinModel *this, int a2, const double *a3, const CoinPackedMatrix *a4)
{
  CoinModel *v4; // r15
  int v6; // ebp
  int v7; // esi
  __int64 v8; // r15
  int v9; // eax
  double v10; // xmm0_8
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rbp
  char *v16; // kr00_8
  int v17; // edx
  int v18; // eax
  const double *v19; // rbx
  int v20; // ebp
  int i; // edx
  int v22; // eax
  CoinModel *v23; // rbx
  int v24; // ebp
  int v25; // eax
  double v26; // xmm0_8
  __int64 v27; // rdx
  int v28; // ebp
  __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // r15
  char *v32; // kr08_8
  int v33; // edx
  int v34; // eax
  const double *v35; // rbx
  int v36; // esi
  char *v37; // rbx
  int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r12
  __int64 v44; // rbp
  double v45; // xmm0_8
  int v46; // edx
  char *v47; // kr10_8
  int v48; // edx
  char *v49; // rbp
  int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // ebp
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // r13
  __int64 v57; // rax
  char *v58; // kr18_8
  unsigned int v59; // r12d
  int v60; // edx
  double v61; // xmm0_8
  int v62; // edx
  char *v63; // kr20_8
  int v64; // edx
  char *v65; // kr28_8
  int v66; // edx
  int v68[2]; // [rsp+18h] [rbp-27E0h]
  char *v69; // [rsp+20h] [rbp-27D8h]
  char *v70; // [rsp+28h] [rbp-27D0h]
  int v71; // [rsp+30h] [rbp-27C8h]
  int v72[2]; // [rsp+30h] [rbp-27C8h]
  int v73[2]; // [rsp+40h] [rbp-27B8h]
  int v74; // [rsp+48h] [rbp-27B0h]
  __int64 v75; // [rsp+48h] [rbp-27B0h]
  CoinModel *v76; // [rsp+50h] [rbp-27A8h]
  __int64 v77; // [rsp+58h] [rbp-27A0h]
  __int64 v78; // [rsp+58h] [rbp-27A0h]
  __int64 v79; // [rsp+60h] [rbp-2798h]
  __int64 v80; // [rsp+60h] [rbp-2798h]
  CoinModel *v81; // [rsp+68h] [rbp-2790h]
  _BYTE v82[4]; // [rsp+70h] [rbp-2788h] BYREF
  int v83; // [rsp+74h] [rbp-2784h]
  char s[32]; // [rsp+90h] [rbp-2768h] BYREF
  char v85[10056]; // [rsp+B0h] [rbp-2748h] BYREF

  v4 = this;
  if ( a2 < 0 )
  {
    if ( *((int *)this + 3) > 0 )
    {
      v6 = 0;
      do
      {
        v7 = v6++;
        CoinModel::setColumnObjective(this, v7, 0.0);
      }
      while ( *((_DWORD *)this + 3) > v6 );
    }
    v77 = *((_QWORD *)a4 + 4);
    v79 = *((_QWORD *)a4 + 5);
    v70 = *((char **)a4 + 6);
    *(_QWORD *)v68 = *((_QWORD *)a4 + 7);
    v74 = *((_DWORD *)a4 + 16);
    if ( *((_BYTE *)a4 + 8) )
    {
      if ( v74 > 0 )
        goto LABEL_7;
    }
    else
    {
      v74 = *((_DWORD *)a4 + 17);
      if ( v74 > 0 )
      {
LABEL_7:
        v8 = 0;
        *(_QWORD *)v73 = (unsigned int)(v74 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v71 = v8;
            v9 = *(_DWORD *)(*(_QWORD *)v68 + 4 * v8);
            v10 = a3[v8];
            if ( v9 )
              break;
            if ( v10 != 0.0 )
              CoinModel::setColumnObjective(this, v8, v10);
            if ( ++v8 == *(_QWORD *)v73 )
              goto LABEL_17;
          }
          if ( v10 == 0.0 )
          {
            v11 = *(int *)&v70[4 * v8];
            if ( (int)v11 < (int)v11 + v9 )
            {
              v12 = 0;
              v13 = (int)v11 + 1;
              v14 = v79 + 4 * v11 - 4 * v13;
              v15 = v77 + 8 * v11 - 8 * v13;
              do
              {
                sprintf(s, "%g*c%7.7d", *(double *)(v15 + 8 * v13), *(_DWORD *)(v14 + 4 * v13));
                v16 = &s[strlen(s)];
                memcpy(&v85[v12], s, v16 - s + 1);
                v17 = v13++;
                v12 += v16 - s;
              }
              while ( *(_DWORD *)&v70[4 * v8] + *(_DWORD *)(*(_QWORD *)v68 + 4 * v8) > v17 );
            }
          }
          else
          {
            v37 = v85;
            sprintf(v85, "%g", v10);
            do
            {
              v38 = *(_DWORD *)v37;
              v37 += 4;
              v39 = ~v38 & (v38 - 16843009) & 0x80808080;
            }
            while ( !v39 );
            if ( (~v38 & (v38 - 16843009) & 0x8080) == 0 )
            {
              LOBYTE(v39) = (~v38 & (v38 - 16843009) & 0x80808080) >> 16;
              LODWORD(v37) = (_DWORD)v37 + 2;
            }
            v40 = (_DWORD)v37 - (__CFADD__((_BYTE)v39, (_BYTE)v39) + 3) - (unsigned int)v85;
            v41 = *(int *)&v70[4 * v8];
            if ( (int)v41 < (int)v41 + *(_DWORD *)(*(_QWORD *)v68 + 4 * v8) )
            {
              v42 = (int)v41 + 1;
              v43 = v79 + 4 * v41 - 4LL * (int)v42;
              v44 = v77 + 8 * v41 - 8LL * (int)v42;
              while ( 1 )
              {
                while ( 1 )
                {
                  v45 = *(double *)(v44 + 8 * v42);
                  v46 = *(_DWORD *)(v43 + 4 * v42);
                  if ( v45 < 0.0 )
                    break;
                  sprintf(s, "+%g*c%7.7d", v45, v46);
                  v47 = &s[strlen(s)];
                  memcpy(&v85[v40], s, v47 - s + 1);
                  v48 = v42++;
                  if ( *(_DWORD *)(*(_QWORD *)v68 + 4 * v8) + *(_DWORD *)&v70[4 * v8] <= v48 )
                    goto LABEL_16;
                  v40 += v47 - s;
                }
                sprintf(s, "%g*c%7.7d", v45, v46);
                v65 = &s[strlen(s)];
                memcpy(&v85[v40], s, v65 - s + 1);
                v66 = v42++;
                if ( *(_DWORD *)&v70[4 * v8] + *(_DWORD *)(*(_QWORD *)v68 + 4 * v8) <= v66 )
                  break;
                v40 += v65 - s;
              }
            }
          }
LABEL_16:
          ++v8;
          CoinModel::setColumnObjective(this, v71, v85);
        }
        while ( v8 != *(_QWORD *)v73 );
LABEL_17:
        v4 = this;
        goto LABEL_18;
      }
    }
    v74 = 0;
LABEL_18:
    v18 = *((_DWORD *)v4 + 3);
    if ( v18 > v74 )
    {
      v19 = &a3[v74];
      v20 = v74;
      do
      {
        while ( *v19 == 0.0 )
        {
          ++v20;
          ++v19;
          if ( v20 >= v18 )
            return;
        }
        v36 = v20++;
        CoinModel::setColumnObjective(v4, v36, *v19);
        v18 = *((_DWORD *)v4 + 3);
        ++v19;
      }
      while ( v20 < v18 );
    }
    return;
  }
  CoinModel::firstInRow((CoinModel *)v82, (int)this);
  for ( i = v83; v83 >= 0; i = v83 )
  {
    CoinModel::deleteElement(this, a2, i);
    CoinModel::firstInRow((CoinModel *)v85, (int)this);
    CoinModelLink::operator=(v82, v85);
    CoinModelLink::~CoinModelLink((CoinModelLink *)v85);
  }
  v78 = *((_QWORD *)a4 + 4);
  v80 = *((_QWORD *)a4 + 5);
  *(_QWORD *)v72 = *((_QWORD *)a4 + 6);
  v69 = *((char **)a4 + 7);
  v22 = *((_DWORD *)a4 + 16);
  if ( !*((_BYTE *)a4 + 8) )
    v22 = *((_DWORD *)a4 + 17);
  if ( v22 <= 0 )
  {
    v24 = 0;
  }
  else
  {
    v23 = nullptr;
    v76 = (CoinModel *)((unsigned int)(v22 - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v25 = *(_DWORD *)&v69[4 * (_QWORD)v23];
        v26 = a3[(_QWORD)v23];
        if ( v25 )
          break;
        if ( v26 != 0.0 )
          CoinModel::setElement(v4, a2, (int)v23, v26);
        v24 = (_DWORD)v23 + 1;
        v23 = (CoinModel *)((char *)v23 + 1);
        if ( v76 == v23 )
          goto LABEL_41;
      }
      if ( v26 == 0.0 )
      {
        v27 = *(int *)(*(_QWORD *)v72 + 4LL * (_QWORD)v23);
        if ( (int)v27 < (int)v27 + v25 )
        {
          v81 = v4;
          v28 = 0;
          v29 = (int)v27 + 1;
          v30 = v80 + -4 * v29 + 4 * v27;
          v31 = v78 + -8 * v29 + 8 * v27;
          do
          {
            sprintf(s, "%g*c%7.7d", *(double *)(v31 + 8 * v29), *(_DWORD *)(v30 + 4 * v29));
            v32 = &s[strlen(s)];
            memcpy(&v85[v28], s, v32 - s + 1);
            v33 = v29++;
            v28 += v32 - s;
          }
          while ( *(_DWORD *)(*(_QWORD *)v72 + 4LL * (_QWORD)v23) + *(_DWORD *)&v69[4 * (_QWORD)v23] > v33 );
LABEL_39:
          v4 = v81;
        }
      }
      else
      {
        v49 = v85;
        sprintf(v85, "%g", v26);
        do
        {
          v50 = *(_DWORD *)v49;
          v49 += 4;
          v51 = ~v50 & (v50 - 16843009) & 0x80808080;
        }
        while ( !v51 );
        if ( (~v50 & (v50 - 16843009) & 0x8080) == 0 )
        {
          LOBYTE(v51) = (~v50 & (v50 - 16843009) & 0x80808080) >> 16;
          LODWORD(v49) = (_DWORD)v49 + 2;
        }
        v52 = (_DWORD)v49 - (__CFADD__((_BYTE)v51, (_BYTE)v51) + 3) - (unsigned int)v85;
        v53 = *(int *)(*(_QWORD *)v72 + 4LL * (_QWORD)v23);
        if ( (int)v53 < (int)v53 + *(_DWORD *)&v69[4 * (_QWORD)v23] )
        {
          v81 = v4;
          v54 = (int)v53 + 1;
          v55 = v54;
          v56 = v78 + -8 * v54 + 8 * v53;
          v75 = v80 + -4 * v54 + 4 * v53;
          v57 = v75;
          while ( 1 )
          {
            v61 = *(double *)(v56 + 8 * v55);
            v62 = *(_DWORD *)(v57 + 4 * v55);
            if ( v61 >= 0.0 )
            {
              sprintf(s, "+%g*c%7.7d", v61, v62);
              v58 = &s[strlen(s)];
              v59 = v52 + v58 - s;
              memcpy(&v85[v52], s, v58 - s + 1);
              v60 = v55++;
              if ( *(_DWORD *)&v69[4 * (_QWORD)v23] + *(_DWORD *)(*(_QWORD *)v72 + 4LL * (_QWORD)v23) <= v60 )
                goto LABEL_39;
            }
            else
            {
              sprintf(s, "%g*c%7.7d", v61, v62);
              v63 = &s[strlen(s)];
              v59 = v52 + v63 - s;
              memcpy(&v85[v52], s, v63 - s + 1);
              v64 = v55++;
              if ( *(_DWORD *)(*(_QWORD *)v72 + 4LL * (_QWORD)v23) + *(_DWORD *)&v69[4 * (_QWORD)v23] <= v64 )
                goto LABEL_39;
            }
            v57 = v75;
            v52 = v59;
          }
        }
      }
      CoinModel::setElement(v4, a2, (int)v23, v85);
      v24 = (_DWORD)v23 + 1;
      v23 = (CoinModel *)((char *)v23 + 1);
    }
    while ( v76 != v23 );
  }
LABEL_41:
  v34 = *((_DWORD *)v4 + 3);
  if ( v34 > v24 )
  {
    v35 = &a3[v24];
    do
    {
      while ( *v35 == 0.0 )
      {
        ++v24;
        ++v35;
        if ( v24 >= v34 )
          goto LABEL_46;
      }
      CoinModel::setElement(v4, a2, v24, *v35);
      v34 = *((_DWORD *)v4 + 3);
      ++v24;
      ++v35;
    }
    while ( v24 < v34 );
  }
LABEL_46:
  CoinModelLink::~CoinModelLink((CoinModelLink *)v82);
}

