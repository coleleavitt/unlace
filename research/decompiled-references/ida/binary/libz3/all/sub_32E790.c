bool __fastcall sub_32E790(__int64 a1, unsigned int a2, char a3)
{
  if ( a3 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 32) + 96LL * a2) != 0;
  else
    return *(_DWORD *)(*(_QWORD *)(a1 + 24) + 96LL * a2) != 0;
}

