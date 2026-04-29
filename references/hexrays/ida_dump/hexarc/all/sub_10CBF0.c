__int64 __fastcall sub_10CBF0(__int64 *a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edi
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[4] + 4) & 0x10) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1[1] + 8);
  v5 = sub_10BA00(v4, 1);
  v8 = *a1;
  v9 = v5;
  v10 = *(unsigned int *)(a1[4] + 72);
  if ( (unsigned int)v10 >= *(_DWORD *)(*a1 + 64) )
    sub_10AA50(v4, 1, v8, v6, v7);
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v10);
  if ( *(_DWORD *)(v9 + 76) == 4
    && *(_BYTE *)(*(_QWORD *)(v9 + 56) + 64LL) == 7
    && *(_DWORD *)(v9 + 352) == 1
    && sub_329780(v9) == 1
    && (unsigned int)(**(_DWORD **)(v9 + 56) - 43) <= 9 )
  {
    *((_BYTE *)a1 + 56) = 0;
    *((_DWORD *)a1 + 15) = *(_DWORD *)(sub_10BA00(v11, 0) + 72);
    v14 = *(_DWORD *)a1[4];
  }
  else
  {
    v12 = sub_10BA00(v11, 1);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 76) != 4
      || *(_BYTE *)(*(_QWORD *)(v12 + 56) + 64LL) != 7
      || *(_DWORD *)(v12 + 352) != 1
      || sub_329780(v12) != 1
      || (unsigned int)(**(_DWORD **)(v9 + 56) - 43) > 9 )
    {
      return 0;
    }
    v13 = a1[1];
    *((_BYTE *)a1 + 56) = 1;
    *((_DWORD *)a1 + 15) = *(_DWORD *)(sub_10BA00(*(_QWORD *)(v13 + 8), 0) + 72);
    v14 = sub_3274A0(*(unsigned int *)a1[4]);
  }
  *((_DWORD *)a1 + 17) = v14;
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 56) + 4LL) & 0x10) != 0 )
    return 0;
  if ( v14 == 43 )
  {
    if ( !(unsigned __int8)sub_1196C0(a1[4] + 48, v15, 0) || v15[0] )
      return 0;
    *((_DWORD *)a1 + 17) = 47;
  }
  if ( (unsigned __int8)sub_3277C0() )
    return 0;
  a1[a2 + 1] = v9;
  a1[a2 + 4] = *(_QWORD *)(v9 + 56);
  return 1;
}
