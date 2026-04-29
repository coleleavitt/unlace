__int64 __fastcall sub_28AEA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  _BOOL8 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 *v36; // rax
  __int64 *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r12
  __int64 v44; // [rsp+0h] [rbp-88h]
  _QWORD *v45; // [rsp+8h] [rbp-80h]
  _QWORD v46[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v47[13]; // [rsp+20h] [rbp-68h] BYREF

  v47[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 72 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 2 )
    return 0;
  v4 = *(_QWORD *)(v2 + 32);
  if ( (unsigned int)(*(_DWORD *)(v4 + 8) - 17) > 1 )
    return 0;
  v5 = *(_QWORD *)(v4 + 32);
  if ( !(unsigned __int8)sub_285160(v5, 1, 1)
    && !(unsigned __int8)sub_285160(v5, 66, 1)
    && !(unsigned __int8)sub_285230(v5) )
  {
    return 0;
  }
  v7 = *(_QWORD *)(v2 + 24);
  if ( (unsigned __int8)sub_256590(v7) || (unsigned __int8)sub_256660(v7) || (unsigned int)sub_256A60(v4, v7) )
    return 0;
  sub_283C00(v46, a1, a2);
  v8 = v46[0];
  v47[1] = -4294967226LL;
  v47[2] = 0xFFFFFFFFLL;
  v47[0] = -1;
  v47[3] = 0;
  v9 = *(_QWORD *)v46[1];
  v12 = qalloc_or_throw(48, (__int64)a1, v10, v11);
  *(_QWORD *)(v12 + 16) = -1;
  *(_DWORD *)(v12 + 24) = 70;
  v44 = v12 + 16;
  *(_QWORD *)(v12 + 28) = -1;
  v45 = (_QWORD *)v12;
  sub_25AA70(v12 + 16, (__int64)v47);
  *v45 = v9;
  v13 = *(_QWORD **)(v9 + 8);
  v45[1] = v13;
  *v13 = v45;
  *(_QWORD *)(v9 + 8) = v45;
  ++*(_QWORD *)(v8 + 16);
  sub_255050((__int64)v47);
  v17 = *(_QWORD **)(v4 + 24);
  if ( *(_DWORD *)(v4 + 8) == 17 )
    v17 = sub_244460(*(_QWORD *)(a1[9] + 112LL), (__int64)v17, v14, v15, v16);
  v18 = *(_QWORD *)(sub_286930(v44, (__int64)v17, v14, v15) + 64);
  v19 = *(__int64 **)(v4 + 32);
  *(_QWORD *)(v4 + 24) = 0;
  v22 = sub_2413C0(v18, *v19, v20, v21);
  v26 = *(_QWORD **)(v4 + 32);
  v27 = (__int64)v22;
  if ( *(_DWORD *)(v4 + 8) == 17 )
    v26 = sub_244460(*(_QWORD *)(a1[9] + 112LL), (__int64)v26, v23, v24, v25);
  v28 = sub_286930(v27, (__int64)v26, v23, v24);
  v29 = *(_QWORD *)v4;
  v30 = *(_DWORD *)(v4 + 8) != 17;
  v31 = *(_QWORD *)(v28 + 64);
  *(_QWORD *)(v4 + 32) = 0;
  v32 = sub_240F50(a1[9], v30, a1[8], v29, 0, 0, 1u);
  if ( !*(_BYTE *)(*(_QWORD *)(v32 + 24) + 13LL) )
  {
    v47[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  sub_240A20(v4, a1[9], a1[8], *(_DWORD *)(v4 + 8) == 17, 1u, 0);
  if ( !*(_BYTE *)(*(_QWORD *)(v4 + 24) + 13LL) )
  {
    v47[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v35 = *(_QWORD *)v4;
  v36 = sub_2413C0(v31, *(_QWORD *)v4, v33, v34);
  *((_DWORD *)v36 + 2) = 72;
  v37 = v36;
  v40 = j__qalloc_or_throw(64, v35, v38, v39);
  v43 = j__qalloc_or_throw(64, v35, v41, v42);
  *(_QWORD *)v43 = -1;
  *(_DWORD *)(v43 + 8) = 0;
  *(_QWORD *)(v43 + 48) = 0;
  *(_QWORD *)(v43 + 12) = -1;
  *(_DWORD *)(v43 + 56) = 0;
  sub_25AFF0(v43, v7);
  *(_QWORD *)(v40 + 24) = v43;
  *(_QWORD *)v40 = -1;
  *(_DWORD *)(v40 + 8) = 2;
  *(_QWORD *)(v40 + 12) = -1;
  *(_QWORD *)(v40 + 32) = v32;
  *(_QWORD *)(v40 + 40) = 0;
  *(_QWORD *)(v40 + 48) = 0;
  *(_DWORD *)(v40 + 56) = 0;
  v37[3] = v40;
  sub_2441C0(v40, *(_QWORD *)(a1[9] + 112LL), 0);
  return 1;
}
