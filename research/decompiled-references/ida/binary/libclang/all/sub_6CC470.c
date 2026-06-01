unsigned __int64 __fastcall sub_6CC470(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 104);
  if ( v2 )
    result = v2 & 0xFFFFFFFFFFFFFFF0LL;
  else
    result = sub_6B1730(a1, a2);
  *(_QWORD *)(a1 + 1520) = result;
  return result;
}

