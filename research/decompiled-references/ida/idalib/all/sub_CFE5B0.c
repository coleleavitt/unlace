__int64 __fastcall sub_CFE5B0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_CFDF60(a1);
  if ( result )
  {
    v2 = *(_QWORD *)result;
    result = 0;
    if ( ((v2 >> 1) & 1) == 0 )
    {
      result = v2 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v2 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(result + 28) & 0x7Fu) - 49 >= 3 )
        return (v2 >> 1) & 1;
    }
  }
  return result;
}
