__int64 sub_13C850()
{
  int v0; // ebx
  unsigned int v1; // r12d
  unsigned int max_strlit_length; // ebp
  int v3; // edx
  __int64 result; // rax
  unsigned int v5; // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v0 = getinf();
  if ( (unsigned __int8)sub_161360(0, &v5, &v6) )
  {
    v1 = v5;
    max_strlit_length = v6 - v5;
  }
  else
  {
    v1 = qword_251700;
    max_strlit_length = get_max_strlit_length();
    if ( !max_strlit_length && v0 == 4 )
      max_strlit_length = get_max_strlit_length();
  }
  v3 = sub_13B290(
         v1,
         max_strlit_length,
         "ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to string?",
         1342178304,
         nullptr,
         nullptr);
  result = 0;
  if ( v3 == 1 )
  {
    sub_15D870(v1);
    return (unsigned __int8)create_strlit();
  }
  return result;
}

