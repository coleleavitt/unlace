unsigned __int64 __fastcall sub_2A7000(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v11; // rdi
  int v12; // r9d
  char v13; // r13
  __int64 tinfo_size; // r15
  bool v15; // r15
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v17[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 1376LL);
  if ( v4 )
  {
    v8 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v8 )
    {
LABEL_3:
      if ( (*(_BYTE *)v8 & 2) != 0 )
        return v18 - __readfsqword(0x28u);
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 24);
        if ( a2 < v9 )
        {
          v8 = *(_QWORD *)(v8 + 8);
          goto LABEL_3;
        }
        if ( v9 >= a2 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
          return v18 - __readfsqword(0x28u);
      }
      if ( (_QWORD *)v8 == v4 )
        return v18 - __readfsqword(0x28u);
    }
    if ( a3 == -1 )
    {
      v17[0] = get_tinfo_property();
      tinfo_size = get_tinfo_size();
      if ( tinfo_size != get_tinfo_size()
        || (v15 = (get_tinfo_property() & 0xF) == 9, v15 != ((get_tinfo_property() & 0xF) == 9)) )
      {
        clear_tinfo_t();
        return v18 - __readfsqword(0x28u);
      }
      clear_tinfo_t();
    }
    v16 = 0;
    copy_tinfo_t();
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 216LL);
    v17[0] = 0;
    v17[1] = 0;
    v13 = sub_32DC20(v11, (unsigned int)&v16, a3, a4, (unsigned int)v17, v12);
    cleanup_argloc();
    if ( !v13 )
    {
      if ( !under_debugger )
        sub_383060(51265);
      BUG();
    }
    sub_2A69F0(a1, a2, (__int64)&v16, 0);
    clear_tinfo_t();
  }
  return v18 - __readfsqword(0x28u);
}
