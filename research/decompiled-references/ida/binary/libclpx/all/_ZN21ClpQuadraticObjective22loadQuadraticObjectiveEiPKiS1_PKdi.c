__int64 __fastcall ClpQuadraticObjective::loadQuadraticObjective(
        ClpQuadraticObjective *this,
        int a2,
        const int *a3,
        const int *a4,
        const double *a5,
        unsigned int a6)
{
  __int64 v9; // rdi
  CoinPackedMatrix *v10; // r13
  __int64 result; // rax
  bool v12; // cc
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  int v15; // eax
  char *v16; // rdi
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // xmm0_8
  __int64 v20; // rdx
  char *v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // r12
  int v24; // eax
  char *v25; // rdi
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // xmm0_8
  __int64 v29; // rdx
  char *v30; // r8
  _QWORD *v31; // rdx

  *((_BYTE *)this + 56) = 0;
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v10, 1, a2, a2, a3[a2], a5, a4, a3, nullptr);
  result = a6;
  v12 = *((_DWORD *)this + 13) < (int)a6;
  *((_QWORD *)this + 3) = v10;
  *((_DWORD *)this + 12) = a2;
  if ( !v12 )
  {
    *((_DWORD *)this + 13) = a2;
    return result;
  }
  if ( *((_QWORD *)this + 4) )
  {
    if ( (unsigned __int64)(int)a6 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v13 = 8LL * (int)a6;
      v14 = operator new[](v13);
      v15 = *((_DWORD *)this + 12);
      v16 = *((char **)this + 4);
      if ( v15 && v16 != (char *)v14 )
      {
        if ( v15 >> 3 <= 0 )
        {
          v22 = (_QWORD *)v14;
          v21 = *((char **)this + 4);
        }
        else
        {
          v17 = *((__int64 **)this + 4);
          v18 = v14;
          do
          {
            v19 = *v17;
            v18 += 64;
            v17 += 8;
            *(_QWORD *)(v18 - 64) = v19;
            *(_QWORD *)(v18 - 56) = *(v17 - 7);
            *(_QWORD *)(v18 - 48) = *(v17 - 6);
            *(_QWORD *)(v18 - 40) = *(v17 - 5);
            *(_QWORD *)(v18 - 32) = *(v17 - 4);
            *(_QWORD *)(v18 - 24) = *(v17 - 3);
            *(_QWORD *)(v18 - 16) = *(v17 - 2);
            *(_QWORD *)(v18 - 8) = *(v17 - 1);
          }
          while ( v18 != v14 + (((unsigned int)((v15 >> 3) - 1) + 1LL) << 6) );
          v20 = ((v15 >> 3) - 1 + 1LL) << 6;
          v21 = &v16[v20];
          v22 = (_QWORD *)(v14 + v20);
        }
        switch ( v15 % 8 )
        {
          case 1:
            goto LABEL_20;
          case 2:
            goto LABEL_19;
          case 3:
            goto LABEL_18;
          case 4:
            goto LABEL_17;
          case 5:
            goto LABEL_16;
          case 6:
            goto LABEL_15;
          case 7:
            v22[6] = *((_QWORD *)v21 + 6);
LABEL_15:
            v22[5] = *((_QWORD *)v21 + 5);
LABEL_16:
            v22[4] = *((_QWORD *)v21 + 4);
LABEL_17:
            v22[3] = *((_QWORD *)v21 + 3);
LABEL_18:
            v22[2] = *((_QWORD *)v21 + 2);
LABEL_19:
            v22[1] = *((_QWORD *)v21 + 1);
LABEL_20:
            *v22 = *(_QWORD *)v21;
            break;
          default:
            break;
        }
      }
      if ( v16 )
      {
        operator delete[](v16);
        v15 = *((_DWORD *)this + 12);
      }
      *((_QWORD *)this + 4) = v14;
      memset((void *)(v14 + 8LL * v15), 0, 8LL * (int)(a6 - v15));
      if ( !*((_QWORD *)this + 5) )
        goto LABEL_41;
      goto LABEL_24;
    }
LABEL_48:
    __cxa_throw_bad_array_new_length();
  }
  if ( !*((_QWORD *)this + 5) )
    goto LABEL_42;
  if ( (unsigned __int64)(int)a6 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_48;
  v13 = 8LL * (int)a6;
LABEL_24:
  v23 = operator new[](v13);
  v24 = *((_DWORD *)this + 12);
  v25 = *((char **)this + 5);
  if ( v24 && v25 != (char *)v23 )
  {
    if ( v24 >> 3 <= 0 )
    {
      v31 = (_QWORD *)v23;
      v30 = *((char **)this + 5);
    }
    else
    {
      v26 = *((__int64 **)this + 5);
      v27 = v23;
      do
      {
        v28 = *v26;
        v27 += 64;
        v26 += 8;
        *(_QWORD *)(v27 - 64) = v28;
        *(_QWORD *)(v27 - 56) = *(v26 - 7);
        *(_QWORD *)(v27 - 48) = *(v26 - 6);
        *(_QWORD *)(v27 - 40) = *(v26 - 5);
        *(_QWORD *)(v27 - 32) = *(v26 - 4);
        *(_QWORD *)(v27 - 24) = *(v26 - 3);
        *(_QWORD *)(v27 - 16) = *(v26 - 2);
        *(_QWORD *)(v27 - 8) = *(v26 - 1);
      }
      while ( v23 + (((unsigned int)((v24 >> 3) - 1) + 1LL) << 6) != v27 );
      v29 = ((v24 >> 3) - 1 + 1LL) << 6;
      v30 = &v25[v29];
      v31 = (_QWORD *)(v23 + v29);
    }
    switch ( v24 % 8 )
    {
      case 1:
        goto LABEL_37;
      case 2:
        goto LABEL_36;
      case 3:
        goto LABEL_35;
      case 4:
        goto LABEL_34;
      case 5:
        goto LABEL_33;
      case 6:
        goto LABEL_32;
      case 7:
        v31[6] = *((_QWORD *)v30 + 6);
LABEL_32:
        v31[5] = *((_QWORD *)v30 + 5);
LABEL_33:
        v31[4] = *((_QWORD *)v30 + 4);
LABEL_34:
        v31[3] = *((_QWORD *)v30 + 3);
LABEL_35:
        v31[2] = *((_QWORD *)v30 + 2);
LABEL_36:
        v31[1] = *((_QWORD *)v30 + 1);
LABEL_37:
        *v31 = *(_QWORD *)v30;
        break;
      default:
        break;
    }
  }
  if ( v25 )
  {
    operator delete[](v25);
    v24 = *((_DWORD *)this + 12);
  }
  *((_QWORD *)this + 5) = v23;
  memset((void *)(v23 + 8LL * v24), 0, 8LL * (int)(a6 - v24));
LABEL_41:
  result = a6;
LABEL_42:
  *((_DWORD *)this + 13) = result;
  return result;
}

