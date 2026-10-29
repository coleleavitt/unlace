unsigned __int64 __fastcall sub_F1B60(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // r12
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *i; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rbx
  __int64 *v15; // r13
  void *v16; // r12
  __int64 v17; // rax
  int dbctx_id; // eax
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 272) )
    goto LABEL_13;
  v1 = (_QWORD *)operator new(0x10u);
  *v1 = 4294967293LL;
  v2 = *(_QWORD *)(a1 + 272);
  v1[1] = 0;
  v3 = *(_QWORD **)(v2 + 136);
  if ( v3 )
  {
    v4 = v3[1];
    if ( get_dbctx_qty() )
    {
      dbctx_id = get_dbctx_id();
      v5 = dbctx_id;
      if ( (_DWORD)v4 != dbctx_id && (int)v4 >= 0 )
        switch_dbctx();
      goto LABEL_5;
    }
  }
  else if ( get_dbctx_qty() )
  {
    v5 = (int)get_dbctx_id();
    goto LABEL_5;
  }
  v5 = -1;
LABEL_5:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD *))(*v3 + 40LL))(v3, v1) )
  {
    v6 = operator new(0x18u);
    *(_DWORD *)v6 = 1;
    v7 = v6;
    v8 = *(_QWORD *)(a1 + 264);
    v9 = *(_QWORD *)(a1 + 248);
    *(__m128 *)(v6 + 8) = _mm_loadh_ps((const double *)(a1 + 272));
    v10 = *(_QWORD *)(a1 + 256);
    if ( v8 < v10 + 1 )
    {
      v17 = qvector_reserve();
      *(_QWORD *)(a1 + 248) = v17;
      v9 = v17;
      v10 = *(_QWORD *)(a1 + 256);
    }
    *(_QWORD *)(v9 + 8 * v10) = v7;
    ++*(_QWORD *)(a1 + 256);
  }
  if ( (_DWORD)v5 != -1 && v5 < get_dbctx_qty() )
    switch_dbctx();
  *(_QWORD *)(a1 + 272) = 0;
LABEL_13:
  if ( *(_QWORD *)(a1 + 256) )
  {
    *(_DWORD *)(a1 + 232) |= 1u;
    for ( i = *(__int64 **)(a1 + 312); (__int64 *)(a1 + 312) != i; i = v13 )
    {
      v13 = (__int64 *)*i;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)i[2] + 24LL))(i[2], a1 + 248);
    }
    v14 = *(__int64 **)(a1 + 248);
    v15 = &v14[*(_QWORD *)(a1 + 256)];
    if ( v14 != v15 )
    {
      do
      {
        v16 = (void *)*v14;
        if ( *v14 )
        {
          sub_F16C0(*v14);
          operator delete(v16, 0x18u);
        }
        ++v14;
      }
      while ( v15 != v14 );
      v15 = *(__int64 **)(a1 + 248);
    }
    if ( v15 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      qfree();
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
    *(_DWORD *)(a1 + 232) &= ~1u;
    *(_QWORD *)(a1 + 272) = 0;
  }
  return v19 - __readfsqword(0x28u);
}

