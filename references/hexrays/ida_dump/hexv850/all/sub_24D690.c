__int64 __fastcall sub_24D690(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 71 )
  {
    v3 = *(_QWORD *)(**(_QWORD **)(a2 + 24) + 16LL);
  }
  else
  {
    if ( v2 != 73 )
      return 0;
    v3 = sub_23C4F0(*(_QWORD *)(a2 + 24));
  }
  if ( v3 != -1 )
    *(_QWORD *)a2 = v3;
  return 0;
}
