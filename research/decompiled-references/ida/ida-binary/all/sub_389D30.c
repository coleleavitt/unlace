void __fastcall struc_stroff_data_t__::vfunc_11(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v11; // r12
  __int64 i; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // [rsp-18h] [rbp-18h]
  __int64 v16; // [rsp-10h] [rbp-10h]
  __int64 v17; // [rsp-8h] [rbp-8h]

  v9 = a1[1];
  *a1 = struc_stroff_data_t___vtable;
  if ( v9 )
  {
    v17 = v8;
    v16 = v7;
    v15 = v6;
    v11 = a1[2];
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = (__int64 *)(v9 + 24 * i);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2);
          v9 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree(v9, a2, v9, a4, a5, a6, v15, v16, v17);
  }
}
