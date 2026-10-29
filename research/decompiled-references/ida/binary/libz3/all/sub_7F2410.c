__int64 __fastcall sub_7F2410(__int64 *a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rbp
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // r12d
  __int64 v21; // r13
  __int64 (__fastcall *v22)(__int64); // rax
  unsigned int v23; // r12d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned int v28; // r12d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rbp
  _QWORD *v33; // r15
  __int64 v34; // r14
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  unsigned int v39; // ecx
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 (*v44)(void); // rax
  __int64 v45; // rdi
  unsigned int v46; // esi
  __int64 v47; // rbp
  __int64 v48; // r12
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 *v53; // rcx
  unsigned int v54; // r14d
  unsigned int v55; // ecx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // rdx
  unsigned int v61; // [rsp+Ch] [rbp-6Ch]
  __int64 v62[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = (_QWORD *)a1[83];
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v23 = (3 * v9 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v24 || v9 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v62, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v62);
        sub_233E40((__int64)v62);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v8 - 1, v24);
      v26 = v25[1];
      v8 = v25 + 2;
      *v25 = v23;
      a1[83] = (__int64)(v25 + 2);
      LODWORD(v25) = v26;
      v12 = &v8[v26];
      v11 = (_DWORD)v25 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v8[v10];
    }
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x18u);
    v8 = v27 + 1;
    *v27 = 2;
    v11 = 1;
    a1[83] = (__int64)v8;
    v12 = v8;
  }
  *v12 = a2;
  *((_DWORD *)v8 - 1) = v11;
  do
  {
LABEL_5:
    result = *((unsigned int *)v8 - 1);
    if ( !(_DWORD)result )
      return result;
    v14 = (unsigned int)(result - 1);
    v15 = v8[v14];
    *((_DWORD *)v8 - 1) = v14;
  }
  while ( *(_BYTE *)(v15 + 16) );
  v16 = (_QWORD *)a1[82];
  if ( v16 )
  {
    v17 = *((_DWORD *)v16 - 1);
    if ( v17 == *((_DWORD *)v16 - 2) )
    {
      v28 = (3 * v17 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v17 + 8 >= (unsigned int)v29 || v17 >= v28 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v62, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v62);
        sub_233E40((__int64)v62);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v16 - 1, v29);
      v31 = v30[1];
      v16 = v30 + 2;
      *v30 = v28;
      a1[82] = (__int64)(v30 + 2);
      LODWORD(v30) = v31;
      v19 = &v16[v31];
      result = (unsigned int)((_DWORD)v30 + 1);
    }
    else
    {
      v18 = v17;
      result = v17 + 1;
      v19 = &v16[v18];
    }
  }
  else
  {
    v43 = (_QWORD *)sub_186B270(0x18u);
    v16 = v43 + 1;
    *v43 = 2;
    result = 1;
    a1[82] = (__int64)v16;
    v19 = v16;
  }
  *v19 = v15;
  for ( *((_DWORD *)v16 - 1) = result; ; --*((_DWORD *)v16 - 1) )
  {
    do
    {
      v20 = *((_DWORD *)v16 - 1);
      if ( !v20 )
      {
LABEL_19:
        v8 = (_QWORD *)a1[83];
        if ( !v8 )
          return result;
        goto LABEL_5;
      }
      v21 = v16[v20 - 1];
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 152) + 16LL))(
                 *(_QWORD *)(*a1 + 152),
                 *(_QWORD *)v21);
      v16 = (_QWORD *)a1[82];
      if ( !(_BYTE)result )
      {
        v32 = (_QWORD *)(v21 + 176);
        result = 8LL * *(unsigned int *)(v21 + 152);
        v33 = (_QWORD *)(v21 + 176 + result);
        if ( result )
        {
          while ( 1 )
          {
            v34 = *v32;
            if ( *(_BYTE *)(*v32 + 16LL) )
              goto LABEL_30;
            if ( !v16 )
              break;
            do
            {
              while ( 1 )
              {
                v35 = *((_DWORD *)v16 - 1);
                if ( v35 == *((_DWORD *)v16 - 2) )
                {
                  v39 = (3 * v35 + 1) >> 1;
                  v40 = 8 * v39 + 8;
                  if ( 8 * v35 + 8 >= (unsigned int)v40 || v35 >= v39 )
                  {
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v62, "Overflow encountered when expanding vector");
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, v62);
                    sub_233E40((__int64)v62);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v61 = (3 * v35 + 1) >> 1;
                  v41 = (unsigned int *)sub_186B300(v16 - 1, v40);
                  v16 = v41 + 2;
                  *v41 = v61;
                  v42 = v41[1];
                  a1[82] = (__int64)(v41 + 2);
                  LODWORD(v41) = v42;
                  v38 = &v16[v42];
                  v37 = (_DWORD)v41 + 1;
                }
                else
                {
                  v36 = v35;
                  v37 = v35 + 1;
                  v38 = &v16[v36];
                }
LABEL_35:
                *v38 = v34;
                *((_DWORD *)v16 - 1) = v37;
                result = (__int64)(v32 + 1);
                if ( v33 == v32 + 1 )
                  goto LABEL_14;
                v34 = v32[1];
                if ( *(_BYTE *)(v34 + 16) )
                  break;
                ++v32;
              }
              v32 += 2;
              if ( v33 == v32 )
                goto LABEL_13;
              v34 = *v32;
            }
            while ( !*(_BYTE *)(*v32 + 16LL) );
LABEL_30:
            if ( v33 == ++v32 )
              goto LABEL_13;
          }
          v59 = (_QWORD *)sub_186B270(0x18u);
          *v59 = 2;
          v37 = 1;
          v16 = v59 + 1;
          a1[82] = (__int64)v16;
          v38 = v16;
          goto LABEL_35;
        }
      }
