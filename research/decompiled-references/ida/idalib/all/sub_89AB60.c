__int64 __fastcall sub_89AB60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // r8

  if ( !a3 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + v3);
    v5 = *(_BYTE *)(a2 + v3);
    if ( v4 != v5 )
      break;
    if ( a3 == ++v3 )
      return 0;
  }
  return v5 < v4 ? 1 : -1;
}
