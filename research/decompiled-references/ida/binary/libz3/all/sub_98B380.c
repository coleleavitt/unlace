__int64 __fastcall sub_98B380(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  _DWORD *v3; // rax

  v1 = sub_15D1F10(a1);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 24);
  if ( v3 && *v3 == 5 )
    LOBYTE(v2) = v3[1] == 1;
  return v2;
}

