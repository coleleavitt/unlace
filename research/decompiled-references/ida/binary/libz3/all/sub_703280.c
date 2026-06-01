__int64 __fastcall sub_703280(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int *v6; // r14
  __int64 v7; // r13
  unsigned int v8; // edx
  size_t v9; // rsi
  unsigned int v10; // r15d
  unsigned int *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r15
  unsigned int v15; // ebp
  _QWORD *v16; // rax
  unsigned int *v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rbp
  _DWORD *v20; // r15
  __int64 result; // rax
  unsigned int *v22; // r13
  unsigned int *i; // rbp
  unsigned int v24; // r15d
  __int64 v25; // rdi
  unsigned int *v26; // rdx
  __int64 v27; // rsi
  int v28; // eax
  unsigned int *v29; // r10
  __int64 v30; // rax
  unsigned int *j; // rax
  unsigned int v32; // edi
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int *k; // r13
  _DWORD *v37; // rbp
  _DWORD *v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rdx
  _DWORD *v41; // rdx
  unsigned int v42; // eax
  unsigned int **v43; // r14
  unsigned int *v44; // r13
  unsigned int *v45; // rdx
  _QWORD *v46; // rax
  unsigned int v47; // ebp
  unsigned int *v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // r15d
  size_t v51; // rsi
  unsigned int *v52; // rax
  unsigned int v53; // ecx
  size_t v54; // rsi
  unsigned int *v55; // rax
  unsigned int v56; // ebp
  __int64 v57; // r15
  unsigned int v58; // eax
  unsigned int *v59; // rbp
  unsigned int *v60; // r12
  unsigned int v61; // esi
  _QWORD *v62; // rax
  char **v63; // r12
  char **v64; // r12
  char **exception; // r12
  unsigned int *v66; // [rsp+0h] [rbp-98h]
  int v67; // [rsp+8h] [rbp-90h]
  __int64 v68; // [rsp+8h] [rbp-90h]
  unsigned int v69; // [rsp+8h] [rbp-90h]
  unsigned int v70; // [rsp+14h] [rbp-84h]
  unsigned int v71; // [rsp+14h] [rbp-84h]
  int *v72; // [rsp+18h] [rbp-80h]
  unsigned int v74; // [rsp+28h] [rbp-70h]
  __int64 v76; // [rsp+30h] [rbp-68h] BYREF
  _DWORD *v77; // [rsp+38h] [rbp-60h]
  __int64 v78[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = nullptr;
  v5 = *(_QWORD *)(a1 + 152);
  v66 = nullptr;
  if ( v5 )
  {
    v74 = 0;
    do
    {
      if ( v74 >= *(_DWORD *)(v5 - 4) )
        break;
      if ( v74 >= a2 )
      {
        v43 = (unsigned int **)(v5 + 8LL * v74);
        v44 = *v43;
        v45 = *v43;
        if ( *v43 && *(v44 - 1) )
        {
          if ( !v66 )
          {
            v46 = (_QWORD *)sub_186B270(0x10u);
            *v46 = 2;
            v45 = *v43;
            v47 = 0;
            v66 = (unsigned int *)(v46 + 1);
            v48 = (unsigned int *)(v46 + 1);
            goto LABEL_69;
          }
          v47 = 0;
          do
          {
            v49 = *(v66 - 1);
            if ( (_DWORD)v49 == *(v66 - 2) )
            {
              v50 = (unsigned int)(3 * v49 + 1) >> 1;
              v51 = 4 * v50 + 8;
              if ( 4 * (int)v49 + 8 >= (unsigned int)v51 || (unsigned int)v49 >= v50 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_6FFCA0(v78, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v78);
                sub_233E40((__int64)v78);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v52 = (unsigned int *)sub_186B300(v66 - 2, v51);
              *v52 = v50;
              v66 = v52 + 2;
              v45 = *v43;
              v48 = &v52[v52[1] + 2];
            }
            else
            {
              v48 = &v66[v49];
            }
LABEL_69:
            ++v47;
            *v48 = *v44;
            ++*(v66 - 1);
            if ( !v45 )
              break;
            v44 = &v45[v47];
          }
          while ( v47 < *(v45 - 1) );
LABEL_19:
          v5 = *(_QWORD *)(a1 + 152);
        }
      }
      else
      {
        v6 = *(int **)(*(_QWORD *)(a1 + 160) + 8LL * v74);
        if ( v6 )
        {
          v72 = &v6[*(v6 - 1)];
          if ( v6 != v72 )
          {
            v67 = *v6;
            v7 = (unsigned int)*v6 >> 5;
            if ( v4 )
            {
              while ( 1 )
              {
                v15 = v7 + 1;
                v70 = *((_DWORD *)v4 - 1);
                if ( (unsigned int)v7 >= v70 )
                  break;
LABEL_9:
                ++v6;
                *((_DWORD *)v4 + v7) |= 1 << v67;
                if ( v72 == v6 )
                  goto LABEL_19;
                v67 = *v6;
                v7 = (unsigned int)*v6 >> 5;
              }
            }
            else
            {
              v15 = v7 + 1;
              v16 = (_QWORD *)sub_186B270(0x10u);
              v70 = 0;
              *v16 = 2;
              v4 = v16 + 1;
            }
            while ( 1 )
            {
              v12 = *((_DWORD *)v4 - 2);
              if ( v12 >= v15 )
                break;
              v8 = (3 * v12 + 1) >> 1;
              v9 = 4 * v8 + 8;
              v10 = v8;
              if ( 4 * v12 + 8 >= (unsigned int)v9 || v12 >= v8 )
              {
                v63 = (char **)__cxa_allocate_exception(0x28u);
                sub_6FFCA0(v78, "Overflow encountered when expanding vector");
                *v63 = (char *)off_1C63128;
                sub_2333C0(v63 + 1, v78);
                sub_233E40((__int64)v78);
                __cxa_throw(v63, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v11 = (unsigned int *)sub_186B300(v4 - 1, v9);
              *v11 = v10;
              v4 = v11 + 2;
            }
            *((_DWORD *)v4 - 1) = v15;
            v13 = 4LL * v15;
            v14 = 4LL * v70;
            if ( v14 != v13 )
              memset((char *)v4 + v14, 0, v13 - v14);
            goto LABEL_9;
          }
        }
      }
      ++v74;
    }
    while ( v5 );
  }
  sub_1144D70(a1 + 40, a1 + 64);
  sub_1142080(a1 + 40, a1 + 96);
  v68 = sub_1142070(a1 + 40);
  v18 = (_DWORD *)a3[1];
  v76 = a1 + 40;
  v77 = nullptr;
  if ( v18 )
  {
    v19 = &v18[*(v18 - 1)];
    if ( v18 == v19 )
      goto LABEL_26;
    v20 = v18;
    do
      sub_1144670(*a3, *v20++ >> 1);
    while ( v19 != v20 );
    v19 = (_DWORD *)a3[1];
    if ( v19 )
LABEL_26:
      *(v19 - 1) = 0;
  }
  result = a1;
  v22 = *(unsigned int **)(a1 + 360);
  if ( v22 )
  {
    result = *(v22 - 1);
    for ( i = &v22[result]; i != v22; ++v22 )
    {
      v24 = *v22;
      v25 = *(unsigned int *)(a1 + 312);
      v26 = *(unsigned int **)(a1 + 304);
      v27 = *v22 >> 1;
      v28 = v25 - 1;
      v25 *= 24;
      v29 = (unsigned int *)((char *)v26 + v25);
      v30 = 24LL * ((unsigned int)v27 & v28);
      v17 = &v26[(unsigned __int64)v30 / 4];
      if ( v30 != v25 )
      {
        for ( j = &v26[(unsigned __int64)v30 / 4]; v29 != j; j += 6 )
        {
          v32 = j[1];
          if ( v32 == 2 )
          {
            if ( (_DWORD)v27 == *j && (_DWORD)v27 == j[2] )
            {
LABEL_36:
              result = v24 >> 6;
              if ( v4 )
              {
                if ( (unsigned int)result < *((_DWORD *)v4 - 1) )
                {
                  v17 = (unsigned int *)(unsigned int)v27;
                  v26 = (unsigned int *)(*((_DWORD *)v4 + result) & (unsigned int)(1 << v27));
                  if ( (*((_DWORD *)v4 + result) & (1 << v27)) != 0 )
                    goto LABEL_39;
                }
              }
              goto LABEL_43;
            }
          }
          else if ( !v32 )
          {
            goto LABEL_39;
          }
        }
      }
      for ( ; v17 != v26; v26 += 6 )
      {
        v42 = v26[1];
        if ( v42 == 2 )
        {
          if ( (_DWORD)v27 == *v26 && (_DWORD)v27 == v26[2] )
            goto LABEL_36;
        }
        else if ( !v42 )
        {
          break;
        }
      }
LABEL_39:
      sub_11420C0(*a3, v27, v26, v17);
      v33 = (_QWORD *)a3[1];
      if ( v33 )
      {
        v34 = *((unsigned int *)v33 - 1);
        if ( (_DWORD)v34 == *((_DWORD *)v33 - 2) )
        {
          v53 = (unsigned int)(3 * v34 + 1) >> 1;
          v54 = 4 * v53 + 8;
          if ( 4 * (int)v34 + 8 >= (unsigned int)v54 || (unsigned int)v34 >= v53 )
          {
            v64 = (char **)__cxa_allocate_exception(0x28u);
            sub_6FFCA0(v78, "Overflow encountered when expanding vector");
            *v64 = (char *)off_1C63128;
            sub_2333C0(v64 + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v71 = (unsigned int)(3 * v34 + 1) >> 1;
          v55 = (unsigned int *)sub_186B300(v33 - 1, v54);
          v17 = (unsigned int *)v71;
          v33 = v55 + 2;
          a3[1] = v55 + 2;
          *v55 = v71;
          result = (__int64)&v55[v55[1] + 2];
        }
        else
        {
          result = (__int64)v33 + 4 * v34;
        }
      }
      else
      {
        v62 = (_QWORD *)sub_186B270(0x10u);
        *v62 = 2;
        v33 = v62 + 1;
        a3[1] = v62 + 1;
        result = (__int64)(v62 + 1);
      }
      *(_DWORD *)result = v24;
      ++*((_DWORD *)v33 - 1);
LABEL_43:
      ;
    }
  }
  if ( !v66 || (result = *(v66 - 1), v35 = (unsigned int)(result - 1), !(_DWORD)result) )
  {
    v41 = (_DWORD *)a3[1];
    if ( !v41 )
      goto LABEL_84;
    goto LABEL_81;
  }
  result = (__int64)v77;
  for ( k = &v66[v35]; ; --k )
  {
    if ( result )
    {
      v37 = (_DWORD *)(result + 4LL * *(unsigned int *)(result - 4));
      if ( v37 == (_DWORD *)result )
        goto LABEL_52;
      v38 = (_DWORD *)result;
      do
        sub_1144670(v76, *v38++ >> 1);
      while ( v37 != v38 );
      result = (__int64)v77;
      if ( v77 )
LABEL_52:
        *(_DWORD *)(result - 4) = 0;
    }
    v39 = a3[1];
    v40 = v39 ? *(unsigned int *)(v39 - 4) : 0LL;
    sub_1133F30(v68, *k, v40, v39, &v76);
    result = a3[1];
    v41 = v77;
    v17 = k - 1;
    a3[1] = v77;
    v77 = (_DWORD *)result;
    if ( k == v66 )
      break;
  }
  if ( v41 )
  {
LABEL_81:
    v56 = 0;
    do
    {
      if ( v56 >= *(v41 - 1) )
        break;
      v57 = v56;
      v58 = v41[v56];
      v69 = v58 ^ 1;
      sub_11420C0(*a3, v58 >> 1, v41, v17);
      sub_1144670(*a3, *(_DWORD *)(a3[1] + 4LL * v56) >> 1);
      v41 = (_DWORD *)a3[1];
      result = v69;
      ++v56;
      v41[v57] = v69;
    }
    while ( v41 );
LABEL_84:
    v59 = v77;
    if ( !v77 )
      goto LABEL_89;
    goto LABEL_85;
  }
  v59 = (unsigned int *)result;
  if ( result )
  {
LABEL_85:
    v60 = &v59[*(v59 - 1)];
    if ( v60 == v59 )
      goto LABEL_88;
    do
    {
      v61 = *v59++;
      result = sub_1144670(v76, v61 >> 1);
    }
    while ( v60 != v59 );
    v60 = v77;
    if ( v77 )
    {
LABEL_88:
      *(v60 - 1) = 0;
      result = sub_186B220(v60 - 2);
    }
LABEL_89:
    if ( !v4 )
      goto LABEL_91;
    goto LABEL_90;
  }
  if ( v4 )
  {
LABEL_90:
    result = sub_186B220(v4 - 1);
LABEL_91:
    if ( !v66 )
      return result;
  }
  return sub_186B220(v66 - 2);
}

