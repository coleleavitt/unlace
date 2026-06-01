__int64 __fastcall sub_5FF5A0(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rcx

  v3 = *(_DWORD **)(a1 + 112);
  v4 = &v3[12 * *(_QWORD *)(a1 + 120)];
  if ( v4 == v3 )
    return 3;
  while ( *v3 != a2 )
  {
    v3 += 12;
    if ( v3 == v4 )
      return 3;
  }
  *a3 = v3;
  *(_DWORD *)(a1 + 64) = a2;
  return 0;
}

