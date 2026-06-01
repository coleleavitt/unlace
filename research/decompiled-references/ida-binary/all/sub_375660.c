__int64 __fastcall path_details_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  const void *v10; // r12
  void *v11; // rax
  const void *v12; // r15
  void *v13; // rdi
  __int64 v14; // rax

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 184) + 56 * a5;
  if ( (__int64 *)v6 != *a2 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 > 1 )
    {
      v12 = *(const void **)v6;
      v13 = (void *)*v5;
      if ( v5[2] < v7 )
      {
        v14 = qvector_reserve(v5, *v5, *(_QWORD *)(v6 + 8), 1);
        *v5 = v14;
        v13 = (void *)v14;
      }
      v5[1] = v7;
      memmove(v13, v12, v7 - 1);
      *(_BYTE *)(*v5 + v7 - 1) = 0;
      v5 = *a2;
    }
    else
    {
      v5[1] = 0;
      v5 = *a2;
    }
  }
  result = v6 + 24;
  if ( v5 + 3 != (__int64 *)(v6 + 24) )
  {
    v9 = *(_QWORD *)(v6 + 32);
    if ( v9 > 1 )
    {
      v10 = *(const void **)(v6 + 24);
      v11 = (void *)v5[3];
      if ( v5[5] < v9 )
      {
        v11 = (void *)qvector_reserve(v5 + 3, v5[3], v9, 1);
        v5[3] = (__int64)v11;
      }
      v5[4] = v9;
      memmove(v11, v10, v9 - 1);
      result = v5[3];
      *(_BYTE *)(result + v9 - 1) = 0;
    }
    else
    {
      v5[4] = 0;
    }
  }
  return result;
}
