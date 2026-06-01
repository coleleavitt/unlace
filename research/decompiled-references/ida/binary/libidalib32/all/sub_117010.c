__int64 sub_117010(unsigned __int8 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  int v5; // [rsp+8h] [rbp-1120h] BYREF
  _BYTE v6[4]; // [rsp+Ch] [rbp-111Ch] BYREF
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
    if ( a1 && (unsigned __int8)sub_161360(0, &v5, v6) )
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
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(29, a1, v10, v3, va, &callui);
}

