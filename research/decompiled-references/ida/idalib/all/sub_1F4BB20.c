__int64 *__fastcall sub_1F4BB20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *result; // rax
  __int64 v25; // r8
  __int64 *v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 (__fastcall *v29)(__int64); // rdx
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 v31; // r12
  __int64 v32[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_1F4B4A0((__int64)a1, a2);
  v2 = a1[2];
  v3 = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_DWORD *)(a2 + 64) = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_WORD *)(a2 + 68) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  *(_WORD *)(a2 + 70) = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  v8 = a1[2];
  v9 = *(unsigned int *)(v8 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  *(_BYTE *)(a2 + 72) = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9);
  v10 = a1[2];
  v11 = *(unsigned int *)(v10 + 24);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  *(_BYTE *)(a2 + 73) = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11);
  v12 = a1[2];
  v13 = *(unsigned int *)(v12 + 24);
  *(_DWORD *)(v12 + 24) = v13 + 1;
  *(_BYTE *)(a2 + 74) = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13);
  v14 = a1[2];
  v15 = *(unsigned int *)(v14 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  *(_BYTE *)(a2 + 75) = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15);
  v16 = a1[2];
  v17 = *(unsigned int *)(v16 + 24);
  *(_DWORD *)(v16 + 24) = v17 + 1;
  *(_BYTE *)(a2 + 76) = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17);
  v18 = a1[2];
  v19 = *(unsigned int *)(v18 + 24);
  *(_DWORD *)(v18 + 24) = v19 + 1;
  *(_BYTE *)(a2 + 77) = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19);
  v20 = a1[2];
  v21 = *(unsigned int *)(v20 + 24);
  *(_DWORD *)(v20 + 24) = v21 + 1;
  *(_BYTE *)(a2 + 78) = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8 * v21);
  v22 = a1[2];
  v23 = *(unsigned int *)(v22 + 24);
  *(_DWORD *)(v22 + 24) = v23 + 1;
  *(_BYTE *)(a2 + 79) = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 8 * v23);
  result = (__int64 *)sub_2223460(*(_QWORD *)(*a1 + 144) + 1264LL, a2 + 56, &off_2B40DC0);
  if ( result && result != (__int64 *)&word_38 )
  {
    v27 = *a1;
    v28 = (__int64)(result - 7);
    v29 = sub_A4F000;
    v30 = *(__int64 (__fastcall **)(__int64))(*(result - 7) + 32);
    v31 = *(_QWORD *)(*a1 + 144);
    if ( v30 != sub_A4F000 )
      v28 = v30(v28);
    v32[0] = a2;
    result = sub_1742A40(v31 + 1728, v32, (__int64)v29, v27, v25, v26);
    *result = v28;
  }
  return result;
}
