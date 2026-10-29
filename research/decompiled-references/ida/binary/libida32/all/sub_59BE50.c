__int64 __fastcall sub_59BE50(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return -1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  while ( !*(_QWORD *)v3 || *(_DWORD *)(v3 + 8) != a2 )
  {
    ++v4;
    v3 += 24;
    if ( v4 == v2 )
      return -1;
  }
  return v4;
}

