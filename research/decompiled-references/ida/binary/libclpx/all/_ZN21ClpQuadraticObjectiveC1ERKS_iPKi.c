// Alternative name is '_ZN21ClpQuadraticObjectiveC2ERKS_iPKi'
void __fastcall ClpQuadraticObjective::ClpQuadraticObjective(
        ClpQuadraticObjective *this,
        const CoinPackedMatrix **a2,
        int a3,
        const int *a4)
{
  int v8; // edi
  char v9; // al
  int v10; // edi
  const int *v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  int v14; // r10d
  const CoinPackedMatrix *v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r8
  int v19; // ecx
  _QWORD *v20; // r9
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r9d
  const CoinPackedMatrix *v27; // rdi
  __int64 v28; // rdx
  __int64 *v29; // r8
  int v30; // ecx
  __int64 *v31; // rdi
  __int64 *v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // xmm0_8
  __int64 v35; // rax
  CoinPackedMatrix *v36; // r14
  bool v37; // zf
  void *exception; // r14
  __int64 v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]

  ClpObjective::ClpObjective(this, (const ClpObjective *)a2);
  v8 = *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 12);
  *(_QWORD *)this = &off_4D12A0;
  v9 = *((_BYTE *)a2 + 56);
  v10 = a3 + v8;
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = v10;
  *((_BYTE *)this + 56) = v9;
  if ( a3 <= 0 )
    goto LABEL_38;
  v11 = a4;
  v12 = 0;
  do
  {
    if ( *v11 < 0 || *v11 >= *((_DWORD *)a2 + 12) )
      ++v12;
    ++v11;
  }
  while ( &a4[a3 - 1 + 1] != v11 );
  if ( v12 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v39 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C510(v39 - 24);
    if ( (_UNKNOWN *)(v40 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C510(v40 - 24);
    if ( (_UNKNOWN *)(v41 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C510(v41 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  *((_DWORD *)this + 12) = a3;
  if ( (unsigned __int64)v10 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v13 = operator new[](8LL * v10);
  v14 = *((_DWORD *)this + 12);
  *((_QWORD *)this + 4) = v13;
  if ( v14 <= 0 )
  {
    v15 = a2[4];
  }
  else
  {
    v15 = a2[4];
    v16 = 0;
    do
    {
      *(_QWORD *)(v13 + 8 * v16) = *((_QWORD *)v15 + a4[v16]);
      ++v16;
    }
    while ( (unsigned int)(v14 - 1) + 1LL != v16 );
  }
  v17 = *((int *)this + 13);
  v18 = (_QWORD *)(v13 + 8LL * v14);
  v19 = *((_DWORD *)this + 13) - v14;
  v20 = (_QWORD *)((char *)v15 + 8 * *((int *)a2 + 12));
  if ( v19 && v18 != v20 )
  {
    if ( v19 >> 3 > 0 )
    {
      v21 = v13 + 8LL * v14;
      v22 = (__int64 *)((char *)v15 + 8 * *((int *)a2 + 12));
      do
      {
        v23 = *v22;
        v22 += 8;
        v21 += 64;
        *(_QWORD *)(v21 - 64) = v23;
        *(_QWORD *)(v21 - 56) = *(v22 - 7);
        *(_QWORD *)(v21 - 48) = *(v22 - 6);
        *(_QWORD *)(v21 - 40) = *(v22 - 5);
        *(_QWORD *)(v21 - 32) = *(v22 - 4);
        *(_QWORD *)(v21 - 24) = *(v22 - 3);
        *(_QWORD *)(v21 - 16) = *(v22 - 2);
        *(_QWORD *)(v21 - 8) = *(v22 - 1);
      }
      while ( &v20[8 * (unsigned int)((v19 >> 3) - 1) + 8] != v22 );
      v24 = ((v19 >> 3) - 1 + 1LL) << 6;
      v20 = (_QWORD *)((char *)v20 + v24);
      v18 = (_QWORD *)((char *)v18 + v24);
    }
    switch ( v19 % 8 )
    {
      case 1:
        goto LABEL_25;
      case 2:
        goto LABEL_24;
      case 3:
        goto LABEL_23;
      case 4:
        goto LABEL_22;
      case 5:
        goto LABEL_21;
      case 6:
        goto LABEL_20;
      case 7:
        v18[6] = v20[6];
LABEL_20:
        v18[5] = v20[5];
LABEL_21:
        v18[4] = v20[4];
LABEL_22:
        v18[3] = v20[3];
LABEL_23:
        v18[2] = v20[2];
LABEL_24:
        v18[1] = v20[1];
LABEL_25:
        *v18 = *v20;
        break;
      default:
        break;
    }
  }
  if ( a2[5] )
  {
    if ( v17 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v25 = operator new[](8 * v17);
    v26 = *((_DWORD *)this + 12);
    *((_QWORD *)this + 5) = v25;
    if ( v26 <= 0 )
    {
      v27 = a2[5];
    }
    else
    {
      v27 = a2[5];
      v28 = 0;
      do
      {
        *(_QWORD *)(v25 + 8 * v28) = *((_QWORD *)v27 + a4[v28]);
        ++v28;
      }
      while ( (unsigned int)(v26 - 1) + 1LL != v28 );
    }
    v29 = (__int64 *)(v25 + 8LL * v26);
    v30 = *((_DWORD *)this + 13) - v26;
    v31 = (__int64 *)((char *)v27 + 8 * *((int *)a2 + 12));
    if ( v30 && v29 != v31 )
    {
      if ( v30 >> 3 > 0 )
      {
        v32 = v31;
        v33 = (__int64 *)(v25 + 8LL * v26);
        do
        {
          v34 = *v32;
          v33 += 8;
          v32 += 8;
          *(v33 - 8) = v34;
          *(v33 - 7) = *(v32 - 7);
          *(v33 - 6) = *(v32 - 6);
          *(v33 - 5) = *(v32 - 5);
          *(v33 - 4) = *(v32 - 4);
          *(v33 - 3) = *(v32 - 3);
          *(v33 - 2) = *(v32 - 2);
          *(v33 - 1) = *(v32 - 1);
        }
        while ( v33 != &v29[8 * (unsigned int)((v30 >> 3) - 1) + 8] );
        v35 = ((v30 >> 3) - 1 + 1LL) << 6;
        v31 = (__int64 *)((char *)v31 + v35);
        v29 = (__int64 *)((char *)v29 + v35);
      }
      switch ( v30 % 8 )
      {
        case 1:
          goto LABEL_47;
        case 2:
          goto LABEL_46;
        case 3:
          goto LABEL_45;
        case 4:
          goto LABEL_44;
        case 5:
          goto LABEL_43;
        case 6:
          goto LABEL_42;
        case 7:
          v29[6] = v31[6];
LABEL_42:
          v29[5] = v31[5];
LABEL_43:
          v29[4] = v31[4];
LABEL_44:
          v29[3] = v31[3];
LABEL_45:
          v29[2] = v31[2];
LABEL_46:
          v29[1] = v31[1];
LABEL_47:
          v37 = a2[3] == nullptr;
          *v29 = *v31;
          if ( v37 )
            goto LABEL_48;
          goto LABEL_40;
        default:
          break;
      }
    }
  }
  else
  {
LABEL_38:
    *((_QWORD *)this + 5) = 0;
  }
  if ( a2[3] )
  {
LABEL_40:
    v36 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v36, a2[3], a3, a4, a3, a4);
    *((_QWORD *)this + 3) = v36;
  }
  else
  {
LABEL_48:
    *((_QWORD *)this + 3) = 0;
  }
}

