__int64 __fastcall sub_8938D0(__int64 **a1, __int64 *a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  _QWORD *v19; // rsi
  __int64 result; // rax
  unsigned int v21; // r15d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  size_t v26; // rdi
  __int64 *v27; // r15
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 *v34; // r14
  __int64 *v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  _QWORD *v39; // rax
  __int64 *v40; // [rsp+8h] [rbp-70h]
  _DWORD *v41; // [rsp+10h] [rbp-68h]
  unsigned int v42; // [rsp+1Ch] [rbp-5Ch]
  __int64 v43[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *a1;
  if ( *a1 )
  {
    LODWORD(v9) = *((_DWORD *)v8 - 1);
    v10 = &v8[2 * (unsigned int)v9];
    if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
    {
      v25 = (unsigned int)(3 * v9 + 1) >> 1;
      v42 = v25;
      v26 = 16 * v25 + 8;
      if ( 16 * (int)v9 + 8 >= (unsigned int)v26 || (unsigned int)v9 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v43, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v9 = sub_186B270(v26);
      v27 = *a1;
      v41 = (_DWORD *)v9;
      v8 = (__int64 *)(v9 + 8);
      if ( *a1 )
      {
        v28 = *((unsigned int *)v27 - 1);
        v29 = v9 + 8;
        *(_DWORD *)(v9 + 4) = v28;
        v30 = v27;
        v31 = &v27[2 * v28];
        if ( v27 != v31 )
        {
          do
          {
            v32 = *v30;
            v30 += 2;
            v29 += 16;
            *(_QWORD *)(v29 - 16) = v32;
            v33 = *(v30 - 1);
            *(v30 - 1) = 0;
            *(_QWORD *)(v29 - 8) = v33;
          }
          while ( v31 != v30 );
        }
        v40 = &v27[2 * v28];
        if ( (_DWORD)v28 )
        {
          do
          {
            v34 = (__int64 *)v27[1];
            if ( v34 )
            {
              v35 = &v34[*((unsigned int *)v34 - 1)];
              if ( v34 >= v35 )
                goto LABEL_31;
              do
              {
                while ( 1 )
                {
                  v36 = *v34;
                  if ( *v34 )
                  {
                    v37 = *v27;
                    if ( (*(_DWORD *)(v36 + 8))-- == 1 )
                      break;
                  }
                  if ( ++v34 >= v35 )
                    goto LABEL_30;
                }
                sub_15D7BC0(v37, v36);
                ++v34;
              }
              while ( v34 < v35 );
LABEL_30:
              v34 = (__int64 *)v27[1];
              if ( v34 )
LABEL_31:
                sub_186B220(v34 - 1);
            }
            v27 += 2;
          }
          while ( v27 != v40 );
          v27 = *a1;
        }
        sub_186B220(v27 - 1);
        v9 = (unsigned int)v41[1];
        v10 = &v8[2 * v9];
      }
      else
      {
        *(_DWORD *)(v9 + 4) = 0;
        v10 = (__int64 *)(v9 + 8);
        LODWORD(v9) = 0;
      }
      *a1 = v8;
      *v41 = v42;
    }
  }
  else
  {
    v9 = sub_186B270(0x28u);
    v8 = (__int64 *)(v9 + 8);
    *(_QWORD *)v9 = 2;
    LODWORD(v9) = 0;
    *a1 = v8;
    v10 = v8;
  }
  v11 = *a2;
  v10[1] = 0;
  v12 = a2[1];
  *v10 = v11;
  if ( v12 )
  {
    v13 = nullptr;
    v14 = 0;
    do
    {
      if ( v14 >= *(_DWORD *)(v12 - 4) )
        break;
      v15 = *(_QWORD *)(v12 + 8LL * v14);
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      if ( v13 )
      {
        v16 = *((_DWORD *)v13 - 1);
        if ( v16 == *((_DWORD *)v13 - 2) )
        {
          v21 = (3 * v16 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v22 || v16 >= v21 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v43, "Overflow encountered when expanding vector", v3);
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v43);
            sub_233E40((__int64)v43);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v13 - 1, v22);
          v24 = v23[1];
          v13 = v23 + 2;
          v10[1] = (__int64)(v23 + 2);
          *v23 = v21;
          LODWORD(v23) = v24;
          v19 = &v13[v24];
          v12 = a2[1];
          v18 = (_DWORD)v23 + 1;
        }
        else
        {
          v17 = v16;
          v18 = v16 + 1;
          v19 = &v13[v17];
        }
      }
      else
      {
        v39 = (_QWORD *)sub_186B270(0x18u);
        v13 = v39 + 1;
        *v39 = 2;
        v18 = 1;
        v10[1] = (__int64)v13;
        v19 = v13;
        v12 = a2[1];
      }
      *v19 = v15;
      ++v14;
      *((_DWORD *)v13 - 1) = v18;
    }
    while ( v12 );
    v8 = *a1;
    LODWORD(v9) = *((_DWORD *)*a1 - 1);
  }
  result = (unsigned int)(v9 + 1);
  *((_DWORD *)v8 - 1) = result;
  return result;
}

