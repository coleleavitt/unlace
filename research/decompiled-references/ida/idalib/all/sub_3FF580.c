unsigned __int64 __fastcall sub_3FF580(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( dbg )
  {
    v7 = 0;
    callui(1090, (int)&v7, (int)&callui, a4, a5, a6);
  }
  return v8 - __readfsqword(0x28u);
}
