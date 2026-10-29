__int64 __fastcall sub_5ABC10(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    v3 = sub_5ABCDE(a1);
    return sub_5ABD08(a1, v3, a2);
  }
  else
  {
    sub_5ABCA4(a1, *(_QWORD *)(a1 + 32), a2);
    *(_QWORD *)(a1 + 32) += 16LL;
    return a1;
  }
}
