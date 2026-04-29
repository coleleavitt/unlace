__int64 __fastcall sub_3236F0(__int64 a1, __int64 a2)
{
  int named_type; // edx
  __int64 result; // rax
  __int64 _8; // [rsp+8h] [rbp+0h] BYREF
  char vars8; // [rsp+10h] [rbp+8h] BYREF
  char vars10; // [rsp+18h] [rbp+10h] BYREF
  unsigned __int64 vars18; // [rsp+20h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  named_type = get_named_type(0, a2, 8, &_8, &vars8, 0, &vars10, 0, 0);
  result = 0;
  if ( named_type )
    return deserialize_tinfo(a1, 0, &_8, &vars8, &vars10, 0);
  return result;
}
