__int64 *__fastcall sub_D955E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **exception; // r15
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 *v16; // r10
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // r14
  __int64 v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  unsigned __int64 v30; // r13
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  int i; // eax
  __int64 *v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 *v37; // rdi
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rdi
  bool v44; // zf
  __int64 *v45; // r12
  unsigned __int64 v46; // r13
  __int64 v47; // rsi
  unsigned int v48; // r10d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdi
  int v53; // [rsp-8h] [rbp-C8h]
  int v54; // [rsp+0h] [rbp-C0h]
  __int64 v55; // [rsp+8h] [rbp-B8h]
  int v56; // [rsp+18h] [rbp-A8h]
  __int64 v57; // [rsp+18h] [rbp-A8h]
  __int64 v59; // [rsp+20h] [rbp-A0h]
  int v60; // [rsp+28h] [rbp-98h]
  unsigned int v61; // [rsp+2Ch] [rbp-94h]
  __int64 v62; // [rsp+30h] [rbp-90h]
  __int64 v63; // [rsp+30h] [rbp-90h]
  __int64 v64; // [rsp+38h] [rbp-88h]
  int v65[2]; // [rsp+40h] [rbp-80h]
  int v66[2]; // [rsp+40h] [rbp-80h]
  int v67; // [rsp+40h] [rbp-80h]
  unsigned int v68; // [rsp+40h] [rbp-80h]
  __int64 *v69; // [rsp+48h] [rbp-78h]
  int v70; // [rsp+50h] [rbp-70h]
  int v71; // [rsp+58h] [rbp-68h]
  int v72; // [rsp+60h] [rbp-60h] BYREF
  int v73[2]; // [rsp+68h] [rbp-58h]
  __int64 v74; // [rsp+70h] [rbp-50h] BYREF
  int v75; // [rsp+78h] [rbp-48h]
  int v76; // [rsp+80h] [rbp-40h]
  int v77; // [rsp+88h] [rbp-38h]
  int v78; // [rsp+90h] [rbp-30h]
  int v79; // [rsp+98h] [rbp-28h]
  int v80; // [rsp+A0h] [rbp-20h]
  void *v81; // [rsp+A8h] [rbp-18h]
  int v82; // [rsp+B0h] [rbp-10h]
  __int64 v83; // [rsp+B8h] [rbp-8h]

  v69 = (__int64 *)a1;
  sub_1684300(&v72, *(_QWORD *)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 8);
  v61 = -1;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v56 = v9;
  *(_QWORD *)(a1 + 32) = v9;
  v10 = *(_QWORD *)(*(_QWORD *)(a4 + 40) + 24LL);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
      v61 = *(_DWORD *)(v11 - 4) - 1;
  }
  v12 = *(_DWORD *)(a5 + 12);
  v13 = *(__int64 **)(a3 + 24);
  v14 = *(unsigned int *)(a3 + 32);
  v15 = v14 - 1;
  v14 *= 24;
  v16 = (__int64 *)((char *)v13 + v14);
  v17 = 24LL * (v12 & v15);
  v18 = &v13[(unsigned __int64)v17 / 8];
  if ( v17 != v14 )
  {
    v19 = v69;
    v20 = &v13[(unsigned __int64)v17 / 8];
    do
    {
      v21 = *v20;
      if ( (unsigned __int64)*v20 > 1 )
      {
        if ( *(_DWORD *)(v21 + 12) == v12 && a5 == v21 )
          goto LABEL_21;
      }
      else if ( !v21 )
      {
        return v19;
      }
      v20 += 3;
    }
    while ( v16 != v20 );
  }
  if ( v13 == v18 )
    return v69;
  v19 = v69;
  while ( 1 )
  {
    v23 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v23 )
      return v19;
LABEL_17:
    v13 += 3;
    if ( v18 == v13 )
      return v19;
  }
  if ( *(_DWORD *)(v23 + 12) != v12 || a5 != v23 )
    goto LABEL_17;
  v20 = v13;
