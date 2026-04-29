__int64 __fastcall sub_14FD0(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax

  sub_135D0(a1);
  v4 = netnode_altval();
  v5 = netnode_altval();
  if ( (unsigned __int64)(v4 - 1) > 0xFFFFFFFFFFFFFFFDLL || !v5 )
    return 0;
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = v5;
  return 1;
}
