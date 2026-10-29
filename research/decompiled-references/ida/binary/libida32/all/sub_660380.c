__int64 __fastcall sub_660380(__int64 a1, unsigned int a2, __int64 a3)
{
  time_t v4; // rax
  unsigned int tinfo; // ebx
  __int64 v7; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v8[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h] BYREF
  void *v10; // [rsp+38h] [rbp-70h]
  __int128 v11; // [rsp+40h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-58h]
  __int128 v13; // [rsp+58h] [rbp-50h]
  int v14; // [rsp+68h] [rbp-40h]
  unsigned __int64 v15; // [rsp+78h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v4 = time(nullptr);
  if ( v4 != qword_2CA2480 )
  {
    qword_2CA2480 = v4;
    show_auto(a2, 0);
  }
  v7 = 0;
  tinfo = get_tinfo(&v7, a2);
  if ( (_BYTE)tinfo )
  {
    v8[3] = a3;
    v8[0] = off_2B0D480;
    v9 = 0;
    v10 = nullptr;
    ptr = nullptr;
    v14 = 0;
    v8[1] = 4;
    v8[2] = a1;
    v11 = 0;
    v13 = 0;
    visit_subtypes((int)v8, (int)&v9, (int)&v7, 0, 0);
    if ( (v14 & 1) != 0 )
      set_tinfo(a2, &v9);
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10);
    }
    clear_tinfo_t(&v9);
  }
  clear_tinfo_t(&v7);
  return tinfo;
}

