__int64 __fastcall sub_C71100(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( (*a1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return (unsigned int)((v1 & 2) == 0) + 2;
  result = 4;
  if ( (v1 & 4) != 0 )
    return ((unsigned int)v1 >> 1) & 1;
  return result;
}

