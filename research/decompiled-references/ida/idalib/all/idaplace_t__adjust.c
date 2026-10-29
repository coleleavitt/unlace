__int64 __fastcall idaplace_t__adjust(__int64 a1)
{
  __int64 result; // rax

  result = sub_3C8080(*(_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
