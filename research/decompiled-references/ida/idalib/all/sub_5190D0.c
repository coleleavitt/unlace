__int64 __fastcall sub_5190D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax

  v2 = a1[2];
  if ( (int)a2 < *(_DWORD *)(v2 + 68) || (int)a2 > *(_DWORD *)(v2 + 72) )
    return 0;
  v3 = *(_QWORD *)(*a1 + 1768LL);
  if ( !*(_BYTE *)(v3 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v4 = a2 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 40) )
    sub_5144F0(a1, a2);
  v5 = (__int64)v4 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v5 + 56) = a2;
  return *(unsigned int *)(*(_QWORD *)(v3 + 32) + v5 + 8);
}
