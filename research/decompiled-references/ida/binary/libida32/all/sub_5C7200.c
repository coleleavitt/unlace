__int64 __fastcall sub_5C7200(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 392);
  v2 = *(_DWORD *)(a1 + 156) + 1;
  v3 = *(_QWORD *)(a1 + 384) + 16 * v1;
  *(_DWORD *)(a1 + 156) = v2;
  v4 = *(_QWORD *)(v3 - 16);
  if ( v1 )
    *(_QWORD *)(a1 + 392) = v1 - 1;
  if ( v2 == 1 )
    *(_QWORD *)(*(_QWORD *)(a1 + 112) + 88LL) = v4;
  return 0;
}

