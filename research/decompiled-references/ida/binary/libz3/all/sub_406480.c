void __fastcall sub_406480(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdi
  _OWORD *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rax
  void (__fastcall ***v10)(void *); // r13
  __int64 v11; // r14
  __int64 v12; // rax
  void (__fastcall ***v13)(void *); // r14
  __int64 v14; // rax
  void (__fastcall ***v15)(void *); // r15
  __int64 v16; // r12
  void *v17; // rdi
  __int64 v18; // r12
  void *v19; // rdi
  __int64 v20; // r12
  void *v21; // rdi
  __int64 v22; // r12
  __int64 *v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  bool v27; // zf
  _QWORD *v28; // [rsp+8h] [rbp-90h]
  unsigned int v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __int64 *v32; // [rsp+18h] [rbp-80h]
  __int64 v33; // [rsp+30h] [rbp-68h] BYREF
  char v34[8]; // [rsp+38h] [rbp-60h] BYREF
  char v35[8]; // [rsp+40h] [rbp-58h] BYREF
  char v36[8]; // [rsp+48h] [rbp-50h] BYREF
  char v37[8]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v38[8]; // [rsp+58h] [rbp-40h] BYREF

  v5 = a1 + 168;
  *(_QWORD *)(v5 - 24) = a2;
  *(_BYTE *)(v5 - 152) = 0;
  *(_BYTE *)(v5 - 128) = 0;
  *(_BYTE *)(v5 - 104) = 0;
  *(_BYTE *)(v5 - 80) = 0;
  *(_BYTE *)(v5 - 56) = 0;
  *(_BYTE *)(v5 - 32) = 0;
  *(_QWORD *)(v5 - 16) = a3;
  *(_QWORD *)(v5 - 8) = 0;
  *(_OWORD *)(v5 - 168) = 0;
  *(_OWORD *)(v5 - 144) = 0;
  *(_OWORD *)(v5 - 120) = 0;
  *(_OWORD *)(v5 - 96) = 0;
  *(_OWORD *)(v5 - 72) = 0;
  *(_OWORD *)(v5 - 48) = 0;
  sub_4209A0(v5, a3);
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 264) = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  *(_QWORD *)(a1 + 376) = a1 + 392;
  *(_OWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 384) = 0x1000000000LL;
  *(_QWORD *)(a1 + 272) = 8;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = a3;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 364) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 544) = 0;
  *(_OWORD *)(a1 + 560) = 0;
  *(_OWORD *)(a1 + 576) = 0;
  *(_OWORD *)(a1 + 604) = 0;
  *(_OWORD *)(a1 + 624) = 0;
  *(_OWORD *)(a1 + 696) = 0;
  v33 = 0;
  v28 = a2 + 1;
  v7 = sub_1859980(*a2, "spacer.arith.solver", a2 + 1, 2);
  sub_1862370(&v33, "arith.solver", v7);
  v8 = *a2;
  sub_180C5A0(v34, "");
  v38[0] = sub_185A820(v8, "spacer.logic", a2 + 1, v34);
  v9 = sub_B00C00(a3, &v33, v38);
  v10 = (void (__fastcall ***)(void *))v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 48);
  v11 = *a2;
  sub_180C5A0(v35, "");
  v38[0] = sub_185A820(v11, "spacer.logic", v28, v35);
  v12 = sub_B00C00(a3, &v33, v38);
  v13 = (void (__fastcall ***)(void *))v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 48);
  v31 = *a2;
  sub_180C5A0(v36, "");
  v38[0] = sub_185A820(v31, "spacer.logic", v28, v36);
  v14 = sub_B00C00(a3, &v33, v38);
  v15 = (void (__fastcall ***)(void *))v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 48);
  v29 = sub_1859980(*a2, "spacer.max_num_contexts", v28, 500);
  v16 = sub_186B270(0x88u);
  sub_E31C00(v16, v10, v29);
  v17 = *(void **)(a1 + 232);
  if ( (void *)v16 != v17 )
  {
    sub_41EAA0(v17);
    *(_QWORD *)(a1 + 232) = v16;
  }
  v18 = sub_186B270(0x88u);
  sub_E31C00(v18, v13, v29);
  v19 = *(void **)(a1 + 240);
  if ( (void *)v18 != v19 )
  {
    sub_41EAA0(v19);
    *(_QWORD *)(a1 + 240) = v18;
  }
  v20 = sub_186B270(0x88u);
  sub_E31C00(v20, v15, v29);
  v21 = *(void **)(a1 + 248);
  if ( (void *)v20 != v21 )
  {
    sub_41EAA0(v21);
    *(_QWORD *)(a1 + 248) = v20;
  }
  v22 = sub_186B270(0x50u);
  sub_47B000(v22, a3);
  *(_QWORD *)(a1 + 536) = v22;
  sub_3FF5C0(a1);
  v23 = *(__int64 **)(a1 + 144);
  v24 = *v23;
  sub_180C5A0(v37, "");
  v25 = sub_185A820(v24, "spacer.trace_file", v23 + 1, v37);
  if ( v25 && (v25 & 7) != 1 && *(_BYTE *)v25 )
  {
    v26 = sub_186B270(0x210u);
    v32 = *(__int64 **)(a1 + 144);
    v30 = *v32;
    sub_180C5A0(v38, "");
    sub_185A820(v30, "spacer.trace_file", v32 + 1, v38);
    std::fstream::basic_fstream();
    *(_QWORD *)(a1 + 704) = v26;
  }
  if ( v15 )
  {
    v27 = (*((_DWORD *)v15 + 12))-- == 1;
    if ( v27 )
    {
      (**v15)(v15);
      sub_186B220(v15);
    }
  }
  if ( v13 )
  {
    v27 = (*((_DWORD *)v13 + 12))-- == 1;
    if ( v27 )
    {
      (**v13)(v13);
      sub_186B220(v13);
    }
  }
  if ( v10 )
  {
    v27 = (*((_DWORD *)v10 + 12))-- == 1;
    if ( v27 )
    {
      (**v10)(v10);
      sub_186B220(v10);
    }
  }
  sub_18572D0(&v33);
}

