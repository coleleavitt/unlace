void __fastcall vault_credentials_t__::vfunc_3(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v3, a2);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  *(_WORD *)(a1 + 32) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v4, a2);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v5, a2);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v6, a2);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v7 = *(_QWORD *)(a1 + 120);
  *(_WORD *)(a1 + 112) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v7, a2);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v8 = *(_QWORD *)(a1 + 144);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v8, a2);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  v9 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 168) = 0;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v9, a2);
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
}
