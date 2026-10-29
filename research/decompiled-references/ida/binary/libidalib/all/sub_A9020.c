__int64 __fastcall sub_A9020(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax

  if ( *(_BYTE *)a1 > 7u )
  {
    v2 = (unsigned int)sub_A8B10(a2);
    result = v2 | (sub_A8B10(a2) << 32);
    if ( result != *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) )
      return result;
    return -1;
  }
  qlread();
  result = (unsigned int)unpack_dd();
  if ( (unsigned int)result == *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) )
    return -1;
  return result;
}

