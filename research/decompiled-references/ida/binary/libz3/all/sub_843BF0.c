__int64 __fastcall sub_843BF0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // r15
  __int64 v24; // rbp
  _QWORD *v25; // r13
  unsigned int v26; // r14d
  __int64 v27; // r12
  int j; // ebp
  __int64 v29; // r8
  __int64 *v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rax
  int v33; // edi
  unsigned int v34; // edx
  __int64 *v35; // rsi
  __int64 v36; // rdx
  __int64 *v37; // r9
  __int64 *k; // rax
  __int64 v39; // rdx
  __int64 *i; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 *v46; // rcx
  __int64 *v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // edi
  unsigned int v51; // edx
  __int64 *v52; // rsi
  __int64 v53; // rdx
  __int64 *v54; // r8
  __int64 v55; // rdx
  __int64 *v56; // rcx
  __int64 v57; // r9
  __int64 v58; // rdx
  int v59; // edi
  unsigned int v60; // r10d
  __int64 *v61; // rsi
  __int64 v62; // r10
  __int64 *v63; // r8
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // r12d
  unsigned int v70; // ecx
  unsigned int *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rbx
  _QWORD *v79; // rdx
  unsigned int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  __int64 *v83; // rcx
  __int64 *v84; // rcx
  __int64 v85; // r9
  __int64 v86; // rax
  int v87; // edi
  unsigned int v88; // edx
  __int64 *v89; // rsi
  __int64 v90; // rdx
  __int64 *v91; // r8
  __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  unsigned int v95; // r14d
  unsigned int v96; // ecx
  unsigned int *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v102; // [rsp+8h] [rbp-70h]
  __int64 v103[11]; // [rsp+20h] [rbp-58h] BYREF

  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(unsigned int *)(a1 + 120);
  v15 = *(_QWORD *)(a1 + 112);
  v16 = a3 + *(_DWORD *)(v13 + 12);
  v17 = v14 - 1;
  result = 32 * v14;
  v19 = v15 + result;
  v20 = 32LL * (v16 & v17);
  v21 = v15 + v20;
  if ( v20 != result )
  {
    for ( result = v15 + v20; v19 != result; result += 32 )
    {
      v22 = *(_DWORD *)(result + 4);
      if ( v22 == 2 )
      {
        if ( v16 == *(_DWORD *)result && a3 == *(_DWORD *)(result + 16) && v13 == *(_QWORD *)(result + 8) )
          goto LABEL_9;
      }
      else if ( !v22 )
      {
        return result;
      }
    }
  }
  if ( v15 == v21 )
    return result;
  result = *(unsigned int *)(v15 + 4);
  if ( (_DWORD)result == 2 )
    goto LABEL_39;
LABEL_36:
  if ( !(_DWORD)result )
    return result;
  do
  {
    v15 += 32;
    if ( v21 == v15 )
      return result;
    result = *(unsigned int *)(v15 + 4);
    if ( (_DWORD)result != 2 )
      goto LABEL_36;
LABEL_39:
    ;
  }
  while ( v16 != *(_DWORD *)v15 || a3 != *(_DWORD *)(v15 + 16) || v13 != *(_QWORD *)(v15 + 8) );
  result = v15;
LABEL_9:
  v23 = *(_QWORD *)(result + 24);
  if ( !v23 )
    return result;
  v24 = a3;
  result = (__int64)sub_843620(a1, *(_QWORD *)(v13 + 8LL * a3 + 48));
  v25 = (_QWORD *)result;
  if ( !result )
    return result;
  result = *(_QWORD *)(v23 + 8);
  if ( !result )
    return result;
  v26 = *(_DWORD *)(result - 4);
  if ( v26 <= 1 )
    return result;
  v102 = *(_QWORD *)(a2 + 8 * v24 + 32);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v25 + 24LL))(v25, a4, *(_QWORD *)(result + 8)) )
  {
    v47 = *(__int64 **)(v23 + 16);
    v48 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL);
    v49 = *(unsigned int *)(v23 + 24);
    v50 = *(_DWORD *)(v48 + 12);
    v51 = v49 - 1;
    v49 *= 16;
    v52 = (__int64 *)((char *)v47 + v49);
    v53 = 16LL * (v50 & v51);
    v54 = &v47[(unsigned __int64)v53 / 8];
    if ( v53 != v49 )
    {
      for ( i = &v47[(unsigned __int64)v53 / 8]; v52 != i; i += 2 )
      {
        v55 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v55 + 12) == v50 && v48 == v55 )
          {
LABEL_27:
            v41 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v25 + 16LL))(v25, v102, i[1]);
            v42 = v41;
            if ( v41 )
              ++*(_DWORD *)(v41 + 8);
            v43 = *(_QWORD **)(a5 + 8);
            if ( v43 )
            {
              v44 = *((_DWORD *)v43 - 1);
              if ( v44 != *((_DWORD *)v43 - 2) )
                goto LABEL_31;
              v69 = (3 * v44 + 1) >> 1;
              v70 = 8 * v69 + 8;
              if ( 8 * v44 + 8 >= v70 || v44 >= v69 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v103, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v103);
                sub_233E40((__int64)v103);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
LABEL_85:
              v71 = (unsigned int *)sub_186B300(v43 - 1, v70);
              v72 = v71[1];
              v43 = v71 + 2;
              *(_QWORD *)(a5 + 8) = v71 + 2;
              *v71 = v69;
              LODWORD(v71) = v72;
              v46 = &v43[v72];
              result = (unsigned int)((_DWORD)v71 + 1);
              goto LABEL_32;
            }
