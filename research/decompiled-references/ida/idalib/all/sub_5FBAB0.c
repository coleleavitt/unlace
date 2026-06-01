__int64 __fastcall sub_5FBAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_748330(v8, a1, a3, 64, 0xFFFF, 0) && (v8[0] & (v8[0] - 1LL)) == 0 )
  {
    *(_WORD *)(a6 + 174) = v8[0];
    return 0;
  }
  else
  {
    sub_747D50(a1, 1360);
    return 3;
  }
}
