__int64 __fastcall sub_3BE5C0(__int64 a1, const char *a2)
{
  _QWORD v3[133]; // [rsp+0h] [rbp-428h] BYREF

  v3[129] = __readfsqword(0x28u);
  qsnprintf(v3, 1024, "Invalid attribute '%s'", a2);
  return throw_idc_exception(a1, v3);
}
