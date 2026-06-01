__int64 __fastcall sub_2A2660(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, __int64 a6)
{
  _QWORD *v7; // rbp
  _QWORD *v8; // r15
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64, int); // rax
  __int64 v11; // rax
  int v12; // r10d
  int v13; // eax
  __int64 v14; // rbx
  int *v15; // rdx
  __int64 (__fastcall *v16)(__int64, int); // rax
  __int64 v17; // rax
  int v18; // r10d
  int v19; // r12d
  int v20; // eax
  __int64 (__fastcall *v21)(__int64, int); // rax
  __int64 v22; // rsi
  int v23; // eax
  unsigned int *v24; // r12
  __int64 v25; // r12
  _QWORD *v26; // rdi
  __int64 (__fastcall *v27)(__int64, int); // rdx
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 (__fastcall *v30)(__int64, int); // rax
  __int64 v31; // rax
  int v32; // r15d
  int v33; // eax
  int *v34; // rbx
  __int64 v35; // r15
  __int64 (__fastcall *v36)(__int64, int); // rax
  __int64 v37; // rax
  int v38; // ebp
  unsigned int v40; // eax
  __int64 (__fastcall *v41)(__int64, int); // rax
  int v42; // eax
  int v43; // eax
  __int64 (__fastcall *v44)(__int64, int); // rax
  int v45; // eax
  __int64 (__fastcall *v46)(__int64, int); // rax
  __int64 v47; // rsi
  __int64 v48; // rbx
  unsigned int v49; // eax
  __int64 v50; // [rsp+8h] [rbp-80h]
  int v52; // [rsp+18h] [rbp-70h]
  int v53; // [rsp+18h] [rbp-70h]
  unsigned int v54; // [rsp+18h] [rbp-70h]
  int v55; // [rsp+18h] [rbp-70h]
  unsigned int v56; // [rsp+20h] [rbp-68h]
  int v57; // [rsp+20h] [rbp-68h]
  __int64 v58; // [rsp+20h] [rbp-68h]
  unsigned int v59; // [rsp+20h] [rbp-68h]
  unsigned int v60; // [rsp+20h] [rbp-68h]
  int v61; // [rsp+20h] [rbp-68h]
  int v62; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall *v63)(__int64, int); // [rsp+28h] [rbp-60h]
  __int64 v64; // [rsp+28h] [rbp-60h]
  __int64 v65; // [rsp+28h] [rbp-60h]
  int *v66; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall *v67)(__int64, int); // [rsp+30h] [rbp-58h]
  __int64 (__fastcall *v68)(__int64, int); // [rsp+30h] [rbp-58h]
  __int64 v69; // [rsp+38h] [rbp-50h]
  __int64 v70; // [rsp+40h] [rbp-48h]

  v7 = a5;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v24 = (unsigned int *)(a1 + 4 * a2);
    if ( (a3 & 1) == 0 )
    {
      v14 = a2;
      if ( a2 == (a3 - 2) / 2 )
      {
LABEL_40:
        v48 = 2 * v14 + 2;
        v49 = *(_DWORD *)(a1 + 4 * v48 - 4);
        v14 = v48 - 1;
        *v24 = v49;
        v24 = (unsigned int *)(a1 + 4 * v14);
        goto LABEL_18;
      }
    }
    goto LABEL_32;
  }
  v69 = a3 & 1;
  v8 = a5;
  v9 = a2;
  v70 = a2;
  v50 = (a3 - 1) / 2;
  while ( 1 )
  {
    v14 = 2 * (v9 + 1);
    v15 = (int *)(a1 + 8 * (v9 + 1));
    a5 = (_QWORD *)*(v15 - 1);
    a6 = *v15;
    v16 = *(__int64 (__fastcall **)(__int64, int))(*v8 + 96LL);
    if ( v16 == interactive_graph_t__::vfunc_12 )
    {
      v17 = v8[22];
      v18 = *(_DWORD *)(v17 + 24LL * (int)a6 + 8);
LABEL_12:
      v19 = *(_DWORD *)(v17 + 24LL * (int)a5 + 8);
      goto LABEL_13;
    }
    v56 = *(v15 - 1);
    v52 = *v15;
    v20 = v16((__int64)v8, a6);
    a6 = v52;
    a5 = (_QWORD *)(int)v56;
    v18 = v20;
    v15 = (int *)(a1 + 8 * (v9 + 1));
    v21 = *(__int64 (__fastcall **)(__int64, int))(*v8 + 96LL);
    if ( v21 == interactive_graph_t__::vfunc_12 )
    {
      v17 = v8[22];
      goto LABEL_12;
    }
    v22 = v56;
    v62 = v18;
    v57 = v52;
    v53 = (int)a5;
    v23 = v21((__int64)v8, v22);
    v15 = (int *)(a1 + 8 * (v9 + 1));
    v18 = v62;
    a6 = v57;
    a5 = (_QWORD *)v53;
    v19 = v23;
LABEL_13:
    if ( v19 <= v18 )
    {
      if ( v19 < v18 )
        goto LABEL_8;
      v10 = *(__int64 (__fastcall **)(__int64, int))(*v8 + 104LL);
      if ( v10 == interactive_graph_t__::vfunc_13 )
      {
        v11 = v8[25];
        v12 = *(_DWORD *)(v11 + 24 * a6 + 8) + v18;
      }
      else
      {
        v66 = v15;
        v61 = v18;
        v54 = (unsigned int)a5;
        v45 = v10((__int64)v8, a6);
        a5 = (_QWORD *)(int)v54;
        v15 = v66;
        v12 = v45 + v61;
        v46 = *(__int64 (__fastcall **)(__int64, int))(*v8 + 104LL);
        if ( v46 != interactive_graph_t__::vfunc_13 )
        {
          v47 = v54;
          v55 = v12;
          v13 = v46((__int64)v8, v47);
          v15 = v66;
          v12 = v55;
LABEL_7:
          if ( v13 + v19 <= v12 )
            goto LABEL_8;
          goto LABEL_14;
        }
        v11 = v8[25];
      }
      v13 = *(_DWORD *)(v11 + 24LL * (_QWORD)a5 + 8);
      goto LABEL_7;
    }
LABEL_14:
    --v14;
    v15 = (int *)(a1 + 4 * v14);
LABEL_8:
    *(_DWORD *)(a1 + 4 * v9) = *v15;
    if ( v14 >= v50 )
      break;
    v9 = v14;
  }
  v7 = v8;
  a2 = v70;
  v24 = (unsigned int *)v15;
  if ( !v69 && (a3 - 2) / 2 == v14 )
    goto LABEL_40;
