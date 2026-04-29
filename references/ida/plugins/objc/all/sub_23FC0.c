__int64 sub_23FC0()
{
  __int64 result; // rax
  int v1; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_15860(&v1) )
  {
    result = 1 - ((unsigned int)((v1 & 2) == 0) - 1);
    if ( (v1 & 1) != (unsigned __int8)(v1 & 2) >> 1 )
      return result;
    sub_EC40();
  }
  return 0;
}
