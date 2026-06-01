void __fastcall sub_410B40(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v6; // rbp
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 i; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdi
  void (__fastcall *v17)(__int64, __int64); // rax
  void (__fastcall *v18)(__int64, __int64); // rax
  void (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // [rsp-18h] [rbp-18h]
  __int64 v21; // [rsp-10h] [rbp-10h]
  __int64 v22; // [rsp-8h] [rbp-8h]

  v4 = *a1;
  if ( *a1 )
  {
    if ( (*(_DWORD *)(v4 + 104))-- == 1 )
    {
      v22 = v3;
      v21 = v2;
      v20 = v1;
      v6 = *a1;
      if ( *a1 )
      {
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp();
        hexdsp(564, v6);
        v11 = *(_QWORD *)(v6 + 160);
        if ( v11 )
        {
          *(_QWORD *)(v6 + 168) = 0;
          qfree(v11, (const char *)v6);
        }
        v12 = *(_QWORD *)(v6 + 128);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v6 + 136);
          if ( v13 )
          {
            for ( i = 0; i != v13; ++i )
            {
              v15 = (__int64 *)(v12 + 32 * i);
              v16 = *v15;
              if ( *v15 )
              {
                v15[1] = 0;
                qfree(v16, (const char *)v6);
                v12 = *(_QWORD *)(v6 + 128);
              }
            }
          }
          *(_QWORD *)(v6 + 136) = 0;
          qfree(v12, (const char *)v6, v12, v8, v9, v10, v20, v21, v22);
        }
        v17 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
        v17(493, v6 + 16);
        v18 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
        v18(444, v6 + 16);
        v19 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
        v19(130, v6);
      }
    }
  }
}
