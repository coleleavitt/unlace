unsigned __int64 __fastcall sub_F3A5E0(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == (a1 & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) & 7) != 0 )
    return 0;
  return result;
}

