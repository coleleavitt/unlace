__m128 *__fastcall sub_6262E0(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  char **exception; // r12
  char **v7; // rbp
  __int64 v9; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r9d
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r12
  _QWORD *v20; // rbx
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rbp
  bool v25; // zf
  __int64 v26; // r12
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rdx
  int v32; // eax
  __int64 *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  unsigned int v37; // eax
  unsigned int v38; // edx
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // ebp
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rax
  _BYTE *v51; // rax
  unsigned __int64 v52; // rbp
  __int64 v53; // rax
  __m128 *v54; // rcx
  unsigned __int64 v55; // r13
  __int64 *v56; // rbp
  unsigned __int64 v57; // r12
  __int64 v58; // rsi
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __m128 *v62; // rax
  int v63; // [rsp+0h] [rbp-B8h]
  int v65; // [rsp+10h] [rbp-A8h]
  unsigned int v66; // [rsp+14h] [rbp-A4h]
  __int64 v67; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v68; // [rsp+20h] [rbp-98h] BYREF
  __m128 *v69; // [rsp+28h] [rbp-90h]
  unsigned int v70; // [rsp+30h] [rbp-88h]
  int v71; // [rsp+34h] [rbp-84h]
  int v72[2]; // [rsp+38h] [rbp-80h]
  int v73; // [rsp+40h] [rbp-78h]
  void *v74; // [rsp+48h] [rbp-70h]
  unsigned __int64 v75; // [rsp+50h] [rbp-68h]
  __int64 v76[11]; // [rsp+60h] [rbp-58h] BYREF

  v9 = a5;
  v13 = *(_QWORD *)(a5 + 16);
  v69 = a1;
  v14 = sub_624790(a2, a3, a4, v13);
  v17 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)v72 = v14;
  v68 = v17;
  if ( !v14 )
  {
    v62 = v69;
    ++*(_DWORD *)(v9 + 8);
    *v62 = _mm_loadh_ps((const double *)&v68);
    return v69;
  }
  v18 = *(unsigned int *)(v9 + 24);
  v75 = v17;
  if ( !(_DWORD)v18 )
  {
    v52 = v17;
    v19 = 0;
    v20 = nullptr;
    goto LABEL_48;
  }
  v19 = 0;
  v20 = nullptr;
  v67 = v9 + 8 * v18;
  while ( 2 )
  {
    v24 = *(_QWORD *)(v9 + 32);
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    if ( v19 )
    {
      v25 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v68, v19);
    }
    v26 = sub_15D1F10(v24);
    v27 = *(_DWORD *)(a2 + 40);
    v28 = *(_QWORD *)(v26 + 24);
    if ( !v28 )
    {
LABEL_5:
      ++*(_DWORD *)(v24 + 8);
      v19 = v24;
      goto LABEL_6;
    }
    while ( *(_DWORD *)v28 == v27 && !*(_DWORD *)(v28 + 4) )
    {
      v29 = *(_QWORD *)(v28 + 8);
      if ( !v29 )
      {
        v71 = -1;
LABEL_20:
        v30 = 0;
        v66 = a6 + v71;
        while ( 1 )
        {
          v34 = v30 + *(_QWORD *)(v28 + 8);
          if ( *(_BYTE *)(v34 + 8) != 1 )
            sub_DBF6E(0);
          v65 = a6 + 1;
          v35 = sub_15DB5C0(*(_QWORD *)(a2 + 24), a6, *(_QWORD *)v34);
          v36 = v35;
          if ( v35 )
            ++*(_DWORD *)(v35 + 8);
          if ( v20 )
          {
            v37 = *((_DWORD *)v20 - 1);
            if ( v37 == *((_DWORD *)v20 - 2) )
            {
              v38 = (3 * v37 + 1) >> 1;
              v39 = 8 * v38 + 8;
              if ( 8 * v37 + 8 >= (unsigned int)v39 || v37 >= v38 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v76, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v76);
                sub_233E40((__int64)v76);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v70 = (3 * v37 + 1) >> 1;
              v40 = (unsigned int *)sub_186B300(v20 - 1, v39);
              v20 = v40 + 2;
              *v40 = v70;
              LODWORD(v40) = v40[1];
              v33 = &v20[(unsigned int)v40];
              v32 = (_DWORD)v40 + 1;
            }
            else
            {
              v31 = v37;
              v32 = v37 + 1;
              v33 = &v20[v31];
            }
          }
          else
          {
            v60 = (_QWORD *)sub_186B270(0x18u);
            v20 = v60 + 1;
            *v60 = 2;
            v32 = 1;
            v33 = v20;
          }
          *v33 = v36;
          v30 += 16;
          *((_DWORD *)v20 - 1) = v32;
          if ( v65 == v66 )
            break;
          v28 = *(_QWORD *)(v26 + 24);
          a6 = v65;
        }
        v45 = (unsigned int)v71;
        goto LABEL_36;
      }
      v71 = *(_DWORD *)(v29 - 4) - 1;
      if ( v71 )
        goto LABEL_20;
      if ( !v20 )
      {
        v45 = 0;
        v46 = 0;
        goto LABEL_37;
      }
      v65 = a6;
      v45 = 0;
LABEL_36:
      v46 = *((unsigned int *)v20 - 1);
      a6 = v65;
LABEL_37:
      v47 = sub_624630(a2, v24, v71, &v20[v46 - v45]);
      v48 = v47;
      if ( v47 )
        ++*(_DWORD *)(v47 + 8);
      if ( v24 )
      {
        v25 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v68, v24);
      }
      v49 = 0xFFFFFFFF0LL;
      v50 = *(_QWORD *)(*(_QWORD *)(v26 + 24) + 8LL);
      if ( v50 )
        v49 = 16LL * (unsigned int)(*(_DWORD *)(v50 - 4) - 1);
      v51 = (_BYTE *)(v49 + v50);
      if ( v51[8] != 1 )
        sub_DBF6E(0);
      v26 = *(_QWORD *)v51;
      v24 = v48;
      v27 = *(_DWORD *)(a2 + 40);
      v28 = *(_QWORD *)(*(_QWORD *)v51 + 24LL);
      if ( !v28 )
        break;
    }
    v19 = 0;
    if ( v24 )
      goto LABEL_5;
