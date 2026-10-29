unsigned __int64 __fastcall sub_278550(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rbx
  __int64 *v20; // r13
  void *v21; // r12
  __int64 v22; // rax
  int dbctx_id; // eax
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 168) )
    goto LABEL_13;
  v2 = (_QWORD *)operator new(0x10u);
  *v2 = 4294967293LL;
  v3 = *(_QWORD *)(a1 + 168);
  v2[1] = 0;
  v4 = *(_QWORD **)(v3 + 40);
  if ( v4 )
  {
    v5 = v4[1];
    if ( ((__int64 (*)(void))get_dbctx_qty)() )
    {
      dbctx_id = get_dbctx_id();
      v6 = dbctx_id;
      if ( (_DWORD)v5 != dbctx_id && (int)v5 >= 0 )
        switch_dbctx((int)v5);
      goto LABEL_5;
    }
  }
  else if ( ((__int64 (*)(void))get_dbctx_qty)() )
  {
    v6 = (int)get_dbctx_id();
    goto LABEL_5;
  }
  v6 = -1;
LABEL_5:
  v7 = v4;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 40LL))(v4, v2) )
  {
    v8 = operator new(0x18u);
    *(_DWORD *)v8 = 1;
    v9 = v8;
    v10 = *(_QWORD *)(a1 + 160);
    v11 = *(_QWORD *)(a1 + 144);
    *(__m128 *)(v8 + 8) = _mm_loadh_ps((const double *)(a1 + 168));
    v12 = *(_QWORD *)(a1 + 152);
    v7 = (_QWORD *)(v12 + 1);
    if ( v10 < v12 + 1 )
    {
      v7 = (_QWORD *)(a1 + 144);
      v22 = qvector_reserve(a1 + 144, v11, v12 + 1, 8);
      *(_QWORD *)(a1 + 144) = v22;
      v11 = v22;
      v12 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)(v11 + 8 * v12) = v9;
    ++*(_QWORD *)(a1 + 152);
  }
  if ( (_DWORD)v6 != -1 && v6 < get_dbctx_qty(v7) )
    switch_dbctx(v6);
  *(_QWORD *)(a1 + 168) = 0;
LABEL_13:
  if ( *(_QWORD *)(a1 + 152) )
  {
    *(_DWORD *)(a1 + 128) |= 1u;
    v14 = (const char *)(a1 + 144);
    sub_464460(a1, a1 + 144);
    v19 = *(__int64 **)(a1 + 144);
    v20 = &v19[*(_QWORD *)(a1 + 152)];
    if ( v19 != v20 )
    {
      do
      {
        v21 = (void *)*v19;
        if ( *v19 )
        {
          sub_2775D0(*v19, v14, v15, v16, v17, v18);
          v14 = (const char *)&off_18;
          operator delete(v21, 0x18u);
        }
        ++v19;
      }
      while ( v20 != v19 );
      v20 = *(__int64 **)(a1 + 144);
    }
    if ( v20 )
    {
      *(_QWORD *)(a1 + 152) = 0;
      qfree(v20, v14);
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 160) = 0;
    }
    *(_DWORD *)(a1 + 128) &= ~1u;
    *(_QWORD *)(a1 + 168) = 0;
  }
  return v24 - __readfsqword(0x28u);
}
