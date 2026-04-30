unsigned __int64 __fastcall sub_4A3460(double a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( !byte_8D1808 )
  {
    v7 = 1;
    v4 = sub_534430("ChooserToggleTree");
    if ( !v4 || (a3 = 6, !(unsigned __int8)sub_537630(v4, 6, &v7)) )
    {
      if ( !under_debugger )
        interr(40775, a3, v5, v6, a1);
      BUG();
    }
    byte_8D1808 = 1;
  }
  return v8 - __readfsqword(0x28u);
}
