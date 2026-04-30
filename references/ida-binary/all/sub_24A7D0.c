__int64 *__fastcall mr_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        double a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 *result; // rax
  __int64 v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r13
  const void *v12; // r15
  void *v13; // rax
  const void *v14; // r15
  void *v15; // rax

  result = *(__int64 **)(a1 + 192);
  if ( a6 < result[1] )
  {
    v7 = *result + 80 * a6;
    if ( v7 )
    {
      sub_169A50(*a2, (__int64)"%0*a", 2 * *(_DWORD *)(a1 + 200), a3);
      sub_169A50(*a2 + 3, (__int64)"%0*a", 2 * *(_DWORD *)(a1 + 200), a3);
      sub_169A50(*a2 + 6, (__int64)"%0*a", *(_DWORD *)(a1 + 200), a3);
      v8 = *a2;
      v9 = (__int64)(*a2 + 9);
      if ( v9 != v7 + 16 )
      {
        v10 = *(_QWORD *)(v7 + 24);
        if ( v10 > 1 )
        {
          v14 = *(const void **)(v7 + 16);
          v15 = (void *)v8[9];
          if ( v8[11] < v10 )
          {
            v15 = (void *)qvector_reserve(v9, v8[9], *(_QWORD *)(v7 + 24), 1);
            v8[9] = (__int64)v15;
          }
          v8[10] = v10;
          memmove(v15, v14, v10 - 1);
          *(_BYTE *)(v8[9] + v10 - 1) = 0;
          v8 = *a2;
        }
        else
        {
          v8[10] = 0;
          v8 = *a2;
        }
      }
      if ( v8 + 12 != (__int64 *)(v7 + 40) )
      {
        v11 = *(_QWORD *)(v7 + 48);
        if ( v11 < 2 )
        {
          v8[13] = 0;
          v8 = *a2;
        }
        else
        {
          v12 = *(const void **)(v7 + 40);
          v13 = (void *)v8[12];
          if ( v8[14] < v11 )
          {
            v13 = (void *)qvector_reserve(v8 + 12, v8[12], *(_QWORD *)(v7 + 48), 1);
            v8[12] = (__int64)v13;
          }
          v8[13] = v11;
          memmove(v13, v12, v11 - 1);
          *(_BYTE *)(v8[12] + v11 - 1) = 0;
          v8 = *a2;
        }
      }
      sub_169A50(v8 + 15, (__int64)"%c", (*(_BYTE *)(v7 + 73) & 4) == 0 ? 32 : 82);
      sub_169A50(*a2 + 18, (__int64)"%c", (*(_BYTE *)(v7 + 73) & 2) == 0 ? 32 : 87);
      sub_169A50(*a2 + 21, (__int64)"%c", (*(_BYTE *)(v7 + 73) & 1) == 0 ? 32 : 88);
      return sub_169A50(*a2 + 24, (__int64)"%d", 1 << (*(_BYTE *)(v7 + 72) + 4));
    }
  }
  return result;
}
