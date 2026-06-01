__int64 __fastcall sub_789F60(__int64 a1, const char *a2)
{
  int name_value; // edx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  name_value = get_name_value(v4, *(_QWORD *)(a1 + 8), a2);
  result = v4[0];
  if ( !name_value )
    return -1;
  return result;
}
