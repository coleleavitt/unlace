__int64 __fastcall sub_C8D60(__int64 a1)
{
  int v1; // ecx
  __int64 v2; // rax
  _DWORD *v3; // rdx

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
    return 0;
  v2 = 0;
  v3 = &unk_22F740;
  do
  {
    if ( v1 == *v3 )
      return funcs_C8D96[3 * v2]();
    ++v2;
    v3 += 6;
  }
  while ( v2 != 35 );
  if ( under_debugger )
    BUG();
  interr();
  return sub_C8DE0(40059);
}

