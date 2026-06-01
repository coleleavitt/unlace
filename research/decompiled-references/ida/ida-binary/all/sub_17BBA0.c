void __fastcall sub_17BBA0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi

  if ( a2 )
  {
    v5 = a2[85];
    if ( v5 )
    {
      a2[86] = 0;
      qfree(v5, a2, a3, a4, a5);
    }
    v6 = a2[79];
    if ( v6 )
    {
      a2[80] = 0;
      qfree(v6, a2, a3, a4, a5);
    }
    v7 = a2[76];
    if ( v7 )
    {
      a2[77] = 0;
      qfree(v7, a2, a3, a4, a5);
    }
    clear_tinfo_t(a2 + 60);
    v11 = a2[57];
    if ( v11 )
    {
      a2[58] = 0;
      qfree(v11, a2, v8, v9, v10);
    }
    v12 = a2[54];
    if ( v12 )
    {
      a2[55] = 0;
      qfree(v12, a2, v8, v9, v10);
    }
    clear_tinfo_t(a2 + 47);
    v16 = a2[36];
    if ( v16 )
    {
      a2[37] = 0;
      qfree(v16, a2, v13, v14, v15);
    }
    v17 = a2[33];
    if ( v17 )
    {
      a2[34] = 0;
      qfree(v17, a2, v13, v14, v15);
    }
    v18 = a2[6];
    if ( v18 )
    {
      a2[7] = 0;
      qfree(v18, a2, v13, v14, v15);
    }
    v19 = a2[2];
    if ( v19 )
    {
      a2[3] = 0;
      qfree(v19, a2, v13, v14, v15);
    }
    operator delete(a2, 0x2D0u);
  }
}
