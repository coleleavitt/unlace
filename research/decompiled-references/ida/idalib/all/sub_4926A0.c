__int64 __fastcall sub_4926A0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _DWORD *i; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return -1;
  v3 = 0;
  for ( i = (_DWORD *)(*(_QWORD *)(a1 + 40) + 176LL); *i != a2; i += 106 )
  {
    if ( ++v3 == v2 )
      return -1;
  }
  return v3;
}
