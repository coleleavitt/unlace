bool __fastcall sub_3326E0(const char *a1, char a2)
{
  unsigned int v2; // eax
  _QWORD v4[133]; // [rsp+0h] [rbp-428h] BYREF

  v4[129] = __readfsqword(0x28u);
  qsnprintf(v4, 1024, "%s_%s", a1, a930260327);
  v2 = time(nullptr);
  if ( !a2 )
    return (int)(v2 - reg_int_op(v4, 0, 0, 0)) > 604800;
  reg_int_op(v4, 1, v2, 0);
  return a2;
}
