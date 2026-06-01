__int64 __fastcall sub_1601850(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 616);
  if ( !result )
  {
    result = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), "super", 5u);
    *(_QWORD *)(a1 + 616) = result;
  }
  return result;
}
