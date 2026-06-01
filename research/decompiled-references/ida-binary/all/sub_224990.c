__int64 __fastcall sub_224990(unsigned int a1, double a2, __m128i a3)
{
  __int64 v3; // rbp
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  qword_8CB658 = (int)a1;
  v3 = dbg;
  v5 = (int)a1;
  v6[0] = 1;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v3, 44, v6, "TracingBufferSize", 1, 2, &v5);
  sub_223CE0((__int64)qword_8CBAA0, a1, a2, a3);
  mark_builtin_widgets(&stru_10000, 0, 1);
  return 1;
}
