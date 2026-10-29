__int64 __fastcall sub_4A8620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edx

  result = sub_51EDC0(a1);
  if ( (_BYTE)result )
    return 1;
  if ( (unsigned int)(*(_DWORD *)(a3 + 64) - 16777217) <= 1 )
  {
    v5 = *(_DWORD *)(a1 + 1904);
    if ( (v5 & 2) == 0 )
    {
      result = v5 & 1;
      if ( (v5 & 1) != 0 )
      {
        *(_BYTE *)(a3 + 12) = 0;
        return 1;
      }
    }
  }
  return result;
}
