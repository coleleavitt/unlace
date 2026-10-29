__int64 __fastcall sub_286F30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // rax
  unsigned int v47; // [rsp+0h] [rbp-80h]
  __int64 v48; // [rsp+0h] [rbp-80h]
  char v49; // [rsp+Fh] [rbp-71h]
  __int64 v50; // [rsp+10h] [rbp-70h]
  __int64 v51; // [rsp+18h] [rbp-68h]
  __int64 v52; // [rsp+18h] [rbp-68h]
  __int64 v53; // [rsp+20h] [rbp-60h] BYREF
  __int64 v54; // [rsp+28h] [rbp-58h]
  __int64 v55; // [rsp+30h] [rbp-50h]
  __int64 v56; // [rsp+38h] [rbp-48h]
  unsigned __int64 v57; // [rsp+48h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  v51 = *(_QWORD *)(a2 + 24);
  v2 = *(_QWORD *)(v51 + 72);
  if ( !v2 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 64) + 24LL) + 16LL) != 1 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16LL) != 1 )
    return 0;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v6 = 2;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v7 = **(_QWORD **)(*(_QWORD *)(v51 + 64) + 24LL);
  v8 = **(_QWORD **)(*(_QWORD *)(v51 + 72) + 24LL);
  if ( *(_DWORD *)(v7 + 24) == 80 && *(_DWORD *)(v8 + 24) == 80 )
  {
    v49 = sub_285300(v51);
    if ( !v49 )
      return 0;
    v11 = *(_QWORD *)(v7 + 40);
    v50 = *(_QWORD *)(v8 + 40);
  }
  else
  {
    if ( !(unsigned __int8)sub_29CC80(v51 + 48) )
      return 0;
    if ( *(_DWORD *)(v7 + 24) != 72 )
      return 0;
    if ( *(_DWORD *)(v8 + 24) != 72 )
      return 0;
    v9 = *(_QWORD *)(v7 + 40);
    if ( *(_DWORD *)(v9 + 8) != 2 )
      return 0;
    v10 = *(_QWORD *)(v8 + 40);
    if ( *(_DWORD *)(v10 + 8) != 2 )
      return 0;
    v6 = *(_QWORD *)(v10 + 24);
    if ( sub_259AA0(*(_QWORD *)(v9 + 24), v6) )
      return 0;
    v49 = 0;
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 32LL);
    v50 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 32LL);
  }
  if ( (unsigned __int8)sub_285230(v7 + 16) )
    return 0;
  if ( (unsigned __int8)sub_285230(v8 + 16) )
    return 0;
  v47 = sub_27F570(v11);
  v12 = sub_27F570(v50);
  v13 = (v12 & v47) + 1;
  if ( (v12 & v47) == 0xFFFFFFFF )
    return 0;
  LOBYTE(v6) = v47 != -1;
  LOBYTE(v13) = v12 != -1;
  if ( ((unsigned __int8)v13 & (unsigned __int8)v6) != 0 && v47 != v12 )
  {
    v14 = j__qalloc_or_throw(64, v6, v47, v13);
    sub_25B480(v14, v51);
    if ( !v47 )
      v14 = (__int64)sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v14, 0, v15, v16);
    v17 = *(unsigned int *)(v14 + 8);
    if ( (unsigned int)v17 > 0x31 || (v18 = 0x20000FFC60000LL, !_bittest64(&v18, v17)) )
    {
      v42 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
      sub_2441C0(v14, v42, 0);
      v45 = j__qalloc_or_throw(64, v42, v43, v44);
      v46 = sub_240F50(*(_QWORD *)(a1 + 72), 0, 0, -1, 0, 0, 0);
      *(_QWORD *)(v45 + 24) = v14;
      v14 = v45;
      *(_QWORD *)v45 = -1;
      *(_DWORD *)(v45 + 8) = 23;
      *(_QWORD *)(v45 + 12) = -1;
      *(_QWORD *)(v45 + 32) = v46;
      *(_QWORD *)(v45 + 40) = 0;
      *(_QWORD *)(v45 + 48) = 0;
      *(_DWORD *)(v45 + 56) = 0;
    }
    goto LABEL_25;
  }
  if ( !(unsigned __int8)sub_29CC80(v11 + 48) && !(unsigned __int8)sub_29CC80(v50 + 48)
    || !(unsigned __int8)sub_285300(v11)
    || !(unsigned __int8)sub_285300(v50) )
  {
    return 0;
  }
  v14 = j__qalloc_or_throw(64, v6, v26, v27);
  v48 = j__qalloc_or_throw(64, v6, v28, v29);
  sub_25B480(v48, v51);
  *(_QWORD *)v14 = -1;
  *(_DWORD *)(v14 + 8) = 16;
  *(_QWORD *)(v14 + 24) = v48;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  v32 = v11;
  v33 = j__qalloc_or_throw(64, v51, v30, v31);
  sub_25B480(v33, v32);
  *(_QWORD *)(v14 + 32) = v33;
  v36 = j__qalloc_or_throw(64, v32, v34, v35);
  sub_25B480(v36, v50);
  *(_QWORD *)(v14 + 40) = v36;
LABEL_25:
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
  sub_2441C0(v14, v19, 0);
  v55 = 0xFFFFFFFFLL;
  v54 = -4294967226LL;
  v53 = -1;
  v22 = *(__int64 **)(v51 + 64);
  v56 = 0;
  v53 = *v22;
  if ( v49 )
  {
    LODWORD(v54) = 80;
    v23 = j__qalloc_or_throw(64, v19, v20, v21);
    *(_QWORD *)v23 = -1;
    *(_QWORD *)(v23 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v23 + 40) = 0;
    *(_QWORD *)(v23 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v23 + 48) = 0;
    *(_DWORD *)(v23 + 56) = 0;
    *(_OWORD *)(v23 + 24) = 0;
    v56 = v23;
    sub_2819E0((__int64 *)v23, (__int64 *)v14);
    if ( v14 )
    {
      sub_255630(v14);
      clear_tinfo_t();
      j__qfree(v14);
    }
  }
  else
  {
    LODWORD(v54) = 72;
    v52 = j__qalloc_or_throw(64, v19, v20, v21);
    v39 = j__qalloc_or_throw(64, v19, v37, v38);
    sub_25B480(v39, *(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL));
    *(_QWORD *)v52 = -1;
    v40 = v53;
    *(_DWORD *)(v52 + 8) = 2;
    *(_QWORD *)(v52 + 12) = -1;
    *(_QWORD *)(v52 + 24) = v39;
    v56 = v52;
    *(_QWORD *)v52 = v40;
    v41 = v56;
    *(_QWORD *)(v52 + 32) = 0;
    *(_QWORD *)(v52 + 40) = 0;
    *(_QWORD *)(v52 + 48) = 0;
    *(_DWORD *)(v52 + 56) = 0;
    *(_QWORD *)(v41 + 32) = v14;
    sub_2441C0(v41, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  }
  HIDWORD(v54) = *(_DWORD *)(a2 + 12);
  v24 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v53;
  v53 = v24;
  LODWORD(v24) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v54;
  LODWORD(v54) = v24;
  v25 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v56;
  v56 = v25;
  sub_255050((__int64)&v53);
  return 1;
}
