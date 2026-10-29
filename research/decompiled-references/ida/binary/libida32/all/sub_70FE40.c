__int64 __fastcall sub_70FE40(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[1] = a2;
  v6[0] = off_2B0E600;
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(3335);
    BUG();
  }
  return sub_70FD20(a1, (__int64)v6, a3, a4, a5);
}

