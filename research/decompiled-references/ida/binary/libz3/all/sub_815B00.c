__int64 __fastcall sub_815B00(__int64 a1, _QWORD *a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // r13
  char **v5; // rbp
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // r8
  unsigned int v16; // r13d
  __int64 v17; // r14
  __int64 v18; // rsi
  int v19; // eax
  __int64 *v20; // rsi
  __int64 v21; // rbx
  unsigned int v22; // edx
  __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // r9d
  size_t v27; // rsi
  _DWORD *v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // rsi
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 *v45; // rdx
  __int64 v46; // r15
  _QWORD *v47; // r15
  _QWORD *i; // r13
  _QWORD *v49; // rcx
  __int64 v50; // rax
  int v51; // edx
  __int64 v52; // r14
  __int64 v53; // rbx
  char *v54; // rax
  int *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // r9
  unsigned __int64 v58; // rax
  __int64 v59; // r10
  __int64 v60; // rax
  unsigned int v61; // r15d
  size_t v62; // rdx
  unsigned int v63; // r15d
  unsigned int *v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  int v67; // r8d
  int v68; // r9d
  __int64 v69; // rcx
  int v70; // edx
  __int64 v71; // rbx
  unsigned int *v73; // rax
  __int64 v74; // rdx
  _QWORD *v75; // rsi
  _QWORD *v76; // rsi
  _QWORD *v77; // [rsp+0h] [rbp-118h]
  int v78[2]; // [rsp+8h] [rbp-110h]
  void *v79; // [rsp+10h] [rbp-108h]
  __int64 v80; // [rsp+18h] [rbp-100h]
  int v81; // [rsp+20h] [rbp-F8h]
  char v82; // [rsp+28h] [rbp-F0h]
  int v83[2]; // [rsp+30h] [rbp-E8h] BYREF
  int v84; // [rsp+38h] [rbp-E0h]
  int v85; // [rsp+40h] [rbp-D8h]
  void *v86; // [rsp+48h] [rbp-D0h]
  void *ptr; // [rsp+50h] [rbp-C8h]
  __int64 v88; // [rsp+58h] [rbp-C0h]
  int v89[46]; // [rsp+60h] [rbp-B8h] BYREF

  v8 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v8 == sub_79EFD0 )
    v9 = a2[18];
  else
    v9 = v8((__int64)a2);
  *(_QWORD *)v78 = v9;
  v10 = (_QWORD *)a2[1041];
  v80 = *(_QWORD *)(v9 + 848);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a2[1040];
          if ( (*(_DWORD *)(v12 + 8))-- == 1 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_10;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_10:
    v10 = (_QWORD *)a2[1041];
    if ( v10 )
LABEL_11:
      *((_DWORD *)v10 - 1) = 0;
  }
  v15 = *(unsigned int *)(a1 + 24);
  ptr = v89;
  v16 = v15;
  v17 = 4 * v15;
  v88 = 0x1000000000LL;
  if ( (unsigned int)v15 < *(_DWORD *)(a1 + 28) )
  {
    while ( 1 )
    {
      v21 = a2[291];
      v22 = *(_DWORD *)(**(_QWORD **)(a1 + 16) + v17);
      v23 = v22 >> 1;
      if ( !v21 )
        goto LABEL_21;
      if ( (unsigned int)v23 < *(_DWORD *)(v21 - 4) )
        break;
      v24 = (_QWORD *)a2[1041];
      v21 = 0;
      if ( v24 )
      {
LABEL_22:
        v25 = *((_DWORD *)v24 - 1);
        if ( v25 == *((_DWORD *)v24 - 2) )
        {
          v26 = (3 * v25 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v83);
            sub_233E40((__int64)v83);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v77) = (3 * v25 + 1) >> 1;
          v28 = (_DWORD *)sub_186B300(v24 - 1, v27);
          v29 = (unsigned int)v28[1];
          v24 = v28 + 2;
          a2[1041] = v28 + 2;
          *v28 = (_DWORD)v77;
          LODWORD(v28) = v29;
          v20 = &v24[v29];
          v19 = (_DWORD)v28 + 1;
        }
        else
        {
          v18 = v25;
          v19 = v25 + 1;
          v20 = &v24[v18];
        }
        goto LABEL_15;
      }
LABEL_27:
      v30 = (_QWORD *)sub_186B270(0x18u);
      v24 = v30 + 1;
      *v30 = 2;
      v19 = 1;
      a2[1041] = v24;
      v20 = v24;
LABEL_15:
      *v20 = v21;
      ++v16;
      v17 += 4;
      *((_DWORD *)v24 - 1) = v19;
      if ( v16 >= *(_DWORD *)(a1 + 28) )
        goto LABEL_31;
    }
    v21 = *(_QWORD *)(v21 + 8 * v23);
    if ( v21 )
    {
      if ( (v22 & 1) == 0 || (v21 = sub_15EC2C0(a2[18], v21)) != 0 )
        ++*(_DWORD *)(v21 + 8);
    }
