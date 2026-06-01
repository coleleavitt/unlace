__int64 __fastcall sub_DFC440(__int64 a1, __int64 a2, int a3, _QWORD *a4, __int64 a5, __int64 a6, __int64 *a7)
{
  char **exception; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // r15
  unsigned int v19; // ebp
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  int *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  _QWORD *v26; // r9
  unsigned int v27; // r12d
  __int64 *v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // rbp
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // r12
  unsigned int v37; // r12d
  __int64 *v38; // rbx
  unsigned __int64 v39; // rbp
  __int64 v40; // rsi
  unsigned int v42; // r10d
  size_t v43; // rsi
  _DWORD *v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rbx
  int v50; // eax
  _DWORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // rbx
  int v59; // [rsp+0h] [rbp-F8h]
  int v60[2]; // [rsp+8h] [rbp-F0h]
  int v62[2]; // [rsp+18h] [rbp-E0h]
  _QWORD *v63; // [rsp+28h] [rbp-D0h]
  unsigned int v64; // [rsp+30h] [rbp-C8h]
  unsigned int v66; // [rsp+3Ch] [rbp-BCh]
  void *v67; // [rsp+48h] [rbp-B0h]
  __int64 v68; // [rsp+48h] [rbp-B0h]
  int v70[2]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v71; // [rsp+70h] [rbp-88h] BYREF
  _QWORD *v72; // [rsp+78h] [rbp-80h]
  _BYTE v73[32]; // [rsp+80h] [rbp-78h] BYREF
  int v74[2]; // [rsp+A0h] [rbp-58h] BYREF

  sub_DFBCB0(a1);
  v8 = *(_QWORD *)(a1 + 296);
  v72 = nullptr;
  v71 = v8;
  sub_DFBCB0(a1);
  sub_15F01E0(v73, *(_QWORD *)(a1 + 296));
  sub_DFBCB0(a1);
  v67 = *(void **)(a1 + 296);
  v9 = sub_15F0420(v73);
  sub_15F17D0(v70, v9, a2);
  v10 = *(__int64 **)v70;
  if ( !*(_QWORD *)v70 )
    goto LABEL_70;
  *(_QWORD *)v60 = *(_QWORD *)v70 + 8LL * *(unsigned int *)(*(_QWORD *)v70 - 4LL);
  if ( *(_QWORD *)v70 != *(_QWORD *)v60 )
  {
LABEL_6:
    v11 = *v10;
    v12 = *(_QWORD *)(*v10 + 16);
    if ( v12 )
    {
      if ( a3 != *(_DWORD *)(v12 - 4) )
        goto LABEL_5;
      v13 = v72;
      v14 = v72;
      if ( !v72 )
      {
        *(_QWORD *)v62 = v12 + 8LL * *(unsigned int *)(v12 - 4);
        if ( v12 == *(_QWORD *)v62 )
          goto LABEL_73;
        goto LABEL_21;
      }
      v15 = (unsigned __int64)&v72[*((unsigned int *)v72 - 1)];
      if ( (unsigned __int64)v72 < v15 )
        goto LABEL_15;
      *((_DWORD *)v72 - 1) = 0;
    }
    else
    {
      if ( a3 )
        goto LABEL_5;
      v13 = v72;
      v14 = v72;
      if ( !v72 )
      {
LABEL_73:
        v29 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 48LL);
LABEL_74:
        if ( v29 && *(_DWORD *)(v29 - 4) )
          goto LABEL_5;
LABEL_43:
        sub_15F5190(v74, v11, &v71);
        v32 = *(_QWORD *)v74;
        sub_DFBCB0(a1);
        v35 = sub_15DC610(
                *(_QWORD *)(a1 + 296),
                v32,
                a3,
                (int)a4,
                v33,
                v34,
                v59,
                v60[0],
                (int)a4,
                v62[0],
                a1,
                (char)v63,
                v64,
                a3,
                (int)v73,
                v67);
        v36 = v35;
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        sub_DF6300(*a7, a7[1]);
        *a7 = v36;
        if ( !*(_QWORD *)v70 )
          goto LABEL_47;
LABEL_46:
        sub_186B220((void *)(*(_QWORD *)v70 - 8LL));
LABEL_47:
        if ( v32 )
        {
          v17 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v68, v32);
        }
        v37 = 1;
        goto LABEL_51;
      }
      v15 = (unsigned __int64)&v72[*((unsigned int *)v72 - 1)];
      if ( (unsigned __int64)v72 >= v15 )
      {
        *((_DWORD *)v72 - 1) = 0;
        goto LABEL_37;
      }
      do
      {
LABEL_15:
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v14 >= v15 )
            goto LABEL_18;
        }
        sub_15D7BC0(v71, v16);
        ++v14;
      }
      while ( (unsigned __int64)v14 < v15 );
LABEL_18:
      v13 = v72;
      v12 = *(_QWORD *)(v11 + 16);
      if ( v72 )
      {
        *((_DWORD *)v72 - 1) = 0;
        if ( !v12 )
          goto LABEL_37;
      }
      else if ( !v12 )
      {
        goto LABEL_73;
      }
    }
    *(_QWORD *)v62 = v12 + 8LL * *(unsigned int *)(v12 - 4);
    if ( *(_QWORD *)v62 == v12 )
      goto LABEL_37;
LABEL_21:
    v18 = v12;
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)v18 + 8LL);
      v21 = v19++;
      v22 = sub_15D1F10(a4[v21]);
      if ( v22 != v20 )
        break;
