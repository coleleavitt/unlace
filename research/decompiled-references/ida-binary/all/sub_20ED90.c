__int64 __fastcall sub_20ED90(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  const char *v4; // r12
  const char *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 8) == 16;
  v13 = __readfsqword(0x28u);
  result = 6;
  if ( v2 )
  {
    v4 = "Revert subtraction";
    v5 = "Restore main trace to its original state";
    if ( qword_8CB7A0 == qword_8CB7C0
      && (qword_8CBB00 == qword_8CBAE0
       || (v4 = "Subtract overlay",
           v5 = "Remove, from the main trace, events that are also present in overlay",
           qword_8CB960 == qword_8CB940)) )
    {
      v10 = *(_QWORD *)(a2 + 72);
      v12 = 0;
      v11 = sub_534430(v10);
      if ( v11 )
        sub_537630(v11, 8, &v12);
      return 7;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 72);
      v12 = 1;
      v7 = sub_534430(v6);
      if ( v7 )
        sub_537630(v7, 8, &v12);
      v8 = sub_534430(*(_QWORD *)(a2 + 72));
      if ( v8 )
        sub_537630(v8, 1, v4);
      v9 = sub_534430(*(_QWORD *)(a2 + 72));
      if ( v9 )
        sub_537630(v9, 3, v5);
      return 3;
    }
  }
  return result;
}
