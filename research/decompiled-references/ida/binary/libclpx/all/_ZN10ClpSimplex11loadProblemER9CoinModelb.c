__int64 __fastcall ClpSimplex::loadProblem(ClpSimplex *this, CoinModel *a2)
{
  int v4; // eax
  _DWORD *v5; // rax
  _BYTE *v6; // r15
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  int v9; // r13d
  __int64 v10; // rcx
  _BYTE *v11; // rsi
  int v12; // edi
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  _BYTE *v18; // rax
  signed int v19; // ecx
  __int64 v20; // rax
  _BYTE *v21; // rdx
  _QWORD *v22; // rdi
  __int64 *v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // xmm0_8
  __int64 v26; // rax
  _QWORD *v27; // rdx
  int v28; // esi
  _QWORD *v29; // rdi
  _QWORD *v30; // r8
  _QWORD *v31; // rax
  __int64 *v32; // rdx
  __int64 v33; // r9
  __int64 v34; // xmm0_8
  __int64 v35; // r9
  _QWORD *v36; // rdi
  __int64 *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // xmm0_8
  __int64 v40; // rax
  _QWORD *v41; // rdx
  int v42; // esi
  __int64 *v43; // rcx
  __int64 *v44; // rdi
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // r9
  __int64 v48; // xmm0_8
  __int64 v49; // r9
  int v51; // edi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  char *v54; // rdx
  _BYTE *v55; // rax
  char v56; // r8
  _DWORD *v57; // [rsp+0h] [rbp-48h]
  unsigned int Problem; // [rsp+Ch] [rbp-3Ch]

  if ( *((_QWORD *)this + 33)
    && (v4 = *((_DWORD *)this + 26)) != 0
    && v4 == *((_DWORD *)a2 + 2)
    && (v51 = *((_DWORD *)this + 27), v51 == *((_DWORD *)a2 + 3)) )
  {
    v6 = (_BYTE *)operator new[](v51 + v4);
    CoinMemcpyN<unsigned char>(
      *((_QWORD *)this + 33),
      (unsigned int)(*((_DWORD *)this + 26) + *((_DWORD *)this + 27)),
      v6);
    v52 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    if ( v52 > 0xFFFFFFFFFFFFFFFLL
      || (v7 = (_QWORD *)operator new[](8 * v52),
          CoinMemcpyN<double>(*((_QWORD *)this + 15), *((unsigned int *)this + 27), v7),
          CoinMemcpyN<double>(*((_QWORD *)this + 14), *((unsigned int *)this + 26), &v7[*((int *)this + 27)]),
          v53 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27),
          v53 > 0xFFFFFFFFFFFFFFFLL) )
    {
      __cxa_throw_bad_array_new_length();
    }
    v8 = (_QWORD *)operator new[](8 * v53);
    CoinMemcpyN<double>(*((_QWORD *)this + 17), *((unsigned int *)this + 27), v8);
    CoinMemcpyN<double>(*((_QWORD *)this + 16), *((unsigned int *)this + 26), &v8[*((int *)this + 27)]);
    Problem = ClpModel::loadProblem(this, a2, 0);
    v5 = *((_DWORD **)a2 + 30);
    if ( !v5 || *((int *)this + 27) <= 0 )
    {
      ClpSimplex::createStatus(this);
LABEL_10:
      v10 = *((int *)this + 27);
      v11 = *((_BYTE **)this + 33);
      v12 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
      if ( v12 && v11 != v6 )
      {
        v13 = v12 >> 3;
        if ( v12 >> 3 <= 0 )
        {
          v21 = v6;
        }
        else
        {
          if ( (v6 >= v11 + 16 || v11 >= v6 + 16) && v13 > 1 )
          {
            v14 = 0;
            v15 = 0;
            do
            {
              ++v15;
              *(__m128i *)&v11[v14] = _mm_loadu_si128((const __m128i *)&v6[v14]);
              v14 += 16;
            }
            while ( v15 < v13 >> 1 );
            v16 = 8LL * (v13 & 0xFFFFFFFE);
            v17 = &v6[v16];
            v18 = &v11[v16];
            if ( (v13 & 0xFFFFFFFE) != v13 )
            {
              *v18 = *v17;
              v18[1] = v17[1];
              v18[2] = v17[2];
              v18[3] = v17[3];
              v18[4] = v17[4];
              v18[5] = v17[5];
              v18[6] = v17[6];
              v18[7] = v17[7];
            }
            v19 = v13 - 1;
          }
          else
          {
            v19 = v13 - 1;
            v54 = v6;
            v55 = *((_BYTE **)this + 33);
            do
            {
              v56 = *v54;
              v55 += 8;
              v54 += 8;
              *(v55 - 8) = v56;
              *(v55 - 7) = *(v54 - 7);
              *(v55 - 6) = *(v54 - 6);
              *(v55 - 5) = *(v54 - 5);
              *(v55 - 4) = *(v54 - 4);
              *(v55 - 3) = *(v54 - 3);
              *(v55 - 2) = *(v54 - 2);
              *(v55 - 1) = *(v54 - 1);
            }
            while ( &v11[8 * v19 + 8] != v55 );
          }
          v20 = 8LL * v19 + 8;
          v21 = &v6[v20];
          v11 += v20;
        }
        switch ( v12 % 8 )
        {
          case 1:
            goto LABEL_28;
          case 2:
            goto LABEL_27;
          case 3:
            goto LABEL_26;
          case 4:
            goto LABEL_25;
          case 5:
            goto LABEL_24;
          case 6:
            goto LABEL_23;
          case 7:
            v11[6] = v21[6];
LABEL_23:
            v11[5] = v21[5];
LABEL_24:
            v11[4] = v21[4];
LABEL_25:
            v11[3] = v21[3];
LABEL_26:
            v11[2] = v21[2];
LABEL_27:
            v11[1] = v21[1];
LABEL_28:
            *v11 = *v21;
            break;
          default:
            break;
        }
        v10 = *((int *)this + 27);
      }
      v22 = *((_QWORD **)this + 15);
      if ( (_DWORD)v10 && v22 != v7 )
      {
        if ( (int)v10 >> 3 <= 0 )
        {
          v27 = v7;
        }
        else
        {
          v23 = v7;
          v24 = *((_QWORD **)this + 15);
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
          while ( v24 != &v22[8 * (unsigned int)(((int)v10 >> 3) - 1) + 8] );
          v26 = (((int)v10 >> 3) - 1 + 1LL) << 6;
          v27 = (_QWORD *)((char *)v7 + v26);
          v22 = (_QWORD *)((char *)v22 + v26);
        }
        switch ( (int)v10 % 8 )
        {
          case 1:
            goto LABEL_43;
          case 2:
            goto LABEL_42;
          case 3:
            goto LABEL_41;
          case 4:
            goto LABEL_40;
          case 5:
            goto LABEL_39;
          case 6:
            goto LABEL_38;
          case 7:
            v22[6] = v27[6];
LABEL_38:
            v22[5] = v27[5];
LABEL_39:
            v22[4] = v27[4];
LABEL_40:
            v22[3] = v27[3];
LABEL_41:
            v22[2] = v27[2];
LABEL_42:
            v22[1] = v27[1];
LABEL_43:
            *v22 = *v27;
            break;
          default:
            break;
        }
        v10 = *((int *)this + 27);
      }
      v28 = *((_DWORD *)this + 26);
      v29 = *((_QWORD **)this + 14);
      v30 = &v7[(int)v10];
      if ( v28 && v29 != v30 )
      {
        if ( v28 >> 3 > 0 )
        {
          v31 = *((_QWORD **)this + 14);
          v32 = &v7[(int)v10];
          v33 = (unsigned int)((v28 >> 3) - 1);
          do
          {
            v34 = *v32;
            v31 += 8;
            v32 += 8;
            *(v31 - 8) = v34;
            *(v31 - 7) = *(v32 - 7);
            *(v31 - 6) = *(v32 - 6);
            *(v31 - 5) = *(v32 - 5);
            *(v31 - 4) = *(v32 - 4);
            *(v31 - 3) = *(v32 - 3);
            *(v31 - 2) = *(v32 - 2);
            *(v31 - 1) = *(v32 - 1);
          }
          while ( v31 != &v29[8 * v33 + 8] );
          v35 = ((int)v33 + 1LL) << 6;
          v30 = (_QWORD *)((char *)v30 + v35);
          v29 = (_QWORD *)((char *)v29 + v35);
        }
        switch ( v28 % 8 )
        {
          case 1:
            goto LABEL_58;
          case 2:
            goto LABEL_57;
          case 3:
            goto LABEL_56;
          case 4:
            goto LABEL_55;
          case 5:
            goto LABEL_54;
          case 6:
            goto LABEL_53;
          case 7:
            v29[6] = v30[6];
LABEL_53:
            v29[5] = v30[5];
LABEL_54:
            v29[4] = v30[4];
LABEL_55:
            v29[3] = v30[3];
LABEL_56:
            v29[2] = v30[2];
LABEL_57:
            v29[1] = v30[1];
LABEL_58:
            *v29 = *v30;
            break;
          default:
            break;
        }
        v10 = *((int *)this + 27);
      }
      v36 = *((_QWORD **)this + 17);
      if ( (_DWORD)v10 && v36 != v8 )
      {
        if ( (int)v10 >> 3 <= 0 )
        {
          v41 = v8;
        }
        else
        {
          v37 = v8;
          v38 = *((_QWORD **)this + 17);
          do
          {
            v39 = *v37;
            v38 += 8;
            v37 += 8;
            *(v38 - 8) = v39;
            *(v38 - 7) = *(v37 - 7);
            *(v38 - 6) = *(v37 - 6);
            *(v38 - 5) = *(v37 - 5);
            *(v38 - 4) = *(v37 - 4);
            *(v38 - 3) = *(v37 - 3);
            *(v38 - 2) = *(v37 - 2);
            *(v38 - 1) = *(v37 - 1);
          }
          while ( v38 != &v36[8 * (unsigned int)(((int)v10 >> 3) - 1) + 8] );
          v40 = (((int)v10 >> 3) - 1 + 1LL) << 6;
          v41 = (_QWORD *)((char *)v8 + v40);
          v36 = (_QWORD *)((char *)v36 + v40);
        }
        switch ( (int)v10 % 8 )
        {
          case 1:
            goto LABEL_73;
          case 2:
            goto LABEL_72;
          case 3:
            goto LABEL_71;
          case 4:
            goto LABEL_70;
          case 5:
            goto LABEL_69;
          case 6:
            goto LABEL_68;
          case 7:
            v36[6] = v41[6];
LABEL_68:
            v36[5] = v41[5];
LABEL_69:
            v36[4] = v41[4];
LABEL_70:
            v36[3] = v41[3];
LABEL_71:
            v36[2] = v41[2];
LABEL_72:
            v36[1] = v41[1];
LABEL_73:
            *v36 = *v41;
            break;
          default:
            break;
        }
        v10 = *((int *)this + 27);
      }
      v42 = *((_DWORD *)this + 26);
      v43 = &v8[v10];
      v44 = *((__int64 **)this + 16);
      if ( v42 && v44 != v43 )
      {
        if ( v42 >> 3 > 0 )
        {
          v45 = *((_QWORD *)this + 16);
          v46 = v43;
          v47 = (unsigned int)((v42 >> 3) - 1);
          do
          {
            v48 = *v46;
            v46 += 8;
            v45 += 64;
            *(_QWORD *)(v45 - 64) = v48;
            *(_QWORD *)(v45 - 56) = *(v46 - 7);
            *(_QWORD *)(v45 - 48) = *(v46 - 6);
            *(_QWORD *)(v45 - 40) = *(v46 - 5);
            *(_QWORD *)(v45 - 32) = *(v46 - 4);
            *(_QWORD *)(v45 - 24) = *(v46 - 3);
            *(_QWORD *)(v45 - 16) = *(v46 - 2);
            *(_QWORD *)(v45 - 8) = *(v46 - 1);
          }
          while ( v46 != &v43[8 * v47 + 8] );
          v49 = ((int)v47 + 1LL) << 6;
          v43 = (__int64 *)((char *)v43 + v49);
          v44 = (__int64 *)((char *)v44 + v49);
        }
        switch ( v42 % 8 )
        {
          case 1:
            goto LABEL_88;
          case 2:
            goto LABEL_87;
          case 3:
            goto LABEL_86;
          case 4:
            goto LABEL_85;
          case 5:
            goto LABEL_84;
          case 6:
            goto LABEL_83;
          case 7:
            v44[6] = v43[6];
LABEL_83:
            v44[5] = v43[5];
LABEL_84:
            v44[4] = v43[4];
LABEL_85:
            v44[3] = v43[3];
LABEL_86:
            v44[2] = v43[2];
LABEL_87:
            v44[1] = v43[1];
LABEL_88:
            *v44 = *v43;
            break;
          default:
            break;
        }
      }
      operator delete[](v6);
      if ( v7 )
        operator delete[](v7);
      if ( v8 )
        operator delete[](v8);
      goto LABEL_93;
    }
  }
  else
  {
    Problem = ClpModel::loadProblem(this, a2, 0);
    v5 = *((_DWORD **)a2 + 30);
    if ( !v5 || *((int *)this + 27) <= 0 )
    {
      ClpSimplex::createStatus(this);
      goto LABEL_93;
    }
    v6 = nullptr;
    v7 = nullptr;
    v8 = nullptr;
  }
  v9 = 0;
  do
  {
    while ( !*v5 )
    {
      ++v9;
      ++v5;
      if ( *((_DWORD *)this + 27) <= v9 )
        goto LABEL_9;
    }
    v57 = v5;
    ClpModel::setInteger(this, v9++);
    v5 = v57 + 1;
  }
  while ( v9 < *((_DWORD *)this + 27) );
LABEL_9:
  ClpSimplex::createStatus(this);
  if ( v6 )
    goto LABEL_10;
LABEL_93:
  *(_QWORD *)this = *((_QWORD *)a2 + 2);
  return Problem;
}

