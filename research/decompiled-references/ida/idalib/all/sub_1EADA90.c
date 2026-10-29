__int64 __fastcall sub_1EADA90(__int64 a1, unsigned int a2)
{
  size_t v3; // rax

  if ( !a2 )
    return 0;
  if ( a2 <= *(_DWORD *)(a1 + 4480) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 4472) + 8LL * (a2 - 1));
  v3 = j__strlen("submodule ID out of range in AST file");
  sub_1EAD680(a1, "submodule ID out of range in AST file", v3);
  return 0;
}
