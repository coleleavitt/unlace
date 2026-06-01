void __fastcall CoinSnapshot::createRightHandSide(CoinSnapshot *this)
{
  void *v2; // rdi
  const void *v3; // r12
  unsigned __int64 v4; // rdx
  size_t v5; // rbp
  void *v6; // rax
  char *v7; // rax
  char *v8; // rcx
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rax

  if ( (*((_BYTE *)this + 224) & 0x10) != 0 )
  {
    v2 = *((void **)this + 14);
    if ( v2 )
      operator delete[](v2);
  }
  v3 = *((const void **)this + 13);
  *((_BYTE *)this + 224) |= 0x10u;
  v4 = *((int *)this + 53);
  if ( v3 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v5 = 8 * v4;
    v6 = (void *)operator new[](8 * v4);
    v7 = (char *)memcpy(v6, v3, v5);
    LODWORD(v4) = *((_DWORD *)this + 53);
    v8 = v7;
  }
  else
  {
    v8 = nullptr;
  }
  if ( (int)v4 > 0 )
  {
    v9 = *((double *)this + 2);
    v10 = 8LL * (unsigned int)(v4 - 1) + 8;
    v11 = 0;
    do
    {
      if ( v9 == *(double *)&v8[v11] )
        *(_QWORD *)&v8[v11] = *(_QWORD *)(*((_QWORD *)this + 12) + v11);
      v11 += 8;
    }
    while ( v10 != v11 );
  }
  *((_QWORD *)this + 14) = v8;
}

