unsigned int *__fastcall sub_2E4940(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  __int64 v4; // rbx
  __int64 i; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  _DWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  bool v13; // r13
  int v14; // eax
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r15
  __int64 v23; // rdi
  bool v24; // zf
  int v25; // edi
  bool v26; // bp
  int v27; // esi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  _DWORD *v33; // rax
  int v34; // edi
  __int64 v35; // r15
  __int64 v36; // rbx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rsi
  __int64 v41; // rbp
  __int64 v42; // r14
  bool v43; // dl
  int v44; // edi
  _QWORD *v45; // r13
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rsi
  bool v52; // dl
  int v53; // edi
  _QWORD *v54; // r13
  int v55; // eax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // rax
  __m128 v61; // kr10_16
  _QWORD *v62; // r13
  unsigned int v63; // eax
  _QWORD *v64; // rdx
  unsigned int v65; // r12d
  __int64 v66; // rax
  unsigned int *result; // rax
  _DWORD *v68; // rax
  _DWORD *v69; // rax
  unsigned int v70; // r14d
  unsigned int v71; // ecx
  unsigned int *v72; // rax
  _QWORD *v73; // rax
  char **exception; // r13
  void *v75; // [rsp+0h] [rbp-E8h]
  __int64 *v76; // [rsp+0h] [rbp-E8h]
  __int64 v77; // [rsp+8h] [rbp-E0h]
  bool v78; // [rsp+8h] [rbp-E0h]
  bool v79; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v80; // [rsp+10h] [rbp-D8h]
  __int64 v81; // [rsp+20h] [rbp-C8h]
  int v82[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v83; // [rsp+58h] [rbp-90h]
  __m128 v84; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v85[2]; // [rsp+70h] [rbp-78h] BYREF
  __m128 v86; // [rsp+80h] [rbp-68h] BYREF
  __int64 v87; // [rsp+90h] [rbp-58h] BYREF
  __int64 v88; // [rsp+98h] [rbp-50h]

  v2 = *(_QWORD **)a1;
  v3 = *(__int64 (**)(void))(*v2 + 72LL);
  if ( (char *)v3 == (char *)sub_2DD1A0 )
    v75 = (void *)v2[1];
  else
    v75 = (void *)v3();
  sub_16669D0(v82, v75);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    v81 = v4 + 96LL * *(unsigned int *)(v4 - 4);
    if ( v4 != v81 )
    {
      for ( i = v4 + 64; ; i = v32 )
      {
        v6 = i - 64;
        sub_2E44C0(&v84, a1, (__int64 *)(i - 16));
        v80 = v84.m128_u64[1];
        v7 = v84.m128_u64[0];
        v8 = *(_DWORD **)(sub_15D1F10(v84.m128_u64[0]) + 24);
        if ( !v8 )
          break;
        v13 = 0;
        if ( *v8 != 5 )
          goto LABEL_8;
        if ( v8[1] != 1 )
          goto LABEL_8;
        v13 = (*(_BYTE *)(v6 + 84) & 1) == 0;
        if ( (*(_BYTE *)(v6 + 84) & 1) != 0 )
          goto LABEL_8;
        v14 = *(_DWORD *)(i - 8);
        v13 = *(_DWORD *)(i + 16) == 1;
        if ( v14 == 1 )
        {
LABEL_49:
          v15 = v83;
          if ( !v83 )
          {
            sub_16669E0(v82);
            v15 = v83;
          }
          goto LABEL_13;
        }
LABEL_9:
        if ( v14 == 2 )
        {
          v34 = v83;
          if ( !v83 )
          {
            sub_16669E0(v82);
            v34 = v83;
          }
          sub_166A700(v34, i, v13, v10, v11, v12);
          v16 = sub_15E1B70((int)v75);
          goto LABEL_14;
        }
        if ( v14 )
        {
          v17 = 0;
          goto LABEL_16;
        }
        v15 = v83;
        if ( !v83 )
        {
          sub_16669E0(v82);
          v15 = v83;
        }
LABEL_13:
        sub_166A700(v15, i, v13, v10, v11, v12);
        v16 = sub_15E1B70(v82[0]);
LABEL_14:
        v17 = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
LABEL_16:
        v18 = *(_QWORD *)(i - 56);
        if ( !v18 )
        {
          v31 = v17;
          goto LABEL_35;
        }
        sub_2E4050(&v87, a1, (unsigned __int64 *)(i - 56));
        v22 = v87;
        v23 = v88;
        v24 = (*(_DWORD *)(v7 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v23, v7);
        if ( (*(_BYTE *)(v6 + 36) & 1) == 0
          && *(_DWORD *)(i - 32) == 1
          && (v33 = *(_DWORD **)(sub_15D1F10(v22) + 24)) != nullptr
          && *v33 == 5 )
        {
          v25 = v83;
          v27 = i - 48;
          v26 = v33[1] == 1;
          if ( !v83 )
          {
LABEL_45:
            sub_16669E0(v82);
            v25 = v83;
          }
        }
        else
        {
          v25 = v83;
          v26 = 0;
          v27 = i - 48;
          if ( !v83 )
            goto LABEL_45;
        }
        sub_166A700(v25, v27, v26, v19, v20, v21);
        sub_2E4050(&v87, a1, (unsigned __int64 *)(i - 56));
        v28 = v87;
        v77 = v88;
        v29 = sub_15E1B70((int)v75);
        v7 = v29;
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        if ( v22 )
        {
          v24 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v80, v22);
        }
        if ( v28 )
        {
          v24 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v77, v28);
        }
        v30 = sub_15E1B70((int)v75);
        v31 = v30;
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        if ( v17 )
        {
          v24 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v75, v17);
        }
LABEL_35:
        sub_2F2620(*(_QWORD *)a1, v31, v9, v18, v11, v12, v75);
        if ( v7 )
        {
          v24 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v80, v7);
        }
        if ( v31 && (v24 = *(_DWORD *)(v31 + 8) == 1, --*(_DWORD *)(v31 + 8), v24) )
        {
          sub_15D7BC0(v75, v31);
          v32 = i + 96;
          if ( v81 == i + 32 )
            goto LABEL_58;
        }
        else
        {
          v32 = i + 96;
          if ( v81 == i + 32 )
            goto LABEL_58;
        }
      }
      v13 = 0;
