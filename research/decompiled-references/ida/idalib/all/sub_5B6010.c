__int64 __fastcall sub_5B6010(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return -1;
  v3 = *(_QWORD **)(a1 + 40);
  v4 = 0;
  while ( !*v3 || v3[1] != a2 )
  {
    ++v4;
    v3 += 4;
    if ( v4 == v2 )
      return -1;
  }
  return v4;
}
