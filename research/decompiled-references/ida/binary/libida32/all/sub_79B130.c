__int64 __fastcall sub_79B130(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 1544);
  if ( a2 >= *(_DWORD *)(v2 + 40) )
    return 0;
  if ( a2 < 0 )
    return 0;
  v3 = *(_QWORD *)(v2 + 8LL * a2 + 8);
  *(_QWORD *)v2 = v3;
  v4 = *(_DWORD *)(v3 + 5872);
  if ( v4 == -1 )
    return 0;
  *(_DWORD *)(a1 + 1332) = v4;
  return 1;
}

