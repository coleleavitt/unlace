__int64 __fastcall ClpSimplexDual::gutsOfDual(ClpSimplexDual *this, int a2, double **a3, int a4, ClpDataSave *a5)
{
  int v8; // r12d
  __int64 result; // rax
  int v10; // edx
  ClpSimplexDual *v11; // r14
  CoinIndexedVector *v12; // rdi
  __int64 v13; // rdi
  char v14; // bl
  double v15; // xmm0_8
  CoinFactorization **v16; // rdi
  __int64 (__fastcall ***v17)(_QWORD, __int64); // rdi
  __int64 (__fastcall *v18)(_QWORD, __int64); // rax
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rdi
  CoinMessageHandler *v24; // rax
  CoinMessageHandler *v25; // rax
  CoinMessageHandler *v26; // rax
  CoinMessageHandler *v27; // rax
  CoinMessageHandler *v28; // rax
  double v29; // xmm0_8
  CoinMessageHandler *v30; // rax
  CoinMessageHandler *v31; // rax
  __int64 v32; // rax
  double v33; // [rsp+8h] [rbp-80h]
  double v35; // [rsp+18h] [rbp-70h]
  double v36; // [rsp+20h] [rbp-68h]
  ClpSimplexProgress *v37; // [rsp+28h] [rbp-60h]
  unsigned int v38; // [rsp+34h] [rbp-54h]
  int v40; // [rsp+3Ch] [rbp-4Ch]
  int v41[15]; // [rsp+4Ch] [rbp-3Ch] BYREF

  v8 = 0;
  *((_DWORD *)this + 84) |= 0x20000u;
  v41[0] = 0;
  v37 = (ClpSimplexDual *)((char *)this + 1408);
  result = ClpSimplexProgress::startCheck((ClpSimplexDual *)((char *)this + 1408));
  v10 = *((_DWORD *)this + 80);
  *((_DWORD *)this + 324) = 1;
  *((_DWORD *)this + 336) = 0;
  v40 = 0;
  v33 = 1.797693134862316e308;
  v36 = 0.0;
  v35 = 0.0;
  if ( v10 < 0 )
  {
    do
    {
      v11 = (ClpSimplexDual *)((char *)this + 1056);
      do
      {
        v12 = *(CoinIndexedVector **)v11;
        v11 = (ClpSimplexDual *)((char *)v11 + 8);
        CoinIndexedVector::clear(v12);
      }
      while ( (ClpSimplexDual *)((char *)this + 1088) != v11 );
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 139));
      (*(void (__fastcall **)(_QWORD, ClpSimplexDual *))(**((_QWORD **)this + 24) + 224LL))(
        *((_QWORD *)this + 24),
        this);
      if ( *((int *)this + 327) <= 100
        && *((_DWORD *)this + 77) > 2 * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27))
        && (*((_BYTE *)this + 730) & 0x10) == 0
        && a4 != 10 )
      {
        ClpSimplexDual::perturb(this);
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
        v23 = *((int **)this + 43);
        if ( v23[26] > 2 )
        {
          v24 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        (CoinMessageHandler *)v23,
                                        6,
                                        (ClpSimplexDual *)((char *)this + 416));
          v25 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v24);
          CoinMessageHandler::operator<<(v25);
          v26 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                        *((CoinMessageHandler **)this + 43),
                                        *((double *)this + 112) > 0.0);
          v27 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v26);
          CoinMessageHandler::operator<<(v27);
          v28 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                        *((CoinMessageHandler **)this + 43),
                                        *((double *)this + 111) > 0.0);
          v29 = *((double *)this + 111);
          v30 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v28);
          CoinMessageHandler::operator<<(v30);
          v31 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                        *((CoinMessageHandler **)this + 43),
                                        *((_DWORD *)this + 307) < *((_DWORD *)this + 306));
          CoinMessageHandler::operator<<(v31);
          v32 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
          CoinMessageHandler::operator<<(v32, 0, v29);
        }
      }
      v13 = *((_QWORD *)this + 161);
      if ( (*((_DWORD *)this + 84) & 0x3000000) != 0
        && v13
        && (v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13)) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 16LL))(*((_QWORD *)this + 161));
      }
      else
      {
        v14 = 0;
      }
      ClpSimplexDual::statusOfProblemInDual(this, v41, v8, *a3, a5, a2);
      v15 = *((double *)this + 112);
      v33 = fmin(v33, v15);
      if ( v15 > 100000.0 && v15 > 100000.0 * v33 && (*((_BYTE *)this + 729) & 1) == 0 )
      {
        ClpSimplexProgress::lastObjective(v37, 0);
        if ( v15 >= -1.0e10 || (ClpSimplexProgress::lastObjective(v37, 1), v15 >= 100000.0) )
        {
          if ( *((double *)this + 112) > v33 * 1.0e10 && *((int *)this + 80) < 0 )
          {
LABEL_63:
            *((_DWORD *)this + 80) = 10;
            *((_QWORD *)this + 112) = 0xC19D6F3454000000LL;
            goto LABEL_16;
          }
        }
        else if ( *((int *)this + 80) < 0 )
        {
          goto LABEL_63;
        }
      }
      if ( (*((_DWORD *)this + 84) & 0x200020) != 0 && *((_DWORD *)this + 80) == 1 && !*((_QWORD *)this + 27) && !v40 )
      {
        v40 = *((_DWORD *)this + 77);
        if ( v40 )
        {
          *((_DWORD *)this + 80) = -1;
          v40 = 1;
        }
      }
