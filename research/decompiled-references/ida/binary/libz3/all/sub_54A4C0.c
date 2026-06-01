__int64 __fastcall sub_54A4C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // eax
  _DWORD *v8; // rdx

  if ( !*a2 )
    return 1;
  v2 = *(unsigned int *)(*a2 - 4LL);
  if ( !(_DWORD)v2 )
    return 1;
  v3 = 8 * v2;
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_4D6480(*(_QWORD *)(a1 + 24));
    v6 = *(_QWORD *)(*a2 + v4);
    v7 = sub_1625010(v5 + 56);
    v8 = *(_DWORD **)(v6 + 24);
    if ( !v8 || v7 != *v8 || v8[1] != 2 )
      break;
    v4 += 8;
    if ( v4 == v3 )
      return 1;
  }
  return 0;
}

