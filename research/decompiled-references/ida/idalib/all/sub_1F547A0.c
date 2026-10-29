unsigned __int64 __fastcall sub_1F547A0(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD v18[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_1F48240((__int64)v18, a1, a2);
  v3 = a2 + 8;
  if ( !a2 )
    v3 = nullptr;
  sub_1F546B0(a1, v3, (__int64)v18);
  a2[10] = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64 *))(*a2 + 32))(a2) + 80);
  if ( a1[5] == v18[1] )
  {
    v10 = a1[2];
    v11 = a1[3];
    v12 = *(unsigned int *)(v10 + 24);
    *(_DWORD *)(v10 + 24) = v12 + 1;
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v12);
    if ( v13 )
      v13 = a1[4] - v13;
    sub_1EE06E0(*a1, v11, v11 + 2704, v13, a2, 0);
    v14 = a1[2];
    v15 = a1[3];
    v16 = *(unsigned int *)(v14 + 24);
    *(_DWORD *)(v14 + 24) = v16 + 1;
    v17 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v16);
    if ( v17 )
      v17 = a1[4] - v17;
    sub_1EE06E0(*a1, v15, v15 + 2704, v17, a2, 1);
  }
  result = a2[6];
  if ( (*(_QWORD *)(result + 136) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v5 = *(_QWORD *)(*a1 + 144);
    v6 = sub_BC3930((__int64)a2);
    return sub_A7A4F0(v5, a2[6], v6, v7, v8, v9);
  }
  return result;
}
