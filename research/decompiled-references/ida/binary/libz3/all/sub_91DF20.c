__int64 __fastcall sub_91DF20(__int64 **a1, __int64 *a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 result; // rax
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r15d
  size_t v24; // rdi
  __int64 *v25; // r15
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 *v32; // r14
  __int64 *v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdi
  _QWORD *v37; // rax
  __int64 *v38; // [rsp+8h] [rbp-70h]
  _DWORD *v39; // [rsp+10h] [rbp-68h]
  unsigned int v40; // [rsp+1Ch] [rbp-5Ch]
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *a1;
  if ( *a1 )
  {
    LODWORD(v7) = *((_DWORD *)v6 - 1);
    v8 = &v6[2 * (unsigned int)v7];
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v23 = (unsigned int)(3 * v7 + 1) >> 1;
      v40 = v23;
      v24 = 16 * v23 + 8;
      if ( 16 * (int)v7 + 8 >= (unsigned int)v24 || (unsigned int)v7 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v41, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v7 = sub_186B270(v24);
      v25 = *a1;
      v39 = (_DWORD *)v7;
      v6 = (__int64 *)(v7 + 8);
      if ( *a1 )
      {
        v26 = *((unsigned int *)v25 - 1);
        v27 = v7 + 8;
        *(_DWORD *)(v7 + 4) = v26;
        v28 = v25;
        v29 = &v25[2 * v26];
        if ( v25 != v29 )
        {
          do
          {
            v30 = *v28;
            v28 += 2;
            v27 += 16;
            *(_QWORD *)(v27 - 16) = v30;
            v31 = *(v28 - 1);
            *(v28 - 1) = 0;
            *(_QWORD *)(v27 - 8) = v31;
          }
          while ( v29 != v28 );
        }
        v38 = &v25[2 * v26];
        if ( (_DWORD)v26 )
        {
          do
          {
            v32 = (__int64 *)v25[1];
            if ( v32 )
            {
              v33 = &v32[*((unsigned int *)v32 - 1)];
              if ( v32 >= v33 )
                goto LABEL_31;
              do
              {
                while ( 1 )
                {
                  v34 = *v32;
                  if ( *v32 )
                  {
                    v35 = *v25;
                    if ( (*(_DWORD *)(v34 + 8))-- == 1 )
                      break;
                  }
                  if ( ++v32 >= v33 )
                    goto LABEL_30;
                }
                sub_15D7BC0(v35, v34);
                ++v32;
              }
              while ( v32 < v33 );
LABEL_30:
              v32 = (__int64 *)v25[1];
              if ( v32 )
LABEL_31:
                sub_186B220(v32 - 1);
            }
            v25 += 2;
          }
          while ( v25 != v38 );
          v25 = *a1;
        }
        sub_186B220(v25 - 1);
        v7 = (unsigned int)v39[1];
        v8 = &v6[2 * v7];
      }
      else
      {
        *(_DWORD *)(v7 + 4) = 0;
        v8 = (__int64 *)(v7 + 8);
        LODWORD(v7) = 0;
      }
      *a1 = v6;
      *v39 = v40;
    }
  }
  else
  {
    v7 = sub_186B270(0x28u);
    v6 = (__int64 *)(v7 + 8);
    *(_QWORD *)v7 = 2;
    LODWORD(v7) = 0;
    *a1 = v6;
    v8 = v6;
  }
  v9 = *a2;
  v8[1] = 0;
  v10 = a2[1];
  *v8 = v9;
  if ( v10 )
  {
    v11 = nullptr;
    v12 = 0;
    do
    {
      if ( v12 >= *(_DWORD *)(v10 - 4) )
        break;
      v13 = *(_QWORD *)(v10 + 8LL * v12);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      if ( v11 )
      {
        v14 = *((_DWORD *)v11 - 1);
        if ( v14 == *((_DWORD *)v11 - 2) )
        {
          v19 = (3 * v14 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v20 || v14 >= v19 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_91CD50(v41, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v41);
            sub_233E40((__int64)v41);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (unsigned int *)sub_186B300(v11 - 1, v20);
          v22 = v21[1];
          v11 = v21 + 2;
          v8[1] = (__int64)(v21 + 2);
          *v21 = v19;
          LODWORD(v21) = v22;
          v17 = &v11[v22];
          v10 = a2[1];
          v16 = (_DWORD)v21 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v11[v15];
        }
      }
      else
      {
        v37 = (_QWORD *)sub_186B270(0x18u);
        v11 = v37 + 1;
        *v37 = 2;
        v16 = 1;
        v8[1] = (__int64)v11;
        v17 = v11;
        v10 = a2[1];
      }
      *v17 = v13;
      ++v12;
      *((_DWORD *)v11 - 1) = v16;
    }
    while ( v10 );
    v6 = *a1;
    LODWORD(v7) = *((_DWORD *)*a1 - 1);
  }
  result = (unsigned int)(v7 + 1);
  *((_DWORD *)v6 - 1) = result;
  return result;
}