LABEL_8:
      v14 = *(_DWORD *)(i - 8);
      if ( v14 == 1 )
        goto LABEL_49;
      goto LABEL_9;
    }
  }
LABEL_58:
  v35 = *(_QWORD *)(a1 + 72);
  v36 = v35 + 40LL * *(unsigned int *)(a1 + 80);
  if ( v35 != v36 )
  {
    while ( *(_DWORD *)(v35 + 4) != 2 )
    {
      v35 += 40;
      if ( v36 == v35 )
        goto LABEL_84;
    }
    if ( v36 != v35 )
    {
      v76 = v85;
      do
      {
        sub_2E4050(v76, a1, (unsigned __int64 *)(v35 + 8));
        v40 = *(_QWORD *)(v35 + 16);
        v41 = v85[0];
        v42 = v85[1];
        if ( v40 )
        {
          v43 = (*(_BYTE *)(v40 + 20) & 1) == 0;
          if ( (*(_BYTE *)(v40 + 20) & 1) == 0 )
          {
            v43 = 0;
            if ( *(_DWORD *)(v40 + 16) == 1 )
            {
              v69 = *(_DWORD **)(sub_15D1F10(v85[0]) + 24);
              v40 = *(_QWORD *)(v35 + 16);
              v43 = 0;
              if ( v69 )
              {
                if ( *v69 == 5 )
                  v43 = v69[1] == 1;
              }
            }
          }
          v44 = v83;
          v45 = *(_QWORD **)a1;
          if ( !v83 )
          {
            v79 = v43;
            sub_16669E0(v82);
            v44 = v83;
            v43 = v79;
          }
          sub_166A700(v44, v40, v43, v37, v38, v39);
          v46 = sub_15E1B70(v82[0]);
          sub_2F2620((int)v45, v46, v47, v48, v49, v50, v76);
        }
        v51 = *(_QWORD *)(v35 + 24);
        if ( v51 )
        {
          v52 = (*(_BYTE *)(v51 + 20) & 1) == 0;
          if ( (*(_BYTE *)(v51 + 20) & 1) == 0 )
          {
            v52 = 0;
            if ( *(_DWORD *)(v51 + 16) == 1 )
            {
              v68 = *(_DWORD **)(sub_15D1F10(v41) + 24);
              v51 = *(_QWORD *)(v35 + 24);
              v52 = 0;
              if ( v68 )
              {
                if ( *v68 == 5 )
                  v52 = v68[1] == 1;
              }
            }
          }
          v53 = v83;
          v54 = *(_QWORD **)a1;
          if ( !v83 )
          {
            v78 = v52;
            sub_16669E0(v82);
            v53 = v83;
            v52 = v78;
          }
          sub_166A700(v53, v51, v52, v37, v38, v39);
          v55 = sub_15E1B70(v82[0]);
          sub_2F2620((int)v54, v55, v56, v57, v58, v59, v76);
        }
        if ( v41 )
        {
          v24 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v42, v41);
        }
        v60 = v35 + 40;
        if ( v36 == v35 + 40 )
          break;
        while ( 1 )
        {
          v35 = v60;
          if ( *(_DWORD *)(v60 + 4) == 2 )
            break;
          v60 += 40;
          if ( v36 == v60 )
            goto LABEL_84;
        }
      }
      while ( v36 != v60 );
    }
  }
LABEL_84:
  sub_2E44C0(&v86, a1, (__int64 *)(a1 + 56));
  v61 = v86;
  v62 = *(_QWORD **)(a1 + 8);
  v63 = sub_2F7D10(*(_QWORD *)a1, v86.m128_u64[0], *(unsigned __int8 *)(a1 + 40));
  v64 = (_QWORD *)*v62;
  v65 = v63;
  if ( *v62 )
  {
    v66 = *((unsigned int *)v64 - 1);
    if ( (_DWORD)v66 == *((_DWORD *)v64 - 2) )
    {
      v70 = (unsigned int)(3 * v66 + 1) >> 1;
      v71 = 4 * v70 + 8;
      if ( 4 * (int)v66 + 8 >= v71 || (unsigned int)v66 >= v70 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v87, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v87);
        sub_233E40((__int64)&v87);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v72 = (unsigned int *)sub_186B300(v64 - 1, v71);
      v64 = v72 + 2;
      *v62 = v72 + 2;
      *v72 = v70;
      result = &v72[v72[1] + 2];
    }
    else
    {
      result = (unsigned int *)v64 + v66;
    }
  }
  else
  {
    v73 = (_QWORD *)sub_186B270(0x10u);
    *v73 = 2;
    v64 = v73 + 1;
    *v62 = v73 + 1;
    result = (unsigned int *)(v73 + 1);
  }
  *result = v65;
  ++*((_DWORD *)v64 - 1);
  if ( v61.m128_u64[0] )
  {
    v24 = (*(_DWORD *)(v61.m128_u64[0] + 8))-- == 1;
    if ( v24 )
      return (unsigned int *)sub_15D7BC0(v61.m128_u64[1], v61.m128_u64[0]);
  }
  return result;
}

