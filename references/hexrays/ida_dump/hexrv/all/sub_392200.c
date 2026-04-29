__int64 __fastcall sub_392200(__int64 a1, double a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  vars0[0] = 0;
  if ( !(unsigned __int8)sub_371520(*(_QWORD *)(a1 + 24), vars0) )
  {
    if ( !under_debugger )
      sub_37DDE0(0xC51Au, (__int64)vars0, a2);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 108);
    if ( (v3 & 8) != 0 )
    {
      set_tinfo(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), vars0);
      goto LABEL_5;
    }
    *(_DWORD *)(v2 + 108) = v3 | 8;
  }
  set_tinfo(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), vars0);
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_390810(a1, 0, a2, v5, v6, v7);
  }
LABEL_5:
  clear_tinfo_t(vars0);
  return 1;
}
