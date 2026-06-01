unsigned __int64 __fastcall sub_3EC230(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a4 < 0 )
  {
    v6 = 0;
    copy_tinfo_t();
  }
  else
  {
    v6 = (unsigned __int8)a4;
  }
  sub_32BC70(a2, a3, 16, &v6);
  clear_tinfo_t();
  return v7 - __readfsqword(0x28u);
}
