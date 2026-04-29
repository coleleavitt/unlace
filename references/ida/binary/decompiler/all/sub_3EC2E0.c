unsigned __int64 __fastcall sub_3EC2E0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int tinfo_size; // eax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a4 < 0 )
  {
    v7 = 0;
    copy_tinfo_t();
  }
  else
  {
    v7 = (unsigned __int8)a4;
  }
  tinfo_size = get_tinfo_size();
  sub_32BC70(a2, a3, tinfo_size, &v7);
  clear_tinfo_t();
  return v8 - __readfsqword(0x28u);
}
