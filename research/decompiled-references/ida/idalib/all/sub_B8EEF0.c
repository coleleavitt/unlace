unsigned __int64 __fastcall sub_B8EEF0(_QWORD *a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 result; // rax

  v1 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  result = v1;
  if ( (*a1 & 4) != 0 )
  {
    result = 0;
    if ( v1 )
      return *(_QWORD *)v1;
  }
  return result;
}
