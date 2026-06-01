__int64 __fastcall sub_3BA250(__int64 a1)
{
  if ( !*(_QWORD *)a1 )
    return 0;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1000LL) + 56LL) ^= 1u;
  return 1;
}