LABEL_21:
    v24 = (_QWORD *)a2[1041];
    if ( v24 )
      goto LABEL_22;
    goto LABEL_27;
  }
LABEL_31:
  v31 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v31 )
  {
    sub_15E1B70(v78[0]);
    v60 = sub_15E1A70(v78[0]);
    v33 = v60;
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
    v34 = (_QWORD *)a2[1041];
    if ( v34 )
    {
      v35 = *((_DWORD *)v34 - 1);
      if ( v35 != *((_DWORD *)v34 - 2) )
        goto LABEL_37;
      v61 = (3 * v35 + 1) >> 1;
      v62 = 8 * v61 + 8;
      if ( 8 * v35 + 8 >= (unsigned int)v62 || v35 >= v61 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v83);
        sub_233E40((__int64)v83);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_94:
      v73 = (unsigned int *)sub_186B300(v34 - 1, v62);
      v74 = v73[1];
      v34 = v73 + 2;
      a2[1041] = v73 + 2;
      *v73 = v61;
      LODWORD(v73) = v74;
      v38 = &v34[v74];
      v37 = (_DWORD)v73 + 1;
      goto LABEL_38;
    }
LABEL_96:
    v75 = (_QWORD *)sub_186B270(0x18u);
    *v75 = 2;
    v37 = 1;
    v34 = v75 + 1;
    a2[1041] = v34;
    v38 = v34;
    goto LABEL_38;
  }
  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( *(_QWORD *)(a1 + 48) )
      goto LABEL_39;
    v34 = (_QWORD *)a2[1041];
    if ( !v34 )
      goto LABEL_65;
    v46 = *((unsigned int *)v34 - 1);
    goto LABEL_45;
  }
  v32 = sub_15E1B70(v78[0]);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = (_QWORD *)a2[1041];
  if ( !v34 )
    goto LABEL_96;
  v35 = *((_DWORD *)v34 - 1);
  if ( v35 == *((_DWORD *)v34 - 2) )
  {
    v61 = (3 * v35 + 1) >> 1;
    v62 = 8 * v61 + 8;
    if ( 8 * v35 + 8 >= (unsigned int)v62 || v35 >= v61 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v83);
      sub_233E40((__int64)v83);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_94;
  }
LABEL_37:
  v36 = v35;
  v37 = v35 + 1;
  v38 = &v34[v36];