LABEL_86:
            v73 = (_QWORD *)sub_186B270(0x18u);
            *v73 = 2;
            v43 = v73 + 1;
            *(_QWORD *)(a5 + 8) = v73 + 1;
            v46 = v73 + 1;
            result = 1;
            goto LABEL_32;
          }
        }
        else if ( !v55 )
        {
          goto LABEL_139;
        }
      }
    }
    for ( ; v54 != v47; v47 += 2 )
    {
      v67 = *v47;
      if ( (unsigned __int64)*v47 > 1 )
      {
        if ( *(_DWORD *)(v67 + 12) == v50 && v48 == v67 )
        {
          i = v47;
          goto LABEL_27;
        }
      }
      else if ( !v67 )
      {
        break;
      }
    }
LABEL_139:
    BUG();
  }
  v27 = 16;
  for ( j = 2; v26 != j; v27 += 8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v25 + 24LL))(
           v25,
           a4,
           *(_QWORD *)(*(_QWORD *)(v23 + 8) + v27)) )
    {
      v30 = *(__int64 **)(v23 + 16);
      v31 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL * (unsigned int)(j - 1));
      v32 = *(unsigned int *)(v23 + 24);
      v33 = *(_DWORD *)(v31 + 12);
      v34 = v32 - 1;
      v32 *= 16;
      v35 = (__int64 *)((char *)v30 + v32);
      v36 = 16LL * (v33 & v34);
      v37 = &v30[(unsigned __int64)v36 / 8];
      if ( v36 != v32 )
      {
        for ( k = &v30[(unsigned __int64)v36 / 8]; v35 != k; k += 2 )
        {
          v39 = *k;
          if ( (unsigned __int64)*k > 1 )
          {
            if ( *(_DWORD *)(v39 + 12) == v33 && v31 == v39 )
              goto LABEL_96;
          }
          else if ( !v39 )
          {
            goto LABEL_133;
          }
        }
      }
      while ( v37 != v30 )
      {
        v68 = *v30;
        if ( (unsigned __int64)*v30 > 1 )
        {
          if ( *(_DWORD *)(v68 + 12) == v33 && v31 == v68 )
          {
            k = v30;
LABEL_96:
            v76 = v25[1];
            (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64 *, __int64, __int64 *))(*v25 + 16LL))(
              v25,
              v102,
              k[1],
              v30,
              v29,
              v37);
            v77 = sub_15E1A70(v76);
            v78 = v77;
            if ( v77 )
              ++*(_DWORD *)(v77 + 8);
            v79 = *(_QWORD **)(a5 + 8);
            if ( v79 )
            {
              v80 = *((_DWORD *)v79 - 1);
              if ( v80 == *((_DWORD *)v79 - 2) )
              {
                v95 = (3 * v80 + 1) >> 1;
                v96 = 8 * v95 + 8;
                if ( 8 * v80 + 8 >= v96 || v80 >= v95 )
                {
                  v8 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v103, "Overflow encountered when expanding vector");
                  *v8 = (char *)off_1C63128;
                  sub_2333C0(v8 + 1, v103);
                  sub_233E40((__int64)v103);
                  __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v97 = (unsigned int *)sub_186B300(v79 - 1, v96);
                v98 = v97[1];
                v79 = v97 + 2;
                *v97 = v95;
                *(_QWORD *)(a5 + 8) = v97 + 2;
                LODWORD(v97) = v98;
                v83 = &v79[v98];
                v82 = (_DWORD)v97 + 1;
              }
              else
              {
                v81 = v80;
                v82 = v80 + 1;
                v83 = &v79[v81];
              }
            }
            else
            {
              v100 = (_QWORD *)sub_186B270(0x18u);
              *v100 = 2;
              v79 = v100 + 1;
              *(_QWORD *)(a5 + 8) = v100 + 1;
              v83 = v100 + 1;
              v82 = 1;
            }
            *v83 = v78;
            v84 = *(__int64 **)(v23 + 16);
            *((_DWORD *)v79 - 1) = v82;
            v85 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + v27);
            v86 = *(unsigned int *)(v23 + 24);
            v87 = *(_DWORD *)(v85 + 12);
            v88 = v86 - 1;
            v86 *= 16;
            v89 = (__int64 *)((char *)v84 + v86);
            v90 = 16LL * (v87 & v88);
            v91 = &v84[(unsigned __int64)v90 / 8];
            if ( v90 == v86 )
            {
LABEL_109:
              while ( v91 != v84 )
              {
                v94 = *v84;
                if ( (unsigned __int64)*v84 > 1 )
                {
                  if ( *(_DWORD *)(v94 + 12) == v87 && v85 == v94 )
                  {
                    v92 = v84;
                    goto LABEL_121;
                  }
                }
                else if ( !v94 )
                {
                  break;
                }
                v84 += 2;
              }
LABEL_137:
              BUG();
            }
            v92 = &v84[(unsigned __int64)v90 / 8];
            while ( 1 )
            {
              v93 = *v92;
              if ( (unsigned __int64)*v92 > 1 )
              {
                if ( *(_DWORD *)(v93 + 12) == v87 && v85 == v93 )
                {
LABEL_121:
                  v99 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64 *, __int64 *))(*v25 + 16LL))(
                          v25,
                          v102,
                          v92[1],
                          v84,
                          v91);
                  v42 = v99;
                  if ( v99 )
                    ++*(_DWORD *)(v99 + 8);
                  v43 = *(_QWORD **)(a5 + 8);
                  if ( v43 )
                  {
                    v44 = *((_DWORD *)v43 - 1);
                    if ( v44 != *((_DWORD *)v43 - 2) )
                      goto LABEL_31;
                    v69 = (3 * v44 + 1) >> 1;
                    v70 = 8 * v69 + 8;
                    if ( 8 * v44 + 8 >= v70 || v44 >= v69 )
                    {
                      v7 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v103, "Overflow encountered when expanding vector");
                      *v7 = (char *)off_1C63128;
                      sub_2333C0(v7 + 1, v103);
                      sub_233E40((__int64)v103);
                      __cxa_throw(
                        v7,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    goto LABEL_85;
                  }
                  goto LABEL_86;
                }
              }
              else if ( !v93 )
              {
                goto LABEL_137;
              }
              v92 += 2;
              if ( v89 == v92 )
                goto LABEL_109;
            }
          }
        }
        else if ( !v68 )
        {
          break;
        }
        v30 += 2;
      }
