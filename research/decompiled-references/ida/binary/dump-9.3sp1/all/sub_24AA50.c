_QWORD *__fastcall sub_24AA50(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  bool v7; // zf
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD **v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  _BYTE v55[8]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v56[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *(_BYTE *)a3 == 14;
  v56[1] = __readfsqword(0x28u);
  if ( v7 )
  {
    sub_32C430(v55, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), (unsigned int)(*(_DWORD *)(a3 + 4) / 2), 2);
    v12 = *(_QWORD *)(a3 + 8);
    v56[0] = 0;
    v13 = sub_249AF0(a1, a2, v12, v56, v55, 0);
    clear_tinfo_t();
    v14 = *(_QWORD *)(a3 + 8);
    v56[0] = 0;
    v15 = sub_249AF0(a1, a2, v14 + 16, v56, v55, 0);
    clear_tinfo_t();
    v16 = *(_QWORD *)(a1 + 328);
    sub_246B40(a5, v16, a4);
    v19 = (_QWORD **)qalloc_or_throw(40, v16, v17, v18);
    *v19 = nullptr;
    v19[3] = nullptr;
    *((_DWORD *)v19 + 8) = 0;
    *(_OWORD *)(v19 + 1) = 0;
    sub_246200((__int64 *)v19, 3u);
    v20 = (__int64)*v19;
    v21 = *(_QWORD *)v15;
    *(_QWORD *)v15 = **v19;
    LODWORD(v16) = *(_DWORD *)(v20 + 8);
    *(_QWORD *)v20 = v21;
    LODWORD(v21) = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v16;
    LODWORD(v16) = *(_DWORD *)(v20 + 12);
    *(_DWORD *)(v20 + 8) = v21;
    LODWORD(v21) = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v15 + 12) = v16;
    v22 = *(_QWORD *)(v20 + 24);
    *(_DWORD *)(v20 + 12) = v21;
    v23 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = v22;
    v24 = *(_QWORD *)(v20 + 32);
    *(_QWORD *)(v20 + 24) = v23;
    v25 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = v24;
    v26 = *(_QWORD *)(v20 + 40);
    *(_QWORD *)(v20 + 32) = v25;
    v27 = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v15 + 40) = v26;
    v28 = *(_QWORD *)(v20 + 48);
    *(_QWORD *)(v20 + 40) = v27;
    v29 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v28;
    LODWORD(v28) = *(_DWORD *)(v20 + 56);
    *(_QWORD *)(v20 + 48) = v29;
    LODWORD(v29) = *(_DWORD *)(v15 + 56);
    *(_DWORD *)(v15 + 56) = v28;
    *(_DWORD *)(v20 + 56) = v29;
    if ( v15 )
    {
      sub_255630(v15);
      clear_tinfo_t();
      j__qfree(v15);
    }
    v30 = (__int64)*v19;
    v31 = *(_QWORD *)v13;
    *(_QWORD *)v13 = (*v19)[9];
    v32 = *(_DWORD *)(v30 + 80);
    *(_QWORD *)(v30 + 72) = v31;
    LODWORD(v31) = *(_DWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v32;
    v33 = *(_DWORD *)(v30 + 84);
    *(_DWORD *)(v30 + 80) = v31;
    LODWORD(v31) = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 12) = v33;
    v34 = *(_QWORD *)(v30 + 96);
    *(_DWORD *)(v30 + 84) = v31;
    v35 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(v13 + 24) = v34;
    v36 = *(_QWORD *)(v30 + 104);
    *(_QWORD *)(v30 + 96) = v35;
    v37 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 32) = v36;
    v38 = *(_QWORD *)(v30 + 112);
    *(_QWORD *)(v30 + 104) = v37;
    v39 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 40) = v38;
    v40 = *(_QWORD *)(v30 + 120);
    *(_QWORD *)(v30 + 112) = v39;
    v41 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 48) = v40;
    LODWORD(v40) = *(_DWORD *)(v30 + 128);
    *(_QWORD *)(v30 + 120) = v41;
    LODWORD(v41) = *(_DWORD *)(v13 + 56);
    *(_DWORD *)(v13 + 56) = v40;
    *(_DWORD *)(v30 + 128) = v41;
    if ( v13 )
    {
      sub_255630(v13);
      clear_tinfo_t();
      j__qfree(v13);
    }
    v42 = (__int64)*v19;
    v43 = *(_QWORD *)a5;
    *(_QWORD *)a5 = (*v19)[18];
    v44 = *(_DWORD *)(v42 + 152);
    *(_QWORD *)(v42 + 144) = v43;
    LODWORD(v43) = *(_DWORD *)(a5 + 8);
    *(_DWORD *)(a5 + 8) = v44;
    v45 = *(_DWORD *)(v42 + 156);
    *(_DWORD *)(v42 + 152) = v43;
    LODWORD(v43) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(a5 + 12) = v45;
    v46 = *(_QWORD *)(v42 + 168);
    *(_DWORD *)(v42 + 156) = v43;
    v47 = *(_QWORD *)(a5 + 24);
    *(_QWORD *)(a5 + 24) = v46;
    v48 = *(_QWORD *)(v42 + 176);
    *(_QWORD *)(v42 + 168) = v47;
    v49 = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(a5 + 32) = v48;
    v50 = *(_QWORD *)(v42 + 184);
    *(_QWORD *)(v42 + 176) = v49;
    v51 = *(_QWORD *)(a5 + 40);
    *(_QWORD *)(a5 + 40) = v50;
    v52 = *(_QWORD *)(v42 + 192);
    *(_QWORD *)(v42 + 184) = v51;
    v53 = *(_QWORD *)(a5 + 48);
    *(_QWORD *)(a5 + 48) = v52;
    LODWORD(v52) = *(_DWORD *)(v42 + 200);
    *(_QWORD *)(v42 + 192) = v53;
    LODWORD(v53) = *(_DWORD *)(a5 + 56);
    *(_DWORD *)(a5 + 56) = v52;
    *(_DWORD *)(v42 + 200) = v53;
    if ( a5 )
    {
      sub_255630(a5);
      clear_tinfo_t();
      j__qfree(a5);
    }
    v10 = (_QWORD *)sub_F1640((__int64)a4, (__int64)v19, (__int64)"__SET_PAIR__");
    clear_tinfo_t();
  }
  else
  {
    v56[0] = 0;
    v9 = sub_249AF0(a1, a2, a3, v56, a4, 1);
    clear_tinfo_t();
    v10 = (_QWORD *)sub_249120(*(_QWORD *)(a1 + 328), v9, a5);
  }
  *v10 = a2;
  return v10;
}
