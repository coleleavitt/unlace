__int64 __fastcall sub_6196D0(const char *a1)
{
  __int64 v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  if ( (unsigned int)get_name_value(v2, -1, a1) == 1 )
    apply_tinfo(v2[0]);
  return 3;
}