LABEL_35:
      v18 += 8;
      if ( *(_QWORD *)v62 == v18 )
      {
        v13 = v72;
LABEL_37:
        v29 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 48LL);
        if ( !v13 )
          goto LABEL_74;
        v30 = *((unsigned int *)v13 - 1);
        if ( !v29 )
        {
          if ( (_DWORD)v30 )
            goto LABEL_5;
          goto LABEL_43;
        }
        if ( *(_DWORD *)(v29 - 4) != (_DWORD)v30 )
          goto LABEL_5;
        v31 = &v13[v30];
        if ( v13 == v31 )
          goto LABEL_43;
        while ( *v13 )
        {
          if ( v31 == ++v13 )
            goto LABEL_43;
        }
LABEL_5:
        if ( *(__int64 **)v60 == ++v10 )
        {
          *(_QWORD *)v60 = *(_QWORD *)v70;
          if ( !*(_QWORD *)v70 )
            goto LABEL_70;
          goto LABEL_69;
        }
        goto LABEL_6;
      }
    }
    sub_DFBCB0(a1);
    v23 = *(int **)(v20 + 24);
    if ( v23 )
    {
      v24 = *v23;
      if ( v24 != -1 && v24 != 4 )
        goto LABEL_5;
    }
    if ( (*(_QWORD *)(v20 + 16) & 7LL) != 1 )
      goto LABEL_5;
    v25 = *(_QWORD *)(v20 + 16) >> 3;
    v64 = v25;
    if ( (int)v25 < 0 )
      goto LABEL_5;
    v26 = v72;
    v27 = v25 + 1;
    if ( v72 )
    {
      v66 = *((_DWORD *)v72 - 1);
      if ( v66 >= v27 )
      {
LABEL_30:
        v28 = &v26[v64];
        if ( *v28 )
        {
          if ( v22 != *v28 )
            goto LABEL_5;
          if ( !*(_DWORD *)(v22 + 8) )
            sub_15D7BC0(v71, v22);
        }
        else if ( v22 )
        {
          ++*(_DWORD *)(v22 + 8);
        }
        *v28 = v22;
        goto LABEL_35;
      }
    }
    else
    {
      v48 = (_QWORD *)sub_186B270(0x18u);
      v26 = v48 + 1;
      v66 = 0;
      v72 = v48 + 1;
      *v48 = 2;
    }
    while ( 1 )
    {
      v45 = *((_DWORD *)v26 - 2);
      if ( v45 >= v27 )
        break;
      v42 = (3 * v45 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v45 + 8 >= (unsigned int)v43 || v45 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DF63A0((__int64 *)v74, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v74);
        sub_233E40((__int64)v74);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v63) = (3 * v45 + 1) >> 1;
      v44 = (_DWORD *)sub_186B300(v26 - 1, v43);
      v26 = v44 + 2;
      v72 = v44 + 2;
      *v44 = (_DWORD)v63;
    }
    *((_DWORD *)v26 - 1) = v27;
    v46 = 8LL * (int)v27;
    v47 = 8LL * v66;
    if ( v47 != v46 )
    {
      v63 = v26;
      memset(&v26[(unsigned __int64)v47 / 8], 0, v46 - v47);
      v26 = v63;
    }
    goto LABEL_30;
  }
LABEL_69:
  sub_186B220((void *)(*(_QWORD *)v60 - 8LL));
LABEL_70:
  if ( a3 == 1 )
  {
    v49 = sub_15D1F10(*a4);
    v50 = sub_15F0200(v73);
    v51 = *(_DWORD **)(v49 + 24);
    if ( v51 )
    {
      if ( v50 == *v51 && !v51[1] )
      {
        v52 = sub_15F0420(v73);
        sub_15F2010(v70, v52, a2);
        if ( *(_QWORD *)v70 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v70 - 4LL) )
          {
            v53 = **(_QWORD **)v70;
            v54 = sub_15D1F10(*a4);
            sub_15F50D0(v74, v53, v54);
            v32 = *(_QWORD *)v74;
            sub_DFBCB0(a1);
            v57 = sub_15DC610(
                    *(_QWORD *)(a1 + 296),
                    v32,
                    1,
                    (int)a4,
                    v55,
                    v56,
                    v59,
                    v60[0],
                    (int)a4,
                    v62[0],
                    a1,
                    (char)v63,
                    v64,
                    1,
                    (int)v73,
                    v67);
            v58 = v57;
            if ( v57 )
              ++*(_DWORD *)(v57 + 8);
            sub_DF6300(*a7, a7[1]);
            *a7 = v58;
            if ( *(_QWORD *)v70 )
              goto LABEL_46;
            goto LABEL_47;
          }
          sub_186B220((void *)(*(_QWORD *)v70 - 8LL));
        }
      }
    }
  }
  v37 = 0;
LABEL_51:
  v38 = v72;
  if ( v72 )
  {
    v39 = (unsigned __int64)&v72[*((unsigned int *)v72 - 1)];
    if ( (unsigned __int64)v72 >= v39 )
      goto LABEL_59;
    do
    {
      while ( 1 )
      {
        v40 = *v38;
        if ( *v38 )
        {
          v17 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v38 >= v39 )
          goto LABEL_58;
      }
      sub_15D7BC0(v71, v40);
      ++v38;
    }
    while ( (unsigned __int64)v38 < v39 );
LABEL_58:
    v38 = v72;
    if ( v72 )
LABEL_59:
      sub_186B220(v38 - 1);
  }
  return v37;
}

