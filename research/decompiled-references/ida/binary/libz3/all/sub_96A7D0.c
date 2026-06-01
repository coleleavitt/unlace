__m128 *__fastcall sub_96A7D0(__m128 *a1, __int64 a2, __int64 *a3)
{
  char **exception; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // edi
  char *v11; // rdx
  unsigned int v12; // ecx
  char *v13; // rsi
  __int64 v14; // rcx
  char *v15; // r8
  char *i; // rax
  int v17; // ecx
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 *v26; // r13
  unsigned __int64 v27; // r14
  __int64 v28; // rsi
  int v31; // eax
  unsigned int v32; // edx
  size_t v33; // rsi
  unsigned int v34; // ebp
  unsigned int *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rbx
  __int64 v38; // [rsp+0h] [rbp-88h] BYREF
  __m128 *v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+20h] [rbp-68h]
  __int64 v41[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 104);
  v6 = *a3;
  v39 = a1;
  v38 = v5;
  v40 = v5;
  v7 = v6 + 12LL * *((unsigned int *)a3 + 2);
  if ( v6 == v7 )
  {
LABEL_50:
    v8 = nullptr;
    v24 = 0;
  }
  else
  {
    while ( *(_DWORD *)(v6 + 4) != 2 )
    {
      v6 += 12;
      if ( v7 == v6 )
        goto LABEL_50;
    }
    v8 = nullptr;
    if ( v7 == v6 )
      goto LABEL_52;
    do
    {
      v9 = *(unsigned int *)(a2 + 10504);
      v10 = *(_DWORD *)(v6 + 8);
      v11 = *(char **)(a2 + 10496);
      v12 = v9 - 1;
      v9 *= 24;
      v13 = &v11[v9];
      v14 = 24LL * (v10 & v12);
      v15 = &v11[v14];
      if ( v14 != v9 )
      {
        for ( i = &v11[v14]; v13 != i; i += 24 )
        {
          v17 = *((_DWORD *)i + 1);
          if ( v17 == 2 )
          {
            if ( v10 == *(_DWORD *)i && v10 == *((_DWORD *)i + 2) )
            {
LABEL_13:
              v18 = *((_QWORD *)i + 2);
              if ( *(_BYTE *)(*(_QWORD *)(a2 + 8848) + (unsigned int)(2 * v10)) == 0xFF )
                v18 = sub_15E1A70(*(_QWORD *)(a2 + 104));
              if ( v18 )
                ++*(_DWORD *)(v18 + 8);
              if ( v8 )
              {
                v19 = *((_DWORD *)v8 - 1);
                if ( v19 == *((_DWORD *)v8 - 2) )
                {
                  v32 = (3 * v19 + 1) >> 1;
                  v33 = 8 * v32 + 8;
                  v34 = v32;
                  if ( 8 * v19 + 8 >= (unsigned int)v33 || v19 >= v32 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v41, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v41);
                    sub_233E40((__int64)v41);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v35 = (unsigned int *)sub_186B300(v8 - 1, v33);
                  v36 = v35[1];
                  v8 = v35 + 2;
                  *v35 = v34;
                  LODWORD(v35) = v36;
                  v22 = &v8[v36];
                  v21 = (_DWORD)v35 + 1;
                }
                else
                {
                  v20 = v19;
                  v21 = v19 + 1;
                  v22 = &v8[v20];
                }
              }
              else
              {
                v37 = (_QWORD *)sub_186B270(0x18u);
                *v37 = 2;
                v21 = 1;
                v8 = v37 + 1;
                v22 = v8;
              }
              *v22 = v18;
              *((_DWORD *)v8 - 1) = v21;
              goto LABEL_21;
            }
          }
          else if ( !v17 )
          {
            goto LABEL_21;
          }
        }
      }
      for ( ; v15 != v11; v11 += 24 )
      {
        v31 = *((_DWORD *)v11 + 1);
        if ( v31 == 2 )
        {
          if ( v10 == *(_DWORD *)v11 && v10 == *((_DWORD *)v11 + 2) )
          {
            i = v11;
            goto LABEL_13;
          }
        }
        else if ( !v31 )
        {
          break;
        }
      }
LABEL_21:
      v23 = v6 + 12;
      if ( v7 == v6 + 12 )
        break;
      while ( 1 )
      {
        v6 = v23;
        if ( *(_DWORD *)(v23 + 4) == 2 )
          break;
        v23 += 12;
        if ( v7 == v23 )
          goto LABEL_26;
      }
    }
    while ( v7 != v23 );
LABEL_26:
    if ( !v8 )
LABEL_52:
      v24 = 0;
    else
      v24 = *((unsigned int *)v8 - 1);
  }
  v25 = sub_15EC1C0(v38, v24);
  *v39 = _mm_loadh_ps((const double *)&v38);
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  if ( v8 )
  {
    v26 = v8;
    v27 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 < v27 )
    {
      do
      {
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            if ( (*(_DWORD *)(v28 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v26 >= v27 )
            goto LABEL_37;
        }
        ++v26;
        sub_15D7BC0(v38, v28);
      }
      while ( (unsigned __int64)v26 < v27 );
    }
LABEL_37:
    sub_186B220(v8 - 1);
  }
  return v39;
}

