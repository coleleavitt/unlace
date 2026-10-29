__int64 __fastcall sub_9A09C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  _DWORD *v4; // rax

  v2 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2));
  v3 = 1;
  v4 = *(_DWORD **)(v2 + 24);
  if ( v4 && *v4 == 5 )
    LOBYTE(v3) = v4[1] != 1;
  return v3;
}

