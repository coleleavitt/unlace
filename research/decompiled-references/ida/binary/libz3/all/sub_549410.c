__int64 *__fastcall sub_549410(_QWORD *a1, __int64 a2, __int64 a3, double a4, __int64 a5, int a6, int a7)
{
  char **exception; // r12
  __int64 *v10; // rbx
  __int64 *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // r12
  __int64 *result; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 *v22; // rdi
  int v23; // eax
  __int64 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned int v27; // eax
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int *v30; // rax
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  __int64 *v40; // r12
  unsigned __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 *v44; // rbx
  unsigned __int64 v45; // r12
  __int64 v46; // rsi
  __int64 v47; // [rsp+0h] [rbp-A0h]
  __int64 v48; // [rsp+8h] [rbp-98h]
  __int64 *v49; // [rsp+10h] [rbp-90h]
  int v50; // [rsp+18h] [rbp-88h]
  unsigned int v51; // [rsp+18h] [rbp-88h]
  unsigned int v52; // [rsp+1Ch] [rbp-84h]
  __int64 v53; // [rsp+20h] [rbp-80h]
  int v54[2]; // [rsp+28h] [rbp-78h]
  int v55; // [rsp+30h] [rbp-70h]
  int v56; // [rsp+38h] [rbp-68h]
  int v57; // [rsp+40h] [rbp-60h]
  void *v58; // [rsp+48h] [rbp-58h]
  __int64 v59[10]; // [rsp+50h] [rbp-50h] BYREF

  v10 = *(__int64 **)(a2 + 24);
  LODWORD(v47) = a3;
  if ( v10 && &v10[*((unsigned int *)v10 - 1)] != v10 )
  {
    v12 = &v10[*((unsigned int *)v10 - 1)];
    do
    {
      v13 = *v10++;
      v14 = sub_548940(a1, v13);
      sub_63DAD0(a3, v14, a4);
    }
    while ( v12 != v10 );
  }
  v15 = *(__int64 **)(a2 + 152);
  v16 = a1[3];
  result = &v15[*(unsigned int *)(a2 + 160)];
  LODWORD(v48) = v16;
  v57 = v16;
  LODWORD(v49) = (_DWORD)v15 + 8 * *(_DWORD *)(a2 + 160);
  if ( v15 != result )
  {
    while ( (unsigned __int64)*v15 <= 1 )
    {
      if ( result == ++v15 )
        return result;
    }
    if ( result != v15 )
    {
      v18 = *v15;
      *(_QWORD *)v54 = 0;
      v19 = *(unsigned int *)(*v15 + 32);
      v50 = v19;
      if ( !(_DWORD)v19 )
        goto LABEL_47;
LABEL_11:
      v53 = v19;
      v20 = 0;
      while ( 1 )
      {
        v25 = sub_15DB5C0(v16, (unsigned int)v20, *(_QWORD *)(v18 + 8 * v20 + 48));
        v26 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        if ( *(_QWORD *)v54 )
        {
          v27 = *(_DWORD *)(*(_QWORD *)v54 - 4LL);
          if ( v27 == *(_DWORD *)(*(_QWORD *)v54 - 8LL) )
          {
            v28 = (3 * v27 + 1) >> 1;
            v29 = 8 * v28 + 8;
            if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v59, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v59);
              sub_233E40((__int64)v59);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v52 = (3 * v27 + 1) >> 1;
            v30 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v54 - 8LL), v29);
            v22 = (__int64 *)(v30 + 2);
            *(_QWORD *)v54 = v30 + 2;
            *v30 = v52;
            LODWORD(v30) = v30[1];
            v24 = &v22[(unsigned int)v30];
            v23 = (_DWORD)v30 + 1;
          }
          else
          {
            v21 = v27;
            v22 = *(__int64 **)v54;
            v23 = v27 + 1;
            v24 = (__int64 *)(*(_QWORD *)v54 + 8 * v21);
          }
        }
        else
        {
          v43 = sub_186B270(0x18u) + 8;
          *(_QWORD *)(v43 - 8) = 2;
          v24 = (__int64 *)v43;
          *(_QWORD *)v54 = v43;
          v23 = 1;
          v22 = *(__int64 **)v54;
        }
        *v24 = v26;
        ++v20;
        *((_DWORD *)v22 - 1) = v23;
        if ( v20 == v53 )
          break;
        v16 = a1[3];
      }
      v31 = *(_DWORD *)(v18 + 32);
      v16 = a1[3];
      v32 = (int)v22;
      while ( 1 )
      {
        v33 = sub_15DC610(v16, v18, v31, v32, a6, a7, v47, v48, (int)v49, v50, v53, v54[0], v55, v56, v57, v58);
        v34 = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v53 = a1[3];
        v35 = sub_5486E0((__int64)a1, v33, v51);
        v36 = v35;
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        v37 = a1[4];
        v59[0] = v36;
        v38 = sub_62C680((int)v37 + 656, v34, 1, (unsigned int)v59, 0, (unsigned int)&qword_18D6CD0, 1);
        sub_63DAD0(v47, v38, a4);
        if ( v36 )
        {
          v39 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v39 )
            sub_15D7BC0(v53, v36);
        }
        if ( v34 )
        {
          v39 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v39 )
            sub_15D7BC0(v16, v34);
        }
        result = v15 + 1;
        if ( v49 == v15 + 1 )
          break;
        while ( 1 )
        {
          v18 = *result;
          v15 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          if ( v49 == ++result )
            goto LABEL_49;
        }
        result = *(__int64 **)v54;
        if ( v49 == v15 )
          break;
        if ( *(_QWORD *)v54 )
        {
          v40 = *(__int64 **)v54;
          v41 = *(_QWORD *)v54 + 8LL * *(unsigned int *)(*(_QWORD *)v54 - 4LL);
          if ( *(_QWORD *)v54 < v41 )
          {
            do
            {
              while ( 1 )
              {
                v42 = *v40;
                if ( *v40 )
                {
                  v39 = (*(_DWORD *)(v42 + 8))-- == 1;
                  if ( v39 )
                    break;
                }
                if ( (unsigned __int64)++v40 >= v41 )
                  goto LABEL_45;
              }
              sub_15D7BC0(v48, v42);
              ++v40;
            }
            while ( (unsigned __int64)v40 < v41 );
          }
LABEL_45:
          *(_DWORD *)(*(_QWORD *)v54 - 4LL) = 0;
        }
        v19 = *(unsigned int *)(v18 + 32);
        v16 = a1[3];
        v50 = v19;
        if ( (_DWORD)v19 )
          goto LABEL_11;
LABEL_47:
        v32 = v54[0];
        v31 = 0;
      }
LABEL_49:
      v44 = *(__int64 **)v54;
      if ( *(_QWORD *)v54 )
      {
        v45 = *(_QWORD *)v54 + 8LL * *(unsigned int *)(*(_QWORD *)v54 - 4LL);
        if ( *(_QWORD *)v54 < v45 )
        {
          do
          {
            while ( 1 )
            {
              v46 = *v44;
              if ( *v44 )
              {
                v39 = (*(_DWORD *)(v46 + 8))-- == 1;
                if ( v39 )
                  break;
              }
              if ( (unsigned __int64)++v44 >= v45 )
                return (__int64 *)sub_186B220((void *)(*(_QWORD *)v54 - 8LL));
            }
            ++v44;
            sub_15D7BC0(v48, v46);
          }
          while ( (unsigned __int64)v44 < v45 );
        }
        return (__int64 *)sub_186B220((void *)(*(_QWORD *)v54 - 8LL));
      }
    }
  }
  return result;
}

