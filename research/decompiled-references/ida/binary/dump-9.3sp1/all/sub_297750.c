__int64 __fastcall sub_297750(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  int v20; // edx
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !*(_QWORD *)(v3 + 16) )
    return 0;
  v4 = *(_QWORD *)(v3 + 8);
  if ( *(_DWORD *)(v4 + 24) != 73 )
    return 0;
  v6 = *(_QWORD *)(v4 + 40);
  if ( *(_QWORD *)(v6 + 72) )
    return 0;
  if ( *(_DWORD *)(v6 + 8) != 17 )
    return 0;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = 1;
  if ( !(unsigned __int8)sub_285160(v7, 1, 1) )
  {
    v8 = 66;
    if ( !(unsigned __int8)sub_285160(v7, 66, 1) && !(unsigned __int8)sub_285230(v7) )
      return 0;
  }
  v11 = j__qalloc_or_throw(64, v8, v9, v10);
  *(_QWORD *)v11 = -1;
  v12 = v11;
  *(_DWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 12) = -1;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  sub_25AFF0(v11, v6);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
  v18 = sub_244460(v13, v12, v14, v15, v16);
  v19 = *v18;
  *v18 = *(_QWORD *)v6;
  v20 = *(_DWORD *)(v6 + 8);
  *(_QWORD *)v6 = v19;
  LODWORD(v19) = *((_DWORD *)v18 + 2);
  *((_DWORD *)v18 + 2) = v20;
  v21 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 8) = v19;
  LODWORD(v19) = *((_DWORD *)v18 + 3);
  *((_DWORD *)v18 + 3) = v21;
  v22 = *(_QWORD *)(v6 + 24);
  *(_DWORD *)(v6 + 12) = v19;
  v23 = v18[3];
  v18[3] = v22;
  v24 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 24) = v23;
  v25 = v18[4];
  v18[4] = v24;
  v26 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 32) = v25;
  v27 = v18[5];
  v18[5] = v26;
  v28 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 40) = v27;
  v29 = v18[6];
  v18[6] = v28;
  v30 = *(unsigned int *)(v6 + 56);
  *(_QWORD *)(v6 + 48) = v29;
  LODWORD(v29) = *((_DWORD *)v18 + 14);
  *((_DWORD *)v18 + 14) = v30;
  *(_DWORD *)(v6 + 56) = v29;
  if ( v18 )
  {
    sub_255630((__int64)v18);
    clear_tinfo_t();
    v13 = (__int64)v18;
    j__qfree((__int64)v18);
  }
  v31 = sub_241330(v13, v12, v30, v17);
  v32 = sub_2418B0(v6);
  *((_DWORD *)sub_2413C0((__int64)v31, v32, v33, v34) + 2) = 79;
  v35 = *(_QWORD *)(v6 + 64);
  v36 = *v31;
  *v31 = *(_QWORD *)v35;
  v37 = *(_DWORD *)(v35 + 8);
  *(_QWORD *)v35 = v36;
  LODWORD(v36) = *((_DWORD *)v31 + 2);
  *((_DWORD *)v31 + 2) = v37;
  v38 = *(_DWORD *)(v35 + 12);
  *(_DWORD *)(v35 + 8) = v36;
  LODWORD(v36) = *((_DWORD *)v31 + 3);
  *((_DWORD *)v31 + 3) = v38;
  v39 = *(_QWORD *)(v35 + 24);
  *(_DWORD *)(v35 + 12) = v36;
  v40 = v31[3];
  v31[3] = v39;
  *(_QWORD *)(v35 + 24) = v40;
  v41 = sub_2413C0(*(_QWORD *)(v2 + 64), -1, v40, v39);
  v42 = *v31;
  *v31 = *v41;
  v43 = *((_DWORD *)v41 + 2);
  *v41 = v42;
  LODWORD(v42) = *((_DWORD *)v31 + 2);
  *((_DWORD *)v31 + 2) = v43;
  v44 = *((_DWORD *)v41 + 3);
  *((_DWORD *)v41 + 2) = v42;
  LODWORD(v42) = *((_DWORD *)v31 + 3);
  *((_DWORD *)v31 + 3) = v44;
  v45 = v41[3];
  *((_DWORD *)v41 + 3) = v42;
  v46 = v31[3];
  v31[3] = v45;
  v41[3] = v46;
  if ( v31 )
  {
    sub_255050((__int64)v31);
    j__qfree((__int64)v31);
  }
  return 1;
}
