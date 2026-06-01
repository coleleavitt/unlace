__int64 __fastcall tos_dialog_t__::vfunc_5(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v15; // rcx
  const char *v17; // rsi
  const char *v18; // rax
  const char *v19; // rbp
  size_t v20; // rax
  int v21; // r9d
  size_t v22; // r12
  void *v23; // rdi
  size_t v24; // r13
  __int64 v25; // rax
  char v26; // [rsp-28h] [rbp-28h]

  if ( *(_DWORD *)(a2 + 12) )
    return 0;
  v15 = &s1;
  if ( a1[43] )
    v15 = (const char *)a1[42];
  v17 = &s1;
  if ( a1[40] )
    v17 = (const char *)a1[39];
  v18 = (const char *)sub_17CD60(0, (int)v17, (int)"%s", (__int64)v15, a13, a14, a3, a4, a5, a6, a7, a8, a9, a10, v26);
  v19 = v18;
  if ( v18 && *v18 )
  {
    v20 = strlen(v18);
    v22 = v20;
    if ( v20 )
    {
      v23 = (void *)a1[36];
      v24 = v20 + 1;
      if ( a1[38] < v20 + 1 )
      {
        v25 = qvector_reserve(a1 + 36, a1[36], v24, 1);
        a1[36] = v25;
        v23 = (void *)v25;
      }
      a1[37] = v24;
      memmove(v23, v19, v22);
      *(_BYTE *)(a1[36] + v22) = 0;
    }
    else
    {
      a1[37] = 0;
    }
    callui(203, 1, (_DWORD)a1, 1, (unsigned int)&callui, v21);
  }
  return 1;
}
