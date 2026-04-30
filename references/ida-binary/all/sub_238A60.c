__int64 __fastcall sub_238A60(__int64 a1, double a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _DWORD *v4; // rdx

  v2 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v2 )
    return 0;
  v3 = 0;
  v4 = &unk_85FD20;
  do
  {
    if ( (_DWORD)v2 == *v4 )
      return funcs_238A96[3 * v3]();
    ++v3;
    v4 += 6;
  }
  while ( v3 != 35 );
  if ( under_debugger )
    BUG();
  interr(40059, &unk_85FD20, v4, v2, a2);
  return sub_238AE0();
}
