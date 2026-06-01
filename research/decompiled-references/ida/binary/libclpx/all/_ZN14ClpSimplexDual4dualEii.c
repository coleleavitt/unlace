__int64 __fastcall ClpSimplexDual::dual(ClpSimplexDual *this, int a2, int a3)
{
  void *v6; // rdi
  bool v7; // zf
  int v8; // r14d
  unsigned __int64 v9; // rdi
  double *v10; // rax
  int v11; // edi
  double *v12; // rdx
  double *v13; // rax
  double *v14; // rsi
  double *v15; // rcx
  double v16; // xmm0_8
  __int64 v17; // rcx
  double *v18; // rcx
  int v19; // eax
  int v20; // ecx
  double v21; // xmm1_8
  int v22; // eax
  double v23; // xmm0_8
  unsigned int v24; // r12d
  double *v26; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v27[80]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v28[120]; // [rsp+60h] [rbp-78h] BYREF

  *((_DWORD *)this + 182) &= ~0x10u;
  *((_DWORD *)this + 325) = -1;
  *((_QWORD *)this + 90) = 0xFFEFFFFFFFFFFFFFLL;
  v6 = *((void **)this + 27);
  if ( v6 )
    operator delete[](v6);
  *((_QWORD *)this + 27) = 0;
  ClpSimplex::saveData((ClpSimplex *)v27);
  v7 = (*((_BYTE *)this + 337) & 8) == 0;
  v26 = nullptr;
  v8 = *((_DWORD *)this + 340);
  if ( v7 )
  {
    *((_DWORD *)this + 340) = 0;
  }
  else if ( !v8 )
  {
    *((_DWORD *)this + 340) = 20;
    if ( a2 )
      goto LABEL_6;
LABEL_16:
    v12 = nullptr;
    goto LABEL_17;
  }
  if ( !a2 )
    goto LABEL_16;
LABEL_6:
  v9 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( v9 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v10 = (double *)operator new[](8 * v9);
  v11 = *((_DWORD *)this + 26);
  v12 = v10;
  v26 = v10;
  v13 = *((double **)this + 16);
  if ( v11 && v13 != v12 )
  {
    if ( v11 >> 3 <= 0 )
    {
      v18 = v12;
    }
    else
    {
      v14 = v12;
      v15 = *((double **)this + 16);
      do
      {
        v16 = *v15;
        v15 += 8;
        v14 += 8;
        *(v14 - 8) = v16;
        *(v14 - 7) = *(v15 - 7);
        *(v14 - 6) = *(v15 - 6);
        *(v14 - 5) = *(v15 - 5);
        *(v14 - 4) = *(v15 - 4);
        *(v14 - 3) = *(v15 - 3);
        *(v14 - 2) = *(v15 - 2);
        *(v14 - 1) = *(v15 - 1);
      }
      while ( &v13[8 * (unsigned int)((v11 >> 3) - 1) + 8] != v15 );
      v17 = ((v11 >> 3) - 1 + 1LL) << 6;
      v13 = (double *)((char *)v13 + v17);
      v18 = (double *)((char *)v12 + v17);
    }
    switch ( v11 % 8 )
    {
      case 1:
        goto LABEL_49;
      case 2:
        goto LABEL_48;
      case 3:
        goto LABEL_47;
      case 4:
        goto LABEL_46;
      case 5:
        goto LABEL_45;
      case 6:
        goto LABEL_44;
      case 7:
        v18[6] = v13[6];
LABEL_44:
        v18[5] = v13[5];
LABEL_45:
        v18[4] = v13[4];
LABEL_46:
        v18[3] = v13[3];
LABEL_47:
        v18[2] = v13[2];
LABEL_48:
        v18[1] = v13[1];
LABEL_49:
        *v18 = *v13;
        break;
      default:
        break;
    }
  }
LABEL_17:
  if ( *((double *)this + 97) != -1.0 )
    *((_QWORD *)this + 97) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 117) = *((_QWORD *)this + 4);
  v19 = ClpSimplexDual::startupSolve(this, a2, v12, a3);
  v20 = *((_DWORD *)this + 80);
  if ( !v19 )
  {
    if ( !*((_DWORD *)this + 306) && !*((_DWORD *)this + 308) && *((int *)this + 327) <= 100 )
    {
      *((_DWORD *)this + 80) = 0;
LABEL_24:
      v21 = fabs(*((double *)this + 1));
      if ( v21 >= 1.0e30
        || (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this <= *((double *)this + 1)
                                                                                                + 0.0000001
                                                                                                + v21 * 0.00000001 )
      {
        goto LABEL_35;
      }
      *((_QWORD *)this + 40) = 0x100000001LL;
      goto LABEL_27;
    }
    if ( *((_DWORD *)this + 74) )
    {
      ClpSimplexDual::gutsOfDual(this, a2, &v26, v20, (ClpDataSave *)v27);
      v20 = *((_DWORD *)this + 80);
      goto LABEL_23;
    }
LABEL_34:
    *((_DWORD *)this + 80) = 3;
    goto LABEL_35;
  }
  if ( !*((_DWORD *)this + 74) )
    goto LABEL_34;
LABEL_23:
  if ( !v20 )
    goto LABEL_24;
  if ( v20 != 1 )
  {
    if ( v20 == 10 )
      goto LABEL_32;
    goto LABEL_35;
  }
LABEL_27:
  v22 = *((_DWORD *)this + 308);
  if ( v22 )
  {
    v23 = 1.0;
    if ( (*((_DWORD *)this + 84) & 0x3000000) != 0 )
      v23 = 0.3;
    if ( *((double *)this + 95) * v23 > *((double *)this + 112) / (double)v22 )
    {
      *((_DWORD *)this + 80) = 10;
LABEL_32:
      a3 |= 1u;
    }
  }
LABEL_35:
  ClpSimplexDual::finishSolve(this, a3);
  if ( v26 )
    operator delete[](v26);
  ClpDataSave::ClpDataSave((ClpDataSave *)v28, (const ClpDataSave *)v27);
  ClpSimplex::restoreData();
  ClpDataSave::~ClpDataSave((ClpDataSave *)v28);
  v24 = *((_DWORD *)this + 80);
  *((_DWORD *)this + 340) = v8;
  if ( v24 == 3 )
    *((double *)this + 9) = fmax(*((double *)this + 90), *((double *)this + 9) - *((double *)this + 87));
  ClpDataSave::~ClpDataSave((ClpDataSave *)v27);
  return v24;
}

