unsigned __int64 __fastcall sub_FBAC20(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  v2 = *a1;
  result = (*a1 >> 2) & 1;
  if ( ((*a1 >> 2) & 1) != 0 )
    return *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 8LL * a2 + 16);
  if ( (v2 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    return v2 & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}

