__int64 __fastcall sub_B1FB40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  _DWORD *v4; // rax

  v2 = sub_15D1F10(*(_QWORD *)(a2 + 32));
  v3 = 0;
  v4 = *(_DWORD **)(v2 + 24);
  if ( v4 && *v4 == 5 )
    LOBYTE(v3) = v4[1] == 1;
  return v3;
}

