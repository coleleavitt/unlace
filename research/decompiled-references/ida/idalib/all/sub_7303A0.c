__int64 __fastcall sub_7303A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[1] = a2;
  v6[0] = off_2B385A0;
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(3335);
    BUG();
  }
  return sub_730280(a1, (__int64)v6, a3, a4, a5);
}
