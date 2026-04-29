__int64 __fastcall sub_287440(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  int v4; // r12d
  _QWORD *v5; // r14
  __int64 *v6; // r15
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // [rsp+8h] [rbp-60h]
  _QWORD *v39; // [rsp+10h] [rbp-58h] BYREF
  __int64 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+28h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) != -4294967216LL )
    return 0;
  v2 = sub_2503C0(*(_QWORD *)(a2 + 24));
  if ( *(_DWORD *)(v2 + 8) != 61 )
    return 0;
  v3 = sub_250E30(*(__int64 **)(v2 + 24), (_QWORD *)(v2 + 48));
  v4 = v3;
  if ( v3 > 1 )
    return 0;
  sub_27F000(&v39, a1, a2);
  v5 = v39;
  if ( v40 == *v39 )
    return 0;
  v6 = *(__int64 **)(v40 + 8);
  if ( *((_DWORD *)v6 + 6) != 73 )
    return 0;
  v8 = v6[5];
  if ( *(_QWORD *)(v8 + 72) )
    return 0;
  v38 = v6[5];
  v9 = *(__int64 **)(*(_QWORD *)(v8 + 64) + 24LL);
  if ( v9[2] != 1 )
    return 0;
  v10 = *v9;
  if ( *(_QWORD *)(v10 + 24) != -4294967216LL )
    return 0;
  v11 = sub_2503C0(*(_QWORD *)(v10 + 40));
  if ( *(_DWORD *)(v11 + 8) != 61 )
    return 0;
  v12 = sub_250E30(*(__int64 **)(v11 + 24), (_QWORD *)(v11 + 48));
  if ( v12 > 1 || v4 == (_DWORD)v12 )
    return 0;
  v13 = *(_QWORD *)(a2 + 24);
  v14 = *(_QWORD *)v13;
  *(_QWORD *)v13 = *(_QWORD *)v38;
  v15 = *(_DWORD *)(v38 + 8);
  *(_QWORD *)v38 = v14;
  LODWORD(v14) = *(_DWORD *)(v13 + 8);
  *(_DWORD *)(v13 + 8) = v15;
  v16 = *(_DWORD *)(v38 + 12);
  *(_DWORD *)(v38 + 8) = v14;
  LODWORD(v14) = *(_DWORD *)(v13 + 12);
  *(_DWORD *)(v13 + 12) = v16;
  v17 = *(_QWORD *)(v38 + 24);
  *(_DWORD *)(v38 + 12) = v14;
  v18 = *(_QWORD *)(v13 + 24);
  *(_QWORD *)(v13 + 24) = v17;
  v19 = *(_QWORD *)(v38 + 32);
  *(_QWORD *)(v38 + 24) = v18;
  v20 = *(_QWORD *)(v13 + 32);
  *(_QWORD *)(v13 + 32) = v19;
  v21 = *(_QWORD *)(v38 + 40);
  *(_QWORD *)(v38 + 32) = v20;
  v22 = *(_QWORD *)(v13 + 40);
  *(_QWORD *)(v13 + 40) = v21;
  v23 = *(_QWORD *)(v38 + 48);
  *(_QWORD *)(v38 + 40) = v22;
  v24 = *(_QWORD *)(v13 + 48);
  *(_QWORD *)(v13 + 48) = v23;
  LODWORD(v23) = *(_DWORD *)(v38 + 56);
  *(_QWORD *)(v38 + 48) = v24;
  LODWORD(v24) = *(_DWORD *)(v13 + 56);
  *(_DWORD *)(v13 + 56) = v23;
  *(_DWORD *)(v38 + 56) = v24;
  if ( v4 )
    sub_27B4E0(a1[9], (__int64 *)a2, v13);
  if ( !(unsigned __int8)sub_298490(v13) )
  {
    v26 = j__qalloc_or_throw(64);
    *(_OWORD *)(v26 + 24) = 0;
    *(_QWORD *)(v26 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v26 + 40) = 0;
    *(_QWORD *)v26 = -1;
    *(_QWORD *)(v26 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v26 + 48) = 0;
    *(_DWORD *)(v26 + 56) = 0;
    v27 = *(_QWORD *)v13;
    *(_QWORD *)v13 = -1;
    v28 = *(_DWORD *)(v26 + 8);
    *(_QWORD *)v26 = v27;
    LODWORD(v27) = *(_DWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v28;
    v29 = *(_DWORD *)(v26 + 12);
    *(_DWORD *)(v26 + 8) = v27;
    LODWORD(v27) = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 12) = v29;
    v30 = *(_QWORD *)(v26 + 24);
    *(_DWORD *)(v26 + 12) = v27;
    v31 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(v13 + 24) = v30;
    v32 = *(_QWORD *)(v26 + 32);
    *(_QWORD *)(v26 + 24) = v31;
    v33 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 32) = v32;
    v34 = *(_QWORD *)(v26 + 40);
    *(_QWORD *)(v26 + 32) = v33;
    v35 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 40) = v34;
    v36 = *(_QWORD *)(v26 + 48);
    *(_QWORD *)(v26 + 40) = v35;
    v37 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 48) = v36;
    LODWORD(v36) = *(_DWORD *)(v26 + 56);
    *(_QWORD *)(v26 + 48) = v37;
    LODWORD(v37) = *(_DWORD *)(v13 + 56);
    *(_DWORD *)(v13 + 56) = v36;
    *(_DWORD *)(v26 + 56) = v37;
    *(_DWORD *)(v13 + 8) = 23;
    *(_QWORD *)(v13 + 24) = v26;
    *(_QWORD *)(v13 + 32) = sub_23C350(a1[9], 0, 0, -1, 0, 0, 0);
    sub_23F5C0(v13, *(_QWORD *)(a1[9] + 112LL), 0);
  }
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v6 + 7);
  v25 = *v6;
  *(_QWORD *)v6[1] = *v6;
  *(_QWORD *)(v25 + 8) = v6[1];
  sub_250450((__int64)(v6 + 2));
  qfree(v6);
  --v5[2];
  return 1;
}
