__int64 sub_13CE60()
{
  int v0; // ebp
  __int64 v1; // r12
  unsigned __int64 max_strlit_length; // rbx
  int v3; // edx
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  v0 = getinf();
  if ( (unsigned __int8)sub_161C80(0, &v5, v6) )
  {
    v1 = v5;
    max_strlit_length = v6[0] - v5;
  }
  else
  {
    v1 = xmmword_2528A0;
    max_strlit_length = get_max_strlit_length();
    if ( !max_strlit_length && v0 == 4 )
      max_strlit_length = get_max_strlit_length();
  }
  v3 = sub_13B890(
         v1,
         max_strlit_length,
         "ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to string?",
         1342178304,
         nullptr,
         nullptr);
  result = 0;
  if ( v3 == 1 )
  {
    sub_15E150(v1, max_strlit_length);
    return (unsigned __int8)create_strlit();
  }
  return result;
}

