__int64 __fastcall sub_28C040(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  int v5; // r12d
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // [rsp+8h] [rbp-60h]
  _QWORD *v44; // [rsp+10h] [rbp-58h] BYREF
  __int64 v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) != -4294967216LL )
    return 0;
  v3 = sub_254FC0(*(_QWORD *)(a2 + 24));
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  v4 = sub_255A30(*(__int64 **)(v3 + 24));
  v5 = v4;
  if ( v4 > 1 )
    return 0;
  sub_283C00(&v44, a1, a2);
  v6 = v44;
  if ( v45 == *v44 )
    return 0;
  v7 = *(_QWORD *)(v45 + 8);
  if ( *(_DWORD *)(v7 + 24) != 73 )
    return 0;
  v9 = *(_QWORD *)(v7 + 40);
  if ( *(_QWORD *)(v9 + 72) )
    return 0;
  v43 = *(_QWORD *)(v7 + 40);
  v10 = *(__int64 **)(*(_QWORD *)(v9 + 64) + 24LL);
  if ( v10[2] != 1 )
    return 0;
  v11 = *v10;
  if ( *(_QWORD *)(v11 + 24) != -4294967216LL )
    return 0;
  v12 = sub_254FC0(*(_QWORD *)(v11 + 40));
  if ( *(_DWORD *)(v12 + 8) != 61 )
    return 0;
  v13 = v12 + 48;
  v14 = sub_255A30(*(__int64 **)(v12 + 24));
  if ( v14 > 1 || v5 == (_DWORD)v14 )
    return 0;
  v15 = *(_QWORD *)(a2 + 24);
  v16 = *(_QWORD *)v15;
  *(_QWORD *)v15 = *(_QWORD *)v43;
  v17 = *(_DWORD *)(v43 + 8);
  *(_QWORD *)v43 = v16;
  LODWORD(v16) = *(_DWORD *)(v15 + 8);
  *(_DWORD *)(v15 + 8) = v17;
  v18 = *(_DWORD *)(v43 + 12);
  *(_DWORD *)(v43 + 8) = v16;
  LODWORD(v16) = *(_DWORD *)(v15 + 12);
  *(_DWORD *)(v15 + 12) = v18;
  v19 = *(_QWORD *)(v43 + 24);
  *(_DWORD *)(v43 + 12) = v16;
  v20 = *(_QWORD *)(v15 + 24);
  *(_QWORD *)(v15 + 24) = v19;
  v21 = *(_QWORD *)(v43 + 32);
  *(_QWORD *)(v43 + 24) = v20;
  v22 = *(_QWORD *)(v15 + 32);
  *(_QWORD *)(v15 + 32) = v21;
  v23 = *(_QWORD *)(v43 + 40);
  *(_QWORD *)(v43 + 32) = v22;
  v24 = *(_QWORD *)(v15 + 40);
  *(_QWORD *)(v15 + 40) = v23;
  v25 = *(_QWORD *)(v43 + 48);
  *(_QWORD *)(v43 + 40) = v24;
  v26 = *(_QWORD *)(v15 + 48);
  *(_QWORD *)(v15 + 48) = v25;
  v27 = *(unsigned int *)(v43 + 56);
  *(_QWORD *)(v43 + 48) = v26;
  LODWORD(v26) = *(_DWORD *)(v15 + 56);
  *(_DWORD *)(v15 + 56) = v27;
  *(_DWORD *)(v43 + 56) = v26;
  if ( v5 )
  {
    v13 = a2;
    sub_2800E0(a1[9], (__int64 *)a2, v15, v27);
  }
  if ( !(unsigned __int8)sub_29D090(v15, v13) )
  {
    v31 = j__qalloc_or_throw(64, v13, v28, v29);
    *(_OWORD *)(v31 + 24) = 0;
    *(_QWORD *)(v31 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v31 + 40) = 0;
    *(_QWORD *)v31 = -1;
    *(_QWORD *)(v31 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v31 + 48) = 0;
    *(_DWORD *)(v31 + 56) = 0;
    v32 = *(_QWORD *)v15;
    *(_QWORD *)v15 = -1;
    v33 = *(_DWORD *)(v31 + 8);
    *(_QWORD *)v31 = v32;
    LODWORD(v32) = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v33;
    v34 = *(_DWORD *)(v31 + 12);
    *(_DWORD *)(v31 + 8) = v32;
    LODWORD(v32) = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v15 + 12) = v34;
    v35 = *(_QWORD *)(v31 + 24);
    *(_DWORD *)(v31 + 12) = v32;
    v36 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = v35;
    v37 = *(_QWORD *)(v31 + 32);
    *(_QWORD *)(v31 + 24) = v36;
    v38 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = v37;
    v39 = *(_QWORD *)(v31 + 40);
    *(_QWORD *)(v31 + 32) = v38;
    v40 = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v15 + 40) = v39;
    v41 = *(_QWORD *)(v31 + 48);
    *(_QWORD *)(v31 + 40) = v40;
    v42 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v41;
    LODWORD(v41) = *(_DWORD *)(v31 + 56);
    *(_QWORD *)(v31 + 48) = v42;
    LODWORD(v42) = *(_DWORD *)(v15 + 56);
    *(_DWORD *)(v15 + 56) = v41;
    *(_DWORD *)(v31 + 56) = v42;
    *(_DWORD *)(v15 + 8) = 23;
    *(_QWORD *)(v15 + 24) = v31;
    *(_QWORD *)(v15 + 32) = sub_240F50(a1[9], 0, 0, -1, 0, 0, 0);
    sub_2441C0(v15, *(_QWORD *)(a1[9] + 112LL), 0);
  }
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v7 + 28);
  v30 = *(_QWORD *)v7;
  **(_QWORD **)(v7 + 8) = *(_QWORD *)v7;
  *(_QWORD *)(v30 + 8) = *(_QWORD *)(v7 + 8);
  sub_255050(v7 + 16);
  qfree(v7);
  --v6[2];
  return 1;
}
