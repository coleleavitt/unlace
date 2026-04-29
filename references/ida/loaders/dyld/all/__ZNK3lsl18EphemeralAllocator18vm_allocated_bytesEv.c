__int64 __fastcall lsl::EphemeralAllocator::vm_allocated_bytes(lsl::EphemeralAllocator *this)
{
  __int64 v1; // x8
  __int64 result; // x0
  __int64 v3; // x9

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 0;
  result = 0;
  do
  {
    v3 = *(_QWORD *)(v1 + 8);
    v1 = *(_QWORD *)(v1 + 16);
    result += v3;
  }
  while ( v1 );
  return result;
}
