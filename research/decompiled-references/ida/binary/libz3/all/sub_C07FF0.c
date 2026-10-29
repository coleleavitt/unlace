void __fastcall sub_C07FF0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r12
  char **v4; // r12
  char **v5; // r12
  char **exception; // r12
  __int64 v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r13
  int v15; // eax
  _QWORD *v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // eax
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // r12
  _QWORD *v25; // rcx
  __int64 v26; // r13
  unsigned int v27; // eax
  unsigned int v28; // ebp
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int v31; // r14d
  unsigned int *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 *v40; // rcx
  unsigned int v41; // r12d
  unsigned int v42; // edx
  size_t v43; // rsi
  unsigned int v44; // r14d
  unsigned int *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // r12d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // ebp
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  void *v61; // [rsp+0h] [rbp-98h]
  int v62; // [rsp+8h] [rbp-90h]
  unsigned int v63; // [rsp+8h] [rbp-90h]
  _QWORD *v64; // [rsp+8h] [rbp-90h]
  unsigned int v66; // [rsp+18h] [rbp-80h]
  _QWORD *v67; // [rsp+18h] [rbp-80h]
  int v68[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v69[80]; // [rsp+48h] [rbp-50h] BYREF

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = qword_1C79548;
  v8 = sub_186B270(0xC0u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)v8 = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 128) = 0;
  *(_DWORD *)(v8 + 152) = 0;
  *(_DWORD *)(v8 + 176) = 0;
  *(_QWORD *)(v8 + 184) = 0;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = 8;
  *(_OWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  *(_OWORD *)(v8 + 64) = 0;
  *(_OWORD *)(v8 + 88) = 0;
  *(_OWORD *)(v8 + 112) = 0;
  *(_OWORD *)(v8 + 136) = 0;
  *(_OWORD *)(v8 + 160) = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 48) = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  *(_QWORD *)(a1 + 56) = 8;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &off_1C57FF8;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  v10 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 120) = v10;
  *(_QWORD *)(a1 + 128) = 8;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  *(_QWORD *)v68 = 0;
  sub_1360C00(a1 + 152, a1, v68);
  sub_18572D0(v68);
  *(_QWORD *)v68 = 0;
  sub_14B7810(a1 + 160, a2, (int)v68, v11, v12, v13, v61);
  sub_18572D0(v68);
  v14 = sub_186B270(0x18u);
  sub_13716E0(v14, a2, *(unsigned int *)(a2 + 748));
  v15 = *(_DWORD *)(v14 + 16);
  v16 = *(_QWORD **)(a1 + 96);
  v62 = v15;
  if ( v16 )
  {
    v17 = *(_DWORD *)(v14 + 16);
    v18 = *((_DWORD *)v16 - 1);
    v66 = v18;
    if ( v17 < v18 )
      goto LABEL_3;
    v41 = v17 + 1;
    if ( v18 >= v17 + 1 )
    {
      *((_DWORD *)v16 - 1) = v41;
      goto LABEL_3;
    }
  }
  else
  {
    v41 = v15 + 1;
    if ( v15 == -1 )
      goto LABEL_3;
    v58 = (_QWORD *)sub_186B270(0x18u);
    v16 = v58 + 1;
    *v58 = 2;
    *(_QWORD *)(a1 + 96) = v58 + 1;
    v66 = 0;
  }
  while ( 1 )
  {
    v46 = *((_DWORD *)v16 - 2);
    if ( v46 >= v41 )
      break;
    v42 = (3 * v46 + 1) >> 1;
    v43 = 8 * v42 + 8;
    v44 = v42;
    if ( 8 * v46 + 8 >= (unsigned int)v43 || v46 >= v42 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v68, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v68);
      sub_233E40((__int64)v68);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v45 = (unsigned int *)sub_186B300(v16 - 1, v43);
    v16 = v45 + 2;
    *v45 = v44;
    *(_QWORD *)(a1 + 96) = v45 + 2;
  }
  *((_DWORD *)v16 - 1) = v41;
  v47 = 8LL * v41;
  v48 = 8LL * v66;
  if ( v48 != v47 )
  {
    v67 = v16;
    memset(&v16[(unsigned __int64)v48 / 8], 0, v47 - v48);
    v16 = v67;
  }
