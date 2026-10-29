unsigned __int64 __fastcall sub_E7B80(_BYTE *a1, _BYTE *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v3 = a3;
  v5 = __readfsqword(0x28u);
  if ( a1 )
    sub_E7590(a1, "Host", 1);
  if ( a2 )
    sub_E7590(a2, "Password", 1);
  if ( (_DWORD)v3 != -1 )
  {
    qword_2521F0 = v3;
    if ( (unsigned __int8)netnode_inited() )
    {
      netnode_check();
      netnode_supset();
    }
  }
  return v5 - __readfsqword(0x28u);
}

