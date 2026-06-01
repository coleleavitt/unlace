__int64 __fastcall sub_501430(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax

  v2 = a1[2];
  if ( a2 < *(_DWORD *)(v2 + 68) || a2 > *(_DWORD *)(v2 + 72) )
    return 0;
  v3 = *(_QWORD *)(*a1 + 1576LL);
  if ( !*(_BYTE *)(v3 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v4 = a2 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 40) )
    sub_4FC970();
  v5 = (__int64)v4 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v5 + 56) = a2;
  return *(unsigned int *)(*(_QWORD *)(v3 + 32) + v5 + 8);
}

