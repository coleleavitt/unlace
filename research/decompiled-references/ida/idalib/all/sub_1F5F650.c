__int64 __fastcall sub_1F5F650(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 result; // rax
  __int64 *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-20h]

  sub_1F58FC0(a1, a2);
  v3 = *(_QWORD *)(*a1 + 8);
  v4 = *(unsigned int *)(v3 + 13072);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8 * v4 - 8);
  --*(_DWORD *)(v3 + 13072);
  *(_QWORD *)(a2 + 16) = v5;
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  *(_BYTE *)(a2 + 24) = (*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7) != 0) | *(_BYTE *)(a2 + 24) & 0xFE;
  *(_DWORD *)(a2 + 28) = sub_1EE7490(*a1);
  v12 = sub_1F194E0(*a1, v4, v8, v9, v10, v11);
  *(_QWORD *)(a2 + 40) = v13;
  *(_QWORD *)(a2 + 32) = v12;
  *(_QWORD *)(a2 + 48) = sub_1F19370(*a1);
  *(_DWORD *)(a2 + 56) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 60) = sub_1EE7490(*a1);
  v14 = *a1;
  v15 = *(unsigned int *)(*a1 + 24);
  v17 = *(_QWORD *)(*a1 + 16);
  v16 = *(_QWORD **)(*a1 + 8);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  v18 = sub_1EE0AD0((__int64)v16, v17, *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15));
  v19 = sub_1EE2910(v16, v18);
  if ( v19 )
  {
    v20 = v19 | 4;
    result = sub_1EE7490(*a1);
    *(_QWORD *)(a2 + 64) = v20;
    *(_DWORD *)(a2 + 72) = result;
  }
  else
  {
    v22 = sub_1F19370(*a1);
    sub_C93FF0((__int64)&v23, (__int64)v22);
    *(_QWORD *)(a2 + 64) = v23;
    result = v24;
    *(_DWORD *)(a2 + 72) = v24;
  }
  return result;
}
