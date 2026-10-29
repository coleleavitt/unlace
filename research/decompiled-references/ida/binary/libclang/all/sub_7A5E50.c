__int64 __fastcall sub_7A5E50(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0;
  if ( (*(_QWORD *)a1 & 6) == 0 && (*(_BYTE *)(a1 + 28) & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL);
  return v1;
}