LABEL_38:
  *v38 = v33;
  v39 = *(_QWORD *)(a1 + 48);
  *((_DWORD *)v34 - 1) = v37;
  if ( v39 )
  {
LABEL_39:
    v40 = sub_15E1B70(v78[0]);
    v41 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    v34 = (_QWORD *)a2[1041];
    if ( v34 )
    {
      v42 = *((_DWORD *)v34 - 1);
      if ( v42 == *((_DWORD *)v34 - 2) )
      {
        v63 = (3 * v42 + 1) >> 1;
        if ( 8 * v42 + 8 >= 8 * v63 + 8 || v42 >= v63 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v64 = (unsigned int *)sub_186B300(v34 - 1, 8 * v63 + 8);
        v65 = v64[1];
        v34 = v64 + 2;
        *v64 = v63;
        a2[1041] = v64 + 2;
        LODWORD(v64) = v65;
        v45 = &v34[v65];
        v44 = (unsigned int)((_DWORD)v64 + 1);
        v46 = v44;
      }
      else
      {
        v43 = v42;
        v44 = v42 + 1;
        v45 = &v34[v43];
        v46 = v44;
      }
    }
    else
    {
      v76 = (_QWORD *)sub_186B270(0x18u);
      *v76 = 2;
      v46 = 1;
      LODWORD(v44) = 1;
      v34 = v76 + 1;
      a2[1041] = v34;
      v45 = v34;
    }
    *v45 = v41;
    *((_DWORD *)v34 - 1) = v44;
    goto LABEL_45;
  }
  v46 = v37;
LABEL_45:
  v47 = &v34[v46];
  for ( i = v34; v47 != i; LODWORD(v88) = v51 + 1 )
  {
    v50 = sub_15D1F10(*i);
    v51 = v88;
    v52 = v50;
    if ( (unsigned int)v88 < HIDWORD(v88) )
    {
      v49 = ptr;
    }
    else
    {
      v53 = (unsigned int)(2 * HIDWORD(v88));
      v54 = (char *)sub_186B270(8 * v53);
      v51 = v88;
      v55 = (int *)ptr;
      v49 = v54;
      if ( (_DWORD)v88 )
      {
        if ( (unsigned int)(v88 - 1) <= 2 || v54 == (char *)ptr + 8 )
        {
          v58 = 0;
          v59 = 8LL * (unsigned int)v88;
          do
          {
            v49[v58 / 8] = *(_QWORD *)&v55[v58 / 4];
            v58 += 8LL;
          }
          while ( v58 != v59 );
        }
        else
        {
          v56 = 0;
          v57 = 16LL * ((unsigned int)v88 >> 1);
          do
          {
            *(__m128i *)&v49[v56 / 8] = _mm_loadu_si128((const __m128i *)&v55[v56 / 4]);
            v56 += 16LL;
          }
          while ( v56 != v57 );
          if ( (v51 & 1) != 0 )
            v49[v51 & 0xFFFFFFFE] = *(_QWORD *)&v55[2 * (v51 & 0xFFFFFFFE)];
        }
      }
      if ( v55 != v89 && v55 )
      {
        v77 = v49;
        sub_186B220(v55);
        v51 = v88;
        v49 = v77;
      }
      ptr = v49;
      HIDWORD(v88) = v53;
    }
    ++i;
    v49[v51] = v52;
  }
  v31 = *(unsigned int *)(a1 + 8);
LABEL_65:
  *(_QWORD *)v83 = 0;
  switch ( v31 )
  {
    case 0LL:
      sub_180C9E0(v83, "eq2bit");
      break;
    case 1LL:
      sub_180C9E0(v83, "ne2bit");
      break;
    case 2LL:
      sub_180C9E0(v83, "bit2eq");
      break;
    case 3LL:
      sub_180C9E0(v83, "bit2ne");
      break;
    case 4LL:
      sub_180C9E0(v83, "bv2int");
      break;
    default:
      break;
  }
  v66 = sub_15E3510(*(_QWORD *)v78, v83, (unsigned int)v88, ptr, v80, 0);
  v69 = a2[1041];
  if ( v69 )
    v70 = *(_DWORD *)(v69 - 4);
  else
    v70 = 0;
  v71 = sub_15DC610(v78[0], v66, v70, v69, v67, v68, (int)v77, v78[0], (int)v89, v80, v81, v82, v83[0], v84, v85, v86);
  if ( ptr != v79 && ptr )
    sub_186B220(ptr);
  return v71;
}