LABEL_13:
      if ( !v16 )
        goto LABEL_19;
LABEL_14:
      ;
    }
    while ( *((_DWORD *)v16 - 1) != v20 );
    if ( !*(_BYTE *)(v21 + 16) )
    {
      v44 = *(__int64 (**)(void))(*(_QWORD *)*a1 + 440LL);
      if ( (char *)v44 == (char *)sub_79F010 )
        v45 = *a1 + 1592;
      else
        v45 = v44();
      sub_13D6DB0(v45, v21);
      sub_7CB8B0(*a1, v21);
      v46 = *(_DWORD *)(v21 + 28);
      if ( v46 != 0x7FFFFFFF )
        sub_7F2370(a1, v46);
      v47 = v21;
      v48 = 0;
      while ( v21 == v48 )
      {
        if ( v21 == v47 )
          goto LABEL_16;
        if ( !*(_BYTE *)(v47 + 16) )
          goto LABEL_57;
LABEL_53:
        v47 = *(_QWORD *)(v47 + 56);
      }
      if ( !*(_BYTE *)(v47 + 16) )
      {
LABEL_57:
        v49 = (_QWORD *)a1[83];
        if ( v49 )
        {
          v50 = *((_DWORD *)v49 - 1);
          if ( v50 == *((_DWORD *)v49 - 2) )
          {
            v54 = (3 * v50 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * v50 + 8 >= v55 || v50 >= v54 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v62, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v62);
              sub_233E40((__int64)v62);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = (unsigned int *)sub_186B300(v49 - 1, v55);
            v57 = v56[1];
            v49 = v56 + 2;
            *v56 = v54;
            a1[83] = (__int64)(v56 + 2);
            LODWORD(v56) = v57;
            v53 = &v49[v57];
            v52 = (_DWORD)v56 + 1;
          }
          else
          {
            v51 = v50;
            v52 = v50 + 1;
            v53 = &v49[v51];
          }
        }
        else
        {
          v60 = (_QWORD *)sub_186B270(0x18u);
          *v60 = 2;
          v52 = 1;
          v49 = v60 + 1;
          a1[83] = (__int64)v49;
          v53 = v49;
        }
        *v53 = v47;
        *((_DWORD *)v49 - 1) = v52;
      }
      if ( !v48 )
        v48 = v47;
      goto LABEL_53;
    }
LABEL_16:
    v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 424LL);
    if ( v22 != sub_79EFD0 )
      break;
    result = sub_18290A0(*(_QWORD *)(*a1 + 144));
    v16 = (_QWORD *)a1[82];
    if ( !(_BYTE)result )
      goto LABEL_65;
LABEL_18:
    ;
  }
  v58 = ((__int64 (*)(void))v22)();
  result = sub_18290A0(v58);
  v16 = (_QWORD *)a1[82];
  if ( (_BYTE)result )
    goto LABEL_18;
LABEL_65:
  result = a1[83];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  if ( v16 )
    *((_DWORD *)v16 - 1) = 0;
  return result;
}

