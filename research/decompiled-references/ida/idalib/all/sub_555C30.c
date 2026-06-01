__int64 __fastcall sub_555C30(__int64 a1, __int64 a2, __int64 a3)
{
  int type_ordinal; // eax
  bool v4; // cc
  __int64 v5; // rdx
  __int64 result; // rax

  type_ordinal = get_type_ordinal(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL), a3);
  v4 = type_ordinal <= 0;
  v5 = type_ordinal;
  result = -1;
  if ( !v4 )
    return v5;
  return result;
}