LABEL_18:
  if ( v14 > a2 )
  {
    v25 = (v14 - 1) / 2;
    v26 = v7;
    v27 = interactive_graph_t__::vfunc_12;
    v28 = v14;
    v29 = 24LL * (int)a4;
    while ( 1 )
    {
      v34 = (int *)(a1 + 4 * v25);
      v35 = *v34;
      v36 = *(__int64 (__fastcall **)(__int64, int))(*v26 + 96LL);
      if ( v36 == v27 )
        break;
      v63 = v27;
      v58 = v29;
      v40 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(__int64, int), __int64, _QWORD *, __int64))v36)(
              v26,
              (unsigned int)v35,
              v27,
              v29,
              a5,
              a6);
      v27 = v63;
      a6 = v40;
      v29 = v58;
      v41 = *(__int64 (__fastcall **)(__int64, int))(*v26 + 96LL);
      if ( v41 == v63 )
      {
        v37 = v26[22];
        goto LABEL_28;
      }
      v67 = v63;
      v64 = v58;
      v59 = a6;
      v42 = v41((__int64)v26, a4);
      v27 = v67;
      v29 = v64;
      a6 = v59;
      v38 = v42;
LABEL_29:
      if ( (int)a6 < v38 )
        goto LABEL_24;
      if ( (int)a6 > v38 )
      {
LABEL_31:
        v24 = (unsigned int *)(a1 + 4 * v28);
        goto LABEL_32;
      }
      v30 = *(__int64 (__fastcall **)(__int64, int))(*v26 + 104LL);
      if ( v30 == interactive_graph_t__::vfunc_13 )
      {
        v31 = v26[25];
        a6 = (unsigned int)(*(_DWORD *)(v31 + 24 * v35 + 8) + a6);
        v32 = a6;
LABEL_22:
        v33 = *(_DWORD *)(v31 + v29 + 8);
        goto LABEL_23;
      }
      v68 = v27;
      v65 = v29;
      v60 = a6;
      v43 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(__int64, int), __int64, _QWORD *))v30)(
              v26,
              (unsigned int)v35,
              v27,
              v29,
              a5);
      a6 = v60;
      v27 = v68;
      v32 = v60 + v43;
      v44 = *(__int64 (__fastcall **)(__int64, int))(*v26 + 104LL);
      v29 = v65;
      if ( v44 == interactive_graph_t__::vfunc_13 )
      {
        v31 = v26[25];
        goto LABEL_22;
      }
      v33 = v44((__int64)v26, a4);
      v27 = v68;
      v29 = v65;
LABEL_23:
      if ( v32 >= v38 + v33 )
        goto LABEL_31;
LABEL_24:
      *(_DWORD *)(a1 + 4 * v28) = *v34;
      v28 = v25;
      if ( a2 >= v25 )
      {
        v24 = (unsigned int *)(a1 + 4 * v25);
        goto LABEL_32;
      }
      v25 = (v25 - 1) / 2;
    }
    v37 = v26[22];
    a6 = *(unsigned int *)(v37 + 24LL * (int)v35 + 8);
LABEL_28:
    v38 = *(_DWORD *)(v37 + v29 + 8);
    goto LABEL_29;
  }
LABEL_32:
  *v24 = a4;
  return a4;
}
