__int64 __fastcall sub_966E60(__int64 a1, unsigned int **a2)
{
  char **exception; // r13
  __int64 v3; // r14
  unsigned int *v4; // rbp
  unsigned int *v5; // r13
  unsigned int *v6; // r15
  _QWORD *v7; // rbx
  unsigned int *v8; // rcx
  int v9; // edx
  bool v10; // zf
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int **v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 result; // rax
  __int64 *v25; // rbp
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-80h]
  unsigned int *v30; // [rsp+8h] [rbp-80h]
  __int64 v31[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *a2;
  if ( *a2 )
  {
    v5 = &v4[*(v4 - 1)];
    if ( v4 != v5 )
    {
      v6 = *a2;
      v7 = nullptr;
      v4 = nullptr;
      while ( 1 )
      {
        v15 = *v6;
        v16 = *(_QWORD *)(a1 + 16);
        if ( dword_1C7EC74 == *v6 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v16 + 104) + 856LL);
          if ( v17 )
            goto LABEL_16;
        }
        else if ( dword_1C7EC70 == v15 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v16 + 104) + 864LL);
          if ( v17 )
            goto LABEL_16;
        }
        else
        {
          v8 = *(unsigned int **)(*(_QWORD *)(v16 + 8840) + 8LL * (v15 >> 1));
          if ( (v15 & 1) != 0 )
          {
            v17 = sub_15E1A70(*(_QWORD *)(v16 + 104));
            if ( v17 )
            {
LABEL_16:
              v9 = *(_DWORD *)(v17 + 8) + 1;
              *(_DWORD *)(v17 + 8) = v9;
              if ( v4 )
              {
                v10 = v4[2]-- == 1;
                if ( !v10 )
                {
                  v9 = *(_DWORD *)(v17 + 8);
                  v4 = (unsigned int *)v17;
                  goto LABEL_10;
                }
                v29 = v17;
                sub_15D7BC0(v3, v4);
                v4 = (unsigned int *)v29;
LABEL_48:
                v9 = v4[2];
              }
              else
              {
                v4 = (unsigned int *)v17;
              }
              goto LABEL_10;
            }
          }
          else if ( v8 )
          {
            v9 = v8[2] + 1;
            v8[2] = v9;
            if ( v4 )
            {
              v10 = v4[2]-- == 1;
              if ( !v10 )
              {
                v9 = v8[2];
                v4 = v8;
                goto LABEL_10;
              }
              v30 = v8;
              sub_15D7BC0(v3, v4);
              v4 = v30;
              goto LABEL_48;
            }
            v4 = v8;
LABEL_10:
            v4[2] = v9 + 1;
            if ( !v7 )
              goto LABEL_42;
            goto LABEL_11;
          }
        }
        if ( v4 && (v10 = v4[2] == 1, --v4[2], v10) )
        {
          sub_15D7BC0(v3, v4);
          v4 = nullptr;
        }
        else
        {
          v4 = nullptr;
        }
        if ( !v7 )
        {
LABEL_42:
          v28 = (_QWORD *)sub_186B270(0x18u);
          v7 = v28 + 1;
          *v28 = 2;
          v13 = 1;
          v14 = (unsigned int **)(v28 + 1);
          goto LABEL_13;
        }
LABEL_11:
        v11 = *((_DWORD *)v7 - 1);
        if ( v11 == *((_DWORD *)v7 - 2) )
        {
          v18 = (3 * v11 + 1) >> 1;
          v19 = 8 * v18 + 8;
          if ( 8 * v11 + 8 >= v19 || v11 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v31, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v31);
            sub_233E40((__int64)v31);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (unsigned int *)sub_186B300(v7 - 1, v19);
          v7 = v20 + 2;
          ++v6;
          *v20 = (3 * v11 + 1) >> 1;
          v21 = v20[1];
          v13 = (unsigned int)(v21 + 1);
          v7[v21] = v4;
          *((_DWORD *)v7 - 1) = v13;
          if ( v5 == v6 )
            goto LABEL_22;
        }
        else
        {
          v12 = v11;
          v13 = v11 + 1;
          v14 = (unsigned int **)&v7[v12];
LABEL_13:
          ++v6;
          *v14 = v4;
          *((_DWORD *)v7 - 1) = v13;
          if ( v5 == v6 )
            goto LABEL_22;
        }
      }
    }
    v4 = nullptr;
  }
  v7 = nullptr;
  v13 = 0;
LABEL_22:
  v31[0] = 0;
  v22 = sub_15EC240(v3, v13);
  v23 = v22;
  if ( v22 )
  {
    ++*(_DWORD *)(v22 + 8);
    result = sub_965BE0(a1, v22, v31);
    v10 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v3, v23);
  }
  else
  {
    result = sub_965BE0(a1, 0, v31);
  }
  if ( v4 )
  {
    v10 = v4[2]-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v3, v4);
  }
  if ( v7 )
  {
    v25 = v7;
    v26 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
    if ( (unsigned __int64)v7 < v26 )
    {
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v10 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( (unsigned __int64)++v25 >= v26 )
            return sub_186B220(v7 - 1);
        }
        ++v25;
        sub_15D7BC0(v3, v27);
      }
      while ( (unsigned __int64)v25 < v26 );
    }
    return sub_186B220(v7 - 1);
  }
  return result;
}

