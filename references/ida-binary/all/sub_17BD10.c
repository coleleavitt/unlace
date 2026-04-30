__int64 __fastcall sub_17BD10(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rax

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 72);
  if ( v2 == 25 || v2 == 58 )
  {
    v6 = sub_534430(v3);
    if ( v6 )
      sub_537630(v6, 1, "Set field t~y~pe...");
    if ( (unsigned __int8)sub_3ACDC0(*(_QWORD *)a2, *(_QWORD *)(a2 + 208)) )
      return 3;
  }
  else
  {
    v4 = sub_534430(v3);
    if ( v4 )
      sub_537630(v4, 1, "Set t~y~pe...");
    if ( (unsigned __int8)is_mapped(xmmword_8CC810) )
      return 3;
  }
  return 7;
}
