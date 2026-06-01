__int64 __fastcall sub_DD0080(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  int v7; // eax
  __int64 *v8; // r15
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 *v12; // rbp
  __int64 v14; // r13
  unsigned int v15; // r14d
  unsigned __int64 v16; // rbx
  __int64 *v17; // rbp
  __int64 v18; // r12
  _QWORD *v19; // rbp
  __int64 *v20; // rdi
  __int64 v21; // r8
  __int64 *v22; // rdi
  __int64 v23; // rsi
  bool v24; // zf
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // r13d
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 *v36; // r14
  __int64 *v37; // r15
  __int64 v38; // rax
  __int64 *v39; // r14
  __int64 *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // r12
  __int64 *v45; // rax
  __int64 *v46; // r13
  __int64 *v47; // r13
  __int64 v48; // rax
  __int64 *v49; // r13
  __int64 v50; // rax
  unsigned int v51; // r15d
  unsigned __int64 v52; // r14
  __int64 *v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 *v56; // rax
  __int64 result; // rax
  __int64 *v58; // rdx
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 *v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // rcx
  __int64 *v67; // r13
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 *v70; // r13
  __int64 v71; // rax
  __int64 *v72; // r14
  __int64 v73; // rax
  __int64 v74; // r13
  __int64 v75; // rdx
  __int64 *v76; // r13
  __int64 v77; // rax
  __int64 v78; // r14
  __int64 *v79; // r15
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // rdx
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // r14
  __int64 v87; // rax
  __int64 *v88; // r14
  __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // rax
  __int64 *v92; // r14
  _QWORD *exception; // rbx
  int v94; // [rsp+0h] [rbp-88h]
  unsigned int v95; // [rsp+4h] [rbp-84h]
  _QWORD *ptr; // [rsp+8h] [rbp-80h]
  __int64 *ptra; // [rsp+8h] [rbp-80h]
  __int64 v98; // [rsp+10h] [rbp-78h]
  int v99; // [rsp+18h] [rbp-70h]
  _DWORD *v100; // [rsp+20h] [rbp-68h]
  unsigned int v101; // [rsp+20h] [rbp-68h]
  void *v102; // [rsp+28h] [rbp-60h]
  __int64 v103; // [rsp+28h] [rbp-60h]
  __int64 v104; // [rsp+30h] [rbp-58h]
  __int64 v105; // [rsp+38h] [rbp-50h]
  __int64 v106[8]; // [rsp+48h] [rbp-40h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = sub_DC07A0(a1)[1];
  if ( v4 )
  {
    LODWORD(v98) = *(_DWORD *)(v4 - 4);
    v5 = v98;
  }
  else
  {
    LODWORD(v98) = 0;
    v5 = 0;
  }
  HIDWORD(v98) = a2[10];
  v95 = v5 - HIDWORD(v98);
  v6 = sub_DC2710(a1)[1];
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  if ( v7 - a2[11] != v95 + 1 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(
      exception,
      "invalid quantified expression, syntax error: (forall|exists ((<symbol> <sort>)*) <expr>) expected");
    goto LABEL_107;
  }
  v8 = (__int64 *)a1[204];
  v9 = a2[7];
  if ( v8 )
  {
    v10 = v8[1];
    if ( v10 )
      goto LABEL_8;
LABEL_75:
    v15 = v9;
    v25 = 0;
    goto LABEL_25;
  }
  LODWORD(ptr) = a2[7];
  v64 = sub_186B270(0x10u);
  v65 = *a1;
  v8 = (__int64 *)v64;
  sub_DFBCB0(*a1);
  v66 = *(_QWORD *)(v65 + 296);
  v9 = (unsigned int)ptr;
  v8[1] = 0;
  v67 = (__int64 *)a1[204];
  *v8 = v66;
  if ( v8 == v67 )
    goto LABEL_75;
  if ( !v67 )
  {
    a1[204] = v8;
    v15 = (unsigned int)ptr;
    v25 = 0;
    goto LABEL_25;
  }
  sub_2334C0(v67);
  sub_186B220(v67);
  v10 = v8[1];
  a1[204] = v8;
  v9 = (unsigned int)ptr;
  if ( !v10 )
    goto LABEL_75;
LABEL_8:
  v11 = *(_DWORD *)(v10 - 4);
  if ( v9 >= v11 )
    goto LABEL_75;
  LODWORD(v100) = (_DWORD)a2;
  v12 = v8;
  v99 = v9;
  v14 = 8LL * v9;
  v15 = v9;
  v16 = 8 * (v9 + (unsigned __int64)(v11 - v9 - 1) + 1);
  while ( 1 )
  {
    if ( v12 )
      goto LABEL_14;
    v60 = sub_186B270(0x10u);
    v61 = *a1;
    v62 = (__int64 *)v60;
    sub_DFBCB0(*a1);
    v63 = *(_QWORD *)(v61 + 296);
    v17 = (__int64 *)a1[204];
    v62[1] = 0;
    *v62 = v63;
    if ( v62 == v17 )
    {
      v17 = nullptr;
    }
    else
    {
      if ( v17 )
      {
        sub_2334C0(v17);
        sub_186B220(v17);
        v17 = (__int64 *)v62[1];
      }
      a1[204] = v62;
    }
LABEL_15:
    v18 = v17[(unsigned __int64)v14 / 8];
    v19 = (_QWORD *)a1[213];
    if ( !v19 )
    {
      v19 = (_QWORD *)sub_186B270(8u);
      sub_DFBCB0(*a1);
      v59 = (_QWORD *)a1[213];
      *v19 = 0x100000000LL;
      if ( v19 != v59 )
      {
        if ( v59 )
          sub_186B220(v59);
        a1[213] = v19;
      }
    }
    if ( (unsigned __int8)sub_15A7C10(
                            (int)v19,
                            -1,
                            v95,
                            v18,
                            *((_DWORD *)a1 + 9),
                            *((_DWORD *)a1 + 10),
                            v94,
                            (int)ptr,
                            v98,
                            v99,
                            (int)v100,
                            v102) )
      break;
    if ( !*((_BYTE *)a1 + 2065) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid pattern");
      goto LABEL_107;
    }
    v12 = (__int64 *)a1[204];
LABEL_12:
    v14 += 8;
    if ( v16 == v14 )
      goto LABEL_24;
  }
  v12 = (__int64 *)a1[204];
  if ( v12 )
  {
    v20 = (__int64 *)v12[1];
    v21 = *v12;
  }
  else
  {
    v12 = (__int64 *)sub_186B270(0x10u);
    ptr = (_QWORD *)*a1;
    sub_DFBCB0(*a1);
    v20 = (__int64 *)a1[204];
    v21 = ptr[37];
    v12[1] = 0;
    *v12 = v21;
    if ( v12 == v20 )
    {
      v20 = nullptr;
    }
    else
    {
      if ( v20 )
      {
        LODWORD(ptr) = (_DWORD)v20;
        sub_2334C0(v20);
        sub_186B220(v20);
        v20 = (__int64 *)v12[1];
        v21 = *v12;
      }
      a1[204] = v12;
    }
  }
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v22 = &v20[v15];
  v23 = *v22;
  if ( *v22 )
  {
    v24 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v24 )
    {
      ptr = (_QWORD *)(8LL * v15++);
      sub_15D7BC0(v21, v23);
      v58 = (_QWORD *)((char *)ptr + v12[1]);
      v12 = (__int64 *)a1[204];
      *v58 = v18;
      goto LABEL_12;
    }
  }
  v14 += 8;
  *v22 = v18;
  ++v15;
  if ( v16 != v14 )
  {
LABEL_14:
    v17 = (__int64 *)v12[1];
    goto LABEL_15;
  }