LABEL_3:
  v19 = *(_QWORD **)(a1 + 104);
  v16[v62] = v14;
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v49 = (3 * v20 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v50 || v20 >= v49 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v68, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v68);
        sub_233E40((__int64)v68);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v19 - 1, v50);
      v52 = v51[1];
      v19 = v51 + 2;
      *v51 = v49;
      *(_QWORD *)(a1 + 104) = v51 + 2;
      LODWORD(v51) = v52;
      v23 = &v19[v52];
      v22 = (_DWORD)v51 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
    }
  }
  else
  {
    v60 = (_QWORD *)sub_186B270(0x18u);
    v19 = v60 + 1;
    *v60 = 2;
    v22 = 1;
    *(_QWORD *)(a1 + 104) = v19;
    v23 = v19;
  }
  *v23 = v14;
  *((_DWORD *)v19 - 1) = v22;
  v24 = sub_186B270(0x88u);
  sub_1371BA0(v24);
  v25 = *(_QWORD **)(a1 + 96);
  v26 = *(unsigned int *)(v24 + 16);
  *(_QWORD *)(a1 + 112) = v24;
  if ( v25 )
  {
    v27 = *((_DWORD *)v25 - 1);
    v63 = v27;
    if ( (unsigned int)v26 < v27 )
      goto LABEL_16;
    v28 = v26 + 1;
    if ( v27 >= (int)v26 + 1 )
    {
      v36 = *(__int64 **)(a1 + 104);
      *((_DWORD *)v25 - 1) = v28;
      v25[v26] = v24;
      if ( !v36 )
        goto LABEL_39;
      goto LABEL_17;
    }
  }
  else
  {
    v28 = v26 + 1;
    if ( (_DWORD)v26 == -1 )
      goto LABEL_16;
    v57 = (_QWORD *)sub_186B270(0x18u);
    v25 = v57 + 1;
    *v57 = 2;
    *(_QWORD *)(a1 + 96) = v57 + 1;
    v63 = 0;
  }
  while ( 1 )
  {
    v33 = *((_DWORD *)v25 - 2);
    if ( v33 >= v28 )
      break;
    v29 = (3 * v33 + 1) >> 1;
    v30 = 8 * v29 + 8;
    v31 = v29;
    if ( 8 * v33 + 8 >= (unsigned int)v30 || v33 >= v29 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v68, "Overflow encountered when expanding vector");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, v68);
      sub_233E40((__int64)v68);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v32 = (unsigned int *)sub_186B300(v25 - 1, v30);
    v25 = v32 + 2;
    *v32 = v31;
    *(_QWORD *)(a1 + 96) = v32 + 2;
  }
  *((_DWORD *)v25 - 1) = v28;
  v34 = 8LL * v28;
  v35 = 8LL * v63;
  if ( v35 != v34 )
  {
    v64 = v25;
    memset(&v25[(unsigned __int64)v35 / 8], 0, v34 - v35);
    v25 = v64;
  }
LABEL_16:
  v36 = *(__int64 **)(a1 + 104);
  v25[v26] = v24;
  if ( !v36 )
  {
LABEL_39:
    v59 = (_QWORD *)sub_186B270(0x18u);
    v36 = v59 + 1;
    *v59 = 2;
    v39 = 1;
    *(_QWORD *)(a1 + 104) = v36;
    v40 = v36;
    goto LABEL_19;
  }
LABEL_17:
  v37 = *((_DWORD *)v36 - 1);
  if ( v37 == *((_DWORD *)v36 - 2) )
  {
    v53 = (3 * v37 + 1) >> 1;
    v54 = 8 * v53 + 8;
    if ( 8 * v37 + 8 >= (unsigned int)v54 || v37 >= v53 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v68, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v68);
      sub_233E40((__int64)v68);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v55 = (unsigned int *)sub_186B300(v36 - 1, v54);
    v56 = v55[1];
    v36 = (__int64 *)(v55 + 2);
    *v55 = v53;
    *(_QWORD *)(a1 + 104) = v55 + 2;
    LODWORD(v55) = v56;
    v40 = &v36[v56];
    v39 = (_DWORD)v55 + 1;
  }
  else
  {
    v38 = v37;
    v39 = v37 + 1;
    v40 = &v36[v38];
  }
LABEL_19:
  *v40 = v24;
  *((_DWORD *)v36 - 1) = v39;
  *(_QWORD *)v68 = a3;
  sub_17F9A60(v69, "model");
  *(_BYTE *)(a1 + 176) = sub_1859630(*(_QWORD *)v68, "partial", v69, 0);
  sub_18572D0(v69);
}

