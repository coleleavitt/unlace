__int64 __fastcall sub_2B6B00(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebp
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  QT::QAbstractScrollArea *v10; // rdi
  const char *v11; // rsi
  __m128 v12; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __m128 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+18h] [rbp-50h]
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v22[5] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 440);
  if ( !v2 || !*(_QWORD *)(v2 + 8) )
    return 0;
  v19 = 0;
  v4 = a2;
  v21 = 0;
  v20 = 0;
  if ( (_BYTE)a2 )
  {
    v5 = *(_QWORD *)(a1 + 304);
    v6 = *(_QWORD *)(a1 + 296);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    if ( v5 )
    {
LABEL_5:
      *(_QWORD *)(a1 + 304) = v8;
      v10 = *(QT::QAbstractScrollArea **)(a1 + 16);
      v11 = nullptr;
      v12 = _mm_loadh_ps((const double *)(a1 + 312));
      *(_QWORD *)(a1 + 296) = v9;
      *(_QWORD *)(a1 + 312) = v7;
      v19 = v6;
      v20 = v12;
      sub_1F4880(v10, 0);
      sub_466DD0(a1);
      v9 = v19;
      v4 = 1;
      goto LABEL_6;
    }
    return 0;
  }
  v22[2] = &v19;
  v11 = (const char *)v22;
  v22[3] = a1;
  v14 = *(_QWORD *)(v2 + 8);
  v22[0] = GraphRenderer::update_pending_selection;
  sub_298EA0(v14, v22, 1, 0.0);
  v8 = v20.m128_u64[0];
  v9 = v19;
  v6 = *(_QWORD *)(a1 + 296);
  if ( v20.m128_u64[0] != *(_QWORD *)(a1 + 304) )
  {
LABEL_14:
    v7 = v20.m128_u64[1];
    goto LABEL_5;
  }
  if ( v20.m128_u64[0] )
  {
    v15 = v19;
    v16 = *(_QWORD *)(a1 + 296);
    v17 = 0;
    while ( *(_BYTE *)v15 == *(_BYTE *)v16 )
    {
      if ( *(_BYTE *)v15 )
      {
        v11 = (const char *)*(unsigned int *)(v16 + 4);
        if ( *(_DWORD *)(v15 + 4) != (_DWORD)v11 )
          goto LABEL_14;
      }
      else
      {
        if ( *(_DWORD *)(v15 + 12) != *(_DWORD *)(v16 + 12) )
          goto LABEL_14;
        v18 = *(_DWORD *)(v16 + 16);
        if ( *(_DWORD *)(v15 + 16) < v18 )
          goto LABEL_14;
        if ( *(_DWORD *)(v15 + 16) > v18 )
          goto LABEL_14;
        v11 = (const char *)*(unsigned int *)(v16 + 8);
        if ( *(_DWORD *)(v15 + 8) != (_DWORD)v11 )
          goto LABEL_14;
      }
      ++v17;
      v15 += 20;
      v16 += 20;
      if ( v20.m128_u64[0] == v17 )
        goto LABEL_6;
    }
    goto LABEL_14;
  }
LABEL_6:
  if ( v9 )
  {
    v20.m128_u64[0] = 0;
    qfree(v9, v11);
  }
  return v4;
}
