__int64 __fastcall sub_BF07C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 56LL * *(unsigned int *)(*(_QWORD *)(a1 + 336) + 4LL * a2) + 32);
  if ( v2 && *(_DWORD *)(v2 - 4) == 1 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( !v3 || !*(_DWORD *)(v3 - 4) )
    {
      v2 += 16;
      return sub_BF0320(a1, a2, v2);
    }
    v4 = *(_QWORD *)(v2 + 24);
    if ( !v4 || !*(_DWORD *)(v4 - 4) )
      return sub_BF0320(a1, a2, v2);
  }
  return 0;
}