LABEL_24:
  v3 = a1;
  v8 = v12;
  v2 = v100;
  v25 = v15 - v99;
  if ( !v8 )
  {
    v73 = sub_186B270(0x10u);
    v74 = *v3;
    v8 = (__int64 *)v73;
    sub_DFBCB0(*v3);
    v75 = *(_QWORD *)(v74 + 296);
    v76 = (__int64 *)v3[204];
    v8[1] = 0;
    *v8 = v75;
    if ( v8 != v76 )
    {
      if ( v76 )
      {
        sub_2334C0(v76);
        sub_186B220(v76);
      }
      v3[204] = v8;
    }
  }
LABEL_25:
  sub_39BEE0(v8, v15);
  v26 = v3[205];
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 8);
    goto LABEL_27;
  }
  v68 = sub_186B270(0x10u);
  v69 = *v3;
  v70 = (__int64 *)v68;
  sub_DFBCB0(*v3);
  v71 = *(_QWORD *)(v69 + 296);
  v72 = (__int64 *)v3[205];
  v70[1] = 0;
  *v70 = v71;
  if ( v70 != v72 )
  {
    if ( v72 )
    {
      sub_2334C0(v72);
      sub_186B220(v72);
      v3[205] = v70;
      v27 = v70[1];
LABEL_27:
      if ( v27 )
      {
        v28 = *(_DWORD *)(v27 - 4);
        goto LABEL_29;
      }
    }
    else
    {
      v3[205] = v70;
    }
  }
  v28 = 0;
