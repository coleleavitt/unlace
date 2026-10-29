__int64 __fastcall ClpPackedMatrix::allElementsInRange(
        CoinPackedMatrix **this,
        ClpModel *a2,
        double a3,
        double a4,
        int a5)
{
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // r14
  int *v10; // r11
  _DWORD *v11; // r8
  __int64 v12; // r15
  __int64 v13; // r9
  unsigned int v14; // edx
  bool v15; // cc
  int v16; // ecx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // r13d
  int v21; // r12d
  int v22; // edx
  int v23; // esi
  __int64 v24; // rcx
  double v25; // xmm2_8
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // r10
  int v30; // r14d
  ClpModel *v31; // r12
  CoinMessageHandler *v32; // rbx
  CoinMessageHandler *v33; // rax
  CoinMessageHandler *v34; // rax
  CoinMessageHandler *v35; // rax
  CoinMessageHandler *v36; // rax
  __int64 v37; // rax
  char *v38; // r10
  int v39; // r9d
  int *v40; // r11
  _DWORD *v41; // r8
  char *v42; // rax
  int v43; // edi
  int v44; // r9d
  int v45; // esi
  __int64 v46; // rax
  double v47; // xmm2_8
  unsigned __int64 v48; // rsi
  char *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  int v54; // ecx
  CoinMessageHandler *v55; // r15
  const CoinMessages *v56; // r14
  CoinMessageHandler *v57; // rax
  __int64 v58; // rax
  int v59; // eax
  CoinMessageHandler *v60; // r12
  CoinMessageHandler *v61; // rax
  __int64 v62; // rax
  double v63; // [rsp+0h] [rbp-98h]
  int v64; // [rsp+8h] [rbp-90h]
  int v65; // [rsp+10h] [rbp-88h]
  int *v66; // [rsp+10h] [rbp-88h]
  int v67; // [rsp+10h] [rbp-88h]
  int v68; // [rsp+18h] [rbp-80h]
  int v69; // [rsp+18h] [rbp-80h]
  _DWORD *v70; // [rsp+18h] [rbp-80h]
  double v71; // [rsp+28h] [rbp-70h]
  __int64 v72; // [rsp+30h] [rbp-68h]
  int v73; // [rsp+30h] [rbp-68h]
  _BYTE v76[88]; // [rsp+40h] [rbp-58h] BYREF

  v63 = a3;
  CoinPackedMatrix::setDimensions(*(this + 11), *((_DWORD *)a2 + 26), *((_DWORD *)a2 + 27));
  v7 = (__int64)*(this + 11);
  v8 = *((_DWORD *)a2 + 26);
  v9 = *(_QWORD *)(v7 + 40);
  v10 = *(int **)(v7 + 48);
  v11 = *(_DWORD **)(v7 + 56);
  v12 = *(_QWORD *)(v7 + 32);
  v13 = *(int *)(v7 + 64);
  if ( !*(_BYTE *)(v7 + 8) )
    v13 = *(int *)(v7 + 68);
  v14 = *((_DWORD *)this + 25) & 0xFFFFFFFD;
  v15 = *((_DWORD *)this + 13) <= 9;
  *((_DWORD *)this + 25) = v14;
  if ( !v15 )
    return 1;
  if ( (a5 & 0xFFFFFFFB) != 0xA )
  {
    if ( a5 != 15 )
    {
      if ( (int)v13 > 0 )
      {
        v18 = (unsigned int)(v13 - 1) + 1LL;
        v19 = 0;
        v20 = 0;
        v72 = v18;
        v65 = -1;
        v71 = 0.0;
        v21 = 0;
        while ( 1 )
        {
          v22 = *v10;
          v68 = v19;
          v23 = *v10 + v11[v19];
          if ( v10[1] != v23 )
            *((_DWORD *)this + 25) |= 2u;
          if ( v22 < v23 )
            break;
LABEL_31:
          ++v19;
          ++v10;
          if ( v72 == v19 )
          {
            v30 = v21;
            v31 = a2;
            v69 = 0;
            goto LABEL_33;
          }
        }
        a3 = *(double *)(v12 + 8LL * v22);
        LODWORD(v24) = *(_DWORD *)(v9 + 4LL * v22);
        v25 = fabs(a3);
        if ( (int)v24 < 0 || v8 <= (int)v24 )
        {
LABEL_59:
          printf("Out of range %d %d %d %g\n", v68, v22, v24, a3);
          return 0;
        }
        v26 = v22 + 1;
        v27 = v26 + (unsigned int)(v23 - v22 - 1);
        v28 = v12 + 8LL * v22 - 8 * v26;
        v29 = v9 + 4LL * v22 - 4 * v26;
        while ( 1 )
        {
          if ( a3 == 0.0 )
            *((_DWORD *)this + 25) |= 1u;
          if ( v63 > v25 )
          {
            ++v20;
          }
          else if ( a4 < v25 )
          {
            ++v21;
            if ( v65 == -1 )
            {
              v71 = v25;
              v22 = v26;
              v65 = v19;
              if ( v27 == v26 )
                goto LABEL_31;
              goto LABEL_23;
            }
          }
          v22 = v26;
          if ( v27 == v26 )
            goto LABEL_31;
LABEL_23:
          a3 = *(double *)(v28 + 8 * v26 + 8);
          LODWORD(v24) = *(_DWORD *)(v29 + 4 * v26++ + 4);
          v25 = fabs(a3);
          if ( (int)v24 < 0 || (int)v24 >= v8 )
            goto LABEL_59;
        }
      }
LABEL_9:
      if ( v63 > 0.0 )
        *((_DWORD *)this + 25) &= ~1u;
      return 1;
    }
    v70 = v11;
    v66 = v10;
    v64 = v13;
    if ( (unsigned __int64)v8 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v38 = (char *)operator new[](4LL * v8);
    v39 = v64;
    v40 = v66;
    v41 = v70;
    if ( v8 > 0 )
    {
      v42 = (char *)memset(v38, 255, 4LL * (unsigned int)(v8 - 1) + 4);
      v39 = v64;
      v40 = v66;
      v38 = v42;
      v41 = v70;
    }
    if ( v39 <= 0 )
    {
      operator delete[](v38);
      goto LABEL_9;
    }
    v73 = v39;
    v67 = -1;
    v43 = 0;
    v20 = 0;
    v68 = 0;
    v71 = 0.0;
    v44 = 0;
    do
    {
      v22 = *v40;
      v45 = *v40 + *v41;
      if ( v40[1] != v45 )
        *((_DWORD *)this + 25) |= 2u;
      if ( v22 < v45 )
      {
        v46 = v22;
        a3 = *(double *)(v12 + 8LL * v22);
        v24 = *(int *)(v9 + 4LL * v22);
        v47 = fabs(a3);
        if ( v8 <= (int)v24 || (int)v24 < 0 )
          goto LABEL_59;
        v48 = v22 + (unsigned __int64)(unsigned int)(v45 - v22 - 1);
        while ( 1 )
        {
          v49 = &v38[4 * v24];
          if ( *(_DWORD *)v49 == -1 )
            *(_DWORD *)v49 = v46;
          else
            ++v43;
          if ( a3 == 0.0 )
            *((_DWORD *)this + 25) |= 1u;
          if ( v63 > v47 )
          {
            ++v20;
          }
          else if ( a4 < v47 )
          {
            ++v44;
            if ( v67 == -1 )
            {
              v71 = a3;
              v67 = v68;
            }
          }
          v22 = v46 + 1;
          if ( v48 == v46 )
            break;
          v24 = *(int *)(v9 + 4 * v46 + 4);
          a3 = *(double *)(v12 + 8 * v46++ + 8);
          v47 = fabs(a3);
          if ( (int)v24 < 0 || (int)v24 >= v8 )
            goto LABEL_59;
        }
      }
      v50 = *v40;
      if ( (int)v50 + *v41 > (int)v50 )
      {
        v51 = (int)v50 + 1;
        v52 = v9 + 4 * (v50 - v51);
        do
        {
          v53 = *(int *)(v52 + 4 * v51);
          v54 = v51++;
          *(_DWORD *)&v38[4 * v53] = -1;
        }
        while ( *v40 + *v41 > v54 );
      }
      ++v68;
      ++v40;
      ++v41;
    }
    while ( v68 != v73 );
    v69 = v43;
    v30 = v44;
    v31 = a2;
    operator delete[](v38);
LABEL_33:
    if ( v30 )
    {
      v32 = *((CoinMessageHandler **)v31 + 43);
      CoinMessages::CoinMessages((CoinMessages *)v76, (ClpModel *)((char *)v31 + 416));
      v33 = (CoinMessageHandler *)CoinMessageHandler::message(v32, 42, (const CoinMessages *)v76);
      v34 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v33);
      v35 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v34);
      v36 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v35);
      v37 = CoinMessageHandler::operator<<(v36);
      CoinMessageHandler::operator<<(v37, 0, v71);
      CoinMessages::~CoinMessages((CoinMessages *)v76);
      return 0;
    }
    if ( v20 )
    {
      v55 = *((CoinMessageHandler **)v31 + 43);
      v56 = (ClpModel *)((char *)v31 + 416);
      CoinMessages::CoinMessages((CoinMessages *)v76, (ClpModel *)((char *)v31 + 416));
      v57 = (CoinMessageHandler *)CoinMessageHandler::message(v55, 26, (const CoinMessages *)v76);
      v58 = CoinMessageHandler::operator<<(v57);
      CoinMessageHandler::operator<<(v58, 0, a3);
      CoinMessages::~CoinMessages((CoinMessages *)v76);
      if ( !v69 )
      {
        CoinPackedMatrix::compress(*(this + 11), v63);
LABEL_69:
        v59 = *((_DWORD *)this + 25);
        if ( v63 <= 0.0 || (v59 &= ~1u, *((_DWORD *)this + 25) = v59, v20 | v69) )
        {
          *((_DWORD *)this + 25) = v59 | 2;
          return 1;
        }
        return 1;
      }
    }
    else
    {
      if ( !v69 )
        goto LABEL_9;
      v56 = (ClpModel *)((char *)v31 + 416);
    }
    v60 = *((CoinMessageHandler **)v31 + 43);
    CoinMessages::CoinMessages((CoinMessages *)v76, v56);
    v61 = (CoinMessageHandler *)CoinMessageHandler::message(v60, 27, (const CoinMessages *)v76);
    v62 = CoinMessageHandler::operator<<(v61);
    CoinMessageHandler::operator<<(v62, 0, a3);
    CoinMessages::~CoinMessages((CoinMessages *)v76);
    CoinPackedMatrix::eliminateDuplicates(*(this + 11), v63);
    goto LABEL_69;
  }
  v16 = *(_DWORD *)(v7 + 72);
  if ( v10[v13] <= v16 )
    return 1;
  if ( v16 < v10[*(int *)(v7 + 64)] )
    v14 |= 2u;
  *((_DWORD *)this + 25) = v14;
  return 1;
}

