__int64 sub_117410(unsigned __int8 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-1128h] BYREF
  __int64 v6; // [rsp+8h] [rbp-1120h] BYREF
  __int64 v7; // [rsp+10h] [rbp-1118h]
  __int128 v8; // [rsp+18h] [rbp-1110h]
  gcc_va_list va; // [rsp+28h] [rbp-1100h] BYREF
  _BYTE v10[4104]; // [rsp+40h] [rbp-10E8h] BYREF
  unsigned __int64 v11; // [rsp+1048h] [rbp-E0h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = 0;
    v8 = 0;
    get_path();
    qbasename();
    if ( a1 && (unsigned __int8)sub_161C80(0, &v5, &v6) )
      get_ea_name();
    set_file_ext();
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
  }
  else
  {
    getinf_buf();
  }
  sanitize_file_name();
  va_start(va, a3);
  v3 = itext();
  return callui(29, a1, v10, v3, va, &callui, v5, v6, v7, v8);
}

