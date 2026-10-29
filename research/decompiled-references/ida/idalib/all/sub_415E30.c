__int64 __fastcall sub_415E30(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  const void *v8; // r14
  void *v9; // rdi
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r12
  const void *v12; // r14
  void *v13; // rax
  __int64 v15; // rax

  if ( a3 < a1[1] )
  {
    if ( !a2 )
      return 0;
    v6 = *a1 + 56 * a3;
    if ( (__int64 *)v6 != a2 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 < 2 )
      {
        v10 = a2 + 3;
        a2[1] = 0;
        if ( a2 + 3 != (__int64 *)(v6 + 24) )
          goto LABEL_9;
        goto LABEL_13;
      }
      v8 = *(const void **)v6;
      v9 = (void *)*a2;
      if ( a2[2] < v7 )
      {
        v15 = qvector_reserve(a2, *a2, *(_QWORD *)(v6 + 8), 1);
        *a2 = v15;
        v9 = (void *)v15;
      }
      a2[1] = v7;
      memmove(v9, v8, v7 - 1);
      *(_BYTE *)(*a2 + v7 - 1) = 0;
    }
    v10 = a2 + 3;
    if ( a2 + 3 != (__int64 *)(v6 + 24) )
    {
LABEL_9:
      v11 = *(_QWORD *)(v6 + 32);
      if ( v11 < 2 )
      {
        a2[4] = 0;
        a2[6] = *(_QWORD *)(v6 + 48);
        return 0;
      }
      v12 = *(const void **)(v6 + 24);
      v13 = (void *)a2[3];
      if ( a2[5] < v11 )
      {
        v13 = (void *)qvector_reserve(v10, a2[3], *(_QWORD *)(v6 + 32), 1);
        a2[3] = (__int64)v13;
      }
      a2[4] = v11;
      memmove(v13, v12, v11 - 1);
      *(_BYTE *)(a2[3] + v11 - 1) = 0;
    }
LABEL_13:
    a2[6] = *(_QWORD *)(v6 + 48);
    return 0;
  }
  set_error_data(0, a3, a3, a4, a5, a6);
  return 4294967289LL;
}
