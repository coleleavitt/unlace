__int64 __fastcall sub_1706C30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 == *(_QWORD *)(a1 + 16) )
    return sub_1706840(a1, *(char **)(a1 + 8), a2);
  result = sub_17048E0(v2, a2);
  *(_QWORD *)(a1 + 8) += 96LL;
  return result;
}
