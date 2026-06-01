__int64 __fastcall sub_AE2460(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // rbp
  _QWORD *v9; // rdx
  unsigned int v10; // r13d
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r12
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *v23; // rdx
  __int64 result; // rax
  int v25; // edx
  _QWORD *v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  _QWORD *v29; // rdx
  unsigned int v30; // r12d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // ebp
  __int64 v37; // rax
  __int64 v38; // r13
  _QWORD *v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __int64 *v43; // rdx
  unsigned int v44; // r12d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned int v49; // ebp
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  unsigned int v54; // ebp
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r13
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  _QWORD *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rdi
  _QWORD *v69; // rax
  unsigned int v70; // r14d
  unsigned int v71; // ecx
  unsigned int *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  _QWORD *v75; // rdx
  __int64 v76; // [rsp+10h] [rbp-58h] BYREF
  __int64 v77; // [rsp+18h] [rbp-50h]
  __int64 v78[9]; // [rsp+20h] [rbp-48h] BYREF

  v9 = (_QWORD *)a1[11];
  v10 = *(_DWORD *)(a2 + 16);
  if ( v9 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v44 = (3 * v11 + 1) >> 1;
      v45 = 8 * v44 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v45 || v11 >= v44 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v78, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v78);
        sub_233E40((__int64)v78);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v46 = (unsigned int *)sub_186B300(v9 - 1, v45);
      v47 = v46[1];
      v9 = v46 + 2;
      *v46 = v44;
      a1[11] = v46 + 2;
      LODWORD(v46) = v47;
      v14 = &v9[v47];
      v13 = (_DWORD)v46 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v9[v12];
    }
  }
  else
  {
    v48 = (_QWORD *)sub_186B270(0x18u);
    v9 = v48 + 1;
    *v48 = 2;
    v13 = 1;
    a1[11] = v9;
    v14 = v9;
  }
  *v14 = 0;
  *((_DWORD *)v9 - 1) = v13;
  v15 = a1[20];
  if ( v15 && (v16 = *(_DWORD *)(v15 - 4), v10 < v16) && (v17 = v16 - v10 - 1, (v18 = *(_QWORD *)(v15 + 8 * v17)) != 0) )
  {
    if ( !*(_WORD *)(v18 + 4) && (*(_BYTE *)(v18 + 30) & 1) != 0 || (v34 = *(_DWORD *)(a1[66] + 4 * v17), v34 == v16) )
    {
      v19 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v18 + 8);
      if ( v19 )
      {
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 == *((_DWORD *)v19 - 2) )
        {
          v49 = (3 * v20 + 1) >> 1;
          v50 = 8 * v49 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v50 || v20 >= v49 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v78, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = (unsigned int *)sub_186B300(v19 - 1, v50);
          v52 = v51[1];
          v19 = v51 + 2;
          *v51 = v49;
          a1[7] = v51 + 2;
          LODWORD(v51) = v52;
          v23 = &v19[v52];
          v22 = (_DWORD)v51 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v19[v21];
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x18u);
        v19 = v69 + 1;
        *v69 = 2;
        v22 = 1;
        a1[7] = v19;
        v23 = v19;
      }
      *v23 = v18;
      *((_DWORD *)v19 - 1) = v22;
    }
    else
    {
      v35 = v16 - v34;
      v36 = v35;
      v37 = sub_1680FB0(a1[4], v18, v35);
      v38 = v37;
      if ( v37 )
      {
        v39 = (_QWORD *)a1[7];
        ++*(_DWORD *)(v37 + 8);
        if ( v39 )
        {
          v40 = *((_DWORD *)v39 - 1);
          if ( v40 == *((_DWORD *)v39 - 2) )
          {
            v54 = (3 * v40 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * v40 + 8 >= (unsigned int)v55 || v40 >= v54 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v78, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v78);
              sub_233E40((__int64)v78);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = (unsigned int *)sub_186B300(v39 - 1, v55);
            v57 = v56[1];
            v39 = v56 + 2;
            *v56 = v54;
            a1[7] = v56 + 2;
            LODWORD(v56) = v57;
            v43 = &v39[v57];
            v42 = (_DWORD)v56 + 1;
          }
          else
          {
            v41 = v40;
            v42 = v40 + 1;
            v43 = &v39[v41];
          }
        }
        else
        {
          v74 = (_QWORD *)sub_186B270(0x18u);
          v39 = v74 + 1;
          *v74 = 2;
          v42 = 1;
          a1[7] = v39;
          v43 = v39;
        }
        *v43 = v38;
        *((_DWORD *)v39 - 1) = v42;
      }
      else
      {
        v58 = a1[1];
        v76 = 0;
        v77 = v58;
        sub_1585D20(a1 + 21, v18, 0, v36, 0, &v76);
        v59 = v76;
        if ( v76 )
          ++*(_DWORD *)(v76 + 8);
        v60 = (_QWORD *)a1[7];
        if ( v60 )
        {
          v61 = *((_DWORD *)v60 - 1);
          if ( v61 == *((_DWORD *)v60 - 2) )
          {
            v70 = (3 * v61 + 1) >> 1;
            v71 = 8 * v70 + 8;
            if ( 8 * v61 + 8 >= v71 || v61 >= v70 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v78, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v78);
              sub_233E40((__int64)v78);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v72 = (unsigned int *)sub_186B300(v60 - 1, v71);
            v73 = v72[1];
            v60 = v72 + 2;
            *v72 = v70;
            a1[7] = v72 + 2;
            LODWORD(v72) = v73;
            v64 = &v60[v73];
            v63 = (_DWORD)v72 + 1;
          }
          else
          {
            v62 = v61;
            v63 = v61 + 1;
            v64 = &v60[v62];
          }
        }
        else
        {
          v75 = (_QWORD *)sub_186B270(0x18u);
          *v75 = 2;
          v63 = 1;
          v60 = v75 + 1;
          a1[7] = v60;
          v64 = v60;
        }
        *v64 = v59;
        v65 = v76;
        *((_DWORD *)v60 - 1) = v63;
        sub_1584390(a1, v18, v36, v65);
        v66 = v76;
        if ( v76 )
        {
          v67 = v77;
          if ( (*(_DWORD *)(v76 + 8))-- == 1 )
            sub_15D7BC0(v67, v66);
        }
      }
    }
    result = a1[5];
    if ( result )
    {
      v25 = *(_DWORD *)(result - 4);
      if ( v25 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v25 - 1) + 8) |= 2u;
    }
  }
  else
  {
    v26 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v26 )
    {
      v27 = *((_DWORD *)v26 - 1);
      if ( v27 == *((_DWORD *)v26 - 2) )
      {
        v30 = (3 * v27 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v31 || v27 >= v30 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v78, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v78);
          sub_233E40((__int64)v78);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v26 - 1, v31);
        v33 = v32[1];
        v26 = v32 + 2;
        *v32 = v30;
        a1[7] = v32 + 2;
        LODWORD(v32) = v33;
        v29 = &v26[v33];
        result = (unsigned int)((_DWORD)v32 + 1);
      }
      else
      {
        v28 = v27;
        result = v27 + 1;
        v29 = &v26[v28];
      }
    }
    else
    {
      v53 = (_QWORD *)sub_186B270(0x18u);
      v26 = v53 + 1;
      *v53 = 2;
      result = 1;
      a1[7] = v26;
      v29 = v26;
    }
    *v29 = a2;
    *((_DWORD *)v26 - 1) = result;
  }
  return result;
}

