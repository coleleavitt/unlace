unsigned __int64 __fastcall sub_E6D40(_BYTE *a1, _BYTE *a2, int a3)
{
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a1 )
    sub_E6750(a1, "Host", 1);
  if ( a2 )
    sub_E6750(a2, "Password", 1);
  if ( a3 != -1 )
  {
    dword_251110 = a3;
    if ( (unsigned __int8)netnode_inited() )
    {
      netnode_check();
      netnode_supset();
    }
  }
  return v5 - __readfsqword(0x28u);
}

