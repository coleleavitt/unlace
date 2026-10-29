unsigned __int64 __fastcall sub_1F4DEB0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax

  sub_1F43F90(a1, a2);
  v3 = a1[2];
  v4 = *(_QWORD **)(v3 + 8);
  v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
  *(_QWORD *)(a2 + 48) = sub_1EDB980(v4, v5, v6, v7, v8, v9);
  *(_QWORD *)(a2 + 40) = sub_1F68F80(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  v12 = a1[2];
  v13 = *(unsigned int *)(v12 + 24);
  v14 = *(_QWORD *)(v12 + 32);
  v15 = (unsigned int)(v13 + 1);
  v16 = *(_QWORD *)(v14 + 8 * v13) == 0;
  *(_DWORD *)(v12 + 24) = v15;
  if ( !v16 )
  {
    v20 = (_QWORD *)sub_B8C330(a2);
    v23 = v20[294];
    v20[304] += 56LL;
    v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20[295] >= (unsigned __int64)(v24 + 56) && v23 )
      v20[294] = v24 + 56;
    else
      v24 = sub_986170((__int64)(v20 + 294), 56, 56, 3, v21, v22);
    sub_1F0A560(v24, a1[2]);
    *(_QWORD *)(a2 + 64) = v24;
    v25 = sub_B8C330(a2);
    sub_A5F590(v25, (__int64)sub_B70CC0, v24);
    v12 = a1[2];
    v15 = *(unsigned int *)(v12 + 24);
    v14 = *(_QWORD *)(v12 + 32);
  }
  v17 = (unsigned int)(v15 + 1);
  v18 = *(_QWORD *)(v14 + 8 * v15);
  *(_DWORD *)(v12 + 24) = v17;
  *(_DWORD *)(a2 + 56) = v18;
  return sub_1F379F0(a1, a2, v12, v17, v10, v11);
}
