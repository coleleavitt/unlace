__int64 __fastcall sub_3BEF70(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx

  v2 = (unsigned int)sub_3BEEF0(a1, a2);
  v3 = (unsigned int)sub_3BEEF0(a1, *(_QWORD *)(a1[3] + 16LL) & (a2 + 4));
  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
    return (v2 << 32) | (unsigned int)v3;
  else
    return v2 | (v3 << 32);
}
