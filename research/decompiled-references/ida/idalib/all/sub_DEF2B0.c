unsigned __int64 __fastcall sub_DEF2B0(_QWORD *a1, unsigned int **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v11; // rax
  void *v12; // rdi

  v6 = (__int64)*a2;
  v7 = ((unsigned __int64)**a2 + 63) >> 6;
  v8 = 8 * v7;
  if ( v7 == 1 )
  {
    v9 = *(_QWORD *)(v6 + 4);
  }
  else
  {
    v11 = a1[71];
    a1[81] += v8;
    v9 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[72] >= v8 + v9 && v11 )
    {
      a1[71] = v8 + v9;
      v12 = (void *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v12 = (void *)sub_986170((__int64)(a1 + 71), v8, v8, 3, a5, a6);
      v9 = (unsigned __int64)v12;
    }
    memcpy(v12, *a2 + 1, v8);
    v6 = (__int64)*a2;
  }
  *a2 = (unsigned int *)(v6 + v8 + 8);
  return v9;
}
