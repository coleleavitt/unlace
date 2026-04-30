__int64 __fastcall sub_225790(int a1, double a2, __m128i a3)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  result = 0;
  if ( a1 >= 0 )
  {
    v6[0] = 1;
    qword_8CB658 = a1;
    v4 = dbg;
    v5 = a1;
    if ( dbg )
    {
      if ( (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
        sub_20CEA0(v4, 44, v6, "TracingBufferSize", 1, 2, &v5);
    }
    sub_223CE0((__int64)qword_8CBAA0, (unsigned int)a1, a2, a3);
    mark_builtin_widgets(&stru_10000, 0, 1);
    return 1;
  }
  return result;
}
