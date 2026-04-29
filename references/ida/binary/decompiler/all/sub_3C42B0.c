unsigned __int64 __fastcall sub_3C42B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  switch_dbctx();
  if ( sub_2B2FA0(a3, 0) == -1 )
  {
    if ( !under_debugger )
      sub_37EA20(52567);
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned int *)(a2 + 12);
  v7 = a3;
  sub_2B85A0(a3, *(_QWORD *)(v4 + 8), *(unsigned int *)(a1 + 12), v5);
  sub_1774C0(v4 + 152, &v7);
  return v8 - __readfsqword(0x28u);
}
