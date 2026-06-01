__int64 __fastcall ClpSimplexDual::fastDual(ClpSimplexDual *this, char a2)
{
  int v3; // eax
  __int64 v4; // xmm0_8
  bool v5; // zf
  int v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // eax
  ClpFactorization *v10; // rax
  CoinFactorization *v11; // rdi
  int v12; // ecx
  int v13; // esi
  int v14; // r15d
  int v15; // r14d
  CoinIndexedVector **v16; // r13
  CoinIndexedVector **v17; // r12
  CoinIndexedVector **v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v24; // ebx
  int v25; // eax
  double v26; // xmm1_8
  int *v28; // rdi
  CoinMessageHandler *v29; // rax
  CoinMessageHandler *v30; // rax
  CoinMessageHandler *v31; // rax
  CoinMessageHandler *v32; // rax
  CoinMessageHandler *v33; // rax
  double v34; // xmm0_8
  CoinMessageHandler *v35; // rax
  CoinMessageHandler *v36; // rax
  __int64 v37; // rax
  unsigned __int8 v38; // [rsp+23h] [rbp-F5h]
  int v39; // [rsp+24h] [rbp-F4h]
  __int64 v40; // [rsp+28h] [rbp-F0h]
  int v41; // [rsp+3Ch] [rbp-DCh] BYREF
  _BYTE v42[80]; // [rsp+40h] [rbp-D8h] BYREF
  double *v43[17]; // [rsp+90h] [rbp-88h] BYREF

  *((_DWORD *)this + 336) = 0;
  *((_DWORD *)this + 325) = -1;
  v38 = a2 ^ 1;
  v3 = *((_DWORD *)this + 84);
  v4 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 81) = 0;
  *((_QWORD *)this + 90) = v4;
  v5 = a2 == 0;
  v6 = *((_DWORD *)this + 340);
  if ( v5 )
    v3 |= 0x100000u;
  v7 = v3;
  BYTE1(v7) = BYTE1(v3) | 0x40;
  v39 = *((_DWORD *)this + 340);
  *((_DWORD *)this + 84) = v7;
  if ( (v3 & 0x800) != 0 )
  {
    if ( !v6 )
      *((_DWORD *)this + 340) = 20;
  }
  else
  {
    *((_DWORD *)this + 340) = 0;
  }
  ClpSimplex::saveData((ClpSimplex *)v42);
  v8 = *((_DWORD *)this + 84);
  *(_OWORD *)((char *)this + 872) = *(_OWORD *)((char *)this + 24);
  v9 = v8 | 0x20000;
  *((_DWORD *)this + 84) = v8 | 0x20000;
  v40 = *((_QWORD *)this + 98);
  if ( *((double *)this + 97) != -1.0 )
  {
    *((_QWORD *)this + 97) = 0x3FF0000000000000LL;
    if ( (v8 & 0x80000) != 0 )
      goto LABEL_7;
LABEL_35:
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
    v9 = *((_DWORD *)this + 84);
    goto LABEL_7;
  }
  if ( (v8 & 0x80000) == 0 )
    goto LABEL_35;
LABEL_7:
  *((_DWORD *)this + 335) = 0;
  *((_DWORD *)this + 80) = -1;
  *((_DWORD *)this + 77) = 0;
  if ( (v9 & 0x80000) != 0 )
  {
    v12 = -1;
  }
  else
  {
    v10 = *((ClpFactorization **)this + 158);
    v11 = *((CoinFactorization **)v10 + 1);
    if ( v11 )
    {
      CoinFactorization::sparseThreshold(v11, 0);
      v10 = *((ClpFactorization **)this + 158);
    }
    ClpFactorization::goSparse(v10);
    v12 = *((_DWORD *)this + 80);
  }
  v13 = *((_DWORD *)this + 74);
  v41 = 0;
  *((_DWORD *)this + 320) = 0;
  v14 = 0;
  v15 = v13 / 10;
