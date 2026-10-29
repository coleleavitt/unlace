__int64 __fastcall sub_7DC460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **exception; // r15
  char **v7; // r12
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 *v11; // rbx
  __int64 *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // rsi
  unsigned int v20; // ebp
  __int64 v21; // rax
  unsigned int *v22; // rax
  __int64 v23; // rsi
  void *v24; // rdi
  __int64 v25; // r15
  int v26; // r9d
  __int64 v27; // r8
  int v28; // ecx
  int v29; // edx
  __int64 *v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  void *v36; // rdi
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // r13
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  unsigned int v44; // r14d
  __int64 v45; // rax
  unsigned int *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rsi
  void *v49; // rdi
  _QWORD *v50; // rax
  void *v51; // rdi
  unsigned int v52; // r15d
  size_t v53; // rsi
  unsigned int *v54; // rax
  _QWORD *v55; // rax
  int v56; // [rsp+0h] [rbp-2B8h]
  int v57; // [rsp+0h] [rbp-2B8h]
  __int64 v58; // [rsp+8h] [rbp-2B0h]
  __int64 v59; // [rsp+8h] [rbp-2B0h]
  _BYTE *v60; // [rsp+10h] [rbp-2A8h]
  __int64 v61; // [rsp+10h] [rbp-2A8h]
  __int64 *v62; // [rsp+18h] [rbp-2A0h]
  __int64 *v63; // [rsp+20h] [rbp-298h]
  __int64 v64; // [rsp+28h] [rbp-290h]
  __int64 v65; // [rsp+30h] [rbp-288h]
  void *v66; // [rsp+38h] [rbp-280h]
  __int64 v67; // [rsp+40h] [rbp-278h] BYREF
  void *v68; // [rsp+48h] [rbp-270h]
  int v69[2]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-1C8h]
  int *v71; // [rsp+F8h] [rbp-1C0h] BYREF
  int *v72; // [rsp+198h] [rbp-120h] BYREF
  __int64 v73; // [rsp+230h] [rbp-88h]
  __int64 v74; // [rsp+238h] [rbp-80h]
  __int64 v75; // [rsp+240h] [rbp-78h]
  __int64 v76; // [rsp+248h] [rbp-70h]
  __int64 v77; // [rsp+250h] [rbp-68h]
  __int64 v78; // [rsp+258h] [rbp-60h]
  __int64 v79; // [rsp+260h] [rbp-58h]
  _BYTE v80[80]; // [rsp+268h] [rbp-50h] BYREF

  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a1 + 72);
  ++*(_DWORD *)(a1 + 132);
  v11 = *(__int64 **)(v9 + 24);
  v58 = a2;
  v64 = *(_QWORD *)(v9 + 48);
  if ( !v11 )
  {
LABEL_36:
    v37 = *(_QWORD *)(v58 + 32);
    if ( v37 )
      v38 = *(_DWORD *)(v37 - 4);
    else
      v38 = 0;
    v39 = sub_15DC610(
            **(_QWORD **)(a1 + 120),
            *(_QWORD *)(v64 + 72),
            v38,
            v37,
            a5,
            a6,
            v56,
            v58,
            (int)v60,
            (int)v62,
            (int)v63,
            v64,
            v65,
            (int)v66,
            v67,
            v68);
    v40 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    sub_7DAE00((__int64)&v67, a1, v59 + 24, *(_QWORD *)(*(_QWORD *)(v59 + 16) + 32LL));
    v44 = sub_7E58D0(a1, v40, v67, v41, v42, v43, v57, v59, v61);
    if ( v11 )
    {
      v45 = *((unsigned int *)v11 - 1);
      if ( (_DWORD)v45 == *((_DWORD *)v11 - 2) )
      {
        v52 = (unsigned int)(3 * v45 + 1) >> 1;
        v53 = 4 * v52 + 8;
        if ( 4 * (int)v45 + 8 >= (unsigned int)v53 || (unsigned int)v45 >= v52 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v69, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v69);
          sub_233E40((__int64)v69);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (unsigned int *)sub_186B300(v11 - 1, v53);
        v11 = (__int64 *)(v54 + 2);
        *v54 = v52;
        v46 = &v54[v54[1] + 2];
      }
      else
      {
        v46 = (unsigned int *)v11 + v45;
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0x10u);
      v11 = v55 + 1;
      *v55 = 2;
      v46 = (unsigned int *)(v55 + 1);
    }
    *v46 = v44;
    v47 = (unsigned int)(*((_DWORD *)v11 - 1) + 1);
    *((_DWORD *)v11 - 1) = v47;
    sub_7E56B0(a1, v47, v11, 0, 0);
    v48 = v67;
    if ( v67 )
    {
      v49 = v68;
      v15 = (*(_DWORD *)(v67 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v49, v48);
    }
    if ( v40 )
    {
      v15 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v10, v40);
    }
    return sub_186B220(v11 - 1);
  }
  v63 = &v11[*((unsigned int *)v11 - 1)];
  if ( v11 == v63 )
  {
    v11 = nullptr;
    goto LABEL_36;
  }
  v12 = *(__int64 **)(v9 + 24);
  v11 = nullptr;
  v60 = v80;
  v62 = &v67;
  while ( 1 )
  {
    v25 = *v12;
    sub_633760((__int64)v69, v10, 0, (__int64)v60);
    v80[8] = 1;
    *(_QWORD *)v69 = &off_1C4CA80;
    v27 = *(_QWORD *)(v58 + 32);
    if ( v27 )
      v28 = *(_DWORD *)(v27 - 4);
    else
      v28 = 0;
    v29 = v25;
    v30 = v62;
    sub_157BE40((int)v62, (int)v69, v29, v28, v27, v26, v56, v58, (int)v60, (int)v62, (int)v63, v64, v65, v66);
    sub_14B9B80(*(_QWORD *)(a1 + 80) + 2192LL, v30);
    *(_QWORD *)v69 = &off_1C4CA60;
    if ( v79 )
      sub_186B220((void *)(v79 - 8));
    v31 = v77;
    if ( v77 )
    {
      v32 = v78;
      v15 = (*(_DWORD *)(v77 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v32, v31);
    }
    v13 = v75;
    if ( v75 )
    {
      v14 = v76;
      v15 = (*(_DWORD *)(v75 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v14, v13);
    }
    v16 = v73;
    if ( v73 )
    {
      v17 = v74;
      v15 = (*(_DWORD *)(v73 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v17, v16);
    }
    v72 = &qword_1C637E8;
    sub_15841B0(&v72);
    v71 = &qword_1C637E8;
    sub_15841B0(&v71);
    if ( v70 )
      sub_186B220((void *)(v70 - 8));
    result = sub_15841B0(v69);
    v10 = *(_QWORD *)(a1 + 72);
    v19 = v67;
    if ( v67 == *(_QWORD *)(v10 + 864) )
      break;
    if ( v67 != *(_QWORD *)(v10 + 856) )
    {
      v20 = sub_7E58C0(a1, v67) ^ 1;
      if ( v11 )
      {
        v21 = *((unsigned int *)v11 - 1);
        if ( (_DWORD)v21 == *((_DWORD *)v11 - 2) )
        {
          v33 = (unsigned int)(3 * v21 + 1) >> 1;
          v34 = 4 * v33 + 8;
          if ( 4 * (int)v21 + 8 >= (unsigned int)v34 || (unsigned int)v21 >= v33 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v69, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v69);
            sub_233E40((__int64)v69);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v35 = (unsigned int *)sub_186B300(v11 - 1, v34);
          v11 = (__int64 *)(v35 + 2);
          *v35 = v33;
          v22 = &v35[v35[1] + 2];
        }
        else
        {
          v22 = (unsigned int *)v11 + v21;
        }
      }
      else
      {
        v50 = (_QWORD *)sub_186B270(0x10u);
        v11 = v50 + 1;
        *v50 = 2;
        v22 = (unsigned int *)(v50 + 1);
      }
      v23 = v67;
      *v22 = v20;
      ++*((_DWORD *)v11 - 1);
      if ( v23 )
      {
        v24 = v68;
        v15 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v24, v23);
      }
      v10 = *(_QWORD *)(a1 + 72);
      goto LABEL_21;
    }
    if ( v67 && (v36 = v68, v15 = *(_DWORD *)(v67 + 8) == 1, --*(_DWORD *)(v67 + 8), v15) )
    {
      sub_15D7BC0(v36, v19);
      ++v12;
      v10 = *(_QWORD *)(a1 + 72);
      if ( v63 == v12 )
        goto LABEL_36;
    }
    else
    {
LABEL_21:
      if ( v63 == ++v12 )
        goto LABEL_36;
    }
  }
  if ( v67 )
  {
    v51 = v68;
    v15 = (*(_DWORD *)(v67 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v51, v19);
  }
  if ( v11 )
    return sub_186B220(v11 - 1);
  return result;
}

