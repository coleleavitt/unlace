__int64 __fastcall sub_967300(__int64 a1, __int64 a2)
{
  char **exception; // r13
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  unsigned int *v5; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // edx
  bool v10; // zf
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 result; // rax
  __int64 *v24; // rbp
  unsigned __int64 v25; // r12
  __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+8h] [rbp-80h]
  __int64 v31[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  v4 = nullptr;
  v5 = *(unsigned int **)a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8);
  if ( v7 != *(_QWORD *)a2 )
  {
    while ( 1 )
    {
      v14 = *v5;
      v15 = *(_QWORD *)(a1 + 16);
      if ( dword_1C7EC74 == *v5 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 104) + 856LL);
        if ( v16 )
          goto LABEL_15;
      }
      else if ( dword_1C7EC70 == v14 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 104) + 864LL);
        if ( v16 )
          goto LABEL_15;
      }
      else
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v15 + 8840) + 8LL * (v14 >> 1));
        if ( (v14 & 1) != 0 )
        {
          v16 = sub_15E1A70(*(_QWORD *)(v15 + 104));
          if ( v16 )
          {
LABEL_15:
            v9 = *(_DWORD *)(v16 + 8) + 1;
            *(_DWORD *)(v16 + 8) = v9;
            if ( v3 )
            {
              v10 = (*(_DWORD *)(v3 + 8))-- == 1;
              if ( !v10 )
              {
                v9 = *(_DWORD *)(v16 + 8);
                v3 = v16;
                goto LABEL_9;
              }
              v29 = v16;
              sub_15D7BC0(v6, v3);
              v3 = v29;
LABEL_47:
              v9 = *(_DWORD *)(v3 + 8);
            }
            else
            {
              v3 = v16;
            }
            goto LABEL_9;
          }
        }
        else if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 8) + 1;
          *(_DWORD *)(v8 + 8) = v9;
          if ( v3 )
          {
            v10 = (*(_DWORD *)(v3 + 8))-- == 1;
            if ( !v10 )
            {
              v9 = *(_DWORD *)(v8 + 8);
              v3 = v8;
              goto LABEL_9;
            }
            v30 = v8;
            sub_15D7BC0(v6, v3);
            v3 = v30;
            goto LABEL_47;
          }
          v3 = v8;
LABEL_9:
          *(_DWORD *)(v3 + 8) = v9 + 1;
          if ( !v4 )
            goto LABEL_41;
          goto LABEL_10;
        }
      }
      if ( v3 && (v10 = *(_DWORD *)(v3 + 8) == 1, --*(_DWORD *)(v3 + 8), v10) )
      {
        sub_15D7BC0(v6, v3);
        v3 = 0;
      }
      else
      {
        v3 = 0;
      }
      if ( !v4 )
      {
LABEL_41:
        v27 = (_QWORD *)sub_186B270(0x18u);
        v4 = v27 + 1;
        *v27 = 2;
        v28 = 1;
        v13 = v27 + 1;
        goto LABEL_12;
      }
LABEL_10:
      v11 = *((_DWORD *)v4 - 1);
      if ( v11 == *((_DWORD *)v4 - 2) )
      {
        v17 = (3 * v11 + 1) >> 1;
        v18 = 8 * v17 + 8;
        if ( 8 * v11 + 8 >= v18 || v11 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v4 - 1, v18);
        v4 = v19 + 2;
        ++v5;
        *v19 = (3 * v11 + 1) >> 1;
        v20 = v19[1];
        v28 = (unsigned int)(v20 + 1);
        v4[v20] = v3;
        *((_DWORD *)v4 - 1) = v28;
        if ( (unsigned int *)v7 == v5 )
          goto LABEL_21;
      }
      else
      {
        v12 = v11;
        v28 = v11 + 1;
        v13 = &v4[v12];
LABEL_12:
        ++v5;
        *v13 = v3;
        *((_DWORD *)v4 - 1) = v28;
        if ( (unsigned int *)v7 == v5 )
          goto LABEL_21;
      }
    }
  }
  v28 = 0;
LABEL_21:
  v31[0] = 0;
  v21 = sub_15EC240(v6, v28);
  v22 = v21;
  if ( v21 )
  {
    ++*(_DWORD *)(v21 + 8);
    result = sub_965BE0(a1, v21, v31);
    v10 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v6, v22);
  }
  else
  {
    result = sub_965BE0(a1, 0, v31);
  }
  if ( v3 )
  {
    v10 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v6, v3);
  }
  if ( v4 )
  {
    v24 = v4;
    v25 = (unsigned __int64)&v4[*((unsigned int *)v4 - 1)];
    if ( (unsigned __int64)v4 < v25 )
    {
      do
      {
        while ( 1 )
        {
          v26 = *v24;
          if ( *v24 )
          {
            v10 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( (unsigned __int64)++v24 >= v25 )
            return sub_186B220(v4 - 1);
        }
        ++v24;
        sub_15D7BC0(v6, v26);
      }
      while ( (unsigned __int64)v24 < v25 );
    }
    return sub_186B220(v4 - 1);
  }
  return result;
}

