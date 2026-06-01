__int64 __fastcall sub_17A5D0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx

  v2 = sub_182CC0(*(_QWORD *)(a1 + 112) + 160LL, -2);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 232LL))(*(_QWORD *)(a1 + 112)) )
  {
    if ( a2 < *(_QWORD *)(v2 + 16) )
      return a2;
    return -1;
  }
  v3 = *(_QWORD **)(v2 + 8);
  v4 = &v3[*(_QWORD *)(v2 + 16)];
  if ( v3 == v4 )
    return -1;
  v5 = *(_QWORD **)(v2 + 8);
  while ( *v5 != a2 )
  {
    if ( v4 == ++v5 )
      return -1;
  }
  result = -1;
  v7 = v5 - v3;
  if ( v7 >= 0 )
    return v7;
  return result;
}

