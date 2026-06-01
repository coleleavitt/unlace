__int64 __fastcall sub_406C20(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 424);
  if ( (result & 1) == 0 )
  {
    ++*(_DWORD *)(a1 + 392);
    *(_DWORD *)(a1 + 424) = result | 1;
    return sub_487730(a1, sub_408660);
  }
  return result;
}

