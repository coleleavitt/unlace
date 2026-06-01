unsigned __int64 __fastcall sub_3E0940(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  int stroff_path; // eax
  __int64 v10; // rsi
  int v11; // ebp
  __int64 tinfo_size; // rax
  __int64 v15; // [rsp+18h] [rbp-180h] BYREF
  __int64 v16; // [rsp+20h] [rbp-178h] BYREF
  __int64 v17; // [rsp+28h] [rbp-170h] BYREF
  __int64 (__fastcall **v18[2])(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-168h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-158h]
  __int64 v20[33]; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int64 v21; // [rsp+158h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  stroff_path = get_stroff_path(v20, &v15, a6, a2);
  if ( stroff_path <= 0 )
  {
    v20[0] = get_strid(a6);
    v10 = v20[0];
    if ( v20[0] == -1 )
      return v21 - __readfsqword(0x28u);
    v11 = 1;
  }
  else
  {
    v10 = v20[0];
    v11 = stroff_path;
  }
  v16 = 0;
  v17 = v15 + a3;
  if ( (unsigned __int8)get_type_by_tid(&v16, v10)
    && !get_tinfo_property(v16, 286)
    && (tinfo_size = get_tinfo_size(0, v16, 0), v17 == tinfo_size) )
  {
    add_dref(*(_QWORD *)(a1 + 16), v20[0], a4);
    clear_tinfo_t(&v16);
  }
  else
  {
    v18[1] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1;
    v18[0] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))off_2B26328;
    v19 = a4;
    visit_stroff_udms(v18, v20, v11, &v17, a5);
    clear_tinfo_t(&v16);
  }
  return v21 - __readfsqword(0x28u);
}
