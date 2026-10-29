__int64 __fastcall sub_53CAB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = get_type_ordinal(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL), a3);
  if ( (int)result <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}

