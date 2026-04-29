unsigned __int64 __fastcall sub_3F6EB0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rsi
  int tinfo_size; // eax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a4 < 0 )
  {
    v9 = 0;
    copy_tinfo_t(&v9, a1 + 8LL * -a4 + 200);
    v6 = v9;
  }
  else
  {
    v6 = (unsigned __int8)a4;
    v9 = (unsigned __int8)a4;
  }
  tinfo_size = get_tinfo_size(0, v6, 0);
  sub_32F0D0(a2, a3, tinfo_size, (__int64)&v9);
  clear_tinfo_t(&v9);
  return v10 - __readfsqword(0x28u);
}
