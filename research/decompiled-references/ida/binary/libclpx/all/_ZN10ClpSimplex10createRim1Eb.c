__int64 __fastcall ClpSimplex::createRim1(ClpSimplex *this, char a2)
{
  int v2; // ecx
  __int64 result; // rax
  __int64 v4; // r8
  double v5; // xmm5_8
  __int64 v6; // rsi
  int v7; // edx
  __int64 v8; // rcx
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm4_8
  double *v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  double v15; // xmm0_8
  double v16; // xmm1_8
  double v17; // xmm4_8
  double *v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  double v21; // xmm0_8
  double v22; // xmm1_8
  double *v23; // rcx
  double *v24; // rcx
  double *v25; // rsi
  double v26; // xmm4_8
  double v27; // xmm1_8
  double *v28; // rcx
  double *v29; // r9
  double v30; // xmm4_8
  double v31; // xmm1_8
  _QWORD *v32; // r8
  int v33; // ecx
  __int64 v34; // rsi
  bool v35; // zf
  int v36; // ecx
  _QWORD *v37; // r10
  __int64 *v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // xmm0_8
  __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 *v43; // rsi
  __int64 *v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // xmm0_8
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rcx
  double v50; // xmm0_8
  double v51; // xmm1_8
  double *v52; // rcx
  double *v53; // rcx
  double *v54; // rsi
  double v55; // xmm4_8
  double v56; // xmm1_8
  double *v57; // rcx
  double *v58; // rsi
  double v59; // xmm11_8
  double v60; // xmm1_8
  int v61; // edx
  __int64 v62; // rcx
  double v63; // xmm0_8
  double v64; // xmm1_8
  double *v65; // rcx
  double *v66; // rcx
  double *v67; // rsi
  double v68; // xmm11_8
  double v69; // xmm1_8
  int v70; // edx
  __int64 v71; // rcx
  double v72; // xmm0_8
  double v73; // xmm1_8
  double *v74; // rcx
  double *v75; // rcx
  double *v76; // rsi
  double v77; // xmm4_8
  double v78; // xmm1_8

  v2 = *((_DWORD *)this + 26);
  result = *((unsigned int *)this + 27);
  if ( (*((_BYTE *)this + 338) & 1) != 0 )
  {
    v32 = *((_QWORD **)this + 123);
    v33 = *((_DWORD *)this + 338) + v2;
    v34 = *((_DWORD *)this + 120) + *((_DWORD *)this + 121);
    v35 = (_DWORD)result + v33 == 0;
    v36 = result + v33;
    v37 = &v32[v34];
    if ( v32 != &v32[v34] && !v35 )
    {
      if ( v36 >> 3 > 0 )
      {
        v38 = &v32[v34];
        v39 = *((_QWORD **)this + 123);
        do
        {
          v40 = *v38;
          v39 += 8;
          v38 += 8;
          *(v39 - 8) = v40;
          *(v39 - 7) = *(v38 - 7);
          *(v39 - 6) = *(v38 - 6);
          *(v39 - 5) = *(v38 - 5);
          *(v39 - 4) = *(v38 - 4);
          *(v39 - 3) = *(v38 - 3);
          *(v39 - 2) = *(v38 - 2);
          *(v39 - 1) = *(v38 - 1);
        }
        while ( v39 != &v32[8 * (unsigned int)((v36 >> 3) - 1) + 8] );
        v41 = ((v36 >> 3) - 1 + 1LL) << 6;
        v37 = (_QWORD *)((char *)v37 + v41);
        v32 = (_QWORD *)((char *)v32 + v41);
      }
      result = (unsigned int)(v36 % 8);
      switch ( v36 % 8 )
      {
        case 1:
          goto LABEL_53;
        case 2:
          goto LABEL_52;
        case 3:
          goto LABEL_51;
        case 4:
          goto LABEL_50;
        case 5:
          goto LABEL_49;
        case 6:
          goto LABEL_48;
        case 7:
          v32[6] = v37[6];
LABEL_48:
          v32[5] = v37[5];
LABEL_49:
          v32[4] = v37[4];
LABEL_50:
          v32[3] = v37[3];
LABEL_51:
          v32[2] = v37[2];
LABEL_52:
          v32[1] = v37[1];
LABEL_53:
          *v32 = *v37;
          break;
        default:
          break;
      }
    }
    v42 = *((__int64 **)this + 126);
    v43 = &v42[v34];
    if ( v42 != v43 && !v35 )
    {
      if ( v36 >> 3 > 0 )
      {
        v44 = v43;
        v45 = v42;
        do
        {
          v46 = *v44;
          v45 += 8;
          v44 += 8;
          *(v45 - 8) = v46;
          *(v45 - 7) = *(v44 - 7);
          *(v45 - 6) = *(v44 - 6);
          *(v45 - 5) = *(v44 - 5);
          *(v45 - 4) = *(v44 - 4);
          *(v45 - 3) = *(v44 - 3);
          *(v45 - 2) = *(v44 - 2);
          *(v45 - 1) = *(v44 - 1);
        }
        while ( v45 != &v42[8 * (unsigned int)((v36 >> 3) - 1) + 8] );
        v47 = ((v36 >> 3) - 1 + 1LL) << 6;
        v43 = (__int64 *)((char *)v43 + v47);
        v42 = (__int64 *)((char *)v42 + v47);
      }
      result = (unsigned int)(v36 % 8);
      switch ( v36 % 8 )
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
          v42[6] = v43[6];
LABEL_62:
          v42[5] = v43[5];
LABEL_63:
          v42[4] = v43[4];
LABEL_64:
          v42[3] = v43[3];
LABEL_65:
          v42[2] = v43[2];
LABEL_66:
          v42[1] = v43[1];
LABEL_67:
          *v42 = *v43;
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    v4 = *((_QWORD *)this + 28);
    v5 = *((double *)this + 4);
    if ( v4 )
    {
      if ( !a2 )
      {
        v6 = *((_QWORD *)this + 31);
        if ( (int)result > 0 )
        {
          result = 0;
          v7 = 0;
          while ( 1 )
          {
            v9 = *((double *)this + 12) * *(double *)(v6 + result);
            v10 = *(double *)(*((_QWORD *)this + 22) + result);
            v11 = *(double *)(*((_QWORD *)this + 23) + result);
            v12 = (double *)(result + *((_QWORD *)this + 125));
            if ( v10 > -1.0e20 )
              break;
            if ( v11 >= 1.0e20 )
            {
              *v12 = -1.797693134862316e308;
              *(_QWORD *)(*((_QWORD *)this + 128) + result) = 0x7FEFFFFFFFFFFFFFLL;
LABEL_8:
              ++v7;
              result += 8;
              if ( *((_DWORD *)this + 27) <= v7 )
                goto LABEL_12;
            }
            else
            {
              *v12 = -1.797693134862316e308;
              ++v7;
              *(double *)(*((_QWORD *)this + 128) + result) = v9 * v11;
              result += 8;
              if ( *((_DWORD *)this + 27) <= v7 )
              {
LABEL_12:
                v2 = *((_DWORD *)this + 26);
                goto LABEL_13;
              }
            }
          }
          *v12 = v10 * v9;
          v8 = *((_QWORD *)this + 128);
          if ( v11 < 1.0e20 )
          {
            *(double *)(v8 + result) = v9 * v11;
            v28 = (double *)(result + *((_QWORD *)this + 128));
            v29 = (double *)(result + *((_QWORD *)this + 125));
            v30 = *v28;
            v31 = *v29;
            if ( v5 >= fabs(*v28 - *v29) )
            {
              if ( v31 < 0.0 )
              {
                if ( v30 <= 0.0 )
                {
                  *v29 = v30;
                }
                else
                {
                  *v28 = 0.0;
                  *(_QWORD *)(*((_QWORD *)this + 125) + result) = 0;
                }
              }
              else
              {
                *v28 = v31;
              }
            }
          }
          else
          {
            *(_QWORD *)(v8 + result) = 0x7FEFFFFFFFFFFFFFLL;
          }
          goto LABEL_8;
        }
      }
LABEL_13:
      if ( v2 > 0 )
      {
        result = 0;
        v13 = 0;
        while ( 1 )
        {
          v15 = *((double *)this + 12) * *(double *)(v4 + result);
          v16 = *(double *)(*((_QWORD *)this + 18) + result);
          v17 = *(double *)(*((_QWORD *)this + 19) + result);
          v18 = (double *)(result + *((_QWORD *)this + 124));
          if ( v16 > -1.0e20 )
            break;
          if ( v17 >= 1.0e20 )
          {
            *v18 = -1.797693134862316e308;
            *(_QWORD *)(*((_QWORD *)this + 127) + result) = 0x7FEFFFFFFFFFFFFFLL;
LABEL_17:
            ++v13;
            result += 8;
            if ( *((_DWORD *)this + 26) <= v13 )
              return result;
          }
          else
          {
            *v18 = -1.797693134862316e308;
            ++v13;
            *(double *)(*((_QWORD *)this + 127) + result) = v15 * v17;
            result += 8;
            if ( *((_DWORD *)this + 26) <= v13 )
              return result;
          }
        }
        *v18 = v16 * v15;
        v14 = *((_QWORD *)this + 127);
        if ( v17 < 1.0e20 )
        {
          *(double *)(v14 + result) = v15 * v17;
          v24 = (double *)(result + *((_QWORD *)this + 127));
          v25 = (double *)(result + *((_QWORD *)this + 124));
          v26 = *v24;
          v27 = *v25;
          if ( v5 >= fabs(*v24 - *v25) )
          {
            if ( v27 < 0.0 )
            {
              if ( v26 <= 0.0 )
              {
                *v25 = v26;
              }
              else
              {
                *v24 = 0.0;
                *(_QWORD *)(*((_QWORD *)this + 124) + result) = 0;
              }
            }
            else
            {
              *v24 = v27;
            }
          }
        }
        else
        {
          *(_QWORD *)(v14 + result) = 0x7FEFFFFFFFFFFFFFLL;
        }
        goto LABEL_17;
      }
    }
    else if ( *((double *)this + 12) == 1.0 )
    {
      if ( (int)result > 0 )
      {
        result = 0;
        v48 = 0;
        do
        {
          v50 = *(double *)(*((_QWORD *)this + 22) + result);
          v51 = *(double *)(*((_QWORD *)this + 23) + result);
          v52 = (double *)(result + *((_QWORD *)this + 125));
          if ( v50 > -1.0e20 )
          {
            *v52 = v50;
            v49 = *((_QWORD *)this + 128);
            if ( v51 < 1.0e20 )
            {
              *(double *)(v49 + result) = v51;
              v53 = (double *)(result + *((_QWORD *)this + 128));
              v54 = (double *)(result + *((_QWORD *)this + 125));
              v55 = *v53;
              v56 = *v54;
              if ( v5 >= fabs(*v53 - *v54) )
              {
                if ( v56 < 0.0 )
                {
                  if ( v55 <= 0.0 )
                  {
                    *v54 = v55;
                  }
                  else
                  {
                    *v53 = 0.0;
                    *(_QWORD *)(*((_QWORD *)this + 125) + result) = 0;
                  }
                }
                else
                {
                  *v53 = v56;
                }
              }
            }
            else
            {
              *(_QWORD *)(v49 + result) = 0x7FEFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            *v52 = -1.797693134862316e308;
            if ( v51 >= 1.0e20 )
              *(_QWORD *)(*((_QWORD *)this + 128) + result) = 0x7FEFFFFFFFFFFFFFLL;
            else
              *(double *)(*((_QWORD *)this + 128) + result) = v51;
          }
          ++v48;
          result += 8;
        }
        while ( *((_DWORD *)this + 27) > v48 );
        v2 = *((_DWORD *)this + 26);
      }
      if ( v2 > 0 )
      {
        result = 0;
        v70 = 0;
        do
        {
          v72 = *(double *)(*((_QWORD *)this + 18) + result);
          v73 = *(double *)(*((_QWORD *)this + 19) + result);
          v74 = (double *)(result + *((_QWORD *)this + 124));
          if ( v72 > -1.0e20 )
          {
            *v74 = v72;
            v71 = *((_QWORD *)this + 127);
            if ( v73 < 1.0e20 )
            {
              *(double *)(v71 + result) = v73;
              v75 = (double *)(result + *((_QWORD *)this + 127));
              v76 = (double *)(result + *((_QWORD *)this + 124));
              v77 = *v75;
              v78 = *v76;
              if ( v5 >= fabs(*v75 - *v76) )
              {
                if ( v78 < 0.0 )
                {
                  if ( v77 <= 0.0 )
                  {
                    *v76 = v77;
                  }
                  else
                  {
                    *v75 = 0.0;
                    *(_QWORD *)(*((_QWORD *)this + 124) + result) = 0;
                  }
                }
                else
                {
                  *v75 = v78;
                }
              }
            }
            else
            {
              *(_QWORD *)(v71 + result) = 0x7FEFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            *v74 = -1.797693134862316e308;
            if ( v73 >= 1.0e20 )
              *(_QWORD *)(*((_QWORD *)this + 127) + result) = 0x7FEFFFFFFFFFFFFFLL;
            else
              *(double *)(*((_QWORD *)this + 127) + result) = v73;
          }
          ++v70;
          result += 8;
        }
        while ( *((_DWORD *)this + 26) > v70 );
      }
    }
    else
    {
      if ( (int)result > 0 )
      {
        result = 0;
        v19 = 0;
        do
        {
          v21 = *(double *)(*((_QWORD *)this + 22) + result);
          v22 = *(double *)(*((_QWORD *)this + 23) + result);
          v23 = (double *)(result + *((_QWORD *)this + 125));
          if ( v21 > -1.0e20 )
          {
            *v23 = v21 * *((double *)this + 12);
            v20 = *((_QWORD *)this + 128);
            if ( v22 < 1.0e20 )
            {
              *(double *)(v20 + result) = v22 * *((double *)this + 12);
              v57 = (double *)(result + *((_QWORD *)this + 128));
              v58 = (double *)(result + *((_QWORD *)this + 125));
              v59 = *v57;
              v60 = *v58;
              if ( v5 >= fabs(*v57 - *v58) )
              {
                if ( v60 < 0.0 )
                {
                  if ( v59 <= 0.0 )
                  {
                    *v58 = v59;
                  }
                  else
                  {
                    *v57 = 0.0;
                    *(_QWORD *)(*((_QWORD *)this + 125) + result) = 0;
                  }
                }
                else
                {
                  *v57 = v60;
                }
              }
            }
            else
            {
              *(_QWORD *)(v20 + result) = 0x7FEFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            *v23 = -1.797693134862316e308;
            if ( v22 >= 1.0e20 )
              *(_QWORD *)(*((_QWORD *)this + 128) + result) = 0x7FEFFFFFFFFFFFFFLL;
            else
              *(double *)(*((_QWORD *)this + 128) + result) = v22 * *((double *)this + 12);
          }
          ++v19;
          result += 8;
        }
        while ( *((_DWORD *)this + 27) > v19 );
        v2 = *((_DWORD *)this + 26);
      }
      if ( v2 > 0 )
      {
        result = 0;
        v61 = 0;
        do
        {
          v63 = *(double *)(*((_QWORD *)this + 18) + result);
          v64 = *(double *)(*((_QWORD *)this + 19) + result);
          v65 = (double *)(result + *((_QWORD *)this + 124));
          if ( v63 > -1.0e20 )
          {
            *v65 = v63 * *((double *)this + 12);
            v62 = *((_QWORD *)this + 127);
            if ( v64 < 1.0e20 )
            {
              *(double *)(v62 + result) = v64 * *((double *)this + 12);
              v66 = (double *)(result + *((_QWORD *)this + 127));
              v67 = (double *)(result + *((_QWORD *)this + 124));
              v68 = *v66;
              v69 = *v67;
              if ( v5 >= fabs(*v66 - *v67) )
              {
                if ( v69 < 0.0 )
                {
                  if ( v68 <= 0.0 )
                  {
                    *v67 = v68;
                  }
                  else
                  {
                    *v66 = 0.0;
                    *(_QWORD *)(*((_QWORD *)this + 124) + result) = 0;
                  }
                }
                else
                {
                  *v66 = v69;
                }
              }
            }
            else
            {
              *(_QWORD *)(v62 + result) = 0x7FEFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            *v65 = -1.797693134862316e308;
            if ( v64 >= 1.0e20 )
              *(_QWORD *)(*((_QWORD *)this + 127) + result) = 0x7FEFFFFFFFFFFFFFLL;
            else
              *(double *)(*((_QWORD *)this + 127) + result) = v64 * *((double *)this + 12);
          }
          ++v61;
          result += 8;
        }
        while ( *((_DWORD *)this + 26) > v61 );
      }
    }
  }
  return result;
}