LABEL_12:
  if ( v12 >= 0 )
  {
LABEL_28:
    if ( v12 <= 2 )
    {
      v21 = *((_QWORD *)this + 158);
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 ? *(_DWORD *)(v22 + 68) : *(_DWORD *)(*(_QWORD *)(v21 + 16) + 52LL) )
      {
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
        ClpSimplex::computeDuals(this, nullptr);
      }
    }
    v24 = 0;
    v16 = (CoinIndexedVector **)((char *)this + 1056);
    v17 = (CoinIndexedVector **)((char *)this + 1088);
  }
  else
  {
    while ( 1 )
    {
      v16 = (CoinIndexedVector **)((char *)this + 1056);
      v17 = (CoinIndexedVector **)((char *)this + 1088);
      v18 = (CoinIndexedVector **)((char *)this + 1056);
      do
        CoinIndexedVector::clear(*v18++);
      while ( v18 != v17 );
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 139));
      (*(void (__fastcall **)(_QWORD, ClpSimplexDual *))(**((_QWORD **)this + 24) + 224LL))(
        *((_QWORD *)this + 24),
        this);
      if ( (*((_BYTE *)this + 338) & 8) != 0 )
      {
        v19 = *((_DWORD *)this + 182);
        if ( (v19 & 0x800) == 0
          && *((int *)this + 327) <= 100
          && *((_DWORD *)this + 77) > 2 * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27))
          && (v19 & 0x100000) == 0 )
        {
          ClpSimplexDual::perturb(this);
          ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
          v28 = *((int **)this + 43);
          if ( v28[26] > 2 )
          {
            v29 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          (CoinMessageHandler *)v28,
                                          6,
                                          (ClpSimplexDual *)((char *)this + 416));
            v30 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v29);
            CoinMessageHandler::operator<<(v30);
            v31 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                          *((CoinMessageHandler **)this + 43),
                                          *((double *)this + 112) > 0.0);
            v32 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v31);
            CoinMessageHandler::operator<<(v32);
            v33 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                          *((CoinMessageHandler **)this + 43),
                                          *((double *)this + 111) > 0.0);
            v34 = *((double *)this + 111);
            v35 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v33);
            CoinMessageHandler::operator<<(v35);
            v36 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                          *((CoinMessageHandler **)this + 43),
                                          *((_DWORD *)this + 307) < *((_DWORD *)this + 306));
            CoinMessageHandler::operator<<(v36);
            v37 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
            CoinMessageHandler::operator<<(v37, 0, v34);
          }
        }
      }
      ClpSimplexDual::statusOfProblemInDual(this, &v41, v14, nullptr, (ClpDataSave *)v42, 0);
      if ( v15 > 0 && (*((double *)this + 96) > 0.001 || *((double *)this + 95) > 0.001) )
      {
        v15 = -6;
      }
      else if ( --v15 < -10 )
      {
        break;
      }
      v12 = *((_DWORD *)this + 80);
      v14 = 1;
      if ( v12 >= 0 )
        goto LABEL_12;
      v43[0] = nullptr;
      v20 = ClpSimplexDual::whileIterating(this, v43, 0);
      if ( ((v20 < 0) & v38) != 0 || v20 == 3 )
        break;
      v12 = *((_DWORD *)this + 80);
      v14 = 2 * (v20 == -2) + 1;
      if ( v12 >= 0 )
        goto LABEL_28;
    }
    *((_DWORD *)this + 80) = 3;
    v24 = 1;
  }
  do
    CoinIndexedVector::clear(*v16++);
  while ( v17 != v16 );
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 139));
  *((_DWORD *)this + 84) &= 0xFFEFBFFF;
  ClpDataSave::ClpDataSave((ClpDataSave *)v43, (const ClpDataSave *)v42);
  ClpSimplex::restoreData();
  ClpDataSave::~ClpDataSave((ClpDataSave *)v43);
  *((_DWORD *)this + 84) &= ~0x20000u;
  *((_QWORD *)this + 98) = v40;
  *((_DWORD *)this + 340) = v39;
  v25 = *((_DWORD *)this + 80);
  if ( v25 )
  {
    if ( v25 == 3 )
      *((double *)this + 9) = fmax(*((double *)this + 90), *((double *)this + 9) - *((double *)this + 87));
  }
  else
  {
    v26 = fabs(*((double *)this + 1));
    if ( v26 < 1.0e30
      && (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this > *((double *)this + 1)
                                                                                             + 0.0000001
                                                                                             + v26 * 0.00000001 )
    {
      *((_QWORD *)this + 40) = 0x100000001LL;
    }
  }
  ClpDataSave::~ClpDataSave((ClpDataSave *)v42);
  return v24;
}

