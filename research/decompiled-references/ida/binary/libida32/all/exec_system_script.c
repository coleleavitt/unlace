__int64 __fastcall exec_system_script(__int64 a1, char a2)
{
  __int64 idc_filename; // rax
  __int64 result; // rax
  unsigned __int8 v4; // [rsp+Fh] [rbp-1049h]
  void *ptr; // [rsp+10h] [rbp-1048h] BYREF
  __int128 v6; // [rsp+18h] [rbp-1040h]
  _BYTE v7[4104]; // [rsp+30h] [rbp-1028h] BYREF
  unsigned __int64 v8; // [rsp+1038h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  idc_filename = get_idc_filename(v7, 4096, a1);
  if ( idc_filename )
  {
    v6 = 0;
    ptr = nullptr;
    if ( !(unsigned __int8)compile_idc_file(idc_filename, &ptr, 3) || (result = call_idc_func(), !(_BYTE)result) )
      sub_375400();
    if ( ptr )
    {
      v4 = result;
      *(_QWORD *)&v6 = 0;
      qfree(ptr);
      return v4;
    }
  }
  else
  {
    if ( a2 )
      sub_375400();
    return 0;
  }
  return result;
}

