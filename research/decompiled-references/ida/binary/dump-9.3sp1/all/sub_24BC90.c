_QWORD *__fastcall sub_24BC90(__int64 a1, __int64 a2, _QWORD *a3, const char *a4, char a5)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 *v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD **v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
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
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rbx
  __int64 v51; // [rsp+30h] [rbp-58h] BYREF
  __int64 v52; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v53[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = *(unsigned int *)(a2 + 36);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v53[1] = __readfsqword(0x28u);
  sub_32C270(v53, v8, v7);
  v9 = *(__int64 **)(a2 + 24);
  v52 = 0;
  v10 = sub_249AF0(a1, v9, a2 + 32, &v52, v53, 0);
  clear_tinfo_t();
  clear_tinfo_t();
  sub_32C430(&v51, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52), 0);
  sub_32C270(v53, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
  v11 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 48, &v51, v53, 0);
  clear_tinfo_t();
  sub_32C430(&v52, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), 0);
  v12 = *(_QWORD *)(a1 + 328);
  v53[0] = 0;
  sub_29CA60(v12, (unsigned int)v53, 1, v13, v14, v15);
  v18 = (_QWORD **)qalloc_or_throw(40, (__int64)v53, v16, v17);
  *v18 = nullptr;
  v18[3] = nullptr;
  *((_DWORD *)v18 + 8) = 0;
  *(_OWORD *)(v18 + 1) = 0;
  sub_246200((__int64 *)v18, 2u);
  v19 = (__int64)*v18;
  v20 = *(_QWORD *)v10;
  *(_QWORD *)v10 = **v18;
  v21 = *(_DWORD *)(v19 + 8);
  *(_QWORD *)v19 = v20;
  LODWORD(v20) = *(_DWORD *)(v10 + 8);
  *(_DWORD *)(v10 + 8) = v21;
  v22 = *(_DWORD *)(v19 + 12);
  *(_DWORD *)(v19 + 8) = v20;
  LODWORD(v20) = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 12) = v22;
  v23 = *(_QWORD *)(v19 + 24);
  *(_DWORD *)(v19 + 12) = v20;
  v24 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v23;
  v25 = *(_QWORD *)(v19 + 32);
  *(_QWORD *)(v19 + 24) = v24;
  v26 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 32) = v25;
  v27 = *(_QWORD *)(v19 + 40);
  *(_QWORD *)(v19 + 32) = v26;
  v28 = *(_QWORD *)(v10 + 40);
  *(_QWORD *)(v10 + 40) = v27;
  v29 = *(_QWORD *)(v19 + 48);
  *(_QWORD *)(v19 + 40) = v28;
  v30 = *(_QWORD *)(v10 + 48);
  *(_QWORD *)(v10 + 48) = v29;
  LODWORD(v29) = *(_DWORD *)(v19 + 56);
  *(_QWORD *)(v19 + 48) = v30;
  LODWORD(v30) = *(_DWORD *)(v10 + 56);
  *(_DWORD *)(v10 + 56) = v29;
  *(_DWORD *)(v19 + 56) = v30;
  if ( v10 )
  {
    sub_255630(v10);
    clear_tinfo_t();
    j__qfree(v10);
  }
  v31 = (__int64)*v18;
  v32 = *(_QWORD *)v11;
  *(_QWORD *)v11 = (*v18)[9];
  v33 = *(_DWORD *)(v31 + 80);
  *(_QWORD *)(v31 + 72) = v32;
  LODWORD(v32) = *(_DWORD *)(v11 + 8);
  *(_DWORD *)(v11 + 8) = v33;
  v34 = *(_DWORD *)(v31 + 84);
  *(_DWORD *)(v31 + 80) = v32;
  LODWORD(v32) = *(_DWORD *)(v11 + 12);
  *(_DWORD *)(v11 + 12) = v34;
  v35 = *(_QWORD *)(v31 + 96);
  *(_DWORD *)(v31 + 84) = v32;
  v36 = *(_QWORD *)(v11 + 24);
  *(_QWORD *)(v11 + 24) = v35;
  v37 = *(_QWORD *)(v31 + 104);
  *(_QWORD *)(v31 + 96) = v36;
  v38 = *(_QWORD *)(v11 + 32);
  *(_QWORD *)(v11 + 32) = v37;
  v39 = *(_QWORD *)(v31 + 112);
  *(_QWORD *)(v31 + 104) = v38;
  v40 = *(_QWORD *)(v11 + 40);
  *(_QWORD *)(v11 + 40) = v39;
  v41 = *(_QWORD *)(v31 + 120);
  *(_QWORD *)(v31 + 112) = v40;
  v42 = *(_QWORD *)(v11 + 48);
  *(_QWORD *)(v11 + 48) = v41;
  LODWORD(v41) = *(_DWORD *)(v31 + 128);
  *(_QWORD *)(v31 + 120) = v42;
  LODWORD(v42) = *(_DWORD *)(v11 + 56);
  *(_DWORD *)(v11 + 56) = v41;
  *(_DWORD *)(v31 + 128) = v42;
  if ( v11 )
  {
    sub_255630(v11);
    clear_tinfo_t();
    j__qfree(v11);
  }
  v43 = (*v18)[8];
  (*v18)[8] = v52;
  v52 = v43;
  v44 = (*v18)[17];
  (*v18)[17] = v51;
  v51 = v44;
  v45 = sub_F1640((__int64)v53, (__int64)v18, (__int64)"__%s__", a4);
  v46 = sub_24AE20(a1, a2, v45, a3, a5);
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v46;
}
