__int64 __fastcall sub_462A30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  const __m128i *v4; // rdx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( a3 >= *(_QWORD *)(a2 + 48) || (v4 = *(const __m128i **)(*(_QWORD *)(a2 + 40) + 8 * a3)) == nullptr )
  {
    if ( !under_debugger )
      interr(2662);
    BUG();
  }
  v5 = sub_4626C0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a2 + 8), v4);
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 8 * a3) = v5;
  return result;
}
