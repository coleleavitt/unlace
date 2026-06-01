unsigned __int64 __fastcall sub_3BD630(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1672);
  v3 = sub_8B8F20(*(_QWORD *)(v2 + 1016));
  result = rangeset_t_next_range(v2 + 1120, a2);
  if ( v3 <= result )
    return v3;
  return result;
}
