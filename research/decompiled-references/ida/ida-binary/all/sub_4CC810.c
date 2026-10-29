__int64 __fastcall sub_4CC810(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    sub_4C6530(v2);
    return sub_4C6A50(*(_QWORD *)(a1 + 40));
  }
  return result;
}
