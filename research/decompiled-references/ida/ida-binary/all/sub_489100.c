void __fastcall folder_data_t__::vfunc_11(_QWORD *a1, __int64 a2, __int64 a3, __int64 **a4)
{
  unsigned __int8 v6; // r14
  __int64 *v7; // rbp
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 i; // rcx
  unsigned __int64 v15; // r15
  __int64 *v16; // rax
  __int64 *v17; // r14
  __int64 *v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-48h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  chooser_flat_bucket_data_t__::vfunc_11();
  if ( !*(_DWORD *)(a3 + 8) && !*(_DWORD *)(a3 + 12) )
  {
    v6 = *(_BYTE *)(a3 + 20);
    v7 = *a4;
    v8 = *(__int64 (__fastcall **)(__int64))(*a1 + 80LL);
    v9 = v8 == folder_data_t__::vfunc_10 ? a1[10] : v8((__int64)a1);
    v10 = *a4;
    v11 = &v7[v9];
    v12 = v6;
    if ( v11 != v10 )
    {
      v13 = (v11 - v10 + 1) / 2;
      if ( v11 - v10 + 1 > 1 )
      {
        for ( i = (v11 - v10 + 1) / 2; ; i = (v19 + 1) >> 1 )
        {
          v15 = i;
          v20 = v13;
          v19 = i;
          v16 = (__int64 *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
          v13 = v20;
          v17 = v16;
          if ( v16 )
            break;
          if ( v19 == 1 )
            goto LABEL_16;
        }
        v18 = &v10[v15];
        if ( v20 != v19 )
        {
          sub_489020(v10, v11, v16, v19, (__int64)a1, v12);
          goto LABEL_11;
        }
LABEL_10:
        sub_4880B0(v10, v18, v11, v17, (__int64)a1, v12);
LABEL_11:
        operator delete(v17, v15 * 8);
        return;
      }
      v18 = v10;
      v15 = 0;
      v17 = nullptr;
      if ( !v13 )
        goto LABEL_10;
LABEL_16:
      sub_488550(v10, v11, (__int64)a1, v12);
      operator delete(nullptr, 0);
    }
  }
}
