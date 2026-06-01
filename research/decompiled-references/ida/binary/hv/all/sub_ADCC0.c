__int64 __fastcall sub_ADCC0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = -70;
  if ( a2 > 2 )
  {
    *(_BYTE *)(a1 + 2) = 0;
    *(_WORD *)a1 = 1;
    return 3;
  }
  return result;
}

