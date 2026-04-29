int sub_99C0()
{
  __int64 v0; // rax
  char *v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // r15d
  int *v4; // r12
  __int64 v5; // rax
  int *v6; // rdx
  bool v7; // bp

  v0 = 0;
  v1 = (char *)&unk_1E0A0;
  qword_262F8 = (__int64)&dword_262E8;
  dword_262E8 = 0;
  qword_262F0 = 0;
  qword_26300 = (__int64)&dword_262E8;
  for ( qword_26308 = 0; ; v0 = qword_26308 )
  {
    v3 = *(_DWORD *)v1;
    if ( !v0 || (v4 = (int *)qword_26300, v5 = 0, *(_DWORD *)(qword_26300 + 32) >= v3) )
    {
      v5 = sub_13480(&unk_262E0, v3);
      v4 = v6;
    }
    if ( v4 )
    {
      v7 = v4 == &dword_262E8 || v5 != 0;
      if ( !v7 )
        v7 = v3 < v4[8];
      v2 = operator new(0x28u);
      *(_QWORD *)(v2 + 32) = *(_QWORD *)v1;
      std::_Rb_tree_insert_and_rebalance(v7, v2, v4, &dword_262E8);
      ++qword_26308;
    }
    v1 += 8;
    if ( v1 == (char *)&unk_1E0A0 + 4320 )
      break;
  }
  return __cxa_atexit(func, &unk_262E0, &off_215E0);
}
