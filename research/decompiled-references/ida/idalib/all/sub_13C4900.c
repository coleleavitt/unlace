unsigned __int64 __fastcall sub_13C4900(__int64 a1, const void *a2, size_t a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  void *v11; // rbp

  v8 = a1 + a3 + 1;
  v9 = *a4;
  a4[10] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a4[1] >= v8 + v10 && v9 )
    *a4 = v8 + v10;
  else
    v10 = sub_986170((__int64)a4, v8, a1 + a3 + 1, 3, a5, a6);
  v11 = (void *)(v10 + a1);
  if ( a3 )
    memcpy(v11, a2, a3);
  *((_BYTE *)v11 + a3) = 0;
  return v10;
}
