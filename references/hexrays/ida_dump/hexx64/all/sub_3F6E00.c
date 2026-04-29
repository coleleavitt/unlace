unsigned __int64 __fastcall sub_3F6E00(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a4 < 0 )
  {
    v6 = 0;
    copy_tinfo_t(&v6, a1 + 8LL * -a4 + 200);
  }
  else
  {
    v6 = (unsigned __int8)a4;
  }
  sub_32F0D0(a2, a3, 16, (__int64)&v6);
  clear_tinfo_t(&v6);
  return v7 - __readfsqword(0x28u);
}
