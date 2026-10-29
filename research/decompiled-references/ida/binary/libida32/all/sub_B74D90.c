__int64 __fastcall sub_B74D90(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( (*(_QWORD *)a1 & 6) == 0 && (*(_BYTE *)(a1 + 28) & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL);
  return result;
}

