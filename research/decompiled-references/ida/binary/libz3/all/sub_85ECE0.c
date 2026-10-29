__int64 __fastcall sub_85ECE0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  _DWORD *v4; // rax

  v2 = sub_15D1F10(*a2);
  v3 = 1;
  v4 = *(_DWORD **)(v2 + 24);
  if ( v4 && *(_DWORD *)(a1 + 112) == *v4 )
    LOBYTE(v3) = v4[1] != 0;
  return v3;
}

