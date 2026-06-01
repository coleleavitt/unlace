void __fastcall sub_32CB0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 dword; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax

  if ( *a2 > 0 )
  {
    v2 = a2[2];
    if ( v2 > 7 )
    {
      v3 = a2[1] + *(_QWORD *)(a1 + 608);
      v4 = (v2 >> 2) - 2;
      create_data(v3, 0x20000000, 4, -1);
      set_name(v3, "elf_hash_nbucket", 6144);
      v5 = num_flag();
      set_op_type(v3, v5, 0);
      dword = (unsigned int)get_dword(v3, v5, v6, v7, v8);
      if ( dword > v4 )
        dword = v4;
      create_data(v3 + 4, 0x20000000, 4, -1);
      v10 = v4 - dword;
      set_name(v3 + 4, "elf_hash_nchain", 6144);
      v11 = num_flag();
      set_op_type(v3 + 4, v11, 0);
      v12 = v3 + 8;
      v16 = get_dword(v3 + 4, v11, v13, v14, v15);
      if ( v10 > v16 )
        v10 = v16;
      if ( dword )
      {
        set_name(v3 + 8, "elf_hash_bucket", 6144);
        v17 = (unsigned int)(4 * dword);
        create_data(v3 + 8, 0x20000000, v17, -1);
        v18 = num_flag();
        v12 += v17;
        set_op_type(v3 + 8, v18, 0);
      }
      if ( v10 )
      {
        set_name(v12, "elf_hash_chain", 6144);
        create_data(v12, 0x20000000, (unsigned int)(4 * v10), -1);
        v19 = num_flag();
        set_op_type(v12, v19, 0);
      }
      sub_E890(v3, 1u, (__int64)"ELF Hash Table");
    }
  }
}

