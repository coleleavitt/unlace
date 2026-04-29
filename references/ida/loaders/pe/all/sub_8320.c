char __fastcall sub_8320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned __int8 a7)
{
  unsigned __int64 qword; // rbx
  unsigned __int64 dword; // r14
  unsigned __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 i; // rbp

  if ( *(_WORD *)(a4 + 24) == 523 )
  {
    qword = get_qword();
    dword = get_qword();
    v9 = -1;
  }
  else
  {
    qword = (unsigned int)get_dword();
    dword = (unsigned int)get_dword();
    v9 = 0xFFFFFFFFLL;
  }
  LOBYTE(v9) = v9 != qword;
  if ( ((unsigned __int8)v9 & (qword != 0)) != 0 && dword )
  {
    if ( (unsigned __int8)is_mapped() && (get_flags_ex() & 0x4000) == 0 )
      set_name();
    v10 = 4;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 16LL);
    v12 = v11 & (qword + 4 * dword);
    v9 = v11 & (qword_349D8 + *(unsigned int *)(a1 + 152));
    if ( *(_WORD *)(a1 + 96) == 523 )
      v10 = 8;
    if ( v12 >= qword_349D8 && qword < v9 && qword >= qword_349D8 && dword >> 62 == 0 && v12 < v9 )
    {
      for ( i = 0; i < dword; ++i )
      {
        LOBYTE(v9) = is_loaded();
        if ( !(_BYTE)v9 )
          break;
        create_data();
        if ( (unsigned int)get_dword() )
        {
          auto_mark_range();
          auto_mark_range();
        }
        sub_7230(qword, qword_349D8, v10, 1);
        v9 = *(_QWORD *)(a1 + 616);
        qword = *(_QWORD *)(v9 + 16) & (qword + 4);
        if ( a7 )
        {
          create_data();
          v9 = *(_QWORD *)(a1 + 616);
          qword = *(_QWORD *)(v9 + 16) & (a7 + qword);
        }
      }
    }
  }
  return v9;
}
