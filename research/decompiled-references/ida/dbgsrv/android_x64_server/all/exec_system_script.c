/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: exec_system_script
// Address: 0x000000000006AB50

//----- (000000000006AB50) ----------------------------------------------------
__int64 __fastcall exec_system_script(__int64 a1, unsigned int a2, double a3, __m128 a4)
{
  unsigned int v4; // ebp
  char *idc_filename; // rax
  const char *v6; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-1038h] BYREF
  __int64 v9; // [rsp+10h] [rbp-1028h]
  char v10[4096]; // [rsp+20h] [rbp-1018h] BYREF
  unsigned __int64 v11; // [rsp+1020h] [rbp-18h]

  v4 = a2;
  v11 = __readfsqword(0x28u);
  idc_filename = get_idc_filename(v10, 4096, a1);
  if ( !idc_filename )
  {
    if ( (_BYTE)a2 )
    {
      v4 = 0;
      sub_4FCD0((int)"Could not locate system script file %s", a1);
      return v4;
    }
    return 0;
  }
  *(_OWORD *)ptr = 0;
  v9 = 0;
  if ( !(unsigned __int8)compile_idc_file((__int64)idc_filename, (__int64)ptr, 3, 0.0, a4)
    || !(unsigned __int8)call_idc_func(nullptr, "main", nullptr, 0, (__int64)ptr, 0, 0.0, a4) )
  {
    if ( ptr[1] )
      v6 = (const char *)ptr[0];
    else
      v6 = s1;
    sub_4FCD0((int)"%s", v6);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v9 = 0;
    }
    return 0;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v9 = 0;
  }
  LOBYTE(v4) = 1;
  return v4;
}