LABEL_133:
      BUG();
    }
    ++j;
  }
  v56 = *(__int64 **)(v23 + 16);
  v57 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL * (v26 - 1));
  v58 = *(unsigned int *)(v23 + 24);
  v59 = *(_DWORD *)(v57 + 12);
  v60 = v58 - 1;
  v58 *= 16;
  v61 = (__int64 *)((char *)v56 + v58);
  v62 = 16LL * (v59 & v60);
  v63 = &v56[(unsigned __int64)v62 / 8];
  v64 = &v56[(unsigned __int64)v62 / 8];
  if ( v62 == v58 )
  {
LABEL_59:
    while ( v63 != v56 )
    {
      v66 = *v56;
      if ( (unsigned __int64)*v56 > 1 )
      {
        if ( *(_DWORD *)(v66 + 12) == v59 && v57 == v66 )
        {
          v64 = v56;
          goto LABEL_88;
        }
      }
      else if ( !v66 )
      {
        break;
      }
      v56 += 2;
    }
LABEL_136:
    BUG();
  }
  while ( 1 )
  {
    v65 = *v64;
    if ( (unsigned __int64)*v64 > 1 )
      break;
    if ( !v65 )
      goto LABEL_136;
LABEL_55:
    v64 += 2;
    if ( v61 == v64 )
      goto LABEL_59;
  }
  if ( *(_DWORD *)(v65 + 12) != v59 || v57 != v65 )
    goto LABEL_55;
LABEL_88:
  v74 = v25[1];
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v25 + 16LL))(v25, v102, v64[1]);
  v75 = sub_15E1A70(v74);
  v42 = v75;
  if ( v75 )
    ++*(_DWORD *)(v75 + 8);
  v43 = *(_QWORD **)(a5 + 8);
  if ( !v43 )
    goto LABEL_86;
  v44 = *((_DWORD *)v43 - 1);
  if ( v44 == *((_DWORD *)v43 - 2) )
  {
    v69 = (3 * v44 + 1) >> 1;
    v70 = 8 * v69 + 8;
    if ( 8 * v44 + 8 >= v70 || v44 >= v69 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v103, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v103);
      sub_233E40((__int64)v103);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_85;
  }
LABEL_31:
  v45 = v44;
  result = v44 + 1;
  v46 = &v43[v45];
LABEL_32:
  *v46 = v42;
  *((_DWORD *)v43 - 1) = result;
  return result;
}

