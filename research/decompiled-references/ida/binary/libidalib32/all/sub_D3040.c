__int64 __fastcall sub_D3040(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  int v9; // ebx
  __int64 bpt_kernel_interface; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi

  if ( (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
  {
    if ( byte_25117A )
    {
      sub_10D850(a1);
      byte_25117A = 0;
    }
    byte_2515A8 = 0;
  }
  v1 = &qword_251320;
  sub_C0300();
  v2 = xmmword_251418;
  for ( dword_2515A4 = 0; (_QWORD)xmmword_251418; v2 = xmmword_251418 )
    sub_D2B10(*(_DWORD *)(qword_251410 + 232 * v2 - 232));
  v3 = qword_251198;
  qword_251198 = 0;
  while ( v3 )
  {
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &qword_251320);
  }
  if ( (unsigned __int8)netnode_inited() )
  {
    v1 = nullptr;
    set_dbgmem_source();
  }
  v5 = qword_251450;
  if ( qword_251450 )
  {
    v6 = xmmword_251458;
    if ( (_QWORD)xmmword_251458 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + (v7 << 6));
        if ( v8[4] )
        {
          v8[5] = 0;
          qfree();
        }
        if ( v8[1] )
        {
          v8[2] = 0;
          qfree();
        }
        ++v7;
        v5 = qword_251450;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&xmmword_251458 = 0;
    qfree();
    qword_251450 = 0;
    *((_QWORD *)&xmmword_251458 + 1) = 0;
  }
  sub_BB120(v5, v1);
  v9 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 240LL))(
    bpt_kernel_interface,
    0,
    0);
  byte_251535 = 0;
  dword_244120 = -1;
  nullsub_101();
  nullsub_100();
  sub_BDC80();
  v11 = 0;
  if ( (_QWORD)xmmword_251438 )
  {
    do
    {
      ++v9;
      sub_B7F00(*((_QWORD *)qword_251430 + v11), 0);
      v11 = v9;
    }
    while ( v9 < (unsigned __int64)xmmword_251438 );
  }
  v12 = 49152;
  mark_builtin_widgets();
  if ( (unsigned __int8)netnode_inited() )
  {
    v12 = 0;
    sub_D2660(0, 0);
  }
  if ( byte_2515AA )
    sub_C3090(v12, 0);
  v13 = sub_B7CA0(v12, 0);
  sub_C19A0(v13);
  dword_251538 |= 3u;
  if ( !get_first_seg() )
    return sub_142CE0(&unk_251B20);
  sub_153E00();
  return sub_153E30();
}

