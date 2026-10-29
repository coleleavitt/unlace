__int64 __fastcall sub_1AB20(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx

  if ( under_debugger )
    BUG();
  interr(10240);
  if ( !v2 )
    return 1;
  v5 = *(_QWORD *)(v2 + 16);
  if ( (unsigned int)get_dword(v5, a2, v2, v3, v4) == 1317011489 )
  {
    create_insn(v5, 0);
    auto_mark_range(v5, v5 + 1, 20);
    auto_mark_range(v5, v5 + 1, 30);
    set_name(v5, "..load_data_sreg", 6144);
  }
  return 1;
}

