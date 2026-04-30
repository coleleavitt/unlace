void __fastcall sub_1CD2F0(__int64 *a1, const char *a2)
{
  bool v3; // zf
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  volatile signed __int32 **v6; // r14
  __int64 (__fastcall *v7)(void *); // rdx
  volatile signed __int32 *v8; // rdx
  volatile signed __int32 *v9; // rdx
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rbp
  __int64 v12; // r13
  volatile signed __int32 *v13; // r15
  const char **v14; // rdi
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdx

  v3 = a1[1] == 0;
  v4 = *a1;
  if ( !v3 )
  {
    v5 = 0;
    do
    {
      v6 = *(volatile signed __int32 ***)(v4 + 8 * v5);
      if ( v6 )
      {
        v7 = *((__int64 (__fastcall **)(void *))*v6 + 1);
        if ( v7 == ida_deskcfg_t__::vfunc_1 )
        {
          v8 = v6[13];
          *v6 = (volatile signed __int32 *)&ida_deskcfg_t___vtable;
          if ( v8 && !_InterlockedSub(v8, 1u) )
            free((void *)v6[13]);
          v9 = v6[10];
          if ( v9 && !_InterlockedSub(v9, 1u) )
            free((void *)v6[10]);
          v10 = v6[7];
          *v6 = (volatile signed __int32 *)&deskcfg_t___vtable;
          if ( v10 )
          {
            v11 = v6[8];
            if ( v11 )
            {
              v12 = 0;
              v13 = nullptr;
              do
              {
                v14 = (const char **)&v10[v12];
                v13 = (volatile signed __int32 *)((char *)v13 + 1);
                v12 += 14;
                a2 = *v14;
                (*(void (__fastcall **)(const char **))*v14)(v14);
                v10 = v6[7];
              }
              while ( v11 != v13 );
            }
            v6[8] = nullptr;
            qfree(v10, a2);
          }
          v15 = v6[6];
          *v6 = (volatile signed __int32 *)&deskcfg_target_t___vtable;
          if ( v15 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
          v16 = v6[2];
          if ( v16 && !_InterlockedSub(v16, 1u) )
            free((void *)v6[2]);
          a2 = (const char *)&qword_80;
          operator delete(v6, 0x80u);
          v4 = *a1;
        }
        else
        {
          v7(*(void **)(v4 + 8 * v5));
          v4 = *a1;
        }
      }
      ++v5;
    }
    while ( v5 < a1[1] );
  }
  if ( v4 )
  {
    a1[1] = 0;
    qfree(v4, a2);
  }
}
