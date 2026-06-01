__int64 __fastcall CoinPackedMatrix::minorAppendSameOrdered(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r9
  const int *v11; // r8
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r11d
  __int64 v15; // rdi
  int v16; // edx
  int *v17; // rbp
  int v18; // esi
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r10
  __int64 v22; // r15
  __int64 v23; // r12
  _DWORD *v24; // rcx
  unsigned __int64 v25; // r13
  int v26; // r8d
  unsigned int v27; // eax
  __int64 v28; // r13
  unsigned int v29; // r14d
  __int64 v30; // rax
  __m128i v31; // xmm1
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // edx
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // edx
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // r8d
  _QWORD *v48; // r10
  _QWORD *v49; // r11
  _QWORD *v50; // rax
  __int64 *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // xmm0_8
  __int64 v54; // r8
  int v55; // edx
  unsigned __int64 v56; // rax
  void *exception; // r13
  _DWORD *v58; // [rsp+0h] [rbp-A8h]
  __int64 v60; // [rsp+10h] [rbp-98h]
  int *v61; // [rsp+18h] [rbp-90h]
  __int64 v62; // [rsp+20h] [rbp-88h]
  __int64 v63; // [rsp+28h] [rbp-80h]
  __int64 v64; // [rsp+50h] [rbp-58h]
  __int64 v65; // [rsp+58h] [rbp-50h]
  __int64 v66; // [rsp+60h] [rbp-48h]

  result = *((unsigned int *)this + 16);
  if ( (_DWORD)result != *((_DWORD *)a2 + 16) )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v64 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v64 - 24);
    if ( (_UNKNOWN *)(v65 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v65 - 24);
    if ( (_UNKNOWN *)(v66 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v66 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v3 = *((_DWORD *)a2 + 17);
  if ( v3 )
  {
    v6 = result - 1;
    v7 = v6;
    if ( v6 < 0 )
    {
LABEL_34:
      *((_DWORD *)this + 17) += v3;
      result = *((unsigned int *)a2 + 18);
      *((_DWORD *)this + 18) += result;
      return result;
    }
    v8 = *((_QWORD *)this + 6);
    v9 = *((_QWORD *)this + 7);
    v10 = v6;
    v11 = *((const int **)a2 + 7);
    v12 = 4 * v10;
    v13 = *(_DWORD *)(v9 + 4 * v10);
    v61 = (int *)v11;
    v14 = v13 + *(_DWORD *)(v8 + 4 * v10);
    if ( *(_DWORD *)(v8 + 4 * v10 + 4) < v14 + v11[v10] )
    {
LABEL_45:
      CoinPackedMatrix::resizeForAddingMinorVectors(this, v11);
      v55 = *((_DWORD *)this + 16) - 1;
      if ( v55 < 0 )
      {
LABEL_33:
        v3 = *((_DWORD *)a2 + 17);
        goto LABEL_34;
      }
      v8 = *((_QWORD *)this + 6);
      v10 = v55;
      v9 = *((_QWORD *)this + 7);
      v13 = *(_DWORD *)(v9 + 4LL * v55);
      v61 = *((int **)a2 + 7);
      v14 = v13 + *(_DWORD *)(v8 + 4LL * v55);
    }
    else
    {
      v15 = 4 * (v10 - v7);
      while ( v12 != v15 )
      {
        v16 = v11[(unsigned __int64)v12 / 4 - 1] + *(_DWORD *)(v8 + v12 - 4) + *(_DWORD *)(v9 + v12 - 4);
        v12 -= 4;
        if ( v16 > *(_DWORD *)(v8 + v12 + 4) )
          goto LABEL_45;
      }
    }
    v63 = *((_QWORD *)a2 + 4);
    v60 = *((_QWORD *)a2 + 6);
    v17 = (int *)(4 * v10 + v9);
    v58 = (_DWORD *)(4 * v10 + v8);
    v62 = *((_QWORD *)this + 4);
    while ( 1 )
    {
      v18 = v61[v10];
      v19 = *(int *)(v60 + 4 * v10);
      v20 = v14;
      if ( v18 > 0 )
      {
        v21 = *((_QWORD *)this + 5);
        v22 = 4LL * (int)v19;
        v23 = *((_QWORD *)a2 + 5);
        v24 = (_DWORD *)(v21 + 4LL * v14);
        v25 = v23 + v22;
        if ( (unsigned int)v18 > 8
          && (v23 + v22 >= (unsigned __int64)(v24 + 4) || (unsigned __int64)v24 >= v23 + v22 + 16)
          && (v24 >= (_DWORD *)this + 18 || (unsigned __int64)this + 68 >= v21 + 4 * (v18 + (__int64)v14)) )
        {
          v26 = 0;
          v27 = -(int)(v25 >> 2) & 3;
          if ( v27 )
          {
            *v24 = *(_DWORD *)v25 + *((_DWORD *)this + 17);
            v26 = 1;
            if ( v27 != 1 )
            {
              v28 = 4LL * (v14 + 1);
              *(_DWORD *)(v21 + v28) = *(_DWORD *)(v23 + v22 + 4) + *((_DWORD *)this + 17);
              v26 = 2;
              if ( v27 != 2 )
              {
                v26 = 3;
                *(_DWORD *)(v21 + v28 + 4) = *(_DWORD *)(v23 + v22 + 8) + *((_DWORD *)this + 17);
              }
            }
          }
          v29 = v18 - v27;
          v30 = 4LL * v27;
          v31 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 17)), 0);
          v32 = v21 + 4LL * v14 + v30;
          v33 = v23 + v30 + v22;
          v34 = 0;
          v35 = 0;
          do
          {
            ++v35;
            *(__m128i *)(v32 + v34) = _mm_add_epi32(_mm_load_si128((const __m128i *)(v33 + v34)), v31);
            v34 += 16;
          }
          while ( v29 >> 2 > v35 );
          v36 = (v29 & 0xFFFFFFFC) + v26;
          if ( (v29 & 0xFFFFFFFC) != v29 )
          {
            *(_DWORD *)(v21 + 4LL * (int)(v14 + v36)) = *(_DWORD *)(v23 + 4LL * (int)(v19 + v36))
                                                      + *((_DWORD *)this + 17);
            v37 = v36 + 1;
            if ( (int)(v36 + 1) < v18 )
            {
              v38 = v37 + v14;
              v39 = *(_DWORD *)(v23 + 4LL * (int)(v19 + v37)) + *((_DWORD *)this + 17);
              v40 = v36 + 2;
              *(_DWORD *)(v21 + 4LL * (int)v38) = v39;
              if ( v18 > (int)(v36 + 2) )
              {
                v41 = v14 + v40;
                v42 = *(_DWORD *)(v23 + 4LL * (int)(v19 + v40)) + *((_DWORD *)this + 17);
                v43 = v36 + 3;
                *(_DWORD *)(v21 + 4LL * (int)v41) = v42;
                if ( v18 > (int)(v36 + 3) )
                {
                  v44 = v14 + v43;
                  v45 = *(_DWORD *)(v23 + 4LL * (int)(v19 + v43)) + *((_DWORD *)this + 17);
                  v46 = v36 + 4;
                  *(_DWORD *)(v21 + 4LL * (int)v44) = v45;
                  if ( v18 > (int)(v36 + 4) )
                  {
                    v47 = v36 + 5;
                    *(_DWORD *)(v21 + 4LL * (int)(v14 + v46)) = *(_DWORD *)(v23 + 4LL * (int)(v19 + v46))
                                                              + *((_DWORD *)this + 17);
                    if ( v18 > v47 )
                      *(_DWORD *)(v21 + 4LL * (v47 + v14)) = *(_DWORD *)(v23 + 4LL * ((int)v19 + v47))
                                                           + *((_DWORD *)this + 17);
                  }
                }
              }
            }
          }
        }
        else
        {
          v56 = 0;
          do
          {
            v24[v56 / 4] = *((_DWORD *)this + 17) + *(_DWORD *)(v25 + v56);
            v56 += 4LL;
          }
          while ( v56 != 4LL * (unsigned int)(v18 - 1) + 4 );
        }
        v13 = *v17;
        v19 = *(int *)(v60 + 4 * v10);
        v20 = *v17 + *v58;
      }
      v48 = (_QWORD *)(v62 + 8LL * v20);
      v49 = (_QWORD *)(v63 + 8 * v19);
      if ( v18 && v48 != v49 )
      {
        if ( v18 >> 3 > 0 )
        {
          v50 = (_QWORD *)(v62 + 8LL * v20);
          v51 = (__int64 *)(v63 + 8 * v19);
          v52 = (unsigned int)((v18 >> 3) - 1);
          do
          {
            v53 = *v51;
            v50 += 8;
            v51 += 8;
            *(v50 - 8) = v53;
            *(v50 - 7) = *(v51 - 7);
            *(v50 - 6) = *(v51 - 6);
            *(v50 - 5) = *(v51 - 5);
            *(v50 - 4) = *(v51 - 4);
            *(v50 - 3) = *(v51 - 3);
            *(v50 - 2) = *(v51 - 2);
            *(v50 - 1) = *(v51 - 1);
          }
          while ( v50 != &v48[8 * v52 + 8] );
          v54 = ((int)v52 + 1LL) << 6;
          v49 = (_QWORD *)((char *)v49 + v54);
          v48 = (_QWORD *)((char *)v48 + v54);
        }
        switch ( v18 % 8 )
        {
          case 1:
            goto LABEL_42;
          case 2:
            goto LABEL_41;
          case 3:
            goto LABEL_40;
          case 4:
            goto LABEL_39;
          case 5:
            goto LABEL_38;
          case 6:
            goto LABEL_37;
          case 7:
            v48[6] = v49[6];
LABEL_37:
            v48[5] = v49[5];
LABEL_38:
            v48[4] = v49[4];
LABEL_39:
            v48[3] = v49[3];
LABEL_40:
            v48[2] = v49[2];
LABEL_41:
            v48[1] = v49[1];
LABEL_42:
            *v48 = *v49;
            break;
          default:
            break;
        }
      }
      --v10;
      --v58;
      *v17-- = v13 + v18;
      if ( (int)v10 < 0 )
        goto LABEL_33;
      v13 = *v17;
      v14 = *v17 + *v58;
    }
  }
  return result;
}

