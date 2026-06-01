void __fastcall sub_1C40660(_QWORD *a1, unsigned int a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int16 a7)
{
  __int64 v9; // rax
  __m128i *v10; // r12
  __int64 v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdi
  const void *v29; // rsi
  size_t v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // r13d
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // r15
  int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r15
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // [rsp+0h] [rbp-108h]
  char v72; // [rsp+8h] [rbp-100h]
  __int64 v73; // [rsp+8h] [rbp-100h]
  __int64 v74; // [rsp+10h] [rbp-F8h]
  __int64 v79; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v80[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v82; // [rsp+60h] [rbp-A8h] BYREF
  char v83; // [rsp+B8h] [rbp-50h]
  unsigned int v84; // [rsp+C0h] [rbp-48h]
  char v85; // [rsp+C4h] [rbp-44h]

  if ( *(_DWORD *)(a1[29] + 64LL) )
  {
    if ( a4 == 2 )
    {
      v55 = sub_15F1640((__int64)a1, 1);
      v58 = v55;
      if ( v55 )
      {
        v59 = 0;
        if ( !(unsigned __int8)sub_B7B300(v55, 1, v56, v57) )
        {
          v59 = 1;
          if ( !sub_B7B430(v58, 1, v60, v61) )
          {
            if ( !sub_B7B700(v58, 1, v69, v70) )
              goto LABEL_3;
            v59 = 2;
          }
        }
        sub_168B9F0((__int64)v80, a1 + 1, a2, 0x1383u, 0);
        if ( v83 )
        {
          sub_1C2FE50(&v82, v59);
        }
        else if ( v85 )
        {
          v66 = sub_168B9E0(v80);
          v67 = v81;
          if ( v81 )
            v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
          v79 = v67;
          v68 = sub_1587BC0(v66, &v79, v62, v63, v64, v65);
          sub_1C2FE50((unsigned __int8 **)(*v68 + 32LL * v84 + 8), v59);
        }
        sub_15F7200(v80);
      }
    }
  }
LABEL_3:
  v80[0] = 0;
  v9 = sub_1C37A20(a1, v80, a2, a6);
  v10 = (__m128i *)v80[0];
  v74 = v9;
  if ( v80[0] )
    v10 = (__m128i *)(v80[0] + 40);
  v71 = a5 + 24 * a6;
  if ( v71 == a5 )
  {
    v38 = 88;
    v37 = 0;
LABEL_17:
    v40 = sub_6F3470(*(_QWORD *)(a1[31] + 17504LL), "__context", 9u);
    v41 = a1[31];
    v42 = v40;
    v47 = sub_A7AC20(v41, v74, v43, v44, v45, v46);
    v48 = sub_A70010(v41, v47);
    v49 = sub_B799D0(a1[31], (__int64)v10, a2, v42, v48, 4);
    sub_B94AD0(v10, v49, v50, v51, v52, v53);
    v26 = v80[0];
    *(_DWORD *)(v80[0] + 76) = v37;
    *(_QWORD *)(v26 + v38) = v49;
    goto LABEL_11;
  }
  v11 = a5;
  v72 = 0;
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v27 = 8LL * v12;
      v28 = *(_QWORD *)(a1[31] + 17504LL);
      if ( (*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        break;
      v11 += 24;
      v13 = sub_6F3470(v28, "__context", 9u);
      v14 = a1[31];
      v73 = v13;
      v19 = sub_A7AC20(v14, v74, v15, v16, v17, v18);
      v20 = sub_A70010(v14, v19);
      v21 = sub_B799D0(a1[31], (__int64)v10, a2, v73, v20 | 3, 4);
      sub_B94AD0(v10, v21, v22, v23, v24, v25);
      v26 = v80[0];
      v72 = 1;
      *(_DWORD *)(v80[0] + 76) = v12++;
      *(_QWORD *)(v26 + v27 + 88) = v21;
      if ( v71 == v11 )
        goto LABEL_10;
    }
    v29 = *(const void **)v11;
    v30 = *(_QWORD *)(v11 + 8);
    ++v12;
    v11 += 24;
    v31 = sub_6F3470(v28, v29, v30);
    v32 = sub_B799D0(a1[31], (__int64)v10, a2, v31, *(_QWORD *)(v11 - 8), 4);
    sub_B94AD0(v10, v32, v33, v34, v35, v36);
    v26 = v80[0];
    *(_QWORD *)(v80[0] + v27 + 88) = v32;
  }
  while ( v71 != v11 );
LABEL_10:
  v37 = -1431655765 * ((unsigned __int64)(v71 - a5 - 24) >> 3) + 1;
  v38 = 8LL * v37 + 88;
  if ( !v72 )
    goto LABEL_17;
LABEL_11:
  sub_15F2CA0((__int64)a1, a3, v26, v74, a4, a7);
  if ( a3 )
  {
    v39 = v80[0];
    if ( v80[0] )
      v39 = v80[0] + 40;
    sub_17A2E00((__int64)a1, a3, v39);
  }
  else
  {
    v54 = v80[0];
    if ( v80[0] )
      v54 = v80[0] + 40;
    a1[68] = v54;
  }
  sub_18C74E0((__int64)a1, 6, 0, 4);
}
