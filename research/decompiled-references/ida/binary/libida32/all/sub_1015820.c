__int64 __fastcall sub_1015820(__int64 a1, __int64 a2, __int64 a3, int a4, bool *a5)
{
  __int64 result; // rax

  result = 0;
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 == 29554 && *(_BYTE *)(a2 + 2) == 112 || *(_WORD *)a2 == 25202 && *(_BYTE *)(a2 + 2) == 112 )
    {
      result = 1;
      *a5 = a4 != 64;
    }
    else if ( *(_WORD *)a2 == 29541 && *(_BYTE *)(a2 + 2) == 112 || *(_WORD *)a2 == 25189 && *(_BYTE *)(a2 + 2) == 112 )
    {
      *a5 = a4 != 32;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

