void __fastcall ClpSimplex::copyEnabledStuff(ClpSimplex *this, const ClpSimplex *a2)
{
  const void *v3; // r14
  int v4; // ebx
  unsigned __int64 v5; // r13
  void *v6; // rax
  const void *v7; // r14
  void *v8; // rcx
  void *v9; // rax
  const void *v10; // r14
  void *v11; // rax
  void *v12; // rcx
  const void *v13; // r14
  void *v14; // rax
  char *v15; // rcx
  const void *v16; // r13
  int v17; // ebx
  unsigned __int64 v18; // rbx
  void *v19; // rax
  char *v20; // rax
  char *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rbx
  ClpFactorization *v28; // rbx
  void *v29; // rdi
  const void *v30; // r13
  unsigned __int64 v31; // rdx
  size_t v32; // rbx
  void *v33; // rax
  void *v34; // rcx
  __int64 i; // rbx
  CoinIndexedVector *v36; // r13
  CoinIndexedVector *v37; // r13
  ClpNonLinearCost *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi

  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  v3 = *((const void **)a2 + 150);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_39;
    v5 = 8LL * v4;
    v6 = (void *)operator new[](v5);
    *((_QWORD *)this + 150) = memcpy(v6, v3, v5);
    v7 = *((const void **)a2 + 123);
    v8 = nullptr;
    if ( v7 )
    {
      v9 = (void *)operator new[](v5);
      v8 = memcpy(v9, v7, v5);
    }
    *((_QWORD *)this + 123) = v8;
    v10 = *((const void **)a2 + 126);
    if ( v10 )
    {
      v11 = (void *)operator new[](v5);
      v12 = memcpy(v11, v10, v5);
    }
    else
    {
      v12 = nullptr;
    }
    *((_QWORD *)this + 126) = v12;
    v13 = *((const void **)a2 + 147);
    if ( v13 )
    {
      v14 = (void *)operator new[](v5);
      v15 = (char *)memcpy(v14, v13, v5);
    }
    else
    {
      v15 = nullptr;
    }
    *((_QWORD *)this + 147) = v15;
    v16 = *((const void **)a2 + 129);
    v17 = 2 * v4;
    if ( v16 )
    {
      if ( (unsigned __int64)v17 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_39;
      v18 = 8LL * v17;
      v19 = (void *)operator new[](v18);
      v20 = (char *)memcpy(v19, v16, v18);
      v15 = *((char **)this + 147);
      v21 = v20;
    }
    else
    {
      v21 = nullptr;
    }
    v22 = *((int *)this + 27);
    v23 = *((_QWORD *)this + 150);
    *((_QWORD *)this + 149) = v15;
    *((_QWORD *)this + 129) = v21;
    *((_QWORD *)this + 131) = v21;
    *((_QWORD *)this + 152) = v23;
    v22 *= 8;
    *((_QWORD *)this + 151) = v22 + v23;
    v24 = *((_QWORD *)this + 123);
    *((_QWORD *)this + 148) = &v15[v22];
    *((_QWORD *)this + 130) = &v21[v22];
    v25 = v24 + v22;
    *((_QWORD *)this + 125) = v24;
    v26 = *((_QWORD *)this + 126);
    *((_QWORD *)this + 124) = v25;
    *((_QWORD *)this + 128) = v26;
    *((_QWORD *)this + 127) = v26 + v22;
  }
  if ( *((_QWORD *)a2 + 158) )
  {
    v27 = *((void **)this + 158);
    if ( v27 )
    {
      ClpFactorization::~ClpFactorization(*((ClpFactorization **)this + 158));
      operator delete(v27);
    }
    v28 = (ClpFactorization *)operator new(0x50u);
    ClpFactorization::ClpFactorization(v28, *((const ClpFactorization **)a2 + 158), 0);
    v29 = *((void **)this + 157);
    *((_QWORD *)this + 158) = v28;
    if ( v29 )
      operator delete[](v29);
    v30 = *((const void **)a2 + 157);
    v31 = *((int *)this + 26);
    if ( !v30 )
    {
      v34 = nullptr;
      goto LABEL_21;
    }
    if ( v31 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v32 = 4 * v31;
      v33 = (void *)operator new[](4 * v31);
      v34 = memcpy(v33, v30, v32);
LABEL_21:
      *((_QWORD *)this + 157) = v34;
      goto LABEL_22;
    }
LABEL_39:
    __cxa_throw_bad_array_new_length();
  }
LABEL_22:
  for ( i = 1056; i != 1104; i += 8 )
  {
    if ( *(_QWORD *)((char *)a2 + i) )
    {
      v36 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v36, *(const CoinIndexedVector **)((char *)a2 + i));
      *(_QWORD *)((char *)this + i) = v36;
    }
    if ( *(_QWORD *)((char *)a2 + i + 48) )
    {
      v37 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v37, *(const CoinIndexedVector **)((char *)a2 + i + 48));
      *(_QWORD *)((char *)this + i + 48) = v37;
    }
  }
  if ( *((_QWORD *)a2 + 165) )
  {
    v38 = (ClpNonLinearCost *)operator new(0x98u);
    ClpNonLinearCost::ClpNonLinearCost(v38, *((const ClpNonLinearCost **)a2 + 165));
    *((_QWORD *)this + 165) = v38;
  }
  v39 = *((_QWORD *)a2 + 155);
  if ( v39 )
    *((_QWORD *)this + 155) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 88LL))(v39, 1);
  v40 = *((_QWORD *)a2 + 156);
  if ( v40 )
    *((_QWORD *)this + 156) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 72LL))(v40, 1);
}

