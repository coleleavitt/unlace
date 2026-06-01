__int64 __fastcall sub_BEF650(__int64 a1, unsigned int a2, double a3)
{
  char **v3; // rbx
  char **v4; // r15
  _QWORD *v6; // r13
  _QWORD *v7; // r13
  int v8; // eax
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned int *v17; // rdx
  unsigned int v18; // r15d
  __int64 v19; // rax
  unsigned int *v20; // rax
  unsigned int *v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // r13
  __int64 v25; // r12
  int v26; // eax
  unsigned int v27; // eax
  unsigned int *v28; // rdx
  unsigned int v29; // r12d
  __int64 v30; // rax
  unsigned int *v31; // rax
  _QWORD *v32; // rdi
  unsigned int *v33; // rsi
  __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  _DWORD *v40; // rcx
  __int64 v41; // rax
  __m128 v42; // xmm0
  __int64 v43; // r13
  unsigned int *v44; // rax
  unsigned int v45; // r13d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rax
  char **exception; // rbx
  unsigned int v50; // ecx
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdi
  unsigned int *v55; // rsi
  __int64 v56; // rdi
  __int64 *v57; // rbx
  unsigned __int64 v58; // r14
  __int64 v59; // rsi
  __int64 v60; // rsi
  unsigned int *v61; // r15
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int *v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // [rsp+8h] [rbp-F8h]
  __int64 v68; // [rsp+10h] [rbp-F0h]
  __int64 v69; // [rsp+18h] [rbp-E8h]
  __int64 *v70; // [rsp+20h] [rbp-E0h]
  unsigned int v71; // [rsp+28h] [rbp-D8h]
  int v72; // [rsp+2Ch] [rbp-D4h]
  __int64 v73; // [rsp+38h] [rbp-C8h]
  __int64 *v74; // [rsp+40h] [rbp-C0h]
  __int64 *v75; // [rsp+48h] [rbp-B8h]
  int v76; // [rsp+48h] [rbp-B8h]
  unsigned int *v77; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int *v78; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h]
  __int64 v80[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v82; // [rsp+88h] [rbp-78h]
  __m128 v83; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v84; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-58h]
  __int64 v86[10]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8840LL) + 8LL * (a2 >> 1));
  if ( !(unsigned __int8)sub_1407860(*(_QWORD *)a1 + 1848LL, *(_QWORD *)a1 + 2120LL, v6) )
  {
    sub_1872CE0("");
    sub_1873130(114, 734);
  }
  v61 = (unsigned int *)v6[4];
  v62 = v6[5];
  v73 = v6[6];
  sub_155D090(&v78, *(_QWORD *)a1 + 1224LL);
  sub_14B9B80(*(_QWORD *)a1 + 1192LL, &v78);
  v7 = *(_QWORD **)a1;
  if ( v78 == *(unsigned int **)(*(_QWORD *)(a1 + 16) + 856LL) )
  {
    result = sub_BBF3C0(*(_QWORD **)a1, a2 ^ 1, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
    v65 = v78;
    if ( v78 )
    {
      v66 = v79;
      v23 = v78[2]-- == 1;
      if ( v23 )
        return sub_15D7BC0(v66, v65);
    }
    return result;
  }
  v8 = sub_966440(*(_QWORD *)a1, v78);
  v72 = a2 ^ 1;
  sub_BBF3C0(v7, a2 ^ 1, v8 ^ 1, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
  sub_BE7FA0((__int64)v80, (__int64 *)a1, v61, v73);
  v67 = *(_QWORD *)(a1 + 16);
  sub_BE7720(v86, (_QWORD *)a1, v80[0], (__int64)v61);
  v9 = *(_QWORD *)(a1 + 16);
  v77 = nullptr;
  v82 = nullptr;
  v81 = v9;
  v69 = v86[0];
  result = sub_BED870(a1, v86[0], (__int64)&v81);
  v70 = v82;
  if ( !v82 )
    goto LABEL_48;
  v75 = v82;
  v68 = v81;
  v74 = &v82[2 * *((unsigned int *)v82 - 1)];
  if ( v74 == v82 )
    goto LABEL_47;
  do
  {
    v37 = *(_QWORD *)a1;
    v38 = v62;
    v39 = v75[1];
    while ( !*(_WORD *)(v38 + 4) )
    {
      v40 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
      if ( !v40 || *(_DWORD *)(*(_QWORD *)a1 + 1768LL) != *v40 || v40[1] != 29 || *(_DWORD *)(v38 + 24) != 2 )
        break;
      if ( v39 == *(_QWORD *)(v38 + 40) )
        goto LABEL_29;
      v38 = *(_QWORD *)(v38 + 32);
    }
    if ( v39 != v38 )
    {
      v41 = *v75;
      v42 = _mm_loadh_ps((const double *)(a1 + 16));
      v83 = v42;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      sub_15637F0(v37 + 1224, v80[0], &v83);
      sub_14B9B80(*(_QWORD *)a1 + 1192LL, &v83);
      v43 = *(_QWORD *)(a1 + 16);
      v35 = v83.m128_u64[0];
      if ( *(_QWORD *)(v43 + 864) == v83.m128_u64[0] )
      {
        if ( v83.m128_u64[0] )
        {
          v36 = v83.m128_u64[1];
          v23 = (*(_DWORD *)(v83.m128_u64[0] + 8))-- == 1;
          if ( v23 )
            goto LABEL_28;
        }
      }
      else
      {
        v44 = v77;
        if ( v77 )
        {
          v11 = *(v77 - 2);
          *(v77 - 1) = 0;
          if ( !v11 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v86, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v86);
            sub_233E40((__int64)v86);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
        }
        else
        {
          v44 = (unsigned int *)(sub_186B270(0x10u) + 8);
          v43 = *(_QWORD *)(a1 + 16);
          v35 = v83.m128_u64[0];
          *((_QWORD *)v44 - 1) = 2;
          v77 = v44;
        }
        ++*(v44 - 1);
        *v44 = v72;
        if ( *(_QWORD *)(v43 + 856) != v35 )
        {
          v12 = sub_15EC2C0(v43, v35);
          v13 = v12;
          if ( v12 )
            ++*(_DWORD *)(v12 + 8);
          v14 = *(_QWORD *)(a1 + 16);
          v15 = *(_QWORD *)a1;
          v86[0] = v80[0];
          sub_16983B0(&v84, v14, 1, v86, v12);
          v16 = sub_966440(v15, v84);
          v17 = v77;
          v18 = v16;
          if ( v77 )
          {
            v19 = *(v77 - 1);
            if ( (_DWORD)v19 == *(v77 - 2) )
            {
              v50 = (unsigned int)(3 * v19 + 1) >> 1;
              v51 = 4 * v50 + 8;
              if ( 4 * (int)v19 + 8 >= (unsigned int)v51 || (unsigned int)v19 >= v50 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v86, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v86);
                sub_233E40((__int64)v86);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v71 = (unsigned int)(3 * v19 + 1) >> 1;
              v52 = (unsigned int *)sub_186B300(v77 - 2, v51);
              v17 = v52 + 2;
              v77 = v52 + 2;
              *v52 = v71;
              v20 = &v52[v52[1] + 2];
            }
            else
            {
              v20 = &v77[v19];
            }
          }
          else
          {
            v64 = sub_186B270(0x10u);
            v17 = (unsigned int *)(v64 + 8);
            *(_QWORD *)v64 = 2;
            v77 = (unsigned int *)(v64 + 8);
            v20 = (unsigned int *)(v64 + 8);
          }
          v21 = v84;
          *v20 = v18;
          ++*(v17 - 1);
          if ( v21 )
          {
            v22 = v85;
            v23 = v21[2]-- == 1;
            if ( v23 )
              sub_15D7BC0(v22, v21);
          }
          if ( v13 )
          {
            v23 = (*(_DWORD *)(v13 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v43, v13);
          }
        }
        v24 = *(_QWORD *)a1;
        v25 = *(_QWORD *)a1 + 1848LL;
        v26 = sub_15E1B70(*(_QWORD *)(*(_QWORD *)a1 + 1760LL));
        sub_1407560(
          (unsigned int)&v84,
          v25,
          v24 + 2120,
          v75[1],
          v26,
          v73,
          0,
          *(_QWORD *)(*(_QWORD *)(v24 + 1848) + 840LL),
          0);
        v27 = sub_966440(*(_QWORD *)a1, v84);
        v28 = v77;
        v29 = v27;
        if ( v77 )
        {
          v30 = *(v77 - 1);
          if ( (_DWORD)v30 == *(v77 - 2) )
          {
            v45 = (unsigned int)(3 * v30 + 1) >> 1;
            v46 = 4 * v45 + 8;
            if ( 4 * (int)v30 + 8 >= (unsigned int)v46 || (unsigned int)v30 >= v45 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v86, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v86);
              sub_233E40((__int64)v86);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v47 = (unsigned int *)sub_186B300(v77 - 2, v46);
            v28 = v47 + 2;
            *v47 = v45;
            v48 = v47[1];
            v77 = v28;
            v31 = &v28[v48];
          }
          else
          {
            v31 = &v77[v30];
          }
        }
        else
        {
          v63 = sub_186B270(0x10u);
          v28 = (unsigned int *)(v63 + 8);
          *(_QWORD *)v63 = 2;
          v77 = (unsigned int *)(v63 + 8);
          v31 = (unsigned int *)(v63 + 8);
        }
        *v31 = v29;
        v32 = *(_QWORD **)a1;
        ++*(v28 - 1);
        sub_BBF120(v32, &v77, *(double *)v42.m128_u64);
        v33 = v84;
        if ( v84 )
        {
          v34 = v85;
          v23 = v84[2]-- == 1;
          if ( v23 )
            sub_15D7BC0(v34, v33);
        }
        v35 = v83.m128_u64[0];
        if ( v83.m128_u64[0] )
        {
          v36 = v83.m128_u64[1];
          v23 = (*(_DWORD *)(v83.m128_u64[0] + 8))-- == 1;
          if ( v23 )
LABEL_28:
            sub_15D7BC0(v36, v35);
        }
      }
    }
LABEL_29:
    v75 += 2;
  }
  while ( v74 != v75 );
  v57 = v70;
  if ( v70 < &v70[2 * *((unsigned int *)v70 - 1)] )
  {
    v58 = (unsigned __int64)&v70[2 * *((unsigned int *)v70 - 1)];
    do
    {
      v60 = *v57;
      if ( *v57 )
      {
        v23 = (*(_DWORD *)(v60 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v68, v60);
      }
      v59 = v57[1];
      if ( v59 )
      {
        v23 = (*(_DWORD *)(v59 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v68, v59);
      }
      v57 += 2;
    }
    while ( (unsigned __int64)v57 < v58 );
  }
LABEL_47:
  result = sub_186B220(v70 - 1);
LABEL_48:
  if ( v77 )
    result = sub_186B220(v77 - 2);
  if ( v69 )
  {
    v76 = *(_DWORD *)(v69 + 8);
    result = (unsigned int)(v76 - 1);
    *(_DWORD *)(v69 + 8) = result;
    if ( v76 == 1 )
      result = sub_15D7BC0(v67, v69);
  }
  v53 = v80[0];
  if ( v80[0] )
  {
    v54 = v80[1];
    v23 = (*(_DWORD *)(v80[0] + 8))-- == 1;
    if ( v23 )
      result = sub_15D7BC0(v54, v53);
  }
  v55 = v78;
  if ( v78 )
  {
    v56 = v79;
    v23 = v78[2]-- == 1;
    if ( v23 )
      return sub_15D7BC0(v56, v55);
  }
  return result;
}

