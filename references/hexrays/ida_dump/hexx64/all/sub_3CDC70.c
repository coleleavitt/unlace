unsigned __int64 __fastcall sub_3CDC70(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v7; // r13
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v5 = *(int *)(a2 + 8);
  v14 = __readfsqword(0x28u);
  switch_dbctx(v5);
  if ( sub_2B6080(a3, 0) == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCD57u, 0, a4);
    BUG();
  }
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_DWORD *)(a2 + 12);
  v13 = a3;
  sub_2BAFE0(a3, *(_QWORD *)(v7 + 8), *(_DWORD *)(a1 + 12), v8);
  sub_179D00((_QWORD *)(v7 + 152), (unsigned __int64 *)&v13, v9, v10, v11);
  return v14 - __readfsqword(0x28u);
}
