__int64 __fastcall idp_dirspec_t__::vfunc_2(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  const void *v6; // r13
  void *v7; // rdi
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 40) + 96 * a3;
  if ( a2 == (__int64 *)(v3 + 48) )
    return 1;
  v4 = *(_QWORD *)(v3 + 56);
  if ( v4 > 1 )
  {
    v6 = *(const void **)(v3 + 48);
    v7 = (void *)*a2;
    if ( a2[2] < v4 )
    {
      v8 = qvector_reserve(a2, *a2, *(_QWORD *)(v3 + 56), 1);
      *a2 = v8;
      v7 = (void *)v8;
    }
    a2[1] = v4;
    memmove(v7, v6, v4 - 1);
    *(_BYTE *)(*a2 + v4 - 1) = 0;
    return 1;
  }
  else
  {
    a2[1] = 0;
    return 1;
  }
}
