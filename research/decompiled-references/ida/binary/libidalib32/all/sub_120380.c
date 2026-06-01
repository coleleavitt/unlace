__int64 sub_120380()
{
  int fileregion_offset; // eax
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  __int64 result; // rax
  int v6; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  sub_1201F0();
  fileregion_offset = get_fileregion_offset();
  if ( fileregion_offset == -1 )
    fileregion_offset = 0;
  v6 = fileregion_offset;
  v4 = sub_18BA90(1020, (unsigned int)&v6, 0, v1, v2, v3);
  result = 1;
  if ( v4 )
  {
    get_fileregion_ea();
    return 0;
  }
  return result;
}

