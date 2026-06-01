__int64 __fastcall sub_1060A30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // edx

  v2 = *a2;
  if ( a2[1] == 3 && *(_WORD *)v2 == 12662 && *(_BYTE *)(v2 + 2) == 49 )
  {
    result = 1;
    v4 = 1;
  }
  else
  {
    result = 0;
    v4 = 0;
  }
  *(_DWORD *)(a1 + 512) = v4;
  return result;
}

