unsigned __int64 __fastcall sub_5EB9D0(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbx
  bool v7; // cc
  void **p_ptr; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  int flags; // eax
  __int64 v14; // [rsp+0h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+8h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-50h] BYREF
  __int128 v17; // [rsp+18h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = *a2;
    if ( 24 * a2[1] )
    {
      while ( (unsigned int)compare_arglocs(a4, v6) )
      {
        v6 += 24;
        if ( v6 == *a2 + 24 * a2[1] )
          goto LABEL_7;
      }
      *(_DWORD *)(v6 + 16) = a3;
    }
  }
LABEL_7:
  if ( (get_flags_ex(a3, 4) & 0x800) != 0 )
  {
    if ( (((unsigned __int16)get_aflags(a3) >> 8) & 0x80u) == 0 )
      return v18 - __readfsqword(0x28u);
    goto LABEL_9;
  }
  if ( (getinf(49) & 0x10) == 0 || !(unsigned __int8)xrefblk_t_first_from(&ptr, a3, 1) )
  {
LABEL_9:
    v7 = *(_QWORD *)(a4 + 24) <= 1u;
    p_ptr = (void **)(a4 + 16);
    ptr = nullptr;
    v17 = 0;
    if ( v7 )
    {
      v10 = *(_QWORD *)(a1 + 1480);
      v14 = 0;
      v11 = *(_QWORD *)(v10 + 8);
      copy_tinfo_t(&v14);
      v12 = *(_DWORD *)(a4 + 72);
      if ( (v12 & 8) != 0 )
      {
        sub_6897A0(v11, &v14);
      }
      else if ( (v12 & 4) != 0 )
      {
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(v14, 9);
        copy_tinfo_t(&v14);
        clear_tinfo_t(&tinfo_property);
      }
      p_ptr = &ptr;
      print_tinfo((int)&ptr, 0, 0, 0, 0, (int)&v14, 0, 0);
      clear_tinfo_t(&v14);
    }
    set_cmt(a3, *p_ptr, 0);
    set_abits(a3, 0x8000);
    if ( ptr )
    {
      *(_QWORD *)&v17 = 0;
      qfree(ptr);
    }
    return v18 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    flags = get_flags_ex(HIDWORD(ptr), 4);
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
      return v18 - __readfsqword(0x28u);
    if ( !(unsigned __int8)xrefblk_t_next_from(&ptr) )
      goto LABEL_9;
  }
}

