__int64 *__fastcall apply_md_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        double a6)
{
  __int64 v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r13
  const void *v12; // r15
  void *v13; // rax
  const void *v14; // r15
  void *v15; // rax

  if ( a5 >= *(_QWORD *)(a1 + 192) )
  {
    if ( under_debugger )
      BUG();
    interr(40649, a2, a3, a4, a6);
    return (__int64 *)fh_entries_chooser_t__::vfunc_6();
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 184) + 200 * a5;
    sub_169A50(*a2, (__int64)"%0*a", 2 * *(_DWORD *)(a1 + 240), a6);
    v7 = *a2;
    v8 = (__int64)(*a2 + 3);
    if ( v8 != v6 + 80 )
    {
      v9 = *(_QWORD *)(v6 + 88);
      if ( v9 > 1 )
      {
        v14 = *(const void **)(v6 + 80);
        v15 = (void *)v7[3];
        if ( v7[5] < v9 )
        {
          v15 = (void *)qvector_reserve(v8, v7[3], *(_QWORD *)(v6 + 88), 1);
          v7[3] = (__int64)v15;
        }
        v7[4] = v9;
        memmove(v15, v14, v9 - 1);
        *(_BYTE *)(v7[3] + v9 - 1) = 0;
        v7 = *a2;
      }
      else
      {
        v7[4] = 0;
        v7 = *a2;
      }
    }
    if ( v7 + 6 != (__int64 *)(v6 + 8) )
    {
      v10 = *(_QWORD *)(v6 + 16);
      if ( v10 > 1 )
      {
        v12 = *(const void **)(v6 + 8);
        v13 = (void *)v7[6];
        if ( v7[8] < v10 )
        {
          v13 = (void *)qvector_reserve(v7 + 6, v7[6], *(_QWORD *)(v6 + 16), 1);
          v7[6] = (__int64)v13;
        }
        v7[7] = v10;
        memmove(v13, v12, v10 - 1);
        *(_BYTE *)(v7[6] + v10 - 1) = 0;
        v7 = *a2;
      }
      else
      {
        v7[7] = 0;
        v7 = *a2;
      }
    }
    print_tinfo(v7 + 9, 0, 0, 0, 0, v6 + 72, 0, 0);
    print_tinfo(*a2 + 12, 0, 0, 0, 0, v6, 0, 0);
    sub_169A50(*a2 + 15, (__int64)"%zu", *(_QWORD *)(v6 + 176));
    return sub_169A50(*a2 + 18, (__int64)"%d", *(_DWORD *)(v6 + 192));
  }
}
