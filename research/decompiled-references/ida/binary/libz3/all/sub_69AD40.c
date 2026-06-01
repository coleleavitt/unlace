__int64 __fastcall sub_69AD40(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // ecx

  v2 = *(_QWORD *)(a1 + 4624);
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  if ( *(_DWORD *)(a1 + 4560) == v3 && *(_BYTE *)(a1 + 4744) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 4640) + 8LL * a2);
  else
    return *(_QWORD *)(v2 + 8LL * a2);
}

