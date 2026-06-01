__int64 __fastcall sub_89AB00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  unsigned __int8 v4; // cl

  v2 = 0;
  do
  {
    v3 = *(_BYTE *)(a1 + v2);
    v4 = *(_BYTE *)(a2 + v2);
    if ( !(v4 | v3) )
      return 0;
    ++v2;
  }
  while ( v3 == v4 );
  return v4 < v3 ? 1 : -1;
}
