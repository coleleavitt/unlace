__int64 __fastcall sub_42B850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 *a6)
{
  __int64 v10; // rax
  _OWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  void (__fastcall ***v14)(void *); // r12
  bool v15; // zf
  void (__fastcall ***v16)(void *); // rbp
  __int64 v17; // rbx
  int v18; // eax
  _QWORD *v19; // rdx
  __int64 (__fastcall *v20)(); // rax
  __int64 v21; // rax
  _OWORD *v22; // rax
  _OWORD *v23; // rax
  __int64 v24; // rsi
  void (***v25)(void); // rdi
  __int64 v26; // rbx
  char v27; // bp
  char v28; // r12
  int v29; // eax
  _QWORD *v30; // rdx
  int v31; // r14d
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rax
  _OWORD *v34; // rax
  _OWORD *v35; // rax
  __int64 v36; // rsi
  void (__fastcall ***v37)(_QWORD); // rbp
  __int64 result; // rax
  char ptr; // [rsp+0h] [rbp-60h]
  char ptra; // [rsp+0h] [rbp-60h]
  char v41; // [rsp+Ch] [rbp-54h]
  unsigned int v42; // [rsp+Ch] [rbp-54h]
  char v43; // [rsp+10h] [rbp-50h]
  _QWORD *v44; // [rsp+10h] [rbp-50h]
  int v45; // [rsp+18h] [rbp-48h]
  int v46; // [rsp+1Ch] [rbp-44h]
  _QWORD *v47; // [rsp+20h] [rbp-40h]

  v10 = *a6;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v11 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 96) = v11;
  v12 = *a5;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = 8;
  *(_QWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = -1;
  *(_WORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 146) = sub_1859630(v12, "spacer.keep_proxy", a5 + 1, 1);
  v13 = *a5;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 152) = sub_1859980(v13, "spacer.random_seed", a5 + 1, 0);
  if ( a3 )
    ++*(_DWORD *)(a3 + 48);
  v14 = *(void (__fastcall ****)(void *))(a1 + 16);
  if ( v14 )
  {
    v15 = (*((_DWORD *)v14 + 12))-- == 1;
    if ( v15 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  *(_QWORD *)(a1 + 16) = a3;
  if ( a4 )
    ++*(_DWORD *)(a4 + 48);
  v16 = *(void (__fastcall ****)(void *))(a1 + 24);
  if ( v16 )
  {
    v15 = (*((_DWORD *)v16 + 12))-- == 1;
    if ( v15 )
    {
      (**v16)(v16);
      sub_186B220(v16);
    }
  }
  *(_QWORD *)(a1 + 24) = a4;
  v17 = sub_186B270(0x190u);
  ptr = sub_1859630(*a5, "spacer.iuc.split_farkas_literals", a5 + 1, 0);
  v41 = sub_1859630(*a5, "spacer.iuc.old_hyp_reducer", a5 + 1, 0);
  v43 = sub_1859630(*a5, "spacer.iuc.print_farkas_stats", a5 + 1, 0);
  v45 = sub_1859980(*a5, "spacer.iuc.arith", a5 + 1, 1);
  v18 = sub_1859980(*a5, "spacer.iuc", a5 + 1, 1);
  v19 = *(_QWORD **)(a1 + 16);
  v46 = v18;
  v20 = *(__int64 (__fastcall **)())(*v19 + 72LL);
  if ( v20 == sub_42C530 )
  {
    v21 = v19[1];
  }
  else
  {
    v47 = *(_QWORD **)(a1 + 16);
    v21 = ((__int64 (__fastcall *)(_QWORD *))v20)(v19);
    v19 = v47;
  }
  *(_QWORD *)(v17 + 8) = v21;
  *(_QWORD *)(v17 + 16) = v21;
  *(_QWORD *)(v17 + 24) = 0;
  *(_QWORD *)v17 = &off_1C653C0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_QWORD *)(v17 + 40) = v21;
  *(_QWORD *)(v17 + 48) = 0;
  *(_QWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 64) = 0;
  *(_QWORD *)(v17 + 80) = 0;
  *(_QWORD *)(v17 + 88) = 0;
  *(_QWORD *)(v17 + 72) = off_1C65568;
  *(_QWORD *)(v17 + 96) = v19;
  *(_QWORD *)(v17 + 104) = v21;
  *(_QWORD *)(v17 + 112) = 0;
  *(_DWORD *)(v17 + 120) = 0;
  *(_QWORD *)(v17 + 128) = 0;
  *(_QWORD *)(v17 + 136) = v17;
  *(_QWORD *)(v17 + 144) = v21;
  *(_QWORD *)(v17 + 152) = 0;
  v22 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v17 + 160) = v22;
  *v22 = 0;
  v22[1] = 0;
  v22[2] = 0;
  v22[3] = 0;
  v22[4] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v22[7] = 0;
  *(_DWORD *)(v17 + 176) = 0;
  *(_QWORD *)(v17 + 168) = 8;
  v23 = (_OWORD *)sub_186B270(0x80u);
  v24 = *(_QWORD *)(v17 + 8);
  *(_QWORD *)(v17 + 184) = v23;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = 0;
  v23[3] = 0;
  v23[4] = 0;
  v23[5] = 0;
  v23[6] = 0;
  v23[7] = 0;
  *(_DWORD *)(v17 + 200) = 0;
  *(_QWORD *)(v17 + 192) = 8;
  *(_QWORD *)(v17 + 208) = v24;
  *(_QWORD *)(v17 + 216) = 0;
  *(_DWORD *)(v17 + 224) = 0;
  *(_BYTE *)(v17 + 228) = 0;
  *(_BYTE *)(v17 + 248) = 0;
  *(_BYTE *)(v17 + 272) = 0;
  *(_BYTE *)(v17 + 296) = 0;
  *(_BYTE *)(v17 + 320) = 0;
  *(_OWORD *)(v17 + 232) = 0;
  *(_OWORD *)(v17 + 256) = 0;
  *(_OWORD *)(v17 + 280) = 0;
  *(_OWORD *)(v17 + 304) = 0;
  sub_1694A90(v17 + 328, v24, 0, 1);
  v25 = *(void (****)(void))(a1 + 32);
  *(_BYTE *)(v17 + 384) = ptr;
  *(_DWORD *)(v17 + 388) = v46;
  *(_DWORD *)(v17 + 392) = v45;
  *(_BYTE *)(v17 + 396) = v43;
  *(_BYTE *)(v17 + 397) = v41;
  if ( (void (***)(void))v17 != v25 )
  {
    if ( v25 )
    {
      (**v25)();
      sub_186B220(v25);
    }
    *(_QWORD *)(a1 + 32) = v17;
  }
  v26 = sub_186B270(0x190u);
  ptra = sub_1859630(*a5, "spacer.iuc.split_farkas_literals", a5 + 1, 0);
  v27 = sub_1859630(*a5, "spacer.iuc.old_hyp_reducer", a5 + 1, 0);
  v28 = sub_1859630(*a5, "spacer.iuc.print_farkas_stats", a5 + 1, 0);
  v42 = sub_1859980(*a5, "spacer.iuc.arith", a5 + 1, 1);
  v29 = sub_1859980(*a5, "spacer.iuc", a5 + 1, 1);
  v30 = *(_QWORD **)(a1 + 24);
  v31 = v29;
  v32 = *(__int64 (__fastcall **)())(*v30 + 72LL);
  if ( v32 == sub_42C530 )
  {
    v33 = v30[1];
  }
  else
  {
    v44 = *(_QWORD **)(a1 + 24);
    v33 = ((__int64 (__fastcall *)(_QWORD *))v32)(v30);
    v30 = v44;
  }
  *(_QWORD *)(v26 + 8) = v33;
  *(_QWORD *)(v26 + 16) = v33;
  *(_QWORD *)(v26 + 24) = 0;
  *(_QWORD *)v26 = &off_1C653C0;
  *(_QWORD *)(v26 + 32) = 0;
  *(_QWORD *)(v26 + 40) = v33;
  *(_QWORD *)(v26 + 48) = 0;
  *(_QWORD *)(v26 + 56) = 0;
  *(_QWORD *)(v26 + 64) = 0;
  *(_QWORD *)(v26 + 80) = 0;
  *(_QWORD *)(v26 + 88) = 0;
  *(_QWORD *)(v26 + 72) = off_1C65568;
  *(_QWORD *)(v26 + 96) = v30;
  *(_QWORD *)(v26 + 104) = v33;
  *(_QWORD *)(v26 + 112) = 0;
  *(_DWORD *)(v26 + 120) = 0;
  *(_QWORD *)(v26 + 128) = 0;
  *(_QWORD *)(v26 + 136) = v26;
  *(_QWORD *)(v26 + 144) = v33;
  *(_QWORD *)(v26 + 152) = 0;
  v34 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v26 + 160) = v34;
  *v34 = 0;
  v34[1] = 0;
  v34[2] = 0;
  v34[3] = 0;
  v34[4] = 0;
  v34[5] = 0;
  v34[6] = 0;
  v34[7] = 0;
  *(_DWORD *)(v26 + 176) = 0;
  *(_QWORD *)(v26 + 168) = 8;
  v35 = (_OWORD *)sub_186B270(0x80u);
  v36 = *(_QWORD *)(v26 + 8);
  *(_QWORD *)(v26 + 184) = v35;
  *v35 = 0;
  v35[1] = 0;
  v35[2] = 0;
  v35[3] = 0;
  v35[4] = 0;
  v35[5] = 0;
  v35[6] = 0;
  v35[7] = 0;
  *(_DWORD *)(v26 + 200) = 0;
  *(_QWORD *)(v26 + 192) = 8;
  *(_QWORD *)(v26 + 208) = v36;
  *(_QWORD *)(v26 + 216) = 0;
  *(_DWORD *)(v26 + 224) = 0;
  *(_BYTE *)(v26 + 228) = 0;
  *(_BYTE *)(v26 + 248) = 0;
  *(_BYTE *)(v26 + 272) = 0;
  *(_BYTE *)(v26 + 296) = 0;
  *(_BYTE *)(v26 + 320) = 0;
  *(_OWORD *)(v26 + 232) = 0;
  *(_OWORD *)(v26 + 256) = 0;
  *(_OWORD *)(v26 + 280) = 0;
  *(_OWORD *)(v26 + 304) = 0;
  sub_1694A90(v26 + 328, v36, 0, 1);
  *(_BYTE *)(v26 + 397) = v27;
  v37 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  *(_DWORD *)(v26 + 388) = v31;
  *(_BYTE *)(v26 + 384) = ptra;
  result = v42;
  *(_BYTE *)(v26 + 396) = v28;
  *(_DWORD *)(v26 + 392) = v42;
  if ( (void (__fastcall ***)(_QWORD))v26 != v37 )
  {
    if ( v37 )
    {
      (**v37)(v37);
      result = sub_186B220(v37);
    }
    *(_QWORD *)(a1 + 40) = v26;
  }
  return result;
}

