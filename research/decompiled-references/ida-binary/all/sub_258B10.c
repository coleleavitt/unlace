unsigned __int64 __fastcall sub_258B10(const char *a1, const char *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v3 = a3;
  v7 = __readfsqword(0x28u);
  if ( a1 )
    sub_258520(a1, "Host", 1);
  if ( a2 )
    sub_258520(a2, "Password", 1);
  if ( (_DWORD)v3 != -1 )
  {
    qword_8CC070 = v3;
    if ( (unsigned __int8)netnode_inited() )
    {
      netnode_check(&v6, "$ debugger application", 0, 0);
      v5 = v3;
      netnode_supset(v6, 1, &v5, 8, 65);
    }
  }
  return v7 - __readfsqword(0x28u);
}
