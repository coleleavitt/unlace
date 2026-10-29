__int64 __fastcall sub_7A4970(__int64 a1, int a2, unsigned int a3, char a4)
{
  char **v4; // rbp
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 result; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // r12
  unsigned int v25; // r13d
  unsigned int v26; // r15d
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // r8d
  _QWORD *v32; // r15
  unsigned int i; // ebx
  __int64 v34; // r13
  _QWORD *v35; // rax
  __int64 v36; // r12
  unsigned int v37; // edx
  size_t v38; // rsi
  unsigned int v39; // r14d
  unsigned int *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // eax
  unsigned int v47; // edx
  __int64 *v48; // rbx
  unsigned __int64 v49; // rbp
  __int64 v50; // rsi
  unsigned int v52; // edx
  size_t v53; // rsi
  unsigned int v54; // r14d
  unsigned int *v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // r12d
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // edx
  unsigned int v69; // r15d
  _QWORD *v70; // rbx
  unsigned int v71; // r12d
  __int64 v72; // r14
  _QWORD *v73; // rax
  unsigned int v74; // r13d
  unsigned int v75; // r15d
  size_t v76; // rsi
  unsigned int *v77; // rax
  unsigned int v78; // eax
  __int64 v79; // rdx
  unsigned int v80; // eax
  unsigned int v81; // edx
  unsigned int v82; // edx
  unsigned int v83; // [rsp+8h] [rbp-D0h]
  _QWORD *v84; // [rsp+8h] [rbp-D0h]
  _QWORD *v85; // [rsp+10h] [rbp-C8h]
  int v86[2]; // [rsp+18h] [rbp-C0h]
  _QWORD *v87; // [rsp+20h] [rbp-B8h]
  unsigned int v88; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v89; // [rsp+50h] [rbp-88h] BYREF
  _QWORD *v90; // [rsp+58h] [rbp-80h]
  __int64 *v91[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v92[11]; // [rsp+80h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  v88 = v9;
  v10 = *(_QWORD *)(a1 + 144);
  v90 = nullptr;
  v89 = v10;
  v91[0] = &v89;
  result = (__int64)&v88;
  v91[1] = (__int64 *)a1;
  v91[2] = (__int64 *)&v88;
  if ( !a4 )
  {
    v12 = *(_QWORD **)(a1 + 2352);
    if ( !v12 )
      return result;
    goto LABEL_5;
  }
  sub_7A2B40(v91, a3);
  v67 = sub_7A43D0((const __m128i *)a1, (__int64 *)(a1 + 8288), a2);
  sub_7A20B0(a1, a2, (_DWORD **)(a1 + 2360), v67);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
  if ( result )
    v68 = *(_DWORD *)(result - 4);
  else
    v68 = 0;
  v69 = v88;
  if ( v68 < v88 )
  {
    v70 = *(_QWORD **)(a1 + 2328);
    v71 = v68 + 1;
    v72 = v68;
    if ( v70 )
    {
      v80 = v68 + 1;
      v71 = v68;
      goto LABEL_82;
    }
    v73 = (_QWORD *)sub_186B270(0x18u);
    v70 = v73 + 1;
    *v73 = 2;
    v74 = 0;
    *(_QWORD *)(a1 + 2328) = v73 + 1;
    do
    {
LABEL_78:
      while ( 1 )
      {
        v78 = *((_DWORD *)v70 - 2);
        if ( v78 >= v71 )
          break;
        v75 = (3 * v78 + 1) >> 1;
        v76 = 8 * v75 + 8;
        if ( 8 * v78 + 8 >= (unsigned int)v76 || v78 >= v75 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v92, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v92);
          sub_233E40((__int64)v92);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v77 = (unsigned int *)sub_186B300(v70 - 1, v76);
        v70 = v77 + 2;
        *v77 = v75;
        *(_QWORD *)(a1 + 2328) = v77 + 2;
      }
      *((_DWORD *)v70 - 1) = v71;
      v69 = v88;
      result = 8LL * v74;
      v79 = 8LL * v71;
      if ( result == v79 )
      {
        v70[v72++] = 0;
        if ( v71 >= v69 )
          goto LABEL_87;
      }
      else
      {
        result = (__int64)memset((char *)v70 + result, 0, v79 - result);
        v70[v72++] = 0;
        if ( v71 >= v69 )
          goto LABEL_87;
      }
      v80 = v71 + 1;
LABEL_82:
      v81 = v71;
      v71 = v80;
      result = *((unsigned int *)v70 - 1);
      v74 = result;
    }
    while ( v81 >= (unsigned int)result );
    while ( 1 )
    {
      v70[v72++] = 0;
      if ( v71 >= v69 )
        break;
      v82 = v71++;
      if ( v82 >= (unsigned int)result )
        goto LABEL_78;
    }
  }
LABEL_87:
  v12 = *(_QWORD **)(a1 + 2352);
  if ( v12 )
  {
LABEL_5:
    result = (__int64)&v12[2 * *((unsigned int *)v12 - 1)];
    v87 = (_QWORD *)result;
    if ( (_QWORD *)result != v12 )
    {
      v85 = v12;
      *(_QWORD *)v86 = a1 + 1592;
      while ( 1 )
      {
        sub_13D4540(*(_QWORD *)v86);
        v13 = *(_QWORD *)(a1 + 2336);
        if ( v13 )
          *(_DWORD *)(v13 - 4) = 0;
        sub_13DBC80(v86[0]);
        sub_13D4550(*(_QWORD *)v86, a1 + 2336);
        v14 = *(_QWORD **)(a1 + 2336);
        if ( !v14 )
          break;
        v15 = *((_DWORD *)v14 - 1);
        if ( v15 != 1 )
          goto LABEL_11;
        v63 = *v14;
        if ( (v63 & 7) == 1 )
          goto LABEL_11;
        v64 = v63 & 0xFFFFFFFFFFFFFFF8LL;
        if ( *v85 != *(_QWORD *)(v64 + 16) || v85[1] != *(_QWORD *)(v64 + 24) )
          goto LABEL_11;
LABEL_36:
        v85 += 2;
        result = (__int64)v85;
        if ( v87 == v85 )
          goto LABEL_37;
      }
      v15 = 0;
LABEL_11:
      sub_7A2B40(v91, v15);
      v16 = sub_15E1B70(*(_QWORD *)(a1 + 144));
      v17 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v18 = v90;
      if ( v90 )
      {
        v19 = *((_DWORD *)v90 - 1);
        if ( v19 == *((_DWORD *)v90 - 2) )
        {
          v59 = (3 * v19 + 1) >> 1;
          v60 = 8 * v59 + 8;
          if ( 8 * v19 + 8 >= v60 || v19 >= v59 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v92, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v92);
            sub_233E40((__int64)v92);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300(v90 - 1, v60);
          v62 = v61[1];
          v18 = v61 + 2;
          *v61 = v59;
          v90 = v18;
          LODWORD(v61) = v62;
          v22 = &v18[v62];
          v21 = (_DWORD)v61 + 1;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = &v90[v20];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        *v66 = 2;
        v21 = 1;
        v18 = v66 + 1;
        v90 = v18;
        v22 = v18;
      }
      *v22 = v17;
      v23 = *(_QWORD **)(a1 + 2328);
      *((_DWORD *)v18 - 1) = v21;
      v24 = v88;
      v25 = v88 + 1;
      if ( v23 )
      {
        v26 = *((_DWORD *)v23 - 1);
        if ( v88 < v26 )
        {
          v27 = v88;
          goto LABEL_19;
        }
        if ( v26 >= v25 )
        {
          *((_DWORD *)v23 - 1) = v25;
          v27 = v88;
          v25 = v88 + 1;
          goto LABEL_19;
        }
      }
      else
      {
        if ( v88 == -1 )
        {
          v27 = -1;
          goto LABEL_19;
        }
        v65 = (_QWORD *)sub_186B270(0x18u);
        v26 = 0;
        *v65 = 2;
        v23 = v65 + 1;
        *(_QWORD *)(a1 + 2328) = v65 + 1;
      }
      while ( 1 )
      {
        v56 = *((_DWORD *)v23 - 2);
        if ( v56 >= v25 )
          break;
        v52 = (3 * v56 + 1) >> 1;
        v53 = 8 * v52 + 8;
        v54 = v52;
        if ( 8 * v56 + 8 >= (unsigned int)v53 || v56 >= v52 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v92, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v92);
          sub_233E40((__int64)v92);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v55 = (unsigned int *)sub_186B300(v23 - 1, v53);
        v23 = v55 + 2;
        *v55 = v54;
        *(_QWORD *)(a1 + 2328) = v55 + 2;
      }
      *((_DWORD *)v23 - 1) = v25;
      v27 = v88;
      v57 = 8LL * v26;
      v58 = 8LL * v25;
      if ( v57 != v58 )
      {
        v84 = v23;
        memset(&v23[(unsigned __int64)v57 / 8], 0, v58 - v57);
        v23 = v84;
      }
      v25 = v27 + 1;
LABEL_19:
      v23[v24] = v17;
      v88 = v25;
      v28 = sub_7A43D0((const __m128i *)a1, (__int64 *)(a1 + 8288), 2 * v27);
      sub_7A20B0(a1, 2 * v27, (_DWORD **)(a1 + 2360), v28);
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
      if ( v29 )
        v30 = *(_DWORD *)(v29 - 4);
      else
        v30 = 0;
      v31 = v88;
      if ( v30 < v88 )
      {
        v32 = *(_QWORD **)(a1 + 2328);
        i = v30 + 1;
        v34 = v30;
        if ( !v32 )
        {
          v35 = (_QWORD *)sub_186B270(0x18u);
          v32 = v35 + 1;
          v36 = 0;
          *(_QWORD *)(a1 + 2328) = v35 + 1;
          *v35 = 2;
          goto LABEL_27;
        }
        v44 = v30 + 1;
        for ( i = v30; ; v44 = i + 1 )
        {
          v45 = i;
          i = v44;
          v46 = *((_DWORD *)v32 - 1);
          v36 = v46;
          if ( v45 < v46 )
            break;
LABEL_27:
          while ( 1 )
          {
            v41 = *((_DWORD *)v32 - 2);
            if ( v41 >= i )
              break;
            v37 = (3 * v41 + 1) >> 1;
            v38 = 8 * v37 + 8;
            v39 = v37;
            if ( 8 * v41 + 8 >= (unsigned int)v38 || v41 >= v37 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v92, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v92);
              sub_233E40((__int64)v92);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = (unsigned int *)sub_186B300(v32 - 1, v38);
            v32 = v40 + 2;
            *v40 = v39;
            *(_QWORD *)(a1 + 2328) = v40 + 2;
          }
          v42 = 8 * v36;
          *((_DWORD *)v32 - 1) = i;
          v31 = v88;
          v43 = 8LL * i;
          if ( v42 == v43 )
          {
            v32[v34++] = 0;
            if ( i >= v31 )
              goto LABEL_36;
          }
          else
          {
            v83 = v88;
            memset(&v32[(unsigned __int64)v42 / 8], 0, v43 - v42);
            v31 = v83;
            v32[v34++] = 0;
            if ( i >= v83 )
              goto LABEL_36;
          }
        }
        while ( 1 )
        {
          v32[v34++] = 0;
          if ( i >= v31 )
            break;
          v47 = i++;
          if ( v47 >= v46 )
            goto LABEL_27;
        }
      }
      goto LABEL_36;
    }
  }
LABEL_37:
  v48 = v90;
  if ( v90 )
  {
    result = *((unsigned int *)v90 - 1);
    v49 = (unsigned __int64)&v90[result];
    if ( (unsigned __int64)v90 >= v49 )
      return sub_186B220(v48 - 1);
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          if ( (*(_DWORD *)(v50 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v48 >= v49 )
          goto LABEL_44;
      }
      result = sub_15D7BC0(v89, v50);
      ++v48;
    }
    while ( (unsigned __int64)v48 < v49 );
LABEL_44:
    v48 = v90;
    if ( v90 )
      return sub_186B220(v48 - 1);
  }
  return result;
}

