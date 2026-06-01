__int64 __fastcall sub_4ECA50(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  v2 = sub_4EF830();
  v3 = *(__int64 **)(a1 + 24);
  v4 = *v3;
  v5 = *v3 + 16 * v3[1];
  if ( v2 == v5 )
    return 0xFFFFFFFFLL;
  if ( a2 >= **(_DWORD **)v2 && a2 < *(_DWORD *)(*(_QWORD *)v2 + 4LL) && (v2 += 16, v2 == v5) )
    return 0xFFFFFFFFLL;
  else
    return (v2 - v4) >> 4;
}

