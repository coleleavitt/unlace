__int64 __fastcall sub_21970(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 qword; // rax

  v2 = equal_bytes(a2, &unk_6DCC0, 255, 32, 1);
  if ( (_BYTE)v2 )
  {
    auto_mark_range(a2, a2 + 1, 20);
    auto_mark_range(a2, a2 + 1, 30);
    auto_mark_range(a2 + 14, a2 + 15, 20);
    auto_mark_range(a2 + 16, a2 + 17, 20);
    create_data(a2 + 28, 0x20000000, 4, -1);
    if ( (get_flags_ex(a2, 4) & 0x4000) == 0 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(v7 + 456) & (a2 + 2LL * (unsigned int)get_dword(a2 + 2, 4, v4, v5, v6));
      if ( (unsigned __int8)is_loaded(v8) )
      {
        qword = get_qword(v8);
        sub_40E60(a1, a2, qword, ".", "");
      }
    }
  }
  return v2;
}

