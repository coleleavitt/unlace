int __fastcall sub_255AF0(__int64 a1, __int64 a2)
{
  int result; // eax

  result = sub_254C50(a1, a2, 0);
  if ( !result )
    return sub_254AA0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64));
  return result;
}
