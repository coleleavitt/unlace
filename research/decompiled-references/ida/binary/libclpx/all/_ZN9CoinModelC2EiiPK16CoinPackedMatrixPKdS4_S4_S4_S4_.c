// Alternative name is '_ZN9CoinModelC1EiiPK16CoinPackedMatrixPKdS4_S4_S4_S4_'
void __fastcall CoinModel::CoinModel(
        CoinModel *this,
        int a2,
        int a3,
        const CoinPackedMatrix *a4,
        const double *a5,
        const double *a6,
        const double *a7,
        const double *a8,
        const double *src)
{
  int v13; // eax
  CoinPackedMatrix *v14; // r12
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  void *v17; // rax
  void *v18; // rax
  void *v19; // rcx
  unsigned __int64 v20; // rbp
  void *v21; // rax
  void *v22; // rcx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  void *v25; // rax
  void *v26; // rax
  void *v27; // rcx
  unsigned __int64 v28; // rbp
  void *v29; // rax
  void *v30; // rax
  void *v31; // rcx
  unsigned __int64 v32; // rbp
  void *v33; // rax
  void *v34; // rcx

  CoinBaseModel::CoinBaseModel(this);
  *((_DWORD *)this + 25) = a2;
  *((_DWORD *)this + 26) = a3;
  *(_QWORD *)this = &off_4D1800;
  *((_DWORD *)this + 27) = *((_DWORD *)a4 + 18);
  v13 = *((_DWORD *)a4 + 18);
  *(_QWORD *)((char *)this + 116) = 0;
  *((_DWORD *)this + 28) = v13;
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 144));
  *((_QWORD *)this + 22) = 0;
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 208));
  *((_QWORD *)this + 30) = 0;
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 248));
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 38) = 0;
  CoinModelHash2::CoinModelHash2((CoinModel *)((char *)this + 312));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 336));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 392));
  *((_QWORD *)this + 56) = 0;
  CoinModelHash2::CoinModelHash2((CoinModel *)((char *)this + 456));
  *((_QWORD *)this + 60) = 0;
  *((_QWORD *)this + 61) = 0;
  *((_DWORD *)this + 124) = 0;
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 504));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 560));
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 78) = 0;
  *((_DWORD *)this + 158) = 0;
  *((_QWORD *)this + 80) = 0;
  *((_QWORD *)this + 81) = 0;
  *((_QWORD *)this + 82) = 0;
  *((_QWORD *)this + 83) = 0;
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 85) = 0;
  *((_QWORD *)this + 86) = 0;
  *((_QWORD *)this + 87) = 0;
  *((_BYTE *)this + 708) = 0;
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  *((_DWORD *)this + 176) = 3;
  v14 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v14, a4);
  *((_QWORD *)this + 38) = v14;
  v15 = *((int *)this + 2);
  if ( a5 )
  {
    if ( v15 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v16 = 8 * v15;
    v17 = (void *)operator new[](v16);
    v18 = memcpy(v17, a5, v16);
    v15 = *((int *)this + 2);
    v19 = v18;
  }
  else
  {
    v19 = nullptr;
  }
  *((_QWORD *)this + 16) = v19;
  if ( a6 )
  {
    if ( v15 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v20 = 8 * v15;
    v21 = (void *)operator new[](v20);
    v22 = memcpy(v21, a6, v20);
  }
  else
  {
    v22 = nullptr;
  }
  *((_QWORD *)this + 17) = v22;
  v23 = *((int *)this + 3);
  if ( src )
  {
    if ( v23 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v24 = 8 * v23;
    v25 = (void *)operator new[](v24);
    v26 = memcpy(v25, src, v24);
    v23 = *((int *)this + 3);
    v27 = v26;
  }
  else
  {
    v27 = nullptr;
  }
  *((_QWORD *)this + 23) = v27;
  if ( a7 )
  {
    if ( v23 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v28 = 8 * v23;
    v29 = (void *)operator new[](v28);
    v30 = memcpy(v29, a7, v28);
    v23 = *((int *)this + 3);
    v31 = v30;
  }
  else
  {
    v31 = nullptr;
  }
  *((_QWORD *)this + 24) = v31;
  if ( a8 )
  {
    if ( v23 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v32 = 8 * v23;
    v33 = (void *)operator new[](v32);
    v34 = memcpy(v33, a8, v32);
  }
  else
  {
    v34 = nullptr;
  }
  *((_QWORD *)this + 25) = v34;
}

