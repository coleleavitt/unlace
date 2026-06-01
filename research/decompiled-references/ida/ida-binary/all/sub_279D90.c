__int64 __fastcall merge_progress_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rbp
  __int64 v7; // rax
  const char *v8; // rdi
  const char *v9; // rax
  __int64 *v10; // r15
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  __int64 result; // rax
  __int64 *v15; // rbx
  unsigned __int64 v16; // r14
  void *v17; // rdi
  size_t v18; // rdx
  const void *v19; // r8
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  const void *v23; // [rsp+8h] [rbp-40h]
  size_t v24; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD **)(**(_QWORD **)(a1 + 216) + 8 * a5);
  v7 = *(_QWORD *)(a1 + 224);
  if ( (v7 || (v7 = sub_49EE00(a1), (*(_QWORD *)(a1 + 224) = v7) != 0)) && *(_DWORD *)(v7 + 2376) )
  {
    v8 = &s1;
    if ( v6[3] )
      v8 = (const char *)v6[2];
    v9 = (const char *)qbasename(v8);
    v10 = *a2;
    v11 = v9;
    if ( v9 && (v12 = strlen(v9), (v13 = v12) != 0) )
    {
      v17 = (void *)*v10;
      v18 = v12 + 1;
      if ( v10[2] < v12 + 1 )
      {
        v24 = v12 + 1;
        v22 = qvector_reserve(v10, *v10, v18, 1);
        v18 = v24;
        *v10 = v22;
        v17 = (void *)v22;
      }
      v10[1] = v18;
      memmove(v17, v11, v13);
      *(_BYTE *)(*v10 + v13) = 0;
    }
    else
    {
      v10[1] = 0;
    }
  }
  else
  {
    v15 = *a2;
    if ( *a2 != v6 + 2 )
    {
      v16 = v6[3];
      if ( v16 > 1 )
      {
        v19 = (const void *)v6[2];
        v20 = (void *)*v15;
        if ( v15[2] < v16 )
        {
          v23 = (const void *)v6[2];
          v21 = qvector_reserve(*a2, *v15, v6[3], 1);
          v19 = v23;
          *v15 = v21;
          v20 = (void *)v21;
        }
        v15[1] = v16;
        memmove(v20, v19, v16 - 1);
        *(_BYTE *)(*v15 + v16 - 1) = 0;
      }
      else
      {
        v15[1] = 0;
      }
    }
  }
  result = v6[16];
  if ( result >= 0 )
  {
    sub_169A50(*a2 + 3, (__int64)"%zu", v6[13]);
    result = v6[16];
  }
  if ( result == -1 )
  {
    *(_DWORD *)(a4 + 4) |= 0x10u;
  }
  else if ( v6[13] )
  {
    *(_DWORD *)(a4 + 4) |= 1u;
  }
  return result;
}
