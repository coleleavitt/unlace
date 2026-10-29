__int64 __fastcall sub_399570(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // rbx

  v1 = *(_QWORD *)(a1 + 96);
  if ( !v1 )
    return 1;
  v2 = *(unsigned int *)(v1 - 4);
  if ( !(_DWORD)v2 )
    return 1;
  v3 = 8 * v2;
  v4 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(v1 + v4) + 68LL) <= 1u && !(unsigned __int8)sub_62FDE0(*(_QWORD *)(a1 + 80)) )
  {
    v4 += 8;
    if ( v4 == v3 )
      return 1;
    v1 = *(_QWORD *)(a1 + 96);
  }
  return 0;
}

