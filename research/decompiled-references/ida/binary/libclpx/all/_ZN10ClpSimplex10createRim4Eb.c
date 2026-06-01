__int64 __fastcall ClpSimplex::createRim4(ClpSimplex *this, char a2)
{
  int v2; // r8d
  __int64 v5; // rbp
  double v6; // xmm1_8
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 result; // rax
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  bool v19; // zf
  int v20; // r8d
  _QWORD *v21; // rcx
  _QWORD *v22; // r9
  __int64 *v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // xmm0_8
  __int64 v26; // rax
  _BYTE v27[48]; // [rsp+10h] [rbp-30h] BYREF

  v2 = *((_DWORD *)this + 26);
  if ( (*((_BYTE *)this + 338) & 1) != 0 )
  {
    v18 = *((_DWORD *)this + 338) + v2;
    v19 = *((_DWORD *)this + 27) + v18 == 0;
    v20 = *((_DWORD *)this + 27) + v18;
    v21 = *((_QWORD **)this + 129);
    result = *((_DWORD *)this + 120) + *((_DWORD *)this + 121);
    v22 = &v21[result];
    if ( !v19 && v21 != v22 )
    {
      if ( v20 >> 3 > 0 )
      {
        v23 = &v21[result];
        v24 = *((_QWORD **)this + 129);
        do
        {
          v25 = *v23;
          v24 += 8;
          v23 += 8;
          *(v24 - 8) = v25;
          *(v24 - 7) = *(v23 - 7);
          *(v24 - 6) = *(v23 - 6);
          *(v24 - 5) = *(v23 - 5);
          *(v24 - 4) = *(v23 - 4);
          *(v24 - 3) = *(v23 - 3);
          *(v24 - 2) = *(v23 - 2);
          *(v24 - 1) = *(v23 - 1);
        }
        while ( v24 != &v21[8 * (unsigned int)((v20 >> 3) - 1) + 8] );
        v26 = ((v20 >> 3) - 1 + 1LL) << 6;
        v22 = (_QWORD *)((char *)v22 + v26);
        v21 = (_QWORD *)((char *)v21 + v26);
      }
      result = (unsigned int)(v20 >> 31) >> 29;
      switch ( v20 % 8 )
      {
        case 1:
          goto LABEL_38;
        case 2:
          goto LABEL_37;
        case 3:
          goto LABEL_36;
        case 4:
          goto LABEL_35;
        case 5:
          goto LABEL_34;
        case 6:
          goto LABEL_33;
        case 7:
          v21[6] = v22[6];
LABEL_33:
          v21[5] = v22[5];
LABEL_34:
          v21[4] = v22[4];
LABEL_35:
          v21[3] = v22[3];
LABEL_36:
          v21[2] = v22[2];
LABEL_37:
          v21[1] = v22[1];
LABEL_38:
          *v21 = *v22;
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    v5 = 0;
    v6 = *(double *)this * *((double *)this + 11);
    v7 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
    if ( v7 )
    {
      v8 = (**v7)(v7, 0, 0, v27, 0, 2);
      v2 = *((_DWORD *)this + 26);
      v5 = v8;
    }
    v9 = *((_QWORD *)this + 28);
    v10 = *((_QWORD *)this + 21);
    if ( v9 )
    {
      v11 = *((_QWORD *)this + 29);
      if ( v10 )
      {
        result = 0;
        v13 = 0;
        if ( v2 > 0 )
        {
          while ( 1 )
          {
            ++v13;
            *(double *)(*((_QWORD *)this + 130) + result) = *(double *)(v10 + result) * v6 / *(double *)(v9 + result);
            result += 8;
            if ( *((_DWORD *)this + 26) <= v13 )
              break;
            v10 = *((_QWORD *)this + 21);
          }
        }
      }
      else
      {
        result = (__int64)memset(*((void **)this + 130), 0, 8LL * v2);
      }
      if ( !a2 && *((int *)this + 27) > 0 )
      {
        result = 0;
        v14 = 0;
        do
        {
          ++v14;
          *(double *)(*((_QWORD *)this + 131) + result) = *(double *)(v5 + result) * v6 * *(double *)(v11 + result);
          result += 8;
        }
        while ( *((_DWORD *)this + 27) > v14 );
      }
    }
    else
    {
      if ( v10 )
      {
        v15 = 0;
        v16 = 0;
        if ( v2 > 0 )
        {
          while ( 1 )
          {
            ++v16;
            *(double *)(*((_QWORD *)this + 130) + v15) = *(double *)(v10 + v15) * v6;
            v15 += 8;
            if ( *((_DWORD *)this + 26) <= v16 )
              break;
            v10 = *((_QWORD *)this + 21);
          }
        }
      }
      else
      {
        memset(*((void **)this + 130), 0, 8LL * v2);
      }
      result = *((unsigned int *)this + 27);
      if ( (int)result > 0 )
      {
        result = 0;
        v17 = 0;
        do
        {
          ++v17;
          *(double *)(*((_QWORD *)this + 131) + result) = *(double *)(v5 + result) * v6;
          result += 8;
        }
        while ( *((_DWORD *)this + 27) > v17 );
      }
    }
  }
  return result;
}

