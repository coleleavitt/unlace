__int64 __fastcall sub_8C5030(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( (unsigned __int64)*a1 > 7 )
    return (unsigned int)((v1 & 2) == 0) + 2;
  result = ((unsigned int)v1 >> 1) & 1;
  if ( (v1 & 4) == 0 )
    return 4;
  return result;
}

