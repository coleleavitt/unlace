__int64 __fastcall sub_2868C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r13
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  bool v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 **v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // esi
  int v27; // esi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // [rsp+0h] [rbp-68h]
  __int64 v42; // [rsp+0h] [rbp-68h]
  bool v43; // [rsp+0h] [rbp-68h]
  _QWORD *v44; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+10h] [rbp-58h] BYREF
  __int64 **v48; // [rsp+18h] [rbp-50h]
  unsigned __int64 v49; // [rsp+28h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1[8] + 8LL) + 480LL) == -1 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 2 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 != 65 )
  {
    if ( v5 != 51 )
      return 0;
    v6 = *(_QWORD *)(v4 + 24);
    if ( *(_DWORD *)(v6 + 8) != 48 )
      return 0;
    v7 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(v7 + 8) != 52 )
      return 0;
    v8 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)(v8 + 8) != 65 )
      return 0;
    v9 = *(_QWORD *)(v4 + 48);
    if ( (v9 & 0xE) != 0 )
      return 0;
    if ( (v9 & 0x30) == 0 )
      return 0;
    v10 = *(_QWORD *)(v2 + 32);
    v46 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32);
    v41 = *(int *)(v46 + 88);
    if ( v41 != get_tinfo_size(0, *(_QWORD *)(v10 + 48), 0) )
      return 0;
    v42 = *(int *)(v46 + 88);
    if ( v42 != get_tinfo_size(0, *(_QWORD *)(v4 + 48), 0) )
      return 0;
    v43 = sub_279CA0(*(_QWORD *)(v46 + 80));
    if ( v43 != sub_279CA0(*(_QWORD *)(v4 + 48)) )
      return 0;
    v11 = sub_279CA0(*(_QWORD *)(v46 + 80));
    if ( v11 != sub_279CA0(*(_QWORD *)(v10 + 48)) )
      return 0;
    v4 = v8;
  }
  v12 = *(_QWORD *)(v2 + 32);
  if ( (unsigned __int8)sub_27FDA0(v12, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_27FDA0(v12, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_27FE70(v12) )
    return 0;
  v47 = 0;
  v48 = nullptr;
  v13 = sub_286200((__int64)a1, a2, 1, &v47);
  if ( !v13 || *(_DWORD *)(v13 + 8) != 80 || *(_DWORD *)(v13 + 12) != -1 )
    return 0;
  v14 = *(_QWORD *)(v13 + 24);
  v15 = *(_DWORD *)(v14 + 8);
  if ( v15 == 65 )
  {
    v16 = *(_QWORD *)(v13 + 24);
  }
  else
  {
    if ( v15 != 48 )
      return 0;
    v16 = *(_QWORD *)(v14 + 24);
    if ( *(_DWORD *)(v16 + 8) != 65 )
      return 0;
  }
  if ( *(_DWORD *)(v16 + 32) != *(_DWORD *)(v4 + 32) )
    return 0;
  v44 = (_QWORD *)v13;
  v17 = v47;
  v18 = v48;
  sub_2867A0((__int64)a1, v2);
  v19 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  if ( *(_DWORD *)(v19 + 8) == 71 && *(_QWORD *)(v19 + 24) == v17 )
    *(_QWORD *)a2 = *v44;
  *(_DWORD *)(a2 + 8) = 80;
  v20 = j__qalloc_or_throw(64);
  *(_QWORD *)v20 = -1;
  v21 = v20;
  *(_DWORD *)(v20 + 8) = 0;
  *(_QWORD *)(v20 + 12) = -1;
  *(_QWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 56) = 0;
  v45 = v20;
  sub_255C30(v20, v14);
  *(_QWORD *)(a2 + 24) = v21;
  v23 = v45;
  if ( *(_DWORD *)(v21 + 8) == 48 )
    v23 = *(_QWORD *)(v21 + 24);
  v24 = *(_QWORD *)(v2 + 32);
  v25 = *(_QWORD *)v23;
  *(_QWORD *)v23 = *(_QWORD *)v24;
  v26 = *(_DWORD *)(v24 + 8);
  *(_QWORD *)v24 = v25;
  LODWORD(v25) = *(_DWORD *)(v23 + 8);
  *(_DWORD *)(v23 + 8) = v26;
  v27 = *(_DWORD *)(v24 + 12);
  *(_DWORD *)(v24 + 8) = v25;
  LODWORD(v25) = *(_DWORD *)(v23 + 12);
  *(_DWORD *)(v23 + 12) = v27;
  v28 = *(_QWORD *)(v24 + 24);
  *(_DWORD *)(v24 + 12) = v25;
  v29 = *(_QWORD *)(v23 + 24);
  *(_QWORD *)(v23 + 24) = v28;
  v30 = *(_QWORD *)(v24 + 32);
  *(_QWORD *)(v24 + 24) = v29;
  v31 = *(_QWORD *)(v23 + 32);
  *(_QWORD *)(v23 + 32) = v30;
  v32 = *(_QWORD *)(v24 + 40);
  *(_QWORD *)(v24 + 32) = v31;
  v33 = *(_QWORD *)(v23 + 40);
  *(_QWORD *)(v23 + 40) = v32;
  v34 = *(_QWORD *)(v24 + 48);
  *(_QWORD *)(v24 + 40) = v33;
  v35 = *(_QWORD *)(v23 + 48);
  *(_QWORD *)(v23 + 48) = v34;
  v36 = *(unsigned int *)(v24 + 56);
  *(_QWORD *)(v24 + 48) = v35;
  v37 = *(unsigned int *)(v23 + 56);
  *(_DWORD *)(v23 + 56) = v36;
  *(_DWORD *)(v24 + 56) = v37;
  if ( v2 )
  {
    sub_250270(v2);
    clear_tinfo_t(v2 + 48);
    j__qfree(v2);
  }
  if ( !(unsigned __int8)sub_23C780((__int64)(v18 + 2), v36, v23, v37, v22) )
  {
    v38 = *v18;
    v39 = **v18;
    v40 = (__int64)(*v18 + 2);
    *(_QWORD *)(*v18)[1] = v39;
    *(_QWORD *)(v39 + 8) = v38[1];
    sub_24FC90(v40);
    qfree(v38);
    --*(_QWORD *)(v17 + 16);
  }
  return 1;
}
