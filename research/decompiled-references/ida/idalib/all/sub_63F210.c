int __fastcall sub_63F210(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a1 < *(_QWORD *)a2 )
    return -1;
  if ( *(_QWORD *)a2 < *(_QWORD *)a1 )
    return 1;
  return strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
}
