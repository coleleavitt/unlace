char __fastcall ClpSimplex::statusOfProblem(ClpSimplex *this, char a2, double a3)
{
  int v4; // ebp
  char result; // al
  int i; // r12d
  int v7; // eax
  int v8; // ecx
  _QWORD *v9; // rdi
  _QWORD *v10; // r8
  __int64 *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  int v15; // ecx
  _QWORD *v16; // rdi
  _QWORD *v17; // r8
  __int64 *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // xmm0_8
  __int64 v21; // rax
  int v22; // ecx
  _QWORD *v23; // rdi
  _QWORD *v24; // r8
  __int64 *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // xmm0_8
  __int64 v28; // rax
  int v29; // ecx
  _QWORD *v30; // r8
  _QWORD *v31; // r9
  bool v32; // dl
  __int64 *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // xmm0_8
  __int64 v36; // rax
  _QWORD *v37; // rdi
  _QWORD *v38; // r8
  __int64 *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // xmm0_8
  __int64 v42; // rax
  int v43; // edx
  CoinMessageHandler *v44; // rax
  __int64 v45; // rax

  v4 = *((_DWORD *)this + 64);
  if ( !*((_QWORD *)this + 28) )
    *((_DWORD *)this + 64) = 0;
  result = ClpSimplex::createRim(this, 63, 0, 0);
  if ( result )
  {
    if ( a2 )
    {
      for ( i = 0; ; i += v7 )
      {
        v7 = ClpSimplex::internalFactorize(this, 0);
        v8 = *((_DWORD *)this + 26);
        if ( v8 + 1 == v7 )
          break;
        if ( v7 < 0 )
        {
          ClpSimplex::deleteRim(this, -1);
          *((_DWORD *)this + 64) = v4;
          return 0;
        }
        if ( !v7 )
          break;
      }
      if ( i )
      {
        v44 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      20,
                                      (ClpSimplex *)((char *)this + 416));
        v45 = CoinMessageHandler::operator<<(v44);
        CoinMessageHandler::operator<<(v45, 0, a3);
        v8 = *((_DWORD *)this + 26);
      }
    }
    else
    {
      ClpSimplex::internalFactorize(this, 1);
      v8 = *((_DWORD *)this + 26);
    }
    v9 = *((_QWORD **)this + 151);
    v10 = *((_QWORD **)this + 14);
    if ( v8 && v9 != v10 )
    {
      if ( v8 >> 3 > 0 )
      {
        v11 = *((__int64 **)this + 14);
        v12 = *((_QWORD **)this + 151);
        do
        {
          v13 = *v11;
          v12 += 8;
          v11 += 8;
          *(v12 - 8) = v13;
          *(v12 - 7) = *(v11 - 7);
          *(v12 - 6) = *(v11 - 6);
          *(v12 - 5) = *(v11 - 5);
          *(v12 - 4) = *(v11 - 4);
          *(v12 - 3) = *(v11 - 3);
          *(v12 - 2) = *(v11 - 2);
          *(v12 - 1) = *(v11 - 1);
        }
        while ( &v9[8 * (unsigned int)((v8 >> 3) - 1) + 8] != v12 );
        v14 = ((v8 >> 3) - 1 + 1LL) << 6;
        v10 = (_QWORD *)((char *)v10 + v14);
        v9 = (_QWORD *)((char *)v9 + v14);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_27;
        case 2:
          goto LABEL_26;
        case 3:
          goto LABEL_25;
        case 4:
          goto LABEL_24;
        case 5:
          goto LABEL_23;
        case 6:
          goto LABEL_22;
        case 7:
          v9[6] = v10[6];
LABEL_22:
          v9[5] = v10[5];
LABEL_23:
          v9[4] = v10[4];
LABEL_24:
          v9[3] = v10[3];
LABEL_25:
          v9[2] = v10[2];
LABEL_26:
          v9[1] = v10[1];
LABEL_27:
          *v9 = *v10;
          break;
        default:
          break;
      }
    }
    v15 = *((_DWORD *)this + 27);
    v16 = *((_QWORD **)this + 152);
    v17 = *((_QWORD **)this + 15);
    if ( v15 && v16 != v17 )
    {
      if ( v15 >> 3 > 0 )
      {
        v18 = *((__int64 **)this + 15);
        v19 = *((_QWORD **)this + 152);
        do
        {
          v20 = *v18;
          v19 += 8;
          v18 += 8;
          *(v19 - 8) = v20;
          *(v19 - 7) = *(v18 - 7);
          *(v19 - 6) = *(v18 - 6);
          *(v19 - 5) = *(v18 - 5);
          *(v19 - 4) = *(v18 - 4);
          *(v19 - 3) = *(v18 - 3);
          *(v19 - 2) = *(v18 - 2);
          *(v19 - 1) = *(v18 - 1);
        }
        while ( &v16[8 * (unsigned int)((v15 >> 3) - 1) + 8] != v19 );
        v21 = ((v15 >> 3) - 1 + 1LL) << 6;
        v17 = (_QWORD *)((char *)v17 + v21);
        v16 = (_QWORD *)((char *)v16 + v21);
      }
      switch ( v15 % 8 )
      {
        case 1:
          goto LABEL_41;
        case 2:
          goto LABEL_40;
        case 3:
          goto LABEL_39;
        case 4:
          goto LABEL_38;
        case 5:
          goto LABEL_37;
        case 6:
          goto LABEL_36;
        case 7:
          v16[6] = v17[6];
LABEL_36:
          v16[5] = v17[5];
LABEL_37:
          v16[4] = v17[4];
LABEL_38:
          v16[3] = v17[3];
LABEL_39:
          v16[2] = v17[2];
LABEL_40:
          v16[1] = v17[1];
LABEL_41:
          *v16 = *v17;
          break;
        default:
          break;
      }
    }
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
    v22 = *((_DWORD *)this + 26);
    v23 = *((_QWORD **)this + 14);
    v24 = *((_QWORD **)this + 151);
    if ( v22 && v23 != v24 )
    {
      if ( v22 >> 3 > 0 )
      {
        v25 = *((__int64 **)this + 151);
        v26 = *((_QWORD **)this + 14);
        do
        {
          v27 = *v25;
          v26 += 8;
          v25 += 8;
          *(v26 - 8) = v27;
          *(v26 - 7) = *(v25 - 7);
          *(v26 - 6) = *(v25 - 6);
          *(v26 - 5) = *(v25 - 5);
          *(v26 - 4) = *(v25 - 4);
          *(v26 - 3) = *(v25 - 3);
          *(v26 - 2) = *(v25 - 2);
          *(v26 - 1) = *(v25 - 1);
        }
        while ( &v23[8 * (unsigned int)((v22 >> 3) - 1) + 8] != v26 );
        v28 = ((v22 >> 3) - 1 + 1LL) << 6;
        v24 = (_QWORD *)((char *)v24 + v28);
        v23 = (_QWORD *)((char *)v23 + v28);
      }
      switch ( v22 % 8 )
      {
        case 1:
          goto LABEL_55;
        case 2:
          goto LABEL_54;
        case 3:
          goto LABEL_53;
        case 4:
          goto LABEL_52;
        case 5:
          goto LABEL_51;
        case 6:
          goto LABEL_50;
        case 7:
          v23[6] = v24[6];
LABEL_50:
          v23[5] = v24[5];
LABEL_51:
          v23[4] = v24[4];
LABEL_52:
          v23[3] = v24[3];
LABEL_53:
          v23[2] = v24[2];
LABEL_54:
          v23[1] = v24[1];
LABEL_55:
          *v23 = *v24;
          break;
        default:
          break;
      }
    }
    v29 = *((_DWORD *)this + 27);
    v30 = *((_QWORD **)this + 15);
    v31 = *((_QWORD **)this + 152);
    v32 = v29 == 0;
    if ( v30 != v31 && v29 )
    {
      if ( v29 >> 3 > 0 )
      {
        v33 = *((__int64 **)this + 152);
        v34 = *((_QWORD **)this + 15);
        do
        {
          v35 = *v33;
          v34 += 8;
          v33 += 8;
          *(v34 - 8) = v35;
          *(v34 - 7) = *(v33 - 7);
          *(v34 - 6) = *(v33 - 6);
          *(v34 - 5) = *(v33 - 5);
          *(v34 - 4) = *(v33 - 4);
          *(v34 - 3) = *(v33 - 3);
          *(v34 - 2) = *(v33 - 2);
          *(v34 - 1) = *(v33 - 1);
        }
        while ( v34 != &v30[8 * (unsigned int)((v29 >> 3) - 1) + 8] );
        v36 = ((v29 >> 3) - 1 + 1LL) << 6;
        v31 = (_QWORD *)((char *)v31 + v36);
        v30 = (_QWORD *)((char *)v30 + v36);
      }
      switch ( v29 % 8 )
      {
        case 1:
          goto LABEL_69;
        case 2:
          goto LABEL_68;
        case 3:
          goto LABEL_67;
        case 4:
          goto LABEL_66;
        case 5:
          goto LABEL_65;
        case 6:
          goto LABEL_64;
        case 7:
          v30[6] = v31[6];
LABEL_64:
          v30[5] = v31[5];
LABEL_65:
          v30[4] = v31[4];
LABEL_66:
          v30[3] = v31[3];
LABEL_67:
          v30[2] = v31[2];
LABEL_68:
          v30[1] = v31[1];
LABEL_69:
          *v30 = *v31;
          break;
        default:
          break;
      }
      v29 = *((_DWORD *)this + 27);
      v32 = v29 == 0;
    }
    v37 = *((_QWORD **)this + 17);
    v38 = *((_QWORD **)this + 147);
    if ( v37 != v38 && !v32 )
    {
      if ( v29 >> 3 > 0 )
      {
        v39 = *((__int64 **)this + 147);
        v40 = *((_QWORD **)this + 17);
        do
        {
          v41 = *v39;
          v40 += 8;
          v39 += 8;
          *(v40 - 8) = v41;
          *(v40 - 7) = *(v39 - 7);
          *(v40 - 6) = *(v39 - 6);
          *(v40 - 5) = *(v39 - 5);
          *(v40 - 4) = *(v39 - 4);
          *(v40 - 3) = *(v39 - 3);
          *(v40 - 2) = *(v39 - 2);
          *(v40 - 1) = *(v39 - 1);
        }
        while ( v40 != &v37[8 * (unsigned int)((v29 >> 3) - 1) + 8] );
        v42 = ((v29 >> 3) - 1 + 1LL) << 6;
        v38 = (_QWORD *)((char *)v38 + v42);
        v37 = (_QWORD *)((char *)v37 + v42);
      }
      switch ( v29 % 8 )
      {
        case 1:
          goto LABEL_84;
        case 2:
          goto LABEL_83;
        case 3:
          goto LABEL_82;
        case 4:
          goto LABEL_81;
        case 5:
          goto LABEL_80;
        case 6:
          goto LABEL_79;
        case 7:
          v37[6] = v38[6];
LABEL_79:
          v37[5] = v38[5];
LABEL_80:
          v37[4] = v38[4];
LABEL_81:
          v37[3] = v38[3];
LABEL_82:
          v37[2] = v38[2];
LABEL_83:
          v37[1] = v38[1];
LABEL_84:
          *v37 = *v38;
          break;
        default:
          break;
      }
    }
    ClpSimplex::deleteRim(this, -1);
    v43 = *((_DWORD *)this + 308);
    result = 0;
    *((_DWORD *)this + 64) = v4;
    if ( !v43 )
      return *((_DWORD *)this + 306) == 0;
  }
  else
  {
    *((_DWORD *)this + 80) = 4;
    *((_DWORD *)this + 64) = v4;
  }
  return result;
}

