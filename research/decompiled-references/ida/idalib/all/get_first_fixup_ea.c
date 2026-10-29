__int64 get_first_fixup_ea()
{
  __int64 v0; // rdx
  __int64 result; // rax

  v0 = *(_QWORD *)(qword_2CCB598 + 1672);
  result = -1;
  if ( *(_QWORD *)(v0 + 2512) )
    return *(_QWORD *)(*(_QWORD *)(v0 + 2496) + 32LL);
  return result;
}
