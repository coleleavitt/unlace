__int64 __fastcall sub_5DFBF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_728190(&v8, a1, a3, 64, 0xFFFF) && (v8 & (v8 - 1)) == 0 )
  {
    *(_WORD *)(a6 + 166) = v8;
    return 0;
  }
  else
  {
    sub_727810(a1, 1360);
    return 3;
  }
}

