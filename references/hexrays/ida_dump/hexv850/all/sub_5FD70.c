int __fastcall sub_5FD70(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  int result; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 != *(_QWORD *)(a2 + 8) )
    return v2 < *(_QWORD *)(a2 + 8) ? -1 : 1;
  result = 0;
  if ( v2 )
    return memcmp(*(const void **)a1, *(const void **)a2, v2 >> 3);
  return result;
}