LABEL_16:
      v35 = fmax(v35, *((double *)this + 95));
      v36 = fmax(v36, *((double *)this + 96));
      if ( v14 )
        *((_DWORD *)this + 80) = 3;
      if ( a2 && (int)ClpSimplexProgress::lastIterationNumber(v37, 0) < 0 && *a3 )
        ClpSimplexDual::doEasyOnesInValuesPass(this, *a3);
      result = (__int64)a5;
      if ( *((_DWORD *)a5 + 14) )
      {
        v16 = *((CoinFactorization ***)this + 158);
        if ( v16[1] )
        {
          CoinFactorization::sparseThreshold(v16[1], 0);
          v16 = *((CoinFactorization ***)this + 158);
        }
        result = ClpFactorization::goSparse((ClpFactorization *)v16);
      }
      if ( *((int *)this + 80) >= 0 )
        break;
      result = ClpModel::hitMaximumIterations(this);
      if ( (_BYTE)result )
      {
LABEL_66:
        *((_DWORD *)this + 80) = 3;
        break;
      }
      if ( a2 == 2 )
      {
        if ( !*a3 )
          goto LABEL_66;
        if ( (***((int (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 101) >= 0 )
        {
LABEL_48:
          result = 0x6500000005LL;
          *((_QWORD *)this + 40) = 0x6500000005LL;
          break;
        }
      }
      else
      {
        v17 = *((__int64 (__fastcall ****)(_QWORD, __int64))this + 45);
        v18 = **v17;
        if ( !a2 || *a3 )
        {
          v19 = v18(v17, 101);
        }
        else
        {
          if ( (int)v18(v17, 102) >= 0 )
          {
            result = 0x6600000005LL;
            *((_QWORD *)this + 40) = 0x6600000005LL;
            break;
          }
          a2 = 0;
          v19 = (***((__int64 (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 101);
        }
        if ( v19 >= 0 )
          goto LABEL_48;
      }
      if ( (*((_BYTE *)this + 729) & 1) == 0 && fabs(*((double *)this + 9)) > 1.0e20 && *((double *)this + 111) > 1.0 )
      {
        result = *((unsigned int *)this + 80);
        if ( (int)result < 0 )
        {
          *((_DWORD *)this + 80) = 10;
          break;
        }
      }
      result = ClpSimplexDual::whileIterating(this, a3, a2);
      v20 = *((_DWORD *)this + 80);
      if ( v20 == 1 )
      {
        if ( (*((_BYTE *)this + 1344) & 8) != 0 && fabs(*((double *)this + 9)) > 1.0e10 )
        {
          *((_DWORD *)this + 80) = 10;
          v20 = 10;
        }
      }
      else if ( !v20 )
      {
        v21 = *((_QWORD *)this + 158);
        v22 = *(_QWORD *)(v21 + 8);
        if ( v22 )
          v20 = *(_DWORD *)(v22 + 68);
        else
          v20 = *(_DWORD *)(*(_QWORD *)(v21 + 16) + 52LL);
        if ( v20 )
        {
          v38 = result;
          ClpSimplex::computeDuals(this, nullptr);
          v20 = *((_DWORD *)this + 80);
          result = v38;
        }
      }
      v8 = 2 * ((_DWORD)result == -2) + 1;
    }
    while ( v20 < 0 );
  }
  *((_DWORD *)this + 84) &= ~0x20000u;
  *((double *)this + 95) = v35;
  *((double *)this + 96) = v36;
  return result;
}

