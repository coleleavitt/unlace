__int64 __fastcall sub_B71D70(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v17; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 == v4 )
    return sub_15DE1B0(v3);
  v6 = sub_983520(a2, v5, v4);
  v7 = *(_QWORD *)(a2 + 24);
  v17 = v6;
  v8 = (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(v7 + 8832) + 4LL * ***(unsigned int ***)(a1 + 16)));
  v9 = v8 + (*(_BYTE *)(*(_QWORD *)(v7 + 8848) + v8) == 0xFF);
  v10 = sub_9836E0(a2, v9);
  v11 = v17;
  v12 = v10;
  if ( !v10 || !v17 )
    return 0;
  v13 = (unsigned int)(*(_DWORD *)(v10 + 24) - 1);
  v14 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(v17 + 24) - 1) + 32);
  v15 = *(_QWORD *)(v12 + 8 * v13 + 32);
  if ( *(_QWORD *)(v14 + 40) == v15 )
  {
    v11 = sub_15E2180(v3);
    v14 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 24) - 1) + 32);
  }
  if ( (v9 & 1) != 0 )
  {
    if ( *(_QWORD *)(v15 + 32) != *(_QWORD *)(v14 + 32) )
      sub_15E2180(v3);
    sub_15E1A70(v3);
    v11 = sub_15E2980(v3);
  }
  return sub_15DE0E0(v3, v12, v11);
}

