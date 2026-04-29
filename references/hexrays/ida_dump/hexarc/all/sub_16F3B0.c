__int64 __fastcall sub_16F3B0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 i; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi

  result = sub_116DE0(a1 + 32, (__int64)"$empty");
  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v2 + 32);
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = v3 + 80 * v5;
        cleanup_argloc(v6 + 56);
        v7 = *(_QWORD *)(v6 + 32);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 40) = 0;
          qfree(v7);
        }
        ++v5;
        clear_tinfo_t(v6 + 24);
        sub_1166E0(v6);
        v3 = *(_QWORD *)(v2 + 24);
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)(v2 + 32) = 0;
    result = qfree(v3);
    *(_QWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 40) = 0;
  }
  *(_DWORD *)(v2 + 8) = 0;
  v8 = *(_QWORD *)(v2 + 48);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v2 + 56);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = i;
        sub_1166E0(16 * v11 + v8);
        v8 = *(_QWORD *)(v2 + 48);
      }
    }
    *(_QWORD *)(v2 + 56) = 0;
    result = qfree(v8);
    *(_QWORD *)(v2 + 48) = 0;
    *(_QWORD *)(v2 + 64) = 0;
  }
  *(_QWORD *)(v2 + 104) = 0;
  v12 = *(_QWORD *)(v2 + 112);
  if ( v12 )
  {
    *(_QWORD *)(v2 + 120) = 0;
    result = qfree(v12);
    *(_QWORD *)(v2 + 112) = 0;
    *(_QWORD *)(v2 + 128) = 0;
  }
  *(_DWORD *)(v2 + 284) = 1;
  return result;
}
