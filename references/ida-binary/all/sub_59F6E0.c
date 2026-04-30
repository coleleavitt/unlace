__int64 __fastcall sub_59F6E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    v3 = sub_59F9EC(a1);
    return sub_59FA16(a1, v3, a2);
  }
  else
  {
    sub_59F9B3(a1, *(_QWORD *)(a1 + 32), a2);
    *(_QWORD *)(a1 + 32) += 4LL;
    return a1;
  }
}
