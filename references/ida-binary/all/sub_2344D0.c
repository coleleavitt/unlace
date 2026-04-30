signed __int64 __fastcall sub_2344D0(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  signed __int64 result; // rax
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  netnode_check(v7, "$ debugger configuration", 0, 0);
  result = netnode_hashval(v7[0], a1, a3, a4, 72);
  if ( result < 0 )
  {
    qstrncpy(a3, a2, a4);
    return strlen(a3);
  }
  return result;
}
