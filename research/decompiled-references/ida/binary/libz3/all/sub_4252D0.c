_QWORD *__fastcall sub_4252D0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int v3; // eax
  _QWORD *v4; // r14
  unsigned int v5; // esi
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // esi
  size_t v9; // rdi
  _QWORD *v10; // rax
  char **v11; // rbp
  _QWORD *v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rdx
  char **v15; // rsi
  char **i; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  char **v20; // r15
  char *v21; // r12
  __int64 v22; // rbx
  char *v23; // r13
  char *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // r12
  _QWORD *v29; // rbx
  _OWORD *v30; // rax
  _QWORD *v32; // r14
  __int64 v33; // rdx
  char **v34; // rbx
  __int64 v35; // rax
  char **v36; // rbp
  char *v37; // r12
  __int64 v38; // rax
  char *v39; // r13
  char *v40; // r14
  __int64 v41; // rdi
  unsigned int *v43; // [rsp+8h] [rbp-80h]
  unsigned int v44; // [rsp+10h] [rbp-78h]
  unsigned int v45; // [rsp+14h] [rbp-74h]
  unsigned int v46; // [rsp+18h] [rbp-70h]
  unsigned int v47; // [rsp+1Ch] [rbp-6Ch]
  __int64 v48[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a2 + 40);
  v4 = *(_QWORD **)(a1 + 24);
  v46 = v3;
  if ( !v4 )
  {
    v45 = v3 + 1;
    if ( v3 == -1 )
      return &v4[3 * v46];
    v47 = 0;
    v32 = (_QWORD *)sub_186B270(0x38u);
    *v32 = 2;
    v4 = v32 + 1;
    *(_QWORD *)(a1 + 24) = v4;
LABEL_4:
    while ( 1 )
    {
      v6 = *((_DWORD *)v4 - 2);
      v7 = v45;
      if ( v6 >= v45 )
        break;
      while ( 1 )
      {
        v8 = (3 * v6 + 1) >> 1;
        v44 = v8;
        v9 = 8 * (v8 + ((3 * v6 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v6 + 8 >= (unsigned int)v9 || v6 >= v8 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v48, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v48);
          sub_233E40((__int64)v48);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v10 = (_QWORD *)sub_186B270(v9);
        v43 = (unsigned int *)v10;
        v4 = v10 + 1;
        v11 = *(char ***)(a1 + 24);
        if ( !v11 )
          break;
        v12 = v10;
        v13 = *((unsigned int *)v11 - 1);
        v14 = v4;
        *((_DWORD *)v12 + 1) = v13;
        v15 = &v11[3 * v13];
        for ( i = v11; v15 != i; *((_DWORD *)v14 - 2) = *((_DWORD *)i - 2) )
        {
          v17 = *((_DWORD *)i + 2);
          i += 3;
          v14 += 3;
          *((_DWORD *)v14 - 4) = v17;
          v18 = (__int64)*(i - 3);
          *(i - 3) = nullptr;
          *(v14 - 3) = v18;
          *((_DWORD *)v14 - 3) = *((_DWORD *)i - 3);
        }
        v19 = *((unsigned int *)v11 - 1);
        if ( (_DWORD)v19 )
        {
          v20 = &v11[3 * v19];
          do
          {
            v21 = *v11;
            if ( *v11 )
            {
              v22 = *((unsigned int *)v11 + 2);
              if ( (_DWORD)v22 )
              {
                v23 = *v11;
                v24 = &v21[16 * v22];
                do
                {
                  while ( 1 )
                  {
                    v25 = *((_QWORD *)v23 + 1);
                    if ( !v25 )
                      break;
                    v23 += 16;
                    sub_186B220((void *)(v25 - 8));
                    if ( v24 == v23 )
                      goto LABEL_17;
                  }
                  v23 += 16;
                }
                while ( v23 != v24 );
              }
LABEL_17:
              sub_186B220(v21);
            }
            v11 += 3;
          }
          while ( v11 != v20 );
          v11 = *(char ***)(a1 + 24);
        }
        sub_186B220(v11 - 1);
        *(_QWORD *)(a1 + 24) = v4;
        *v43 = v44;
        v7 = v45;
        v6 = *((_DWORD *)v4 - 2);
        if ( v6 >= v45 )
          goto LABEL_21;
      }
      *(_QWORD *)(a1 + 24) = v4;
      *v10 = v8;
    }
LABEL_21:
    *((_DWORD *)v4 - 1) = v7;
    v26 = 24LL * v47;
    v27 = 24LL * v7;
    v28 = &v4[(unsigned __int64)v26 / 8];
    v29 = &v4[(unsigned __int64)v27 / 8];
    if ( v26 != v27 )
    {
      do
      {
        v28 += 3;
        v30 = (_OWORD *)sub_186B270(0x80u);
        *v30 = 0;
        v30[1] = 0;
        v30[2] = 0;
        v30[3] = 0;
        v30[4] = 0;
        v30[5] = 0;
        v30[6] = 0;
        v30[7] = 0;
        *(v28 - 3) = v30;
        *(v28 - 2) = 8;
        *((_DWORD *)v28 - 2) = 0;
      }
      while ( v29 != v28 );
      v4 = *(_QWORD **)(a1 + 24);
    }
    return &v4[3 * v46];
  }
  v5 = *((_DWORD *)v4 - 1);
  v47 = v5;
  if ( v3 < v5 )
    return &v4[3 * v46];
  v45 = v3 + 1;
  if ( v5 < v3 + 1 )
    goto LABEL_4;
  v33 = 24LL * v45;
  v34 = (char **)&v4[(unsigned __int64)v33 / 8];
  v35 = 24LL * v5;
  v36 = (char **)&v4[(unsigned __int64)v35 / 8];
  if ( v33 != v35 )
  {
    do
    {
      v37 = *v34;
      if ( *v34 )
      {
        v38 = *((unsigned int *)v34 + 2);
        if ( (_DWORD)v38 )
        {
          v39 = *v34;
          v40 = &v37[16 * v38];
          do
          {
            while ( 1 )
            {
              v41 = *((_QWORD *)v39 + 1);
              if ( !v41 )
                break;
              v39 += 16;
              sub_186B220((void *)(v41 - 8));
              if ( v39 == v40 )
                goto LABEL_36;
            }
            v39 += 16;
          }
          while ( v39 != v40 );
        }
LABEL_36:
        sub_186B220(v37);
      }
      v34 += 3;
    }
    while ( v36 != v34 );
    v4 = *(_QWORD **)(a1 + 24);
  }
  *((_DWORD *)v4 - 1) = v45;
  return &v4[3 * v46];
}

