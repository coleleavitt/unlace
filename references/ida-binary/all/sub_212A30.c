unsigned __int64 __fastcall sub_212A30(char a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v1 = a1 & 1;
  v6 = __readfsqword(0x28u);
  dword_8CB69C = v1;
  v4 = v1;
  v5 = 1;
  v2 = dbg;
  if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
    sub_20CEA0(v2, 44, &v5, "TracingBblkOpt", 1, 2, &v4);
  return v6 - __readfsqword(0x28u);
}
