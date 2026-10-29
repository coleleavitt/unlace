// Alternative name is '_ZN23ClpPrimalColumnSteepestC1ERKS_'
void __fastcall ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(
        ClpPrimalColumnSteepest *this,
        const CoinIndexedVector **a2)
{
  int v3; // edx
  const CoinIndexedVector *v4; // xmm0_8
  const CoinIndexedVector *v5; // rax
  int v6; // edx
  int v7; // edx
  CoinIndexedVector *v8; // r12
  bool v9; // zf
  int v10; // r12d
  const CoinIndexedVector *v11; // rax
  const CoinIndexedVector *v12; // rdi
  const CoinIndexedVector *v13; // rcx
  const CoinIndexedVector *v14; // rdx
  __int64 v15; // xmm0_8
  __int64 v16; // rdx
  const CoinIndexedVector *v17; // rax
  const CoinIndexedVector *v18; // r8
  const CoinIndexedVector *v19; // rcx
  const CoinIndexedVector *v20; // rdx
  __int64 v21; // xmm0_8
  __int64 v22; // rdx
  CoinIndexedVector *v23; // r12
  const CoinIndexedVector *v24; // r13
  int v25; // r12d
  unsigned __int64 v26; // r12
  void *v27; // rax
  void *v28; // rcx

  ClpPrimalColumnPivot::ClpPrimalColumnPivot(this, (const ClpPrimalColumnPivot *)a2);
  v3 = *((_DWORD *)a2 + 23);
  v4 = a2[3];
  *(_QWORD *)this = &off_4D1208;
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  v5 = a2[1];
  *((_DWORD *)this + 23) = v3;
  v6 = *((_DWORD *)a2 + 24);
  *((_QWORD *)this + 1) = v5;
  *((_DWORD *)this + 24) = v6;
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  v7 = *((_DWORD *)a2 + 27);
  *((_QWORD *)this + 3) = v4;
  *((_DWORD *)this + 27) = v7;
  if ( !v5 || (*((_BYTE *)v5 + 316) & 1) == 0 )
  {
    *((_QWORD *)this + 5) = 0;
    *((_QWORD *)this + 8) = 0;
    *((_QWORD *)this + 4) = 0;
    *((_QWORD *)this + 7) = 0;
    *((_QWORD *)this + 6) = 0;
    return;
  }
  if ( a2[5] )
  {
    v8 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v8, a2[5]);
    v9 = a2[4] == nullptr;
    *((_QWORD *)this + 5) = v8;
    *((_QWORD *)this + 8) = 0;
    if ( !v9 )
      goto LABEL_5;
LABEL_44:
    *((_QWORD *)this + 4) = 0;
    *((_QWORD *)this + 7) = 0;
    goto LABEL_36;
  }
  v9 = a2[4] == nullptr;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 8) = 0;
  if ( v9 )
    goto LABEL_44;
