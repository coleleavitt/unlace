void __fastcall sub_58EC70(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4, int a5, __int64 a6, _QWORD *a7)
{
  char **exception; // r13
  char **v8; // r13
  __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r8
  unsigned int v18; // ecx
  _QWORD *v19; // rax
  int v20; // esi
  __int64 v21; // rbx
  unsigned int v22; // ecx
  _QWORD *v23; // r8
  unsigned int v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // r9
  unsigned int v27; // r8d
  __int64 v28; // rax
  int v29; // edx
  _QWORD *v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rax
  int v36; // edx
  unsigned int v37; // r9d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // esi
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // rsi
  __int64 v45; // rdi
  bool v46; // zf
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 (__fastcall *v50)(__int64, __int64 *); // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdi
  _QWORD *v59; // rax
  _QWORD *v60; // [rsp+0h] [rbp-B8h]
  _QWORD *v61; // [rsp+0h] [rbp-B8h]
  unsigned int v62; // [rsp+0h] [rbp-B8h]
  _QWORD *v63; // [rsp+0h] [rbp-B8h]
  unsigned int v64; // [rsp+Ch] [rbp-ACh]
  unsigned int v65; // [rsp+Ch] [rbp-ACh]
  unsigned int v66; // [rsp+10h] [rbp-A8h]
  _QWORD *v67; // [rsp+10h] [rbp-A8h]
  __int64 v68; // [rsp+18h] [rbp-A0h]
  __int64 v71; // [rsp+38h] [rbp-80h] BYREF
  __int64 v72[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v73; // [rsp+50h] [rbp-68h] BYREF
  __int64 v74; // [rsp+58h] [rbp-60h]
  __int64 v75; // [rsp+60h] [rbp-58h] BYREF
  __int64 v76; // [rsp+68h] [rbp-50h]

  v13 = sub_4D6490(*(_QWORD *)(a1 + 24));
  v14 = a2[2];
  v68 = v13;
  if ( v14 && *(_DWORD *)(v14 - 4) )
  {
    v60 = (_QWORD *)a2[2];
    v15 = (_QWORD *)sub_186B270(0x18u);
    v16 = a2[2];
    v17 = v60;
    v18 = 0;
    *v15 = 2;
    v19 = v15 + 1;
    v20 = 1;
    v21 = (__int64)v19;
    while ( 1 )
    {
      *v19 = *v17;
      *(_DWORD *)(v21 - 4) = v20;
      if ( !v16 )
        break;
      v22 = v18 + 1;
      if ( v22 >= *(_DWORD *)(v16 - 4) )
        break;
      while ( 1 )
      {
        v23 = (_QWORD *)(v16 + 8LL * v22);
        v24 = *(_DWORD *)(v21 - 4);
        if ( v24 == *(_DWORD *)(v21 - 8) )
          break;
        ++v22;
        *(_QWORD *)(v21 + 8LL * v24) = *v23;
        *(_DWORD *)(v21 - 4) = v24 + 1;
        if ( v22 >= *(_DWORD *)(v16 - 4) )
          goto LABEL_8;
      }
      v37 = (3 * v24 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v24 + 8 >= (unsigned int)v38 || v24 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v75, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v75);
        sub_233E40((__int64)&v75);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (_QWORD *)(v16 + 8LL * v22);
      v65 = v22;
      v62 = (3 * v24 + 1) >> 1;
      v39 = (unsigned int *)sub_186B300((void *)(v21 - 8), v38);
      v21 = (__int64)(v39 + 2);
      v16 = a2[2];
      v18 = v65;
      v17 = v67;
      *v39 = v62;
      v40 = v39[1];
      v41 = v40;
      v19 = (_QWORD *)(v21 + 8 * v40);
      v20 = v41 + 1;
    }
LABEL_8:
    v25 = (_QWORD *)a3[2];
    v26 = v25;
    if ( v25 )
    {
      v27 = 0;
      if ( *((_DWORD *)v25 - 1) )
      {
        while ( 1 )
        {
          v31 = *(_DWORD *)(v21 - 4);
          if ( v31 == *(_DWORD *)(v21 - 8) )
          {
            v32 = (3 * v31 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v75, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, &v75);
              sub_233E40((__int64)&v75);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v66 = (3 * v31 + 1) >> 1;
            v64 = v27;
            v61 = v26;
            v34 = (unsigned int *)sub_186B300((void *)(v21 - 8), v33);
            v21 = (__int64)(v34 + 2);
            v26 = v61;
            v27 = v64;
            *v34 = v66;
            v35 = v34[1];
            v25 = (_QWORD *)a3[2];
            v36 = v35;
            v30 = (_QWORD *)(v21 + 8 * v35);
            v29 = v36 + 1;
          }
          else
          {
            v28 = v31;
            v29 = v31 + 1;
            v30 = (_QWORD *)(v21 + 8 * v28);
          }
LABEL_12:
          ++v27;
          *v30 = *v26;
          *(_DWORD *)(v21 - 4) = v29;
          if ( !v25 || v27 >= *((_DWORD *)v25 - 1) )
            break;
          v26 = &v25[v27];
        }
      }
    }
  }
  else
  {
    v42 = a3[2];
    if ( v42 && *(_DWORD *)(v42 - 4) )
    {
      v63 = (_QWORD *)a3[2];
      v59 = (_QWORD *)sub_186B270(0x18u);
      v25 = (_QWORD *)a3[2];
      v26 = v63;
      v27 = 0;
      *v59 = 2;
      v30 = v59 + 1;
      v29 = 1;
      v21 = (__int64)v30;
      goto LABEL_12;
    }
    v21 = 0;
  }
  sub_58A930(v72, a1, a2, a3, a5, a6);
  v71 = v21;
  sub_58DAB0(&v75, a1, &v71, v72[0], a7);
  v43 = v75;
  v44 = v72[0];
  v72[0] = v75;
  if ( v44 )
  {
    v45 = v76;
    v46 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v46 )
    {
      sub_15D7BC0(v45, v44);
      v43 = v72[0];
    }
  }
  sub_588670((int)&v75, a1, (__int64)a4, v43);
  v47 = v72[0];
  v48 = v75;
  v75 = v72[0];
  v72[0] = v48;
  if ( v75 )
  {
    v49 = v76;
    v46 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v49, v47);
  }
  v73 = 0;
  v74 = v68;
  v50 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a4 + 144LL);
  if ( v50 == sub_586990 )
  {
    v51 = a4[6];
    if ( v51 )
    {
      v73 = a4[6];
      ++*(_DWORD *)(v51 + 8);
    }
  }
  else
  {
    v50((__int64)a4, &v73);
    LODWORD(v51) = v73;
  }
  sub_588670((int)&v75, a1, (__int64)a4, v51);
  v52 = v73;
  v53 = v75;
  v75 = v73;
  v73 = v53;
  if ( v75 )
  {
    v54 = v76;
    v46 = (*(_DWORD *)(v52 + 8))-- == 1;
    if ( v46 )
    {
      sub_15D7BC0(v54, v52);
      v53 = v73;
    }
  }
  sub_5875C0(a1, "join_project", v72[0], v53);
  v55 = v73;
  if ( v73 )
  {
    v56 = v74;
    v46 = (*(_DWORD *)(v73 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v56, v55);
  }
  v57 = v72[0];
  if ( v72[0] )
  {
    v58 = v72[1];
    v46 = (*(_DWORD *)(v72[0] + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v58, v57);
  }
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
}

