unsigned __int64 __fastcall sub_3F6D50(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( a4 < 0 )
    copy_tinfo_t();
  sub_32F0D0(a2, a3, 8);
  clear_tinfo_t();
  return v6 - __readfsqword(0x28u);
}
