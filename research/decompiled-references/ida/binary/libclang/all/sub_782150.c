__int64 __fastcall sub_782150(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 144);
  result = 0;
  if ( v1 )
    return ((unsigned int)(*v1 >> 1) & 3) + 1;
  return result;
}

