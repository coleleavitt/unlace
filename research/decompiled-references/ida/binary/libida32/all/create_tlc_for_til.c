__int64 __fastcall create_tlc_for_til(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax

  v2 = a1;
  if ( !a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 8LL);
    if ( !v2 )
    {
      if ( !under_debugger )
        interr(3102);
      goto LABEL_27;
    }
  }
  if ( (*(_BYTE *)(v2 + 32) & 0x10) != 0 )
  {
    v11 = operator new(0x88u);
    *(_QWORD *)(v11 + 8) = 0;
    v12 = v11;
    *(_QWORD *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 56) = 1;
    *(_QWORD *)(v11 + 64) = 0;
    *(_QWORD *)(v11 + 88) = 0;
    *(_WORD *)(v11 + 112) = (unsigned __int8)a2;
    *(_OWORD *)(v11 + 16) = 0;
    *(_OWORD *)(v11 + 40) = 0;
    *(_OWORD *)(v11 + 72) = 0;
    *(_OWORD *)(v11 + 96) = 0;
    *(_QWORD *)v11 = &off_2B04538;
    *(_QWORD *)(v11 + 120) = v2;
    *(_QWORD *)(v11 + 128) = 0;
    if ( v2 == get_idati(136, a2) )
      *(_QWORD *)(v12 + 128) = get_std_dirtree(0);
    return v12;
  }
  else
  {
    v3 = operator new(0x90u);
    *(_QWORD *)(v3 + 8) = 0;
    v4 = v3;
    *(_QWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 56) = 1;
    *(_QWORD *)(v3 + 64) = 0;
    *(_QWORD *)(v3 + 88) = 0;
    *(_WORD *)(v3 + 112) = (unsigned __int8)a2 | 2;
    *(_OWORD *)(v3 + 16) = 0;
    *(_OWORD *)(v3 + 40) = 0;
    *(_OWORD *)(v3 + 72) = 0;
    *(_OWORD *)(v3 + 96) = 0;
    *(_QWORD *)v3 = &off_2B04608;
    *(_QWORD *)(v3 + 120) = v2;
    *(_QWORD *)(v3 + 128) = 0;
    v5 = qword_2CA1698;
    *(_DWORD *)(v4 + 136) = 0;
    v6 = *(_QWORD *)(v5 + 1464);
    if ( !*(_BYTE *)(v6 + 72) )
    {
      if ( !(unsigned __int8)hook_event_listener(3, *(_QWORD *)(v5 + 1464), 0, 0)
        || !(unsigned __int8)hook_event_listener(0, v6 + 40, 0, 0) )
      {
        if ( !under_debugger )
          interr(2961);
LABEL_27:
        BUG();
      }
      *(_BYTE *)(v6 + 72) = 1;
      v2 = *(_QWORD *)(v4 + 120);
    }
    v7 = *(__int64 **)(v6 + 16);
    v8 = &v7[*(_QWORD *)(v6 + 24)];
    if ( v7 == v8 )
      goto LABEL_19;
    while ( 1 )
    {
      v9 = *v7;
      if ( *(_QWORD *)(*v7 + 48) == v2 )
        break;
      if ( v8 == ++v7 )
        goto LABEL_19;
    }
    if ( !v9 )
    {
LABEL_19:
      v13 = operator new(0x58u);
      v14 = *(_QWORD *)v4;
      v9 = v13;
      v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL);
      if ( v15 == sub_53C9B0 )
      {
        v16 = *(_QWORD *)(v4 + 120);
      }
      else
      {
        v16 = v15(v4);
        v14 = *(_QWORD *)v4;
      }
      *(_DWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = v9 + 8;
      *(_QWORD *)(v9 + 32) = v9 + 8;
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 48) = v2;
      *(_QWORD *)(v9 + 56) = 0;
      *(_OWORD *)(v9 + 64) = 0;
      *(_BYTE *)(v9 + 80) = v16 != 0;
      (*(void (__fastcall **)(__int64, __int64))(v14 + 24))(v4, v9);
      v17 = *(_QWORD *)(v6 + 24);
      v18 = *(_QWORD *)(v6 + 16);
      if ( *(_QWORD *)(v6 + 32) < (unsigned __int64)(v17 + 1) )
      {
        v19 = qvector_reserve(v6 + 16, v18, v17 + 1, 8);
        *(_QWORD *)(v6 + 16) = v19;
        v18 = v19;
        v17 = *(_QWORD *)(v6 + 24);
      }
      *(_QWORD *)(v18 + 8 * v17) = v9;
      ++*(_QWORD *)(v6 + 24);
    }
    *(_DWORD *)(v4 + 136) = *(_QWORD *)(v9 + 64);
    return v4;
  }
}

