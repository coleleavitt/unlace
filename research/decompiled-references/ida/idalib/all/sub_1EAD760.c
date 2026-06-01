__int64 __fastcall sub_1EAD760(__int64 a1, unsigned int a2)
{
  if ( !a2 )
    return 0;
  if ( a2 <= *(_DWORD *)(a1 + 4480) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 4472) + 8LL * (a2 - 1));
  sub_1EAD680(a1, "submodule ID out of range in AST file", 37);
  return 0;
}
