__int64 __fastcall sub_57A750(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 v2; // rdx

  v1 = sub_57A5D0(a1);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 80LL) + 8LL * v1);
  return v2;
}
