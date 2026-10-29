void *__fastcall CoinModel::setOriginalIndices(CoinModel *this, const int *a2, const int *a3)
{
  void *v5; // rdi
  unsigned __int64 v6; // rdx
  void *v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v10; // rax

  v5 = *((void **)this + 22);
  v6 = *((int *)this + 2);
  if ( !v5 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_8;
    v10 = operator new[](4 * v6);
    v6 = *((int *)this + 2);
    v5 = (void *)v10;
    *((_QWORD *)this + 22) = v10;
  }
  memcpy(v5, a2, 4 * v6);
  v7 = *((void **)this + 35);
  if ( !v7 )
  {
    v8 = *((int *)this + 3);
    if ( v8 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v7 = (void *)operator new[](4 * v8);
      *((_QWORD *)this + 35) = v7;
      return memcpy(v7, a3, 4LL * *((int *)this + 3));
    }
LABEL_8:
    __cxa_throw_bad_array_new_length();
  }
  return memcpy(v7, a3, 4LL * *((int *)this + 3));
}

