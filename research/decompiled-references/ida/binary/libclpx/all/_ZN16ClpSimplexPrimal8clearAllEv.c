__int64 __fastcall ClpSimplexPrimal::clearAll(ClpSimplexPrimal *this)
{
  CoinIndexedVector *v2; // rdi
  int v3; // eax
  int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, _QWORD, __int64))(**((_QWORD **)this + 24) + 296LL))(
    *((_QWORD *)this + 24),
    this,
    *((_QWORD *)this + 133),
    1);
  v2 = *((CoinIndexedVector **)this + 133);
  v3 = *((_DWORD *)v2 + 4);
  v4 = *(int **)v2;
  if ( v3 > 0 )
  {
    v5 = (__int64)&v4[v3 - 1 + 1];
    do
    {
      v6 = *v4++;
      *(_BYTE *)(*((_QWORD *)this + 33) + v6) &= ~0x80u;
    }
    while ( (int *)v5 != v4 );
    v2 = *((CoinIndexedVector **)this + 133);
  }
  CoinIndexedVector::clear(v2);
  return (*(__int64 (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, char *))(**((_QWORD **)this + 24) + 320LL))(
           *((_QWORD *)this + 24),
           this,
           11,
           (char *)this + 1152);
}

