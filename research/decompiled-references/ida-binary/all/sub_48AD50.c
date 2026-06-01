__int64 __fastcall sub_48AD50(__int64 a1, char a2)
{
  int v2; // edx
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = *(_DWORD *)(a1 + 120);
  result = v2 & 0xFFFFFFFE;
  v4 = v2 | 1;
  if ( a2 )
    result = v4;
  *(_DWORD *)(a1 + 120) = result;
  return result;
}
