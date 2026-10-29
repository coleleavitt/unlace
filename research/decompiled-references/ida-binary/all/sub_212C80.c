unsigned __int64 __fastcall sub_212C80(unsigned __int8 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+8h] [rbp-20h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  byte_8BA508 = a1;
  v3 = a1;
  v4 = 1;
  v1 = dbg;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v1, 44, &v4, "TracingHighlight", 1, 2, &v3);
  return v5 - __readfsqword(0x28u);
}
