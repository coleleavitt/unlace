__int64 __fastcall sub_7BFFB0(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int8 *v6; // rax
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax

  v1 = *(__int64 **)(a1 + 40);
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v10 = qvector_reserve(*(_QWORD *)(a1 + 40), v3, v2 + 1, 1104);
    v2 = v1[1];
    *v1 = v10;
    v3 = v10;
  }
  v4 = v3 + 1104 * v2;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 1096) = 0;
  memset(
    (void *)((v4 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v4 - (((_DWORD)v4 + 8) & 0xFFFFFFF8) + 1104) >> 3));
  ++v1[1];
  *(_DWORD *)v4 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(a1 + 28);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(unsigned __int8 **)(a1 + 8);
  if ( (unsigned __int64)v6 >= v5 )
    return 1;
  v8 = *v6;
  *(_QWORD *)(a1 + 8) = v6 + 1;
  v9 = v8 << 20;
  *(_QWORD *)(v4 + 8) = v9;
  if ( (v9 & 0xF00000) != 0 )
  {
    if ( !(unsigned __int8)sub_7BFE80((_DWORD *)(v4 + 16), v9, 0, (unsigned __int64 *)(a1 + 8), v5) )
      return 1;
    v9 = *(_QWORD *)(v4 + 8);
    result = 0;
    if ( (v9 & 0xF000000) != 0 )
      return (unsigned __int8)sub_7BFE80((_DWORD *)(v4 + 152), v9, 1, (unsigned __int64 *)(a1 + 8), v5) ^ 1u;
  }
  else
  {
    result = 0;
    if ( (v9 & 0xF000000) != 0 )
      return (unsigned __int8)sub_7BFE80((_DWORD *)(v4 + 152), v9, 1, (unsigned __int64 *)(a1 + 8), v5) ^ 1u;
  }
  return result;
}

