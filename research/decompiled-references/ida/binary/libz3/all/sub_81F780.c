__int64 __fastcall sub_81F780(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char *v9; // rax
  unsigned int v10; // r12d
  unsigned int v12; // eax
  _QWORD *v13; // rdi
  __int64 v14; // r13
  _DWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  _DWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  _DWORD *v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  _OWORD *v28; // rax
  _QWORD *v29; // rdx
  _OWORD *v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // r14
  __int64 v36; // r13
  __int64 v37; // r13
  __int64 v38; // rax
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rax
  unsigned int v43; // r14d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // ecx
  size_t v48; // rsi
  unsigned int *v49; // rax
  unsigned int v50; // r14d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rax
  unsigned int v54; // r14d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  _DWORD *v59; // rdx
  int v60; // eax
  int v61; // eax
  _DWORD *v62; // rdx
  int v63; // eax
  _DWORD *v64; // rdx
  _QWORD *v65; // rax
  _DWORD *v66; // rdx
  __int64 **v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  unsigned int v72; // [rsp+Ch] [rbp-6Ch]
  __int64 v73[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !sub_7E5030(a1, a2) )
  {
    v12 = sub_7E69A0(a1, a2);
    v13 = *(_QWORD **)(a1 + 336);
    v10 = v12;
    if ( v13 )
    {
      v14 = *((unsigned int *)v13 - 1);
      v15 = (_DWORD *)v13 + v14;
      if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
      {
        v43 = (unsigned int)(3 * v14 + 1) >> 1;
        v44 = 4 * v43 + 8;
        if ( 4 * (int)v14 + 8 >= (unsigned int)v44 || (unsigned int)v14 >= v43 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v45 = (unsigned int *)sub_186B300(v13 - 1, v44);
        v13 = v45 + 2;
        *v45 = v43;
        v46 = v45[1];
        *(_QWORD *)(a1 + 336) = v13;
        v15 = (_DWORD *)v13 + v46;
      }
    }
    else
    {
      LODWORD(v14) = 0;
      v65 = (_QWORD *)sub_186B270(0x10u);
      v13 = v65 + 1;
      *v65 = 2;
      *(_QWORD *)(a1 + 336) = v65 + 1;
      v15 = v65 + 1;
    }
    *v15 = v14;
    ++*((_DWORD *)v13 - 1);
    v16 = *(_QWORD **)(a1 + 344);
    if ( v16 )
    {
      v17 = *((unsigned int *)v16 - 1);
      if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
      {
        v39 = (unsigned int)(3 * v17 + 1) >> 1;
        v40 = 4 * v39 + 8;
        if ( 4 * (int)v17 + 8 >= (unsigned int)v40 || (unsigned int)v17 >= v39 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v16 - 1, v40);
        v16 = v41 + 2;
        *v41 = v39;
        v42 = v41[1];
        *(_QWORD *)(a1 + 344) = v16;
        v18 = (_DWORD *)v16 + v42;
      }
      else
      {
        v18 = (_DWORD *)v16 + v17;
      }
    }
    else
    {
      v71 = (_QWORD *)sub_186B270(0x10u);
      v16 = v71 + 1;
      *v71 = 2;
      *(_QWORD *)(a1 + 344) = v71 + 1;
      v18 = v71 + 1;
    }
    *v18 = 1;
    ++*((_DWORD *)v16 - 1);
    v19 = *(_QWORD **)(a1 + 352);
    if ( v19 )
    {
      v20 = *((unsigned int *)v19 - 1);
      if ( (_DWORD)v20 == *((_DWORD *)v19 - 2) )
      {
        v50 = (unsigned int)(3 * v20 + 1) >> 1;
        v51 = 4 * v50 + 8;
        if ( 4 * (int)v20 + 8 >= (unsigned int)v51 || (unsigned int)v20 >= v50 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = (unsigned int *)sub_186B300(v19 - 1, v51);
        v19 = v52 + 2;
        *v52 = v50;
        v53 = v52[1];
        *(_QWORD *)(a1 + 352) = v19;
        v21 = (_DWORD *)v19 + v53;
      }
      else
      {
        v21 = (_DWORD *)v19 + v20;
      }
    }
    else
    {
      v69 = (_QWORD *)sub_186B270(0x10u);
      v19 = v69 + 1;
      *v69 = 2;
      *(_QWORD *)(a1 + 352) = v69 + 1;
      v21 = v69 + 1;
    }
    v22 = *(_QWORD **)(a1 + 328);
    *v21 = v14;
    ++*((_DWORD *)v19 - 1);
    v23 = (_QWORD *)*v22;
    if ( *v22 )
    {
      v24 = *((_DWORD *)v23 - 1);
      if ( v24 == *((_DWORD *)v23 - 2) )
      {
        v47 = (3 * v24 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v48 || v24 >= v47 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v72 = (3 * v24 + 1) >> 1;
        v49 = (unsigned int *)sub_186B300(v23 - 1, v48);
        v23 = v49 + 2;
        *v22 = v49 + 2;
        *v49 = v72;
        LODWORD(v49) = v49[1];
        v27 = &v23[(unsigned int)v49];
        v26 = (_DWORD)v49 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v23[v25];
      }
    }
    else
    {
      v70 = (_QWORD *)sub_186B270(0x18u);
      v23 = v70 + 1;
      *v70 = 2;
      v26 = 1;
      *v22 = v23;
      v27 = v23;
    }
    *v27 = a1 + 360;
    *((_DWORD *)v23 - 1) = v26;
    if ( (_DWORD)v14 != v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 214);
    }
    v28 = (_OWORD *)sub_186B270(0x10u);
    v29 = *(_QWORD **)(a1 + 312);
    v30 = v28;
    *v28 = 0;
    if ( v29 )
    {
      v31 = *((_DWORD *)v29 - 1);
      if ( v31 == *((_DWORD *)v29 - 2) )
      {
        v54 = (3 * v31 + 1) >> 1;
        v55 = 8 * v54 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v55 || v31 >= v54 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v73, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v73);
          sub_233E40((__int64)v73);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v56 = (unsigned int *)sub_186B300(v29 - 1, v55);
        v57 = v56[1];
        v29 = v56 + 2;
        *v56 = v54;
        *(_QWORD *)(a1 + 312) = v56 + 2;
        LODWORD(v56) = v57;
        v34 = &v29[v57];
        v33 = (_DWORD)v56 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v29[v32];
      }
    }
    else
    {
      v68 = (_QWORD *)sub_186B270(0x18u);
      v29 = v68 + 1;
      *v68 = 2;
      v33 = 1;
      *(_QWORD *)(a1 + 312) = v29;
      v34 = v29;
    }
    *v34 = v30;
    *((_DWORD *)v29 - 1) = v33;
    v35 = v29[v10];
    sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, a2, v10, *(unsigned int *)(a1 + 12));
    v36 = *(_QWORD *)a2;
    if ( !*(_WORD *)(*(_QWORD *)a2 + 4LL) )
    {
      v58 = sub_15F0200(a1 + 112);
      if ( !*(_WORD *)(v36 + 4) )
      {
        v59 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
        if ( v59 )
        {
          if ( v58 == *v59 && !v59[1] )
          {
            *(_QWORD *)(v35 + 8) = a2;
            sub_81C290(a1, (__int64 *)a2);
            return v10;
          }
        }
      }
      v36 = *(_QWORD *)a2;
      if ( !*(_WORD *)(*(_QWORD *)a2 + 4LL) )
      {
        v60 = sub_15F0200(a1 + 112);
        if ( !*(_WORD *)(v36 + 4) )
        {
          v66 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
          if ( v66 )
          {
            if ( v60 == *v66 && v66[1] == 4 )
            {
              sub_81C570(a1, (__int64 *)a2);
              return v10;
            }
          }
        }
        v36 = *(_QWORD *)a2;
        if ( !*(_WORD *)(*(_QWORD *)a2 + 4LL) )
        {
          v61 = sub_15F0200(a1 + 112);
          if ( !*(_WORD *)(v36 + 4) )
          {
            v62 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
            if ( v62 )
            {
              if ( v61 == *v62 && v62[1] == 1 )
                return v10;
            }
          }
          v63 = sub_15F0200(a1 + 112);
          if ( !*(_WORD *)(v36 + 4) )
          {
            v64 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
            if ( v64 )
            {
              if ( v63 == *v64 && v64[1] == 2 )
                return v10;
            }
          }
          v36 = *(_QWORD *)a2;
        }
      }
    }
    v37 = sub_15D1F10(v36);
    if ( (unsigned int)sub_15F10D0(a1 + 112, v37) == 1 )
    {
      v67 = (__int64 **)sub_15F6BE0(a1 + 112, v37);
      sub_81D0D0(a1, (__int64 *)a2, **v67);
    }
    else if ( !*(_DWORD *)(sub_7E4EB0(a1) + 464)
           || *(_DWORD *)(sub_7E4EB0(a1) + 464) == 1 && (v38 = *(_QWORD *)(v37 + 24)) != 0 && *(_DWORD *)(v38 + 24) != 2 )
    {
      sub_81D970(a1, v10, 0);
    }
    return v10;
  }
  v9 = (char *)(a2 + 88);
  if ( *(int *)(a2 + 88) >> 8 == -1 )
  {
    return (unsigned int)-1;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v9 )
    {
      v9 = *((char **)v9 + 1);
      if ( !v9 )
        return (unsigned int)-1;
    }
    return (unsigned int)(*(int *)v9 >> 8);
  }
}

