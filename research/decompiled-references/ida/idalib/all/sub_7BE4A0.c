__int64 __fastcall sub_7BE4A0(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 1736);
  if ( a2 >= *(_DWORD *)(v2 + 48) )
    return 0;
  if ( a2 < 0 )
    return 0;
  v3 = *(_QWORD *)(v2 + 8LL * a2 + 16);
  *(_QWORD *)v2 = v3;
  v4 = *(_QWORD *)(v3 + 5888);
  if ( v4 == -1 )
    return 0;
  *(_QWORD *)(a1 + 1520) = v4;
  return 1;
}
