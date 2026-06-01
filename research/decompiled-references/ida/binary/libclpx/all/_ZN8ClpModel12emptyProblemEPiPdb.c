__int64 __fastcall ClpModel::emptyProblem(
        ClpModel *this,
        int *a2,
        double *a3,
        char a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  double v18; // xmm2_8
  int v19; // r12d
  unsigned int v20; // ebp
  double *v21; // rcx
  int v22; // ecx
  int v23; // r8d
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64, double, double, double, double, double, double, double, double); // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r15
  unsigned __int64 v28; // xmm7_8
  double v29; // xmm5_8
  __int64 v30; // rdi
  double v31; // xmm0_8
  double v32; // xmm14_8
  double v33; // xmm1_8
  double *v34; // rcx
  double v35; // xmm0_8
  double *v37; // rcx
  CoinMessageHandler *v38; // rax
  CoinMessageHandler *v39; // rax
  CoinMessageHandler *v40; // rax
  __int64 v41; // rax
  void *v42; // rdi
  unsigned __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // esi
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rcx
  _BYTE *v49; // rax
  int v50; // ecx
  unsigned int v51; // r8d
  _BYTE *v52; // rdi
  unsigned int v53; // esi
  _QWORD *v54; // rsi
  _BYTE v55[64]; // [rsp+18h] [rbp-40h] BYREF

  *((_DWORD *)this + 81) = 6;
  if ( a4 )
  {
    v38 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  46,
                                  (ClpModel *)((char *)this + 416));
    v39 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v38);
    v40 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v39);
    v41 = CoinMessageHandler::operator<<(v40);
    CoinMessageHandler::operator<<(v41, 0, a5);
  }
  v15 = *((_DWORD *)this + 26);
  if ( *((_QWORD *)this + 13) )
  {
    if ( !*((_QWORD *)this + 33) )
    {
      v49 = (_BYTE *)operator new[](*((_DWORD *)this + 27) + v15);
      v15 = *((_DWORD *)this + 26);
      *((_QWORD *)this + 33) = v49;
      v50 = *((_DWORD *)this + 27) + v15;
      if ( v50 )
      {
        v51 = v50 / 8;
        if ( v50 / 8 <= 0 )
          goto LABEL_71;
        if ( v51 == 1 )
        {
          v54 = v49;
        }
        else
        {
          a5 = 0.0;
          v52 = v49;
          v53 = 0;
          do
          {
            ++v53;
            v52 += 16;
            *((_OWORD *)v52 - 1) = 0;
          }
          while ( v53 < v51 >> 1 );
          v54 = &v49[8 * (v51 & 0xFFFFFFFE)];
          if ( (v51 & 0xFFFFFFFE) == v51 )
            goto LABEL_70;
        }
        *v54 = 0;
LABEL_70:
        v49 += 8 * (int)(v51 - 1) + 8;
LABEL_71:
        switch ( v50 % 8 )
        {
          case 1:
            goto LABEL_91;
          case 2:
            goto LABEL_90;
          case 3:
            goto LABEL_89;
          case 4:
            goto LABEL_88;
          case 5:
            goto LABEL_87;
          case 6:
            goto LABEL_86;
          case 7:
            v49[6] = 0;
LABEL_86:
            v49[5] = 0;
LABEL_87:
            v49[4] = 0;
LABEL_88:
            v49[3] = 0;
LABEL_89:
            v49[2] = 0;
LABEL_90:
            v49[1] = 0;
LABEL_91:
            *v49 = 0;
            break;
          default:
            break;
        }
      }
    }
  }
  if ( v15 <= 0 )
  {
    v19 = 0;
    v18 = 0.0;
    v20 = 0;
  }
  else
  {
    v16 = 0;
    v17 = 0;
    v18 = 0.0;
    v19 = 0;
    a9 = -1.0e30;
    v20 = 0;
    a10 = -0.0;
    a12 = NAN;
    a11 = 1.0e30;
    do
    {
      *(_QWORD *)(*((_QWORD *)this + 16) + v16) = 0;
      a5 = *(double *)(*((_QWORD *)this + 18) + v16);
      a6 = *(double *)(*((_QWORD *)this + 19) + v16);
      if ( a6 < a5 )
      {
        ++v19;
        v20 = 1;
        *(_QWORD *)(*((_QWORD *)this + 14) + v16) = 0;
        a5 = *(double *)(*((_QWORD *)this + 18) + v16) - *(double *)(*((_QWORD *)this + 19) + v16);
        v18 = v18 + a5;
      }
      else
      {
        v21 = (double *)(v16 + *((_QWORD *)this + 14));
        if ( a5 <= -1.0e30 && a6 >= 1.0e30 )
        {
          *v21 = 0.0;
        }
        else if ( a5 > 0.0 || a6 < 0.0 )
        {
          *v21 = 0.0;
          ++v19;
          v20 = 1;
          a5 = -*(double *)(*((_QWORD *)this + 19) + v16);
          a6 = fmin(*(double *)(*((_QWORD *)this + 18) + v16), a5);
          v18 = v18 + a6;
        }
        else if ( fabs(a6) <= fabs(a5) )
        {
          *v21 = a6;
        }
        else
        {
          *v21 = a5;
        }
      }
      v16 += 8;
      v22 = v17 + *((_DWORD *)this + 27);
      ++v17;
      *(_BYTE *)(*((_QWORD *)this + 33) + v22) = 1;
    }
    while ( *((_DWORD *)this + 26) > v17 );
  }
  v23 = *((_DWORD *)this + 27);
  *((_QWORD *)this + 9) = 0;
  if ( v23 )
  {
    v24 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64, double, double, double, double, double, double, double, double))this
          + 20);
    v25 = 0;
    if ( v24 )
    {
      v25 = (**v24)(v24, 0, 0, v55, 0, 2, a5, a6, v18, 0.0, a9, a10, a11, a12);
      v23 = *((_DWORD *)this + 27);
    }
    if ( v23 <= 0 )
    {
      v35 = *((double *)this + 9);
      v27 = -1;
      v28 = 0;
      v23 = 0;
      v29 = 0.0;
    }
    else
    {
      v26 = 0;
      v27 = -1;
      v23 = 0;
      v28 = 0;
      v29 = 0.0;
      do
      {
        v30 = 8 * v26;
        *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v26) = *(_QWORD *)(v25 + 8 * v26);
        v31 = *(double *)(*((_QWORD *)this + 22) + 8 * v26);
        v32 = *(double *)(*((_QWORD *)this + 23) + 8 * v26);
        if ( v32 < v31 )
        {
          v37 = (double *)(v30 + *((_QWORD *)this + 15));
          if ( fabs(v32) <= fabs(v31) )
          {
            *v37 = v32;
            *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 2;
          }
          else
          {
            *v37 = v31;
            *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 3;
          }
          ++v19;
          v20 |= 1u;
          v18 = v18 + *(double *)(*((_QWORD *)this + 22) + 8 * v26) - *(double *)(*((_QWORD *)this + 23) + 8 * v26);
        }
        else
        {
          v33 = *(double *)(v25 + 8 * v26) * *(double *)this;
          v34 = (double *)(v30 + *((_QWORD *)this + 15));
          if ( v31 > -1.0e30 || v32 < 1.0e30 )
          {
            if ( v33 == 0.0 )
            {
              if ( fabs(v32) <= fabs(v31) )
              {
                *v34 = v32;
                *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 2;
              }
              else
              {
                *v34 = v31;
                *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 3;
              }
            }
            else
            {
              if ( v33 <= 0.0 )
              {
                if ( v32 >= 1.0e30 )
                {
                  *v34 = v31;
                  ++v23;
                  v20 |= 2u;
                  v27 = (int)v26;
                  v28 = 0x3FF0000000000000LL;
                  *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 3;
                  v29 = v29 + fabs(v33);
                }
                else
                {
                  *v34 = v32;
                  *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 2;
                }
              }
              else if ( v31 > -1.0e30 )
              {
                *v34 = v31;
                *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 3;
              }
              else
              {
                *v34 = v32;
                v28 = 0xBFF0000000000000LL;
                ++v23;
                v20 |= 2u;
                *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 2;
                v27 = (int)v26;
                v29 = v29 + fabs(v33);
              }
              *((double *)this + 9) = v33 * *(double *)(*((_QWORD *)this + 15) + 8 * v26) + *((double *)this + 9);
            }
          }
          else
          {
            *v34 = 0.0;
            if ( v33 != 0.0 )
            {
              ++v23;
              v28 = 0xBFF0000000000000LL;
              if ( v33 <= 0.0 )
                v28 = 0x3FF0000000000000LL;
              v20 |= 2u;
              v27 = (int)v26;
              v29 = v29 + fabs(v33);
            }
            *(_BYTE *)(*((_QWORD *)this + 33) + v26) = 0;
          }
        }
        ++v26;
      }
      while ( *((_DWORD *)this + 27) > (int)v26 );
      v35 = *((double *)this + 9);
    }
  }
  else
  {
    v35 = 0.0;
    v27 = -1;
    v28 = 0;
    v29 = 0.0;
  }
  *((double *)this + 9) = v35 / (*((double *)this + 11) * *((double *)this + 12));
  if ( a2 )
  {
    *a2 = v23;
    *a3 = v29;
    a2[1] = v19;
    a3[1] = v18;
  }
  if ( v20 == 3 )
  {
    return 4;
  }
  else if ( v20 == 2 )
  {
    v42 = *((void **)this + 27);
    if ( v42 )
      operator delete[](v42);
    v43 = *((int *)this + 27);
    if ( v43 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v44 = operator new[](8 * v43);
    v45 = *((_DWORD *)this + 27);
    *((_QWORD *)this + 27) = v44;
    if ( v45 )
    {
      if ( v45 / 8 <= 0 )
      {
        v48 = (_QWORD *)v44;
      }
      else
      {
        v46 = (_QWORD *)v44;
        v47 = (unsigned int)(v45 / 8 - 1);
        do
        {
          *v46 = 0;
          v46[1] = 0;
          v46 += 8;
          *(v46 - 6) = 0;
          *(v46 - 5) = 0;
          *(v46 - 4) = 0;
          *(v46 - 3) = 0;
          *(v46 - 2) = 0;
          *(v46 - 1) = 0;
        }
        while ( v46 != (_QWORD *)(v44 + ((v47 + 1) << 6)) );
        v48 = (_QWORD *)(v44 + (((int)v47 + 1LL) << 6));
      }
      switch ( v45 % 8 )
      {
        case 1:
          goto LABEL_79;
        case 2:
          goto LABEL_78;
        case 3:
          goto LABEL_77;
        case 4:
          goto LABEL_76;
        case 5:
          goto LABEL_75;
        case 6:
          goto LABEL_74;
        case 7:
          v48[6] = 0;
LABEL_74:
          v48[5] = 0;
LABEL_75:
          v48[4] = 0;
LABEL_76:
          v48[3] = 0;
LABEL_77:
          v48[2] = 0;
LABEL_78:
          v48[1] = 0;
LABEL_79:
          *v48 = 0;
          break;
        default:
          break;
      }
    }
    *(_QWORD *)(v44 + 8 * v27) = v28;
  }
  return v20;
}

