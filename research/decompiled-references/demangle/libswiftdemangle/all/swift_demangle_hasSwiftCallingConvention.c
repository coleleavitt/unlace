__int64 __fastcall swift_demangle_hasSwiftCallingConvention(char *s)
{
  size_t v1; // rdx
  unsigned __int8 v2; // bl
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  sub_22ED0(v4);
  v1 = 0;
  if ( s )
    v1 = strlen(s);
  v2 = sub_232F0(v4, s, v1);
  sub_22FA0(v4);
  return v2;
}
