__int64 __fastcall sub_D4570(__int64 a1)
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
    if ( byte_25225A )
    {
      sub_10DB30(a1);
      byte_25225A = 0;
    }
    byte_252750 = 0;
  }
  v1 = &qword_2524A0;
  sub_C14A0();
  v2 = xmmword_252598;
  for ( dword_25274C = 0; (_QWORD)xmmword_252598; v2 = xmmword_252598 )
    sub_D4040(*(_DWORD *)(qword_252590 + (v2 << 8) - 256));
  v3 = qword_252278;
  qword_252278 = 0;
  while ( v3 )
  {
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, &qword_2524A0);
  }
  if ( (unsigned __int8)netnode_inited() )
  {
    v1 = nullptr;
    set_dbgmem_source();
  }
  v5 = qword_2525D0;
  if ( qword_2525D0 )
  {
    v6 = xmmword_2525D8;
    if ( (_QWORD)xmmword_2525D8 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 80 * v7);
        if ( v8[5] )
        {
          v8[6] = 0;
          qfree();
        }
        if ( v8[2] )
        {
          v8[3] = 0;
          qfree();
        }
        ++v7;
        v5 = qword_2525D0;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&xmmword_2525D8 = 0;
    qfree();
    qword_2525D0 = 0;
    *((_QWORD *)&xmmword_2525D8 + 1) = 0;
  }
  sub_BB740(v5, v1);
  v9 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 240LL))(
    bpt_kernel_interface,
    0,
    0);
  byte_2526B9 = 0;
  qword_245178 = -1;
  nullsub_101();
  nullsub_100();
  sub_BE320();
  v11 = 0;
  if ( (_QWORD)xmmword_2525B8 )
  {
    do
    {
      ++v9;
      sub_B8470(*((_QWORD *)qword_2525B0 + v11), 0);
      v11 = v9;
    }
    while ( v9 < (unsigned __int64)xmmword_2525B8 );
  }
  v12 = 49152;
  mark_builtin_widgets();
  if ( (unsigned __int8)netnode_inited() )
  {
    v12 = 0;
    sub_D3B40(0, 0);
  }
  if ( byte_252752 )
    sub_C4290(v12, 0);
  v13 = sub_B8210(v12, 0);
  sub_C2B50(v13);
  dword_2526BC |= 3u;
  if ( !get_first_seg() )
    return sub_143440(&unk_252CC0);
  sub_154600();
  return sub_154630();
}

