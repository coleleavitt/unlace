__int64 __fastcall sub_503F40(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
    return 0xFFFFFFFFLL;
  v2 = sub_506E00();
  v3 = *(__int64 **)(a1 + 32);
  v4 = *v3;
  v5 = *v3 + 16 * v3[1];
  if ( v2 == v5 )
    return 0xFFFFFFFFLL;
  if ( a2 >= **(_QWORD **)v2 && a2 < *(_QWORD *)(*(_QWORD *)v2 + 8LL) && (v2 += 16, v2 == v5) )
    return 0xFFFFFFFFLL;
  else
    return (v2 - v4) >> 4;
}
