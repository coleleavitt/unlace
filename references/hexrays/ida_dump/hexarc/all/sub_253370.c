int __fastcall sub_253370(__int64 a1, __int64 a2)
{
  int result; // eax

  result = sub_2524D0(a1, a2, 0);
  if ( !result )
    return sub_252320(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64));
  return result;
}
