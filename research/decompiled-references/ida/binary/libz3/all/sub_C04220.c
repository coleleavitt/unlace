_QWORD *__fastcall sub_C04220(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // r14d
  _QWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r15d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // rdx
  _QWORD *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  unsigned int *v25; // rax
  _DWORD *v26; // r12
  _QWORD *v27; // rcx
  __int64 v28; // rax
  _DWORD *v29; // rdx
  _DWORD *v30; // r13
  int v31; // eax
  _QWORD *v32; // rax
  __int64 *v33; // rbx
  _QWORD *v34; // r12
  _QWORD *v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  bool v38; // zf
  _QWORD *v39; // r12
  _QWORD *v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdi
  unsigned int v43; // esi
  unsigned int v44; // eax
  unsigned int v45; // esi
  size_t v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // r15
  __int64 v49; // rdi
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rdi
  _QWORD *v53; // rax
  _QWORD *v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 *v59; // r13
  __int64 *v60; // r14
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 *v63; // r14
  __int64 *v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned int v67; // r15d
  unsigned int v68; // edx
  unsigned int *v69; // rax
  __int64 v70; // rax
  unsigned int v71; // r15d
  unsigned int v72; // edx
  unsigned int *v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  char **exception; // rbp
  _QWORD *v78; // [rsp+8h] [rbp-80h]
  _DWORD *v79; // [rsp+10h] [rbp-78h]
  unsigned int v80; // [rsp+1Ch] [rbp-6Ch]
  __int64 v81[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = 4LL * a2;
  v6 = *(_QWORD **)(a1 + 32);
  v7 = *(unsigned int *)((char *)v6 + v3);
  v8 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 4) )
  {
    if ( v8 )
      v10 = *(_DWORD *)(v8 - 4);
    else
      v10 = 0;
    if ( v6 )
      goto LABEL_8;
    v11 = (_QWORD *)sub_186B270(0x10u);
    v6 = v11 + 1;
    *v11 = 2;
    *(_QWORD *)(a1 + 32) = v11 + 1;
    v12 = v11 + 1;
    while ( 1 )
    {
      *v12 = 0;
      ++*((_DWORD *)v6 - 1);
LABEL_8:
      v13 = *((unsigned int *)v6 - 1);
      if ( a2 < (unsigned int)v13 )
        break;
      if ( (_DWORD)v13 == *((_DWORD *)v6 - 2) )
      {
        v14 = (unsigned int)(3 * v13 + 1) >> 1;
        v15 = 4 * v14 + 8;
        if ( 4 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
          goto LABEL_94;
        v16 = (unsigned int *)sub_186B300(v6 - 1, v15);
        v6 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        *(_QWORD *)(a1 + 32) = v6;
        v12 = (_DWORD *)v6 + v17;
      }
      else
      {
        v12 = (_DWORD *)v6 + v13;
      }
    }
    if ( a2 < *(_DWORD *)(a1 + 4) )
    {
      v23 = *(_QWORD **)(a1 + 40);
      if ( v23 )
      {
        v24 = *((unsigned int *)v23 - 1);
        if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
        {
          v71 = (unsigned int)(3 * v24 + 1) >> 1;
          v72 = 4 * v71 + 8;
          if ( 4 * (int)v24 + 8 >= v72 || (unsigned int)v24 >= v71 )
            goto LABEL_94;
          v73 = (unsigned int *)sub_186B300(v23 - 1, v72);
          v6 = *(_QWORD **)(a1 + 32);
          v23 = v73 + 2;
          *v73 = v71;
          v74 = v73[1];
          *(_QWORD *)(a1 + 40) = v23;
          v25 = (unsigned int *)v23 + v74;
        }
        else
        {
          v25 = (unsigned int *)v23 + v24;
        }
      }
      else
      {
        v75 = (_QWORD *)sub_186B270(0x10u);
        v6 = *(_QWORD **)(a1 + 32);
        *v75 = 2;
        v23 = v75 + 1;
        *(_QWORD *)(a1 + 40) = v75 + 1;
        v25 = (unsigned int *)(v75 + 1);
      }
      *v25 = a2;
      v26 = (_DWORD *)((char *)v6 + v3);
      ++*((_DWORD *)v23 - 1);
      v27 = *(_QWORD **)(a1 + 48);
      if ( v27 )
      {
        v28 = *((unsigned int *)v27 - 1);
        if ( (_DWORD)v28 == *((_DWORD *)v27 - 2) )
        {
          v67 = (unsigned int)(3 * v28 + 1) >> 1;
          v68 = 4 * v67 + 8;
          if ( 4 * (int)v28 + 8 >= v68 || (unsigned int)v28 >= v67 )
            goto LABEL_94;
          v69 = (unsigned int *)sub_186B300(v27 - 1, v68);
          v30 = (_DWORD *)(*(_QWORD *)(a1 + 32) + v3);
          v27 = v69 + 2;
          *v69 = v67;
          v70 = v69[1];
          *(_QWORD *)(a1 + 48) = v27;
          v29 = (_DWORD *)v27 + v70;
        }
        else
        {
          v29 = (_DWORD *)v27 + v28;
          v30 = v26;
        }
      }
      else
      {
        v76 = (_QWORD *)sub_186B270(0x10u);
        v30 = (_DWORD *)(*(_QWORD *)(a1 + 32) + v3);
        *v76 = 2;
        v27 = v76 + 1;
        *(_QWORD *)(a1 + 48) = v76 + 1;
        v29 = v76 + 1;
      }
      v31 = *v26;
      v18 = *(_QWORD **)(a1 + 16);
      *v29 = v31;
      ++*((_DWORD *)v27 - 1);
      *v30 = v10;
      if ( v18 )
      {
LABEL_15:
        v19 = *((unsigned int *)v18 - 1);
        if ( (_DWORD)v19 != *((_DWORD *)v18 - 2) )
        {
          result = &v18[6 * v19];
LABEL_17:
          *result = *(_QWORD *)a3;
          v21 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 8) = 0;
          result[1] = v21;
          result[2] = *(_QWORD *)(a3 + 16);
          v22 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(a3 + 24) = 0;
          result[3] = v22;
          *((_DWORD *)result + 8) = *(_DWORD *)(a3 + 32);
          result[5] = *(_QWORD *)(a3 + 40);
          ++*((_DWORD *)v18 - 1);
          return result;
        }
        v43 = 3 * v19 + 1;
        v44 = v43 & 0xFFFFFFFE;
        v45 = v43 >> 1;
        v80 = v45;
        v46 = 16 * (v44 + v45) + 8;
        if ( 48 * (int)v19 + 8 < (unsigned int)v46 && (unsigned int)v19 < v45 )
        {
          v47 = sub_186B270(v46);
          v48 = *(_QWORD **)(a1 + 16);
          v79 = (_DWORD *)v47;
          v49 = v47;
          v18 = (_QWORD *)(v47 + 8);
          if ( v48 )
          {
            v50 = *((unsigned int *)v48 - 1);
            v51 = v18;
            *(_DWORD *)(v49 + 4) = v50;
            v52 = 3 * v50;
            v53 = v48;
            v54 = &v48[2 * v52];
            if ( v48 != v54 )
            {
              do
              {
                v55 = *v53;
                v53 += 6;
                v51 += 6;
                *(v51 - 6) = v55;
                v56 = *(v53 - 5);
                *(v53 - 5) = 0;
                *(v51 - 5) = v56;
                *(v51 - 4) = *(v53 - 4);
                v57 = *(v53 - 3);
                *(v53 - 3) = 0;
                *(v51 - 3) = v57;
                *((_DWORD *)v51 - 4) = *((_DWORD *)v53 - 4);
                *(v51 - 1) = *(v53 - 1);
              }
              while ( v54 != v53 );
            }
            v58 = *((unsigned int *)v48 - 1);
            if ( (_DWORD)v58 )
            {
              v78 = &v48[6 * v58];
              do
              {
                v59 = (__int64 *)v48[3];
                if ( v59 )
                {
                  v60 = &v59[*((unsigned int *)v59 - 1)];
                  if ( v59 >= v60 )
                    goto LABEL_66;
                  do
                  {
                    while ( 1 )
                    {
                      v61 = *v59;
                      if ( *v59 )
                      {
                        v62 = v48[2];
                        v38 = (*(_DWORD *)(v61 + 8))-- == 1;
                        if ( v38 )
                          break;
                      }
                      if ( ++v59 >= v60 )
                        goto LABEL_65;
                    }
                    sub_15D7BC0(v62, v61);
                    ++v59;
                  }
                  while ( v59 < v60 );
LABEL_65:
                  v59 = (__int64 *)v48[3];
                  if ( v59 )
LABEL_66:
                    sub_186B220(v59 - 1);
                }
                v63 = (__int64 *)v48[1];
                if ( v63 )
                {
                  v64 = &v63[*((unsigned int *)v63 - 1)];
                  if ( v63 >= v64 )
                    goto LABEL_75;
                  do
                  {
                    while ( 1 )
                    {
                      v65 = *v63;
                      if ( *v63 )
                      {
                        v66 = *v48;
                        v38 = (*(_DWORD *)(v65 + 8))-- == 1;
                        if ( v38 )
                          break;
                      }
                      if ( ++v63 >= v64 )
                        goto LABEL_74;
                    }
                    sub_15D7BC0(v66, v65);
                    ++v63;
                  }
                  while ( v63 < v64 );
LABEL_74:
                  v63 = (__int64 *)v48[1];
                  if ( v63 )
LABEL_75:
                    sub_186B220(v63 - 1);
                }
                v48 += 6;
              }
              while ( v48 != v78 );
              v48 = *(_QWORD **)(a1 + 16);
            }
            sub_186B220(v48 - 1);
            result = &v18[6 * (unsigned int)v79[1]];
          }
          else
          {
            *(_DWORD *)(v47 + 4) = 0;
            result = (_QWORD *)(v47 + 8);
          }
          *(_QWORD *)(a1 + 16) = v18;
          *v79 = v80;
          goto LABEL_17;
        }
LABEL_94:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v81, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v81);
        sub_233E40((__int64)v81);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v18 = *(_QWORD **)(a1 + 16);
      *(_DWORD *)((char *)v6 + v3) = v10;
      if ( v18 )
        goto LABEL_15;
    }
    v32 = (_QWORD *)sub_186B270(0x68u);
    v18 = v32 + 1;
    *v32 = 2;
    *(_QWORD *)(a1 + 16) = v32 + 1;
    result = v32 + 1;
    goto LABEL_17;
  }
  v33 = (__int64 *)(v8 + 48 * v7);
  if ( v33 != (__int64 *)a3 )
  {
    v34 = (_QWORD *)v33[1];
    if ( v34 )
    {
      v35 = &v34[*((unsigned int *)v34 - 1)];
      if ( v34 >= v35 )
        goto LABEL_35;
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v37 = *v33;
            v38 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v38 )
              break;
          }
          if ( ++v34 >= v35 )
            goto LABEL_34;
        }
        sub_15D7BC0(v37, v36);
        ++v34;
      }
      while ( v34 < v35 );
