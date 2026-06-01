__int64 __fastcall sub_7C5630(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 - 56) + 3288LL) + 4LL * a2);
  v3 = *(_DWORD *)(*(_QWORD *)(v2 + 880) + 4LL * (a2 >> 1));
  result = 0;
  if ( v3 >= *(_DWORD *)(v2 + 888) )
    return (((unsigned __int8)v3 ^ (unsigned __int8)a2) & 1) != 0 ? -1 : 1;
  return result;
}

