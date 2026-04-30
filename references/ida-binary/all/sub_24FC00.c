__int64 __fastcall sub_24FC00(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  const char *v8; // rsi
  double v9; // xmm4_8
  double v10; // xmm5_8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  int v20; // ebx
  __int64 bpt_kernel_interface; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  char *v25; // rcx
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rdi

  if ( (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
  {
    if ( byte_8CC0EA )
    {
      sub_1C78D0();
      byte_8CC0EA = 0;
    }
    byte_8CC5F4 = 0;
    QT::QElapsedTimer::invalidate((QT::QElapsedTimer *)&unk_8BA570);
  }
  v8 = (const char *)&qword_8CC340;
  sub_22FC60(7u, &qword_8CC340);
  v11 = xmmword_8CC438;
  for ( dword_8CC5F0 = 0; (_QWORD)xmmword_8CC438; v11 = xmmword_8CC438 )
    sub_24F6D0(*(_DWORD *)(qword_8CC430 + (v11 << 8) - 256), a1, a2, a3, a4, v9, v10, a7, a8);
  v12 = qword_8CC108;
  qword_8CC108 = 0;
  while ( v12 )
  {
    v13 = v12;
    v12 = *(_QWORD *)(v12 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( (unsigned __int8)netnode_inited() )
  {
    v8 = nullptr;
    set_dbgmem_source(0, 0, 0);
  }
  v14 = qword_8CC470;
  if ( qword_8CC470 )
  {
    v15 = xmmword_8CC478;
    if ( (_QWORD)xmmword_8CC478 )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + 80 * v16);
        v18 = v17[5];
        if ( v18 )
        {
          v17[6] = 0;
          qfree(v18, v8);
        }
        v19 = v17[2];
        if ( v19 )
        {
          v17[3] = 0;
          qfree(v19, v8);
        }
        ++v16;
        v14 = qword_8CC470;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&xmmword_8CC478 = 0;
    *(double *)a1.m128_u64 = qfree(v14, v8);
    qword_8CC470 = 0;
    *((_QWORD *)&xmmword_8CC478 + 1) = 0;
  }
  v20 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface(v14, v8);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 240LL))(
    bpt_kernel_interface,
    0,
    0);
  byte_8CC559 = 0;
  qword_8BA598 = -1;
  sub_3E1240();
  sub_3E2ED0();
  sub_383F60();
  sub_22BF20(bpt_kernel_interface, nullptr);
  v22 = 0;
  if ( (_QWORD)xmmword_8CC458 )
  {
    do
    {
      ++v20;
      sub_2277E0(*((_QWORD *)qword_8CC450 + v22), 0);
      v22 = v20;
    }
    while ( v20 < (unsigned __int64)xmmword_8CC458 );
  }
  v23 = 49152;
  mark_builtin_widgets(49152, 0, 1);
  if ( (unsigned __int8)netnode_inited() )
  {
    v23 = 0;
    sub_24F380(0, 0, *(double *)a1.m128_u64, a2, a3, a4, v26, v27, a7, a8, v24, v25);
  }
  if ( byte_8CC5F6 )
    sub_233440(a1, a2, a3, a4, v26, v27, a7, a8, v23, nullptr);
  v28 = sub_227580(*(double *)a1.m128_u64, v23, 0, v24, (__int64)v25);
  sub_231D20(v28, nullptr);
  dword_8CC55C |= 3u;
  return sub_230E60();
}
