__int64 __fastcall sub_55C400(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1656);
  result = *(_QWORD *)(v1 + 64);
  if ( !result )
  {
    result = create_tlc_for_til(0, 1);
    *(_QWORD *)(v1 + 64) = result;
  }
  return result;
}
