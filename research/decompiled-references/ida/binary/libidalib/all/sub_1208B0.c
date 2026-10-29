__int64 sub_1208B0()
{
  __int64 fileregion_offset; // rax
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  sub_120710();
  fileregion_offset = get_fileregion_offset();
  if ( fileregion_offset == -1 )
    fileregion_offset = 0;
  v6[0] = fileregion_offset;
  v4 = sub_18C660(1020, (unsigned int)v6, 0, v1, v2, v3);
  result = 1;
  if ( v4 )
  {
    get_fileregion_ea();
    return 0;
  }
  return result;
}

