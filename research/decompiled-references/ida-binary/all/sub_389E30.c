void __fastcall sub_389E30(__int64 *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v11; // r12
  __int64 i; // rbx
  __int64 v13; // rdi
  __int64 v14; // [rsp-18h] [rbp-18h]
  __int64 v15; // [rsp-10h] [rbp-10h]
  __int64 v16; // [rsp-8h] [rbp-8h]

  v9 = *a1;
  if ( *a1 )
  {
    v16 = v8;
    v15 = v7;
    v14 = v6;
    v11 = a1[1];
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = *(_QWORD *)(v9 + 8 * i);
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v9 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v9, a2, a3, a4, a5, a6, v14, v15, v16);
  }
}
