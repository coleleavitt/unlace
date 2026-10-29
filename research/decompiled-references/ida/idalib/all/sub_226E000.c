bool __fastcall sub_226E000(unsigned __int64 a1, __int64 a2)
{
  _BYTE *v2; // rdi
  _BYTE *v3; // rax

  if ( a2 - 1 < a1 )
    return 0;
  v2 = (_BYTE *)(a1 - 1);
  v3 = (_BYTE *)(a2 - 1);
  if ( *(_BYTE *)(a2 - 1) != 92 )
    return 0;
  do
    --v3;
  while ( v3 != v2 && *v3 == 92 );
  return (a2 - 1 - (__int64)v3) % 2 == 1;
}
