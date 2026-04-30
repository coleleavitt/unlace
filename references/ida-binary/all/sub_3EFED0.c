double __fastcall sub_3EFED0(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  volatile signed __int32 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 i; // r12
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi

  v3 = *(_QWORD *)(a1 + 448);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 456) = 0;
    result = qfree(v3, a2);
  }
  v5 = *(_QWORD *)(a1 + 416);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 424) = 0;
    result = qfree(v5, a2);
  }
  v6 = *(_QWORD *)(a1 + 392);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    result = qfree(v6, a2);
  }
  clear_tinfo_t(a1 + 312);
  v7 = *(_QWORD *)(a1 + 288);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 296) = 0;
    result = qfree(v7, a2);
  }
  v8 = *(_QWORD *)(a1 + 264);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    result = qfree(v8, a2);
  }
  clear_tinfo_t(a1 + 240);
  v9 = *(volatile signed __int32 **)(a1 + 208);
  if ( v9 && !_InterlockedSub(v9, 1u) )
    free(*(void **)(a1 + 208));
  v10 = *(_QWORD *)(a1 + 168);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 176) = 0;
    result = qfree(v10, a2);
  }
  cleanup_argloc(a1 + 144);
  clear_tinfo_t(a1 + 136);
  v11 = *(_QWORD *)(a1 + 104);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 112);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = (_QWORD *)(v11 + 80 * i);
        clear_tinfo_t(v14 + 8);
        v15 = v14[5];
        if ( v15 )
        {
          v14[6] = 0;
          qfree(v15, a2);
        }
        v16 = v14[2];
        if ( v16 )
        {
          v14[3] = 0;
          qfree(v16, a2);
        }
        cleanup_argloc(v14);
        v11 = *(_QWORD *)(a1 + 104);
      }
    }
    *(_QWORD *)(a1 + 112) = 0;
    result = qfree(v11, a2);
  }
  clear_tinfo_t(a1 + 96);
  v17 = *(_QWORD *)(a1 + 72);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    result = qfree(v17, a2);
  }
  v18 = *(_QWORD *)(a1 + 48);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    result = qfree(v18, a2);
  }
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    return qfree(v19, a2);
  }
  return result;
}
