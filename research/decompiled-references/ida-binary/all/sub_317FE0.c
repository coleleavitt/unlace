__int64 sub_317FE0(unsigned __int8 a1, __int64 a2, unsigned int a3, ...)
{
  __int64 path; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+0h] [rbp-1128h] BYREF
  __int64 v10; // [rsp+8h] [rbp-1120h] BYREF
  __int64 v11; // [rsp+10h] [rbp-1118h] BYREF
  __int128 v12; // [rsp+18h] [rbp-1110h]
  gcc_va_list va; // [rsp+28h] [rbp-1100h] BYREF
  _BYTE v14[4104]; // [rsp+40h] [rbp-10E8h] BYREF
  unsigned __int64 v15; // [rsp+1048h] [rbp-E0h]

  v15 = __readfsqword(0x28u);
  if ( a2 )
  {
    v11 = 0;
    v12 = 0;
    path = get_path(1);
    v5 = qbasename(path);
    if ( a1 && (unsigned __int8)sub_1F09E0(0, &v9, &v10) && get_ea_name(&v11, v9, 1, 0) > 0 )
      v5 = v11;
    set_file_ext(v14, 4096, v5, a2);
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11, (const char *)&stru_1000);
    }
  }
  else
  {
    getinf_buf(97, v14, 4096);
  }
  sanitize_file_name(v14, 4096);
  va_start(va, a3);
  v7 = itext(a3, 4096, v6);
  return callui(29, a1, (unsigned int)v14, v7, (unsigned int)va, (unsigned int)&callui);
}
