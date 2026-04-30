__int64 __fastcall msg_entries_t__::vfunc_7(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48 * result - 40);
    return (v2 == 0) + v2 - 1;
  }
  return result;
}