LABEL_34:
      v34 = (_QWORD *)v33[1];
      if ( v34 )
      {
LABEL_35:
        *((_DWORD *)v34 - 1) = 0;
        if ( (__int64 *)(a3 + 8) == v33 + 1 )
          goto LABEL_38;
        sub_186B220(v34 - 1);
        goto LABEL_37;
      }
    }
    if ( v33 + 1 != (__int64 *)(a3 + 8) )
    {
LABEL_37:
      v33[1] = 0;
      v33[1] = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = 0;
    }
  }
LABEL_38:
  if ( v33 + 2 != (__int64 *)(a3 + 16) )
  {
    v39 = (_QWORD *)v33[3];
    if ( !v39 )
      goto LABEL_89;
    v40 = &v39[*((unsigned int *)v39 - 1)];
    if ( v39 < v40 )
    {
      do
      {
        while ( 1 )
        {
          v41 = *v39;
          if ( *v39 )
          {
            v42 = v33[2];
            v38 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v38 )
              break;
          }
          if ( ++v39 >= v40 )
            goto LABEL_46;
        }
        sub_15D7BC0(v42, v41);
        ++v39;
      }
      while ( v39 < v40 );
LABEL_46:
      v39 = (_QWORD *)v33[3];
      if ( !v39 )
      {
LABEL_89:
        if ( v33 + 3 == (__int64 *)(a3 + 24) )
          goto LABEL_50;
        goto LABEL_49;
      }
    }
    *((_DWORD *)v39 - 1) = 0;
    if ( v33 + 3 != (__int64 *)(a3 + 24) )
    {
      sub_186B220(v39 - 1);
LABEL_49:
      v33[3] = 0;
      v33[3] = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 24) = 0;
    }
  }
LABEL_50:
  *((_DWORD *)v33 + 8) = *(_DWORD *)(a3 + 32);
  result = *(_QWORD **)(a3 + 40);
  v33[5] = (__int64)result;
  return result;
}

