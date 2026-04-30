__int64 __fastcall sub_59C1EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    v3 = sub_59CCD6(a1);
    return sub_59CD8C(a1, v3, a2);
  }
  else
  {
    sub_59CD53(a1, *(_QWORD *)(a1 + 32), a2);
    *(_QWORD *)(a1 + 32) += 8LL;
    return a1;
  }
}
