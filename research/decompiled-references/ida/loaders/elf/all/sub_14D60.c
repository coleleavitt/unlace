__int64 __fastcall sub_14D60(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r15
  char v19; // r14
  int v20; // eax
  int i; // r12d
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+Ch] [rbp-3Ch]

  if ( *(int *)(a1 + 392) > 0 )
  {
    v16 = *(_QWORD *)(a3 + 8);
    v17 = sub_4A750(a3 + 16, v16, 0);
    if ( v17 )
    {
      v18 = 4;
      v19 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 508LL);
      v20 = 4;
      if ( v19 == 2 )
      {
        v18 = 8;
        v20 = 12;
      }
      v26 = v20;
      for ( i = 0; *(_DWORD *)(a1 + 392) > i; ++i )
      {
        if ( !(unsigned __int8)is_loaded(v17) )
          break;
        v22 = v19 == 2 ? get_qword(v17) : get_dword(v17, v16, v23, v24, v25);
        v16 = v17;
        v17 += v18;
        sub_42050(a1, v16, v22, v22, 0, v26, 0, 0, 0);
      }
    }
  }
  v4 = *(_QWORD *)(a2 + 32);
  if ( (v4 & 3) == 0 && v4 > 7 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    v7 = v4 >> 2;
    if ( !(unsigned __int8)get_fixups(0, v6, v7) )
    {
      v8 = 0x20000000;
      create_data(v6, 0x20000000, 4, -1);
      if ( *(_QWORD *)(a1 + 380) != -1 && (unsigned int)get_dword(v6, 0x20000000, v9, v10, v11) == *(_QWORD *)(a1 + 380) )
      {
        v8 = (__int64)"rld_text_rsolve";
        append_cmt(v6, "rld_text_rsolve", 0);
      }
      v12 = v7 - 1;
      do
      {
        v6 += 4;
        if ( !(unsigned __int8)is_loaded(v6) )
          break;
        if ( (unsigned int)get_dword(v6, v8, v13, v14, v15) )
        {
          v8 = 0;
          op_offset(v6, 0, 2, -1, 0, 0);
        }
        else
        {
          v8 = 0x20000000;
          create_data(v6, 0x20000000, 4, -1);
        }
        --v12;
      }
      while ( v12 );
    }
  }
  return 0;
}

