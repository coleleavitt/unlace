__int64 __fastcall sub_438840(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 72);
  v9[1] = __readfsqword(0x28u);
  if ( ((v3 - 63) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 == 66 )
    {
      v7 = sub_534430(v4);
      if ( v7 )
        sub_537630(v7, 1, "Commit...");
      return sub_44CAC0(a1, a2);
    }
    else
    {
      v5 = sub_534430(v4);
      if ( v5 )
        sub_537630(v5, 1, "Commit...");
      return 7;
    }
  }
  else
  {
    v8 = sub_534430(v4);
    if ( v8 )
      sub_537630(v8, 1, "Scan and commit...");
    v9[0] = scan_and_commit_action_t___vtable;
    return sub_438700((__int64)v9, a1, (char *)a2, 0);
  }
}
