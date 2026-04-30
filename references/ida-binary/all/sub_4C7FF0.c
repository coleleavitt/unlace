__int64 __fastcall DockArea::orderedDocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( !*(_DWORD *)(a2 + 40) )
  {
    v7[0] = a2;
    sub_4C7E80((__int64 *)(a1 + 8), v7, a3, a4, a5, a6);
  }
  return 0;
}
