__int64 __fastcall sub_442430(_QWORD *a1, unsigned __int64 a2, int a3)
{
  char **v3; // rbx
  char **v4; // r13
  char **v5; // rbx
  char **v6; // rbx
  char **exception; // rbx
  char **v8; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned int v18; // edx
  _QWORD *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  unsigned __int64 *v24; // rdx
  int v25; // r14d
  __int64 v26; // r12
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  int v33; // edx
  unsigned __int8 v35; // dl
  __int64 v36; // rax
  int v37; // r13d
  int v38; // r15d
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // r13d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r14
  unsigned int v48; // r12d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rdx
  unsigned __int8 v52; // cl
  unsigned int v53; // ecx
  size_t v54; // rsi
  unsigned int *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 *v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  unsigned int v64; // r12d
  unsigned int v65; // ecx
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r13d
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rsi
  _QWORD *v72; // rdx
  _QWORD *v73; // rax
  unsigned int v74; // [rsp+Ch] [rbp-6Ch]
  __int64 v75; // [rsp+18h] [rbp-60h] BYREF
  __int64 v76[11]; // [rsp+20h] [rbp-58h] BYREF

  v12 = a1[18];
  v75 = 0;
  v13 = sub_4415C0(v12, a2, &v75);
  if ( (_BYTE)v13 )
  {
    v26 = v75;
    if ( v75 )
      ++*(_DWORD *)(v75 + 8);
    v27 = (_QWORD *)a1[7];
    if ( v27 )
    {
      v28 = *((_DWORD *)v27 - 1);
      if ( v28 == *((_DWORD *)v27 - 2) )
      {
        v42 = (3 * v28 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v28 + 8 >= (unsigned int)v43 || v28 >= v42 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v27 - 1, v43);
        v45 = v44[1];
        v27 = v44 + 2;
        *v44 = v42;
        a1[7] = v44 + 2;
        LODWORD(v44) = v45;
        v31 = &v27[v45];
        v30 = (_DWORD)v44 + 1;
      }
      else
      {
        v29 = v28;
        v30 = v28 + 1;
        v31 = &v27[v29];
      }
    }
    else
    {
      v62 = (_QWORD *)sub_186B270(0x18u);
      v27 = v62 + 1;
      *v62 = 2;
      v30 = 1;
      a1[7] = v27;
      v31 = v27;
    }
    *v31 = v26;
    *((_DWORD *)v27 - 1) = v30;
    if ( v26 == a2 )
      return 1;
LABEL_30:
    v32 = a1[5];
    if ( v32 )
    {
      v33 = *(_DWORD *)(v32 - 4);
      if ( v33 )
        *(_BYTE *)(v32 + 16LL * (unsigned int)(v33 - 1) + 8) |= 2u;
    }
    return 1;
  }
  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v20 = (_QWORD *)a1[7];
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v48 = (3 * v21 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v49 || v21 >= v48 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(v20 - 1, v49);
        v51 = v50[1];
        v20 = v50 + 2;
        *v50 = v48;
        a1[7] = v50 + 2;
        LODWORD(v50) = v51;
        v24 = &v20[v51];
        v23 = (_DWORD)v50 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v20[v22];
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      v20 = v56 + 1;
      *v56 = 2;
      v23 = 1;
      a1[7] = v20;
      v24 = v20;
    }
    *v24 = a2;
    *((_DWORD *)v20 - 1) = v23;
    return 1;
  }
  v14 = v13;
  v15 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v25 = 0;
    goto LABEL_20;
  }
  if ( v15 )
  {
    if ( v15 != 2 )
    {
      if ( v15 != 1 )
      {
LABEL_23:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_50;
    }
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
    v16 = a1[7];
LABEL_8:
    v17 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    if ( v16 )
    {
      v18 = *(_DWORD *)(v16 - 4);
      if ( v18 == *(_DWORD *)(v16 - 8) )
      {
        v68 = (3 * v18 + 1) >> 1;
        v69 = 8 * v68 + 8;
        if ( 8 * v18 + 8 >= v69 || v18 >= v68 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v70 = (unsigned int *)sub_186B300((void *)(v16 - 8), v69);
        v71 = v70[1];
        *v70 = v68;
        a1[7] = v70 + 2;
        *(_QWORD *)&v70[2 * v71 + 2] = a2;
        v70[1] = v71 + 1;
      }
      else
      {
        *(_QWORD *)(v16 + 8LL * v18) = a2;
        *(_DWORD *)(v16 - 4) = v18 + 1;
      }
    }
    else
    {
      v73 = (_QWORD *)sub_186B270(0x18u);
      v73[1] = a2;
      a1[7] = v73 + 1;
      *v73 = 0x100000002LL;
    }
    if ( (*(_DWORD *)(a2 + 8))-- == 1 )
      sub_15D7BC0(v17, a2);
    return 1;
  }
  v46 = sub_1680FB0(a1[4], a2, 0);
  v47 = v46;
  if ( v46 )
  {
    v57 = (_QWORD *)a1[7];
    ++*(_DWORD *)(v46 + 8);
    if ( v57 )
    {
      v58 = *((_DWORD *)v57 - 1);
      if ( v58 == *((_DWORD *)v57 - 2) )
      {
        v64 = (3 * v58 + 1) >> 1;
        v65 = 8 * v64 + 8;
        if ( 8 * v58 + 8 >= v65 || v58 >= v64 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v66 = (unsigned int *)sub_186B300(v57 - 1, v65);
        v67 = v66[1];
        v57 = v66 + 2;
        *v66 = v64;
        a1[7] = v66 + 2;
        LODWORD(v66) = v67;
        v61 = &v57[v67];
        v60 = (_DWORD)v66 + 1;
      }
      else
      {
        v59 = v58;
        v60 = v58 + 1;
        v61 = &v57[v59];
      }
    }
    else
    {
      v72 = (_QWORD *)sub_186B270(0x18u);
      *v72 = 2;
      v60 = 1;
      v57 = v72 + 1;
      a1[7] = v57;
      v61 = v57;
    }
    *v61 = v47;
    *((_DWORD *)v57 - 1) = v60;
    if ( a2 == v47 )
      return 1;
    goto LABEL_30;
  }
  v15 = *(_WORD *)(a2 + 4);
  v25 = 1;
LABEL_20:
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      v35 = 3;
      if ( a3 != 3 )
        v35 = (a3 - 1) & 3;
      v36 = a1[7];
      v37 = v35;
      if ( v36 )
        v38 = *(_DWORD *)(v36 - 4);
      else
        v38 = 0;
      v39 = (_QWORD *)a1[5];
      if ( v39 )
      {
        v40 = *((unsigned int *)v39 - 1);
        if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
        {
          v53 = (unsigned int)(3 * v40 + 1) >> 1;
          v54 = 16 * v53 + 8;
          if ( 16 * (int)v40 + 8 >= (unsigned int)v54 || (unsigned int)v40 >= v53 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v76, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v76);
            sub_233E40((__int64)v76);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_63;
        }
LABEL_41:
        v41 = (__int64)&v39[2 * v40];
LABEL_42:
        *(_QWORD *)v41 = a2;
        *(_DWORD *)(v41 + 12) = v38;
        *(_DWORD *)(v41 + 8) = v25 | (16 * v37);
        ++*((_DWORD *)v39 - 1);
        return v14;
      }
    }
    else
    {
      if ( v15 )
        goto LABEL_23;
      v16 = a1[7];
      if ( !*(_DWORD *)(a2 + 24) )
        goto LABEL_8;
      v52 = 3;
      if ( a3 != 3 )
        v52 = (a3 - 1) & 3;
      v37 = v52;
      if ( v16 )
        v38 = *(_DWORD *)(v16 - 4);
      else
        v38 = 0;
      v39 = (_QWORD *)a1[5];
      if ( v39 )
      {
        v40 = *((unsigned int *)v39 - 1);
        if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
        {
          v53 = (unsigned int)(3 * v40 + 1) >> 1;
          v54 = 16 * v53 + 8;
          if ( 16 * (int)v40 + 8 >= (unsigned int)v54 || (unsigned int)v40 >= v53 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v76, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v76);
            sub_233E40((__int64)v76);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_63:
          v74 = v53;
          v55 = (unsigned int *)sub_186B300(v39 - 1, v54);
          v39 = v55 + 2;
          a1[5] = v55 + 2;
          *v55 = v74;
          v41 = (__int64)&v55[4 * v55[1] + 2];
          goto LABEL_42;
        }
        goto LABEL_41;
      }
    }
    v63 = (_QWORD *)sub_186B270(0x28u);
    v39 = v63 + 1;
    *v63 = 2;
    a1[5] = v63 + 1;
    v41 = (__int64)(v63 + 1);
    goto LABEL_42;
  }
LABEL_50:
  sub_441BA0(a1, a2);
  return 1;
}