LABEL_6:
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v41 = (3 * v21 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v42 || v21 >= v41 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v43 = (unsigned int *)sub_186B300(v20 - 1, v42);
        v20 = v43 + 2;
        *v43 = v41;
        v44 = v43[1];
        LODWORD(v18) = v44;
        v23 = &v20[v44];
        LODWORD(v18) = v18 + 1;
      }
      else
      {
        v22 = v21;
        LODWORD(v18) = v21 + 1;
        v23 = &v20[v22];
      }
    }
    else
    {
      v61 = (_QWORD *)sub_186B270(0x18u);
      v20 = v61 + 1;
      *v61 = 2;
      LODWORD(v18) = 1;
      v23 = v61 + 1;
    }
    *v23 = v19;
    v9 += 8;
    *((_DWORD *)v20 - 1) = v18;
    if ( v67 != v9 )
      continue;
    break;
  }
  v52 = *(_QWORD *)(a2 + 24);
LABEL_48:
  v53 = sub_15DC610(v52, v72[0], v18, (int)v20, v15, v16, v63, a2, v65, v67, v68, (char)v69, v70, v72[0], v73, v74);
  v54 = v69;
  v69->m128_u64[0] = v53;
  v54->m128_u64[1] = v52;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  if ( v19 )
  {
    v25 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v68, v19);
  }
  if ( v20 )
  {
    v55 = v68;
    v56 = v20;
    v57 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
    if ( (unsigned __int64)v20 < v57 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *v56;
          if ( *v56 )
          {
            v25 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( (unsigned __int64)++v56 >= v57 )
            goto LABEL_60;
        }
        ++v56;
        sub_15D7BC0(v55, v58);
      }
      while ( (unsigned __int64)v56 < v57 );
    }
LABEL_60:
    sub_186B220(v20 - 1);
  }
  return v69;
}

