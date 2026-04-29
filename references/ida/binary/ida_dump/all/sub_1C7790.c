__int64 __fastcall sub_1C7790(__int64 a1, __int64 a2, signed int a3)
{
  unsigned int v3; // r12d
  int v5; // r15d
  _QWORD *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD v10[4]; // [rsp+0h] [rbp-68h] BYREF
  int v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  LOBYTE(v3) = a2 == 0 && a3 <= 0;
  if ( (_BYTE)v3 )
  {
    if ( !under_debugger )
      sub_383060(51579);
    BUG();
  }
  v5 = *(_DWORD *)a1;
  v6 = (_QWORD *)sub_339CA0(a1);
  sub_1C6F80(v10, v6, a1, a3, 0);
  if ( v10[0] && sub_CFF70() == 1 )
  {
    v8 = sub_339CA0(2011);
    sub_1C59F0((__int64)&v11, v8, (__int64)v10, a3, 0);
    copy_argloc();
    cleanup_argloc();
    if ( v5 != 2 && *(_DWORD *)a1 == 2 && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) == 1 )
    {
      v11 = 0;
      copy_argloc();
      v9 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v12;
      v12 = v9;
      LODWORD(v9) = *(_DWORD *)a1;
      *(_DWORD *)a1 = v11;
      v11 = v9;
      cleanup_argloc();
    }
    v3 = 1;
  }
  cleanup_argloc();
  return v3;
}
