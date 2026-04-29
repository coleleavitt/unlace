__int64 sub_DF280()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int v2; // edx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)getinf_flag(3, 4) )
    return 256;
  netnode_check(v5, "$ golang", 0, 0);
  v1 = netnode_altval(v5[0], 0, 65);
  if ( v1 <= 0x74 )
    return 256;
  v2 = *(_DWORD *)(get_ph() + 4);
  result = 176;
  if ( v2 )
  {
    v3 = (unsigned int)(v2 - 13);
    if ( (unsigned int)v3 > 0x3B )
      return 256;
    v4 = 0x800000000000005LL;
    if ( !_bittest64(&v4, v3) || v1 == 117 )
      return 256;
  }
  return result;
}
