__int64 sub_192E10()
{
  __int64 v0; // rdi
  __int64 fileregion_offset; // rax
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v5; // edx
  __int64 result; // rax
  __int64 fileregion_ea; // rsi
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  v0 = sub_192350();
  if ( (unsigned __int64)(v0 - 1) > 0xFFFFFFFFFFFFFFFDLL )
    v0 = xmmword_8CC810;
  fileregion_offset = get_fileregion_offset(v0);
  if ( fileregion_offset == -1 )
    LOBYTE(fileregion_offset) = 0;
  v5 = sub_507F10(1020, (unsigned int)v8, 0, v2, v3, v4, fileregion_offset);
  result = 1;
  if ( v5 )
  {
    fileregion_ea = get_fileregion_ea(v8[0]);
    result = 0;
    if ( fileregion_ea != -1 )
      return (unsigned __int8)sub_192AA0(0, fileregion_ea, -1, 1u);
  }
  return result;
}
