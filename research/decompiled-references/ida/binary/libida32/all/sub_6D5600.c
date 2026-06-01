void __fastcall sub_6D5600(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  void *v5; // rdi
  char *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 i; // r12
  char *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi

  v2 = *(_QWORD *)(a1 + 80);
  v3 = 0;
  if ( v2 )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 72) + 24 * v3;
      v5 = *(void **)v4;
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        qfree(v5);
      }
      ++v3;
    }
    while ( v2 != v3 );
  }
  v6 = *(char **)(a1 + 560);
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 568);
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v10 = &v6[v8];
        v11 = *(void **)&v6[v8 + 24];
        if ( v11 )
        {
          *((_QWORD *)v10 + 4) = 0;
          qfree(v11);
        }
        v12 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v12);
        }
        v6 = *(char **)(a1 + 560);
        v8 += 56;
      }
    }
    *(_QWORD *)(a1 + 568) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 560) = 0;
    *(_QWORD *)(a1 + 576) = 0;
  }
  *(_BYTE *)(a1 + 584) = 0;
  sub_6D5310(a1);
}

