__int64 __fastcall ClpPrimalColumnSteepest::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // xmm0_8
  int v5; // eax
  void *v6; // rdi
  CoinIndexedVector *v7; // r12
  void *v8; // r12
  void *v9; // rdi
  bool v10; // zf
  CoinIndexedVector *v11; // r12
  int v12; // r12d
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v18; // rdx
  CoinIndexedVector *v19; // r12
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  __int64 *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // xmm0_8
  __int64 v26; // rdx
  const void *v27; // r13
  int v28; // r12d
  unsigned __int64 v29; // r12
  void *v30; // rax
  void *v31; // rcx

  if ( a1 == a2 )
    return a1;
  ClpPrimalColumnPivot::operator=();
  v3 = *(void **)(a1 + 32);
  v4 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  v5 = *(_DWORD *)(a2 + 108);
  *(_QWORD *)(a1 + 24) = v4;
  *(_DWORD *)(a1 + 108) = v5;
  if ( v3 )
    operator delete[](v3);
  v6 = *(void **)(a1 + 64);
  if ( v6 )
    operator delete[](v6);
  v7 = *(CoinIndexedVector **)(a1 + 40);
  *(_QWORD *)(a1 + 64) = 0;
  if ( v7 )
  {
    CoinIndexedVector::~CoinIndexedVector(v7);
    operator delete(v7);
  }
  v8 = *(void **)(a1 + 48);
  if ( v8 )
  {
    CoinIndexedVector::~CoinIndexedVector(*(CoinIndexedVector **)(a1 + 48));
    operator delete(v8);
  }
  v9 = *(void **)(a1 + 56);
  if ( v9 )
    operator delete[](v9);
  v10 = *(_QWORD *)(a2 + 40) == 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( !v10 )
  {
    v11 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v11, *(const CoinIndexedVector **)(a2 + 40));
    v10 = *(_QWORD *)(a2 + 32) == 0;
    *(_QWORD *)(a1 + 40) = v11;
    if ( !v10 )
      goto LABEL_14;
LABEL_34:
    v10 = *(_QWORD *)(a2 + 48) == 0;
    *(_QWORD *)(a1 + 32) = 0;
    if ( !v10 )
      goto LABEL_31;
    goto LABEL_35;
  }
  v10 = *(_QWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a1 + 40) = 0;
  if ( v10 )
    goto LABEL_34;
LABEL_14:
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 104LL) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 108LL);
  if ( (unsigned __int64)v12 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_55;
  v13 = (_QWORD *)operator new[](8LL * v12);
  *(_QWORD *)(a1 + 32) = v13;
  v14 = *(_QWORD **)(a2 + 32);
  if ( v14 != v13 && v12 )
  {
    if ( v12 >> 3 > 0 )
    {
      v15 = *(__int64 **)(a2 + 32);
      v16 = v13;
      do
      {
        v17 = *v15;
        v16 += 8;
        v15 += 8;
        *(v16 - 8) = v17;
        *(v16 - 7) = *(v15 - 7);
        *(v16 - 6) = *(v15 - 6);
        *(v16 - 5) = *(v15 - 5);
        *(v16 - 4) = *(v15 - 4);
        *(v16 - 3) = *(v15 - 3);
        *(v16 - 2) = *(v15 - 2);
        *(v16 - 1) = *(v15 - 1);
      }
      while ( v16 != &v13[8 * (unsigned int)((v12 >> 3) - 1) + 8] );
      v18 = ((v12 >> 3) - 1 + 1LL) << 6;
      v14 = (_QWORD *)((char *)v14 + v18);
      v13 = (_QWORD *)((char *)v13 + v18);
    }
    switch ( v12 % 8 )
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
        v13[6] = v14[6];
LABEL_37:
        v13[5] = v14[5];
LABEL_38:
        v13[4] = v14[4];
LABEL_39:
        v13[3] = v14[3];
LABEL_40:
        v13[2] = v14[2];
LABEL_41:
        v13[1] = v14[1];
LABEL_42:
        *v13 = *v14;
        break;
      default:
        break;
    }
  }
  v21 = (_QWORD *)operator new[](8LL * v12);
  *(_QWORD *)(a1 + 56) = v21;
  v22 = *(_QWORD **)(a2 + 56);
  if ( v22 != v21 && v12 )
  {
    if ( v12 >> 3 > 0 )
    {
      v23 = *(__int64 **)(a2 + 56);
      v24 = v21;
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
      while ( v24 != &v21[8 * (unsigned int)((v12 >> 3) - 1) + 8] );
      v26 = ((v12 >> 3) - 1 + 1LL) << 6;
      v22 = (_QWORD *)((char *)v22 + v26);
      v21 = (_QWORD *)((char *)v21 + v26);
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
        v21[6] = v22[6];
LABEL_23:
        v21[5] = v22[5];
LABEL_24:
        v21[4] = v22[4];
LABEL_25:
        v21[3] = v22[3];
LABEL_26:
        v21[2] = v22[2];
LABEL_27:
        v21[1] = v22[1];
LABEL_28:
        *v21 = *v22;
        break;
      default:
        break;
    }
  }
  if ( *(_DWORD *)(a1 + 76) != 1 )
  {
    v27 = *(const void **)(a2 + 64);
    v28 = (v12 + 31) >> 5;
    if ( !v27 )
    {
      v31 = nullptr;
      goto LABEL_53;
    }
    if ( (unsigned __int64)v28 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v29 = 4LL * v28;
      v30 = (void *)operator new[](v29);
      v31 = memcpy(v30, v27, v29);
LABEL_53:
      *(_QWORD *)(a1 + 64) = v31;
      goto LABEL_30;
    }
LABEL_55:
    __cxa_throw_bad_array_new_length();
  }
LABEL_30:
  if ( *(_QWORD *)(a2 + 48) )
  {
LABEL_31:
    v19 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v19, *(const CoinIndexedVector **)(a2 + 48));
    *(_QWORD *)(a1 + 48) = v19;
    return a1;
  }
LABEL_35:
  *(_QWORD *)(a1 + 48) = 0;
  return a1;
}

