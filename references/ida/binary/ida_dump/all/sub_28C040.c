__int64 __fastcall sub_28C040(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  int v5; // r12d
  _QWORD *v6; // r14
  __int64 *v7; // r15
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
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+8h] [rbp-60h]
  _QWORD *v41; // [rsp+10h] [rbp-58h] BYREF
  __int64 v42; // [rsp+18h] [rbp-50h]
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) != -4294967216LL )
    return 0;
  v3 = sub_254FC0(*(_QWORD *)(a2 + 24));
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  v4 = sub_255A30(*(__int64 **)(v3 + 24));
  v5 = v4;
  if ( v4 > 1 )
    return 0;
  sub_283C00(&v41, a1, a2);
  v6 = v41;
  if ( v42 == *v41 )
    return 0;
  v7 = *(__int64 **)(v42 + 8);
  if ( *((_DWORD *)v7 + 6) != 73 )
    return 0;
  v9 = v7[5];
  if ( *(_QWORD *)(v9 + 72) )
    return 0;
  v40 = v7[5];
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
  *(_QWORD *)v15 = *(_QWORD *)v40;
  v17 = *(_DWORD *)(v40 + 8);
  *(_QWORD *)v40 = v16;
  LODWORD(v16) = *(_DWORD *)(v15 + 8);
  *(_DWORD *)(v15 + 8) = v17;
  v18 = *(_DWORD *)(v40 + 12);
  *(_DWORD *)(v40 + 8) = v16;
  LODWORD(v16) = *(_DWORD *)(v15 + 12);
  *(_DWORD *)(v15 + 12) = v18;
  v19 = *(_QWORD *)(v40 + 24);
  *(_DWORD *)(v40 + 12) = v16;
  v20 = *(_QWORD *)(v15 + 24);
  *(_QWORD *)(v15 + 24) = v19;
  v21 = *(_QWORD *)(v40 + 32);
  *(_QWORD *)(v40 + 24) = v20;
  v22 = *(_QWORD *)(v15 + 32);
  *(_QWORD *)(v15 + 32) = v21;
  v23 = *(_QWORD *)(v40 + 40);
  *(_QWORD *)(v40 + 32) = v22;
  v24 = *(_QWORD *)(v15 + 40);
  *(_QWORD *)(v15 + 40) = v23;
  v25 = *(_QWORD *)(v40 + 48);
  *(_QWORD *)(v40 + 40) = v24;
  v26 = *(_QWORD *)(v15 + 48);
  *(_QWORD *)(v15 + 48) = v25;
  LODWORD(v25) = *(_DWORD *)(v40 + 56);
  *(_QWORD *)(v40 + 48) = v26;
  LODWORD(v26) = *(_DWORD *)(v15 + 56);
  *(_DWORD *)(v15 + 56) = v25;
  *(_DWORD *)(v40 + 56) = v26;
  if ( v5 )
  {
    v13 = a2;
    sub_2800E0(a1[9], (__int64 *)a2, v15);
  }
  if ( !(unsigned __int8)sub_29D090(v15, v13) )
  {
    v28 = j__qalloc_or_throw();
    *(_OWORD *)(v28 + 24) = 0;
    *(_QWORD *)(v28 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v28 + 40) = 0;
    *(_QWORD *)v28 = -1;
    *(_QWORD *)(v28 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v28 + 48) = 0;
    *(_DWORD *)(v28 + 56) = 0;
    v29 = *(_QWORD *)v15;
    *(_QWORD *)v15 = -1;
    v30 = *(_DWORD *)(v28 + 8);
    *(_QWORD *)v28 = v29;
    LODWORD(v29) = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v30;
    v31 = *(_DWORD *)(v28 + 12);
    *(_DWORD *)(v28 + 8) = v29;
    LODWORD(v29) = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v15 + 12) = v31;
    v32 = *(_QWORD *)(v28 + 24);
    *(_DWORD *)(v28 + 12) = v29;
    v33 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = v32;
    v34 = *(_QWORD *)(v28 + 32);
    *(_QWORD *)(v28 + 24) = v33;
    v35 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = v34;
    v36 = *(_QWORD *)(v28 + 40);
    *(_QWORD *)(v28 + 32) = v35;
    v37 = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v15 + 40) = v36;
    v38 = *(_QWORD *)(v28 + 48);
    *(_QWORD *)(v28 + 40) = v37;
    v39 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v38;
    LODWORD(v38) = *(_DWORD *)(v28 + 56);
    *(_QWORD *)(v28 + 48) = v39;
    LODWORD(v39) = *(_DWORD *)(v15 + 56);
    *(_DWORD *)(v15 + 56) = v38;
    *(_DWORD *)(v28 + 56) = v39;
    *(_DWORD *)(v15 + 8) = 23;
    *(_QWORD *)(v15 + 24) = v28;
    *(_QWORD *)(v15 + 32) = sub_240F50(a1[9], 0, 0, -1, 0, 0, 0);
    sub_2441C0(v15, *(_QWORD *)(a1[9] + 112LL), 0);
  }
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v7 + 7);
  v27 = *v7;
  *(_QWORD *)v7[1] = *v7;
  *(_QWORD *)(v27 + 8) = v7[1];
  sub_255050((__int64)(v7 + 2));
  qfree();
  --v6[2];
  return 1;
}