LABEL_29:
  v29 = (unsigned int)(v28 - v2[8]);
  if ( !*((_QWORD *)v2 + 1) )
    *((_QWORD *)v2 + 1) = 8LL * *((unsigned int *)v3 + 9) + 1;
  if ( v2[1] != 2 )
  {
    v30 = *v3;
    sub_DFBCB0(*v3);
    v31 = *(_QWORD *)(v30 + 296);
    v32 = sub_DC2710(v3)[1];
    v33 = 0x7FFFFFFF8LL;
    if ( v32 )
      v33 = 8LL * (unsigned int)(*(_DWORD *)(v32 - 4) - 1);
    if ( !(unsigned __int8)sub_15D2CB0(v31, *(_QWORD *)(v32 + v33)) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "quantifier body must be a Boolean expression");
LABEL_107:
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
  v34 = *v3;
  sub_DFBCB0(*v3);
  v103 = *(_QWORD *)(v34 + 296);
  v35 = v3[205];
  if ( v35 )
  {
    v36 = *(__int64 **)(v35 + 8);
  }
  else
  {
    v77 = sub_186B270(0x10u);
    v78 = *v3;
    v79 = (__int64 *)v77;
    sub_DFBCB0(*v3);
    v80 = *(_QWORD *)(v78 + 296);
    v36 = (__int64 *)v3[205];
    v79[1] = 0;
    *v79 = v80;
    if ( v79 == v36 )
    {
      v36 = nullptr;
    }
    else
    {
      if ( v36 )
      {
        sub_2334C0(v36);
        sub_186B220(v36);
        v36 = (__int64 *)v79[1];
      }
      v3[205] = v79;
    }
  }
  v37 = &v36[v2[8]];
  v38 = v3[204];
  if ( v38 )
  {
    v39 = *(__int64 **)(v38 + 8);
  }
  else
  {
    v81 = sub_186B270(0x10u);
    v82 = *v3;
    ptra = (__int64 *)v81;
    sub_DFBCB0(*v3);
    v83 = *(_QWORD *)(v82 + 296);
    v84 = ptra;
    v39 = (__int64 *)v3[204];
    *ptra = v83;
    ptra[1] = 0;
    if ( ptra == v39 )
    {
      v39 = nullptr;
    }
    else
    {
      if ( v39 )
      {
        sub_2334C0(v39);
        sub_186B220(v39);
        v84 = ptra;
        v39 = (__int64 *)ptra[1];
      }
      v3[204] = v84;
    }
  }
  v40 = &v39[v2[7]];
  v101 = v2[6];
  v41 = sub_DC2710(v3)[1];
  v42 = 0x7FFFFFFF8LL;
  if ( v41 )
    v42 = 8LL * (unsigned int)(*(_DWORD *)(v41 - 4) - 1);
  v105 = *(_QWORD *)(v41 + v42);
  v104 = v3[206] + 8LL * (unsigned int)v2[9];
  v43 = sub_DC07A0(v3);
  v44 = sub_15DB6A0(
          v103,
          (unsigned int)v2[1],
          v95,
          v43[1] + 8LL * (unsigned int)v2[10],
          v104,
          v105,
          v101,
          v2 + 2,
          v2 + 4,
          v25,
          v40,
          v29,
          v37);
  v45 = sub_DC2710(v3);
  sub_39BEE0(v45, v2[11]);
  v46 = (__int64 *)v3[204];
  if ( !v46 )
  {
    v85 = sub_186B270(0x10u);
    v86 = *v3;
    v46 = (__int64 *)v85;
    sub_DFBCB0(*v3);
    v87 = *(_QWORD *)(v86 + 296);
    v88 = (__int64 *)v3[204];
    v46[1] = 0;
    *v46 = v87;
    if ( v46 != v88 )
    {
      if ( v88 )
      {
        sub_2334C0(v88);
        sub_186B220(v88);
      }
      v3[204] = v46;
    }
  }
  sub_39BEE0(v46, v2[7]);
  v47 = (__int64 *)v3[205];
  if ( !v47 )
  {
    v89 = sub_186B270(0x10u);
    v90 = *v3;
    v47 = (__int64 *)v89;
    sub_DFBCB0(*v3);
    v91 = *(_QWORD *)(v90 + 296);
    v92 = (__int64 *)v3[205];
    v47[1] = 0;
    *v47 = v91;
    if ( v47 != v92 )
    {
      if ( v92 )
      {
        sub_2334C0(v92);
        sub_186B220(v92);
      }
      v3[205] = v47;
    }
  }
  sub_39BEE0(v47, v2[8]);
  v48 = v3[206];
  if ( v48 )
    *(_DWORD *)(v48 - 4) = v2[9];
  v49 = sub_DC07A0(v3);
  v50 = v49[1];
  if ( v50 )
  {
    v51 = v2[10];
    v52 = v50 + 8LL * *(unsigned int *)(v50 - 4);
    v53 = (__int64 *)(v50 + 8LL * v51);
    if ( (unsigned __int64)v53 >= v52 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v54 = *v53;
        if ( *v53 )
        {
          v55 = *v49;
          v24 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v53 >= v52 )
          goto LABEL_52;
      }
      sub_15D7BC0(v55, v54);
      ++v53;
    }
    while ( (unsigned __int64)v53 < v52 );
LABEL_52:
    v50 = v49[1];
    if ( v50 )
LABEL_53:
      *(_DWORD *)(v50 - 4) = v51;
  }
  sub_DCF8B0((__int64)(v3 + 184));
  *((_DWORD *)v3 + 378) += HIDWORD(v98) - v98;
  v56 = sub_DC2710(v3);
  v106[0] = v44;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  sub_DBF5A0(v56 + 1, v106);
  result = sub_1875B10(v3 + 180);
  --*((_DWORD *)v3 + 406);
  return result;
}