LABEL_21:
  v24 = v20[2];
  v62 = v24;
  if ( v24 )
  {
    ++*(_DWORD *)(v24 + 8);
    v25 = *(__int64 **)(v10 + 8);
    if ( v61 )
    {
      v55 = v61;
      v26 = 16LL * v61;
      if ( *((_BYTE *)v25 + 8) != 1 )
LABEL_54:
        sub_DBF6E(0);
      v27 = *v25;
      if ( *v25 )
        ++*(_DWORD *)(v27 + 8);
      *(_QWORD *)v65 = v27;
      v28 = (_QWORD *)sub_186B270(0x18u);
      v29 = v28 + 1;
      *v28 = 2;
      v30 = 0;
      v31 = *(_QWORD *)v65;
      v32 = v28 + 1;
      v25 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a4 + 40) + 24LL) + 8LL);
      for ( i = 1; ; i = (_DWORD)v50 + 1 )
      {
        v30 += 16LL;
        *v29 = v31;
        *((_DWORD *)v32 - 1) = i;
        if ( v30 == v26 )
          break;
        while ( 1 )
        {
          v34 = &v25[v30 / 8];
          if ( LOBYTE(v25[v30 / 8 + 1]) != 1 )
            goto LABEL_54;
          v35 = *v34;
          if ( *v34 )
            ++*(_DWORD *)(v35 + 8);
          v36 = *((_DWORD *)v32 - 1);
          if ( v36 == *((_DWORD *)v32 - 2) )
            break;
          v30 += 16LL;
          v32[v36] = v35;
          *((_DWORD *)v32 - 1) = v36 + 1;
          if ( v30 == v26 )
            goto LABEL_33;
        }
        v48 = (3 * v36 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v36 + 8 >= (unsigned int)v49 || v36 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v74, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v74);
          sub_233E40((__int64)&v74);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v64 = v35;
        v68 = (3 * v36 + 1) >> 1;
        v50 = (unsigned int *)sub_186B300(v32 - 1, v49);
        v51 = v50[1];
        v32 = v50 + 2;
        v31 = v64;
        v52 = *(_QWORD *)(*(_QWORD *)(a4 + 40) + 24LL);
        *v50 = v68;
        LODWORD(v50) = v51;
        v29 = &v32[v51];
        v25 = *(__int64 **)(v52 + 8);
      }
    }
    else
    {
      v55 = 0;
      v32 = nullptr;
    }
LABEL_33:
    v37 = &v25[2 * v55];
    if ( *((_BYTE *)v37 + 8) != 1 )
      sub_DBF6E(0);
    *(_QWORD *)v66 = *v37;
    v38 = sub_1684260(&v72, v62);
    v39 = sub_15E3D10(
            *(_QWORD *)(a2 + 8),
            (int)&qword_18D6CD0,
            (int)&qword_18D6CD0,
            v61,
            (int)v32,
            v66[0],
            1,
            v53,
            v54,
            v55,
            (int)&v72,
            v56,
            a3,
            v60,
            v62,
            v64,
            v66[0],
            (int)v69,
            v70,
            v71,
            v72,
            v73[0],
            v74,
            v75,
            v76,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
    *v69 = v39;
    v69[1] = (__int64)sub_D94A80(a2, v59, v39, v38);
    v40 = *v69;
    v69[2] = v38;
    v74 = v40;
    LOBYTE(v75) = 1;
    v41 = sub_15DCAD0(v73[0], 0, 0);
    sub_15D0DF0(&v74);
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v42 = v69[3];
    if ( v42 )
    {
      v43 = v69[4];
      v44 = (*(_DWORD *)(v42 + 8))-- == 1;
      if ( v44 )
        sub_15D7BC0(v43, v42);
    }
    v69[3] = v41;
    v67 = *(_DWORD *)(v63 + 8);
    *(_DWORD *)(v63 + 8) = v67 - 1;
    if ( v67 == 1 )
      sub_15D7BC0(v57, v63);
    if ( v32 )
    {
      v45 = v32;
      v46 = (unsigned __int64)&v32[*((unsigned int *)v32 - 1)];
      if ( (unsigned __int64)v32 < v46 )
      {
        do
        {
          while ( 1 )
          {
            v47 = *v45;
            if ( *v45 )
            {
              v44 = (*(_DWORD *)(v47 + 8))-- == 1;
              if ( v44 )
                break;
            }
            if ( (unsigned __int64)++v45 >= v46 )
              goto LABEL_48;
          }
          ++v45;
          sub_15D7BC0(v57, v47);
        }
        while ( (unsigned __int64)v45 < v46 );
      }
LABEL_48:
      sub_186B220(v32 - 1);
    }
  }
  return v69;
}

