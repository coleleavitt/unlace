void __fastcall sub_17B8F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi

  if ( a2 )
  {
    v5 = a2[79];
    if ( v5 )
    {
      a2[80] = 0;
      qfree(v5, a2, a3, a4, a5);
    }
    v6 = a2[76];
    if ( v6 )
    {
      a2[77] = 0;
      qfree(v6, a2, a3, a4, a5);
    }
    clear_tinfo_t(a2 + 60);
    v10 = a2[57];
    if ( v10 )
    {
      a2[58] = 0;
      qfree(v10, a2, v7, v8, v9);
    }
    v11 = a2[54];
    if ( v11 )
    {
      a2[55] = 0;
      qfree(v11, a2, v7, v8, v9);
    }
    clear_tinfo_t(a2 + 47);
    v15 = a2[36];
    if ( v15 )
    {
      a2[37] = 0;
      qfree(v15, a2, v12, v13, v14);
    }
    v16 = a2[33];
    if ( v16 )
    {
      a2[34] = 0;
      qfree(v16, a2, v12, v13, v14);
    }
    v17 = a2[6];
    if ( v17 )
    {
      a2[7] = 0;
      qfree(v17, a2, v12, v13, v14);
    }
    v18 = a2[2];
    if ( v18 )
    {
      a2[3] = 0;
      qfree(v18, a2, v12, v13, v14);
    }
    operator delete(a2, 0x2A0u);
  }
}
