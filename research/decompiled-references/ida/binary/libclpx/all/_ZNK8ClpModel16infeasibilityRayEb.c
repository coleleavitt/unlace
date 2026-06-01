char *__fastcall ClpModel::infeasibilityRay(ClpModel *this, char a2)
{
  const void *v2; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  char *v6; // r12
  size_t v7; // rdx
  char *v8; // rbp
  void *v10; // r12

  if ( *((_DWORD *)this + 80) != 1 )
    return nullptr;
  v2 = *((const void **)this + 27);
  if ( !v2 )
    return nullptr;
  v4 = *((int *)this + 26);
  if ( a2 )
  {
    v5 = *((_DWORD *)this + 27) + (int)v4;
    if ( v5 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v6 = (char *)operator new[](8 * v5);
      v7 = 8LL * *((int *)this + 26);
      v8 = &v6[v7];
      memcpy(v6, *((const void **)this + 27), v7);
      memset(v8, 0, 8LL * *((int *)this + 27));
      ClpModel::transposeTimes(this, -1.0, (const double *)v6, (double *)v8);
      return v6;
    }
LABEL_9:
    __cxa_throw_bad_array_new_length();
  }
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_9;
  v10 = (void *)operator new[](8 * v4);
  memcpy(v10, v2, 8 * v4);
  return (char *)v10;
}

