unsigned __int64 __fastcall sub_3503A0(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rdx
  __int64 *v14; // r13
  _QWORD *v15; // rax
  int v16; // eax
  _QWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned int v43; // r14d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r12
  int v49; // eax
  char **exception; // rbx
  __int64 v51; // [rsp+0h] [rbp-D8h]
  int v52; // [rsp+0h] [rbp-D8h]
  int v53; // [rsp+0h] [rbp-D8h]
  __int64 v54; // [rsp+8h] [rbp-D0h]
  __int64 v55; // [rsp+10h] [rbp-C8h]
  __int64 v56; // [rsp+18h] [rbp-C0h]
  _QWORD *v57; // [rsp+20h] [rbp-B8h]
  __int64 v58; // [rsp+30h] [rbp-A8h]
  __int64 v60; // [rsp+40h] [rbp-98h]
  unsigned int v62; // [rsp+58h] [rbp-80h]
  int v63; // [rsp+58h] [rbp-80h]
  int v64; // [rsp+5Ch] [rbp-7Ch]
  __int64 v65; // [rsp+68h] [rbp-70h] BYREF
  __int64 v66; // [rsp+70h] [rbp-68h] BYREF
  __int64 v67; // [rsp+78h] [rbp-60h] BYREF
  __int64 v68; // [rsp+80h] [rbp-58h] BYREF
  __int64 v69; // [rsp+88h] [rbp-50h]

  v58 = a1[1];
  result = a1[22];
  if ( result )
  {
    v5 = (__int64 *)a1[22];
    v6 = result + 8LL * *(unsigned int *)(result - 4);
    if ( result >= v6 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[21];
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v6 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( (unsigned __int64)v5 < v6 );
LABEL_8:
    result = a1[22];
    if ( result )
LABEL_9:
      *(_DWORD *)(result - 4) = 0;
  }
  v10 = (__int64 *)*a2;
  if ( *a2 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = *v10;
      v13 = (_QWORD *)result;
      v14 = &v10[v11];
      if ( *v10 )
        ++*(_DWORD *)(v12 + 8);
      if ( result )
        goto LABEL_19;
      v15 = (_QWORD *)sub_186B270(0x18u);
      v13 = v15 + 1;
      *v15 = 2;
      v16 = 1;
      a1[22] = v13;
      v17 = v13;
      while ( 1 )
      {
        ++v10;
        *v17 = v12;
        *((_DWORD *)v13 - 1) = v16;
        if ( v10 == v14 )
          break;
        while ( 1 )
        {
          v12 = *v10;
          if ( *v10 )
            ++*(_DWORD *)(v12 + 8);
LABEL_19:
          v18 = *((_DWORD *)v13 - 1);
          if ( v18 == *((_DWORD *)v13 - 2) )
            break;
          ++v10;
          v13[v18] = v12;
          *((_DWORD *)v13 - 1) = v18 + 1;
          if ( v10 == v14 )
            goto LABEL_21;
        }
        v43 = (3 * v18 + 1) >> 1;
        v44 = 8 * v43 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v44 || v18 >= v43 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v68, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v68);
          sub_233E40((__int64)&v68);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v45 = (unsigned int *)sub_186B300(v13 - 1, v44);
        v46 = v45[1];
        v13 = v45 + 2;
        *v45 = v43;
        a1[22] = v45 + 2;
        LODWORD(v45) = v46;
        v17 = &v13[v46];
        v16 = (_DWORD)v45 + 1;
      }
LABEL_21:
      result = *a2;
      if ( *a2 )
      {
        v19 = 0;
        v20 = 0;
        v62 = 1;
        v56 = 0;
        v60 = 0;
        v55 = 0;
        v54 = 0;
        v57 = a1 + 26;
        if ( *(_DWORD *)(result - 4) <= 1u )
        {
LABEL_82:
          v34 = v55;
          v32 = v54;
        }
        else
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(result + v56);
            if ( v62 == 1 )
            {
              if ( v21 )
                ++*(_DWORD *)(v21 + 8);
              if ( v19 )
              {
                v9 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v58, v19);
              }
              v19 = v21;
              v30 = v20;
            }
            else if ( v62 == 2 )
            {
              v47 = sub_15E1B70(a1[1]);
              v48 = v47;
              if ( v47 )
              {
                v49 = *(_DWORD *)(v47 + 8) + 1;
                *(_DWORD *)(v48 + 8) = v49;
                if ( v19 )
                {
                  v9 = (*(_DWORD *)(v19 + 8))-- == 1;
                  if ( v9 )
                    sub_15D7BC0(v58, v19);
                  v65 = v48;
                  v49 = *(_DWORD *)(v48 + 8);
                }
                else
                {
                  v65 = v48;
                }
                *(_DWORD *)(v48 + 8) = v49 + 1;
              }
              else
              {
                if ( v19 )
                {
                  v9 = (*(_DWORD *)(v19 + 8))-- == 1;
                  if ( v9 )
                    sub_15D7BC0(v58, v19);
                }
                v65 = 0;
              }
              sub_349180(a1 + 34, &v65);
              v19 = v48;
              v30 = v20;
            }
            else
            {
              v22 = sub_300BE0(a1, "d");
              v51 = v22;
              if ( v22 )
                ++*(_DWORD *)(v22 + 8);
              if ( v60 )
              {
                v64 = *(_DWORD *)(v60 + 8);
                *(_DWORD *)(v60 + 8) = v64 - 1;
                if ( v64 == 1 )
                  sub_15D7BC0(v58, v60);
              }
              v23 = sub_15E1B70(a1[1]);
              v24 = v23;
              if ( v23 )
                ++*(_DWORD *)(v23 + 8);
              if ( v20 )
              {
                v9 = (*(_DWORD *)(v20 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v58, v20);
              }
              v25 = sub_2FF8B0((__int64)a1);
              sub_E5EBF0(v25, v24);
              v66 = v24;
              if ( v24 )
                ++*(_DWORD *)(v24 + 8);
              sub_349180(v57, &v66);
              v26 = sub_15E1B70(a1[1]);
              v27 = v26;
              if ( v26 )
                ++*(_DWORD *)(v26 + 8);
              if ( v24 )
              {
                v9 = (*(_DWORD *)(v24 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v58, v24);
              }
              v28 = sub_2FF8B0((__int64)a1);
              sub_E5EBF0(v28, v27);
              v67 = v27;
              if ( v27 )
                ++*(_DWORD *)(v27 + 8);
              sub_349180(v57, &v67);
              v29 = sub_15E1B70(a1[1]);
              v30 = v29;
              if ( v29 )
                ++*(_DWORD *)(v29 + 8);
              if ( v27 )
              {
                v9 = (*(_DWORD *)(v27 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v58, v27);
              }
              sub_34AF90((__int64)a1, v51, v30);
              if ( v51 == v19 )
              {
                v60 = v19;
              }
              else
              {
                if ( v19 )
                {
                  v9 = (*(_DWORD *)(v19 + 8))-- == 1;
                  if ( v9 )
                    sub_15D7BC0(v58, v19);
                }
                if ( v51 )
                {
                  ++*(_DWORD *)(v51 + 8);
                  v19 = v51;
                  v60 = v51;
                }
                else
                {
                  v60 = 0;
                  v19 = 0;
                }
              }
            }
            v31 = sub_300BE0(a1, "a");
            v32 = v31;
            if ( v31 )
              ++*(_DWORD *)(v31 + 8);
            if ( v54 )
            {
              v52 = *(_DWORD *)(v54 + 8);
              *(_DWORD *)(v54 + 8) = v52 - 1;
              if ( v52 == 1 )
                sub_15D7BC0(v58, v54);
            }
            v33 = sub_15E1B70(a1[1]);
            v34 = v33;
            if ( v33 )
              ++*(_DWORD *)(v33 + 8);
            if ( v55 )
            {
              v53 = *(_DWORD *)(v55 + 8);
              *(_DWORD *)(v55 + 8) = v53 - 1;
              if ( v53 == 1 )
                sub_15D7BC0(v58, v55);
            }
            v35 = sub_15E1B70(a1[1]);
            v20 = v35;
            if ( v35 )
              ++*(_DWORD *)(v35 + 8);
            if ( v30 )
            {
              v9 = (*(_DWORD *)(v30 + 8))-- == 1;
              if ( v9 )
                sub_15D7BC0(v58, v30);
            }
            v36 = a1[40];
            if ( v36 )
            {
              sub_1374250(&v68, a1[40], v34);
              sub_135F9B0(v36, *(_QWORD *)(v32 + 16), v68);
              v37 = v68;
              if ( v68 )
              {
                v38 = v69;
                v9 = (*(_DWORD *)(v68 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v38, v37);
              }
            }
            v39 = a1[17];
            if ( v39 )
            {
              sub_1374250(&v68, a1[17], v34);
              sub_135F9B0(v39, *(_QWORD *)(v32 + 16), v68);
              v40 = v68;
              if ( v68 )
              {
                v41 = v69;
                v9 = (*(_DWORD *)(v68 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v41, v40);
              }
            }
            sub_34FB60((__int64)a1, v32, a3);
            v42 = sub_2FF8B0((__int64)a1);
            sub_E5EBF0(v42, v20);
            v68 = v20;
            if ( v20 )
              ++*(_DWORD *)(v20 + 8);
            sub_349180(v57, &v68);
            ++v62;
            v56 += 8;
            result = *a2;
            if ( !*a2 )
              break;
            v55 = v34;
            v54 = v32;
            if ( v62 >= *(_DWORD *)(result - 4) )
              goto LABEL_82;
          }
        }
        if ( v60 )
        {
          v63 = *(_DWORD *)(v60 + 8);
          result = (unsigned int)(v63 - 1);
          *(_DWORD *)(v60 + 8) = result;
          if ( v63 == 1 )
            result = sub_15D7BC0(v58, v60);
        }
        if ( v19 )
        {
          v9 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v9 )
            result = sub_15D7BC0(v58, v19);
        }
        if ( v34 )
        {
          v9 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v9 )
            result = sub_15D7BC0(v58, v34);
        }
        if ( v32 )
        {
          v9 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v9 )
            result = sub_15D7BC0(v58, v32);
        }
        if ( v20 )
        {
          v9 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v9 )
            return sub_15D7BC0(v58, v20);
        }
      }
    }
  }
  return result;
}

