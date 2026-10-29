__int64 __fastcall sub_B31900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_BE3B20(a1, a3, a2);
  if ( (_BYTE)result )
    ++*(_DWORD *)(a1 + 276);
  return result;
}

