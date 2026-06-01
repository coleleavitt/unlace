unsigned __int64 __fastcall sub_650D50(__int64 a1, unsigned int a2)
{
  int *func; // rax
  int *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  func = (int *)get_func(a2);
  if ( func )
  {
    v3 = func;
    if ( (get_aflags((unsigned int)*func) & 0x800) != 0 )
      sub_365330();
    v5 = 0;
    if ( (unsigned int)guess_tinfo((int)&v5, *v3) == 2 )
    {
      apply_tinfo(*v3);
      sub_3A4E30(a1, 0, 0xFFFFFFFF, 0x32u);
    }
    clear_tinfo_t(&v5);
  }
  return v6 - __readfsqword(0x28u);
}

