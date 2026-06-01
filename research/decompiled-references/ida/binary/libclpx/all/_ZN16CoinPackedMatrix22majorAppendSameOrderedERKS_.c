__int64 __fastcall CoinPackedMatrix::majorAppendSameOrdered(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 result; // rax
  int v4; // esi
  __int64 v5; // rax
  CoinPackedMatrix *v6; // rbx
  int v7; // r13d
  int v8; // edx
  __int64 v9; // r8
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // r10
  int v21; // ecx
  int *v22; // rax
  int *v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rdi
  __int64 v26; // r8
  __m128i v27; // xmm0
  __int64 v28; // r8
  int v29; // eax
  _QWORD *v30; // r8
  _QWORD *v31; // r10
  _QWORD *v32; // rax
  __int64 *v33; // rdx
  __int64 v34; // r9
  __int64 v35; // xmm0_8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // r10
  __int64 v44; // r11
  int v45; // edi
  int v46; // r9d
  int v47; // esi
  _DWORD *v48; // rdx
  _DWORD *v49; // rax
  unsigned int v50; // r9d
  __int64 v51; // rsi
  __int64 v52; // r9
  __m128i v53; // xmm0
  __int64 v54; // r9
  _QWORD *v55; // r11
  _QWORD *v56; // r13
  _QWORD *v57; // rdx
  __int64 *v58; // rax
  __int64 v59; // rbx
  __int64 v60; // xmm0_8
  __int64 v61; // rbx
  int v62; // eax
  int v63; // edx
  __int64 v64; // rax
  int *v65; // rdi
  int *v66; // r10
  int v67; // r13d
  _DWORD *v68; // rsi
  int *v69; // r10
  int v70; // r13d
  void *exception; // r13
  __int64 v72; // [rsp+0h] [rbp-98h]
  __int64 v73; // [rsp+0h] [rbp-98h]
  __int64 v74; // [rsp+8h] [rbp-90h]
  __int64 v75; // [rsp+8h] [rbp-90h]
  __int64 v76; // [rsp+10h] [rbp-88h]
  __int64 v77; // [rsp+10h] [rbp-88h]
  __int64 v79; // [rsp+18h] [rbp-80h]
  __int64 v80; // [rsp+20h] [rbp-78h]
  __int64 v82; // [rsp+40h] [rbp-58h]
  __int64 v83; // [rsp+48h] [rbp-50h]
  __int64 v84; // [rsp+50h] [rbp-48h]

  result = *((unsigned int *)a2 + 17);
  if ( *((_DWORD *)this + 17) != (_DWORD)result )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v82 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v82 - 24);
    if ( (_UNKNOWN *)(v83 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v83 - 24);
    if ( (_UNKNOWN *)(v84 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v84 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v4 = *((_DWORD *)a2 + 16);
  if ( v4 )
  {
    v5 = *((int *)this + 16);
    v6 = this;
    v7 = v4 + v5;
    if ( v4 + (int)v5 > *((_DWORD *)this + 19) )
      goto LABEL_7;
    v8 = 0;
    v9 = *((_QWORD *)this + 6);
    if ( (_DWORD)v5 )
      v8 = *(_DWORD *)(v9 + 4LL * (int)v5);
    if ( *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL * v4) + v8 <= *((_DWORD *)this + 20) )
    {
      v37 = *((_QWORD *)this + 7);
      v38 = 4 * v5;
      v39 = v38 + v9;
      *((_QWORD *)this + 6) = v39;
      v75 = v38 + v37;
      *((_QWORD *)this + 7) = v38 + v37;
      if ( v4 > 0 )
      {
        v40 = *((_QWORD *)a2 + 5);
        v41 = 1;
        v42 = *((_QWORD *)a2 + 6);
        v77 = *((_QWORD *)a2 + 7);
        v73 = *((_QWORD *)this + 5);
        v79 = *((_QWORD *)this + 4);
        v80 = *((_QWORD *)a2 + 4);
        do
        {
          v43 = *(int *)(v42 + 4 * v41 - 4);
          v44 = *(int *)(v39 + 4 * v41 - 4);
          v45 = *(_DWORD *)(v77 + 4 * v41 - 4);
          v46 = *(_DWORD *)(v42 + 4 * v41 - 4);
          v47 = *(_DWORD *)(v39 + 4 * v41 - 4);
          v48 = (_DWORD *)(v40 + 4 * v43);
          v49 = (_DWORD *)(4 * v44 + v73);
          if ( v49 != v48 && v45 )
          {
            v50 = v45 >> 3;
            if ( v45 >> 3 > 0 )
            {
              if ( ((unsigned __int64)v48 >= v73 + 4 * v44 + 32 || (unsigned __int64)v49 >= v40 + 4 * v43 + 32)
                && v50 > 1 )
              {
                v51 = 0;
                v52 = v50 - 1;
                do
                {
                  v53 = _mm_loadu_si128((const __m128i *)&v48[v51 + 4]);
                  *(__m128i *)&v49[v51] = _mm_loadu_si128((const __m128i *)&v48[v51]);
                  *(__m128i *)&v49[v51 + 4] = v53;
                  v51 += 8;
                }
                while ( v51 != 8 * (v52 + 1) );
              }
              else
              {
                v68 = (_DWORD *)(4 * v44 + v73);
                v69 = (int *)(v40 + 4 * v43);
                v52 = v50 - 1;
                do
                {
                  v70 = *v69;
                  v68 += 8;
                  v69 += 8;
                  *(v68 - 8) = v70;
                  *(v68 - 7) = *(v69 - 7);
                  *(v68 - 6) = *(v69 - 6);
                  *(v68 - 5) = *(v69 - 5);
                  *(v68 - 4) = *(v69 - 4);
                  *(v68 - 3) = *(v69 - 3);
                  *(v68 - 2) = *(v69 - 2);
                  *(v68 - 1) = *(v69 - 1);
                }
                while ( &v49[8 * v52 + 8] != v68 );
              }
              v54 = 32 * ((int)v52 + 1LL);
              v48 = (_DWORD *)((char *)v48 + v54);
              v49 = (_DWORD *)((char *)v49 + v54);
            }
            switch ( v45 % 8 )
            {
              case 1:
                goto LABEL_62;
              case 2:
                goto LABEL_61;
              case 3:
                goto LABEL_60;
              case 4:
                goto LABEL_59;
              case 5:
                goto LABEL_58;
              case 6:
                goto LABEL_57;
              case 7:
                v49[6] = v48[6];
LABEL_57:
                v49[5] = v48[5];
LABEL_58:
                v49[4] = v48[4];
LABEL_59:
                v49[3] = v48[3];
LABEL_60:
                v49[2] = v48[2];
LABEL_61:
                v49[1] = v48[1];
LABEL_62:
                *v49 = *v48;
                break;
              default:
                break;
            }
            v44 = *(int *)(v39 + 4 * v41 - 4);
            v43 = *(int *)(v42 + 4 * v41 - 4);
            v47 = *(_DWORD *)(v39 + 4 * v41 - 4);
            v46 = *(_DWORD *)(v42 + 4 * v41 - 4);
          }
          v55 = (_QWORD *)(v79 + 8 * v44);
          v56 = (_QWORD *)(v80 + 8 * v43);
          if ( v55 != v56 && v45 )
          {
            if ( v45 >> 3 > 0 )
            {
              v57 = v55;
              v58 = (__int64 *)(v80 + 8 * v43);
              v59 = (unsigned int)((v45 >> 3) - 1);
              do
              {
                v60 = *v58;
                v58 += 8;
                v57 += 8;
                *(v57 - 8) = v60;
                *(v57 - 7) = *(v58 - 7);
                *(v57 - 6) = *(v58 - 6);
                *(v57 - 5) = *(v58 - 5);
                *(v57 - 4) = *(v58 - 4);
                *(v57 - 3) = *(v58 - 3);
                *(v57 - 2) = *(v58 - 2);
                *(v57 - 1) = *(v58 - 1);
              }
              while ( v58 != &v56[8 * v59 + 8] );
              v61 = ((int)v59 + 1LL) << 6;
              v56 = (_QWORD *)((char *)v56 + v61);
              v55 = (_QWORD *)((char *)v55 + v61);
            }
            switch ( v45 % 8 )
            {
              case 1:
                goto LABEL_77;
              case 2:
                goto LABEL_76;
              case 3:
                goto LABEL_75;
              case 4:
                goto LABEL_74;
              case 5:
                goto LABEL_73;
              case 6:
                goto LABEL_72;
              case 7:
                v55[6] = v56[6];
LABEL_72:
                v55[5] = v56[5];
LABEL_73:
                v55[4] = v56[4];
LABEL_74:
                v55[3] = v56[3];
LABEL_75:
                v55[2] = v56[2];
LABEL_76:
                v55[1] = v56[1];
LABEL_77:
                *v55 = *v56;
                break;
              default:
                break;
            }
          }
          *(_DWORD *)(v39 + 4 * v41) = *(_DWORD *)(v42 + 4 * v41) + v47 - v46;
          *(_DWORD *)(v75 + 4 * v41 - 4) = v45;
          v62 = v41;
          v63 = *((_DWORD *)a2 + 16);
          ++v41;
        }
        while ( v63 > v62 );
        v6 = this;
        v38 = 4LL * *((int *)this + 16);
        v7 = v63 + *((_DWORD *)this + 16);
      }
      v64 = -v38;
      *((_QWORD *)v6 + 6) = v64 + v39;
      *((_QWORD *)v6 + 7) = v75 + v64;
    }
    else
    {
LABEL_7:
      CoinPackedMatrix::resizeForAddingMajorVectors(this, v4, *((const int **)a2 + 7));
      v10 = *((_DWORD *)a2 + 16);
      v11 = *((int *)this + 16);
      v12 = 4 * v11;
      v13 = 4 * v11 + *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = v13;
      if ( v10 > 0 )
      {
        v14 = 1;
        v15 = *((_QWORD *)a2 + 6);
        v16 = *((_QWORD *)this + 5);
        v72 = *((_QWORD *)a2 + 7);
        v74 = *((_QWORD *)this + 4);
        v17 = *((_QWORD *)a2 + 5);
        v76 = *((_QWORD *)a2 + 4);
        do
        {
          v18 = *(int *)(v13 + 4 * v14 - 4);
          v19 = *(int *)(v15 + 4 * v14 - 4);
          v20 = 4 * v18;
          v21 = *(_DWORD *)(v72 + 4 * v14 - 4);
          v22 = (int *)(v16 + 4 * v18);
          v23 = (int *)(v17 + 4 * v19);
          if ( v22 != v23 && v21 )
          {
            v24 = v21 >> 3;
            if ( v21 >> 3 > 0 )
            {
              if ( ((unsigned __int64)v23 >= v16 + v20 + 32 || (unsigned __int64)v22 >= v17 + 4 * v19 + 32) && v24 > 1 )
              {
                v25 = 0;
                v26 = v24 - 1;
                do
                {
                  v27 = _mm_loadu_si128((const __m128i *)&v23[v25 + 4]);
                  *(__m128i *)&v22[v25] = _mm_loadu_si128((const __m128i *)&v23[v25]);
                  *(__m128i *)&v22[v25 + 4] = v27;
                  v25 += 8;
                }
                while ( v25 != 8 * (v26 + 1) );
              }
              else
              {
                v65 = v22;
                v66 = v23;
                v26 = v24 - 1;
                do
                {
                  v67 = *v66;
                  v65 += 8;
                  v66 += 8;
                  *(v65 - 8) = v67;
                  *(v65 - 7) = *(v66 - 7);
                  *(v65 - 6) = *(v66 - 6);
                  *(v65 - 5) = *(v66 - 5);
                  *(v65 - 4) = *(v66 - 4);
                  *(v65 - 3) = *(v66 - 3);
                  *(v65 - 2) = *(v66 - 2);
                  *(v65 - 1) = *(v66 - 1);
                }
                while ( &v22[8 * v26 + 8] != v65 );
              }
              v28 = 32 * ((int)v26 + 1LL);
              v23 = (int *)((char *)v23 + v28);
              v22 = (int *)((char *)v22 + v28);
            }
            switch ( v21 % 8 )
            {
              case 1:
                goto LABEL_36;
              case 2:
                goto LABEL_35;
              case 3:
                goto LABEL_34;
              case 4:
                goto LABEL_33;
              case 5:
                goto LABEL_32;
              case 6:
                goto LABEL_31;
              case 7:
                v22[6] = v23[6];
LABEL_31:
                v22[5] = v23[5];
LABEL_32:
                v22[4] = v23[4];
LABEL_33:
                v22[3] = v23[3];
LABEL_34:
                v22[2] = v23[2];
LABEL_35:
                v22[1] = v23[1];
LABEL_36:
                *v22 = *v23;
                break;
              default:
                break;
            }
            v18 = *(int *)(v13 + 4 * v14 - 4);
            v19 = *(int *)(v15 + 4 * v14 - 4);
            v10 = *((_DWORD *)a2 + 16);
          }
          v30 = (_QWORD *)(v74 + 8 * v18);
          v31 = (_QWORD *)(v76 + 8 * v19);
          if ( v30 != v31 && v21 )
          {
            if ( v21 >> 3 > 0 )
            {
              v32 = v30;
              v33 = (__int64 *)(v76 + 8 * v19);
              v34 = (unsigned int)((v21 >> 3) - 1);
              do
              {
                v35 = *v33;
                v32 += 8;
                v33 += 8;
                *(v32 - 8) = v35;
                *(v32 - 7) = *(v33 - 7);
                *(v32 - 6) = *(v33 - 6);
                *(v32 - 5) = *(v33 - 5);
                *(v32 - 4) = *(v33 - 4);
                *(v32 - 3) = *(v33 - 3);
                *(v32 - 2) = *(v33 - 2);
                *(v32 - 1) = *(v33 - 1);
              }
              while ( v32 != &v30[8 * v34 + 8] );
              v36 = ((int)v34 + 1LL) << 6;
              v31 = (_QWORD *)((char *)v31 + v36);
              v30 = (_QWORD *)((char *)v30 + v36);
            }
            switch ( v21 % 8 )
            {
              case 1:
                goto LABEL_24;
              case 2:
                goto LABEL_23;
              case 3:
                goto LABEL_22;
              case 4:
                goto LABEL_21;
              case 5:
                goto LABEL_20;
              case 6:
                goto LABEL_19;
              case 7:
                v30[6] = v31[6];
LABEL_19:
                v30[5] = v31[5];
LABEL_20:
                v30[4] = v31[4];
LABEL_21:
                v30[3] = v31[3];
LABEL_22:
                v30[2] = v31[2];
LABEL_23:
                v30[1] = v31[1];
LABEL_24:
                *v30 = *v31;
                break;
              default:
                break;
            }
          }
          v29 = v14++;
        }
        while ( v29 < v10 );
        v6 = this;
        v11 = *((int *)this + 16);
        v12 = 4 * v11;
      }
      v7 = v11 + v10;
      *((_QWORD *)v6 + 6) = v13 - v12;
    }
    result = *((unsigned int *)a2 + 18);
    *((_DWORD *)v6 + 18) += result;
    *((_DWORD *)v6 + 16) = v7;
  }
  return result;
}