LABEL_5:
  v10 = *(_DWORD *)(*((_QWORD *)this + 1) + 104LL) + *(_DWORD *)(*((_QWORD *)this + 1) + 108LL);
  if ( (unsigned __int64)v10 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v11 = (const CoinIndexedVector *)operator new[](8LL * v10);
  *((_QWORD *)this + 4) = v11;
  v12 = a2[4];
  if ( v12 != v11 && v10 )
  {
    if ( v10 >> 3 > 0 )
    {
      v13 = a2[4];
      v14 = v11;
      do
      {
        v15 = *(_QWORD *)v13;
        v14 = (const CoinIndexedVector *)((char *)v14 + 64);
        v13 = (const CoinIndexedVector *)((char *)v13 + 64);
        *((_QWORD *)v14 - 8) = v15;
        *((_QWORD *)v14 - 7) = *((_QWORD *)v13 - 7);
        *((_QWORD *)v14 - 6) = *((_QWORD *)v13 - 6);
        *((_QWORD *)v14 - 5) = *((_QWORD *)v13 - 5);
        *((_QWORD *)v14 - 4) = *((_QWORD *)v13 - 4);
        *((_QWORD *)v14 - 3) = *((_QWORD *)v13 - 3);
        *((_QWORD *)v14 - 2) = *((_QWORD *)v13 - 2);
        *((_QWORD *)v14 - 1) = *((_QWORD *)v13 - 1);
      }
      while ( v14 != (const CoinIndexedVector *)((char *)v11 + 64 * (unsigned int)((v10 >> 3) - 1) + 64) );
      v16 = ((v10 >> 3) - 1 + 1LL) << 6;
      v12 = (const CoinIndexedVector *)((char *)v12 + v16);
      v11 = (const CoinIndexedVector *)((char *)v11 + v16);
    }
    switch ( v10 % 8 )
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
        *((_QWORD *)v11 + 6) = *((_QWORD *)v12 + 6);
LABEL_15:
        *((_QWORD *)v11 + 5) = *((_QWORD *)v12 + 5);
LABEL_16:
        *((_QWORD *)v11 + 4) = *((_QWORD *)v12 + 4);
LABEL_17:
        *((_QWORD *)v11 + 3) = *((_QWORD *)v12 + 3);
LABEL_18:
        *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
LABEL_19:
        *((_QWORD *)v11 + 1) = *((_QWORD *)v12 + 1);
LABEL_20:
        *(_QWORD *)v11 = *(_QWORD *)v12;
        break;
      default:
        break;
    }
  }
  v17 = (const CoinIndexedVector *)operator new[](8LL * v10);
  *((_QWORD *)this + 7) = v17;
  v18 = a2[7];
  if ( v18 != v17 && v10 )
  {
    if ( v10 >> 3 > 0 )
    {
      v19 = a2[7];
      v20 = v17;
      do
      {
        v21 = *(_QWORD *)v19;
        v20 = (const CoinIndexedVector *)((char *)v20 + 64);
        v19 = (const CoinIndexedVector *)((char *)v19 + 64);
        *((_QWORD *)v20 - 8) = v21;
        *((_QWORD *)v20 - 7) = *((_QWORD *)v19 - 7);
        *((_QWORD *)v20 - 6) = *((_QWORD *)v19 - 6);
        *((_QWORD *)v20 - 5) = *((_QWORD *)v19 - 5);
        *((_QWORD *)v20 - 4) = *((_QWORD *)v19 - 4);
        *((_QWORD *)v20 - 3) = *((_QWORD *)v19 - 3);
        *((_QWORD *)v20 - 2) = *((_QWORD *)v19 - 2);
        *((_QWORD *)v20 - 1) = *((_QWORD *)v19 - 1);
      }
      while ( v20 != (const CoinIndexedVector *)((char *)v17 + 64 * (unsigned int)((v10 >> 3) - 1) + 64) );
      v22 = ((v10 >> 3) - 1 + 1LL) << 6;
      v18 = (const CoinIndexedVector *)((char *)v18 + v22);
      v17 = (const CoinIndexedVector *)((char *)v17 + v22);
    }
    switch ( v10 % 8 )
    {
      case 1:
        goto LABEL_34;
      case 2:
        goto LABEL_33;
      case 3:
        goto LABEL_32;
      case 4:
        goto LABEL_31;
      case 5:
        goto LABEL_30;
      case 6:
        goto LABEL_29;
      case 7:
        *((_QWORD *)v17 + 6) = *((_QWORD *)v18 + 6);
LABEL_29:
        *((_QWORD *)v17 + 5) = *((_QWORD *)v18 + 5);
LABEL_30:
        *((_QWORD *)v17 + 4) = *((_QWORD *)v18 + 4);
LABEL_31:
        *((_QWORD *)v17 + 3) = *((_QWORD *)v18 + 3);
LABEL_32:
        *((_QWORD *)v17 + 2) = *((_QWORD *)v18 + 2);
LABEL_33:
        *((_QWORD *)v17 + 1) = *((_QWORD *)v18 + 1);
LABEL_34:
        *(_QWORD *)v17 = *(_QWORD *)v18;
        break;
      default:
        break;
    }
  }
  if ( *((_DWORD *)this + 19) != 1 )
  {
    v24 = a2[8];
    v25 = (v10 + 31) >> 5;
    if ( v24 )
    {
      if ( (unsigned __int64)v25 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v26 = 4LL * v25;
      v27 = (void *)operator new[](v26);
      v28 = memcpy(v27, v24, v26);
    }
    else
    {
      v28 = nullptr;
    }
    v9 = a2[6] == nullptr;
    *((_QWORD *)this + 8) = v28;
    if ( !v9 )
      goto LABEL_37;
    goto LABEL_42;
  }
LABEL_36:
  if ( a2[6] )
  {
LABEL_37:
    v23 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v23, a2[6]);
    *((_QWORD *)this + 6) = v23;
    return;
  }
LABEL_42:
  *((_QWORD *)this + 6) = 0;
}

