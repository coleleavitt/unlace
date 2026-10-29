__int64 __fastcall CoinStructuredModel::rowBlock(CoinStructuredModel *this, const void **a2)
{
  int v2; // r12d
  const void *v3; // r14
  unsigned int v4; // ebp
  const void **v5; // rbx
  size_t v6; // r13
  const void *v7; // rsi

  v2 = *((_DWORD *)this + 25);
  if ( v2 <= 0 )
  {
    v4 = 0;
  }
  else
  {
    v3 = *a2;
    v4 = 0;
    v5 = *((const void ***)this + 15);
    v6 = *((_QWORD *)*a2 - 3);
    if ( v6 )
    {
      v7 = *v5;
      if ( v6 == *((_QWORD *)*v5 - 3) )
        goto LABEL_6;
      while ( 1 )
      {
        ++v4;
        ++v5;
        if ( v2 == v4 )
          return 0xFFFFFFFFLL;
        v7 = *v5;
        if ( v6 == *((_QWORD *)*v5 - 3) )
        {
LABEL_6:
          if ( !memcmp(v3, v7, v6) )
            goto LABEL_7;
        }
      }
    }
    while ( *((_QWORD *)*v5 - 3) )
    {
      ++v4;
      ++v5;
      if ( v4 == v2 )
        return 0xFFFFFFFFLL;
    }
  }
LABEL_7:
  if ( v2 != v4 )
    return v4;
  return 0xFFFFFFFFLL;
}

