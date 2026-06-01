_QWORD *__fastcall sub_E41FC0(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // r13d
  size_t v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // r8d
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 *v16; // rbp
  __int64 *v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 *v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  _QWORD *result; // rax
  _QWORD *v27; // rax
  char **exception; // rbx
  __int64 v29; // rdx
  _DWORD *v30; // [rsp+0h] [rbp-68h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 32 * v3 + 8;
    if ( 32 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_181416(v32, "Overflow encountered when expanding vector", v29);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v32);
      sub_233E40((__int64)v32);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v5 = sub_186B270(v4);
    v6 = (__int64 *)*a1;
    v30 = (_DWORD *)v5;
    v7 = v5 + 8;
    v31 = v7;
    if ( *a1 )
    {
      v8 = *((unsigned int *)v6 - 1);
      v9 = v7;
      v30[1] = v8;
      v10 = v8;
      v11 = v6;
      v12 = &v6[4 * v8];
      if ( v6 != v12 )
      {
        do
        {
          v13 = *v11;
          v11 += 4;
          v9 += 32;
          *(_QWORD *)(v9 - 32) = v13;
          v14 = *(v11 - 3);
          *(v11 - 3) = 0;
          *(_QWORD *)(v9 - 24) = v14;
          *(_QWORD *)(v9 - 16) = *(v11 - 2);
          v15 = *(v11 - 1);
          *(v11 - 1) = 0;
          *(_QWORD *)(v9 - 8) = v15;
        }
        while ( v12 != v11 );
      }
      v16 = &v6[4 * v8];
      if ( v10 )
      {
        do
        {
          v17 = (__int64 *)v6[3];
          if ( v17 )
          {
            v18 = &v17[*((unsigned int *)v17 - 1)];
            if ( v17 >= v18 )
              goto LABEL_16;
            do
            {
              while ( 1 )
              {
                v19 = *v17;
                if ( *v17 )
                {
                  v20 = v6[2];
                  v21 = (*(_DWORD *)(v19 + 8))-- == 1;
                  if ( v21 )
                    break;
                }
                if ( ++v17 >= v18 )
                  goto LABEL_15;
              }
              sub_15D7BC0(v20, v19);
              ++v17;
            }
            while ( v17 < v18 );
LABEL_15:
            v17 = (__int64 *)v6[3];
            if ( v17 )
LABEL_16:
              sub_186B220(v17 - 1);
          }
          v22 = (__int64 *)v6[1];
          if ( v22 )
          {
            v23 = &v22[*((unsigned int *)v22 - 1)];
            if ( v22 >= v23 )
              goto LABEL_25;
            do
            {
              while ( 1 )
              {
                v24 = *v22;
                if ( *v22 )
                {
                  v25 = *v6;
                  v21 = (*(_DWORD *)(v24 + 8))-- == 1;
                  if ( v21 )
                    break;
                }
                if ( ++v22 >= v23 )
                  goto LABEL_24;
              }
              sub_15D7BC0(v25, v24);
              ++v22;
            }
            while ( v22 < v23 );
LABEL_24:
            v22 = (__int64 *)v6[1];
            if ( v22 )
LABEL_25:
              sub_186B220(v22 - 1);
          }
          v6 += 4;
        }
        while ( v16 != v6 );
        v6 = (__int64 *)*a1;
      }
      sub_186B220(v6 - 1);
    }
    else
    {
      v30[1] = 0;
    }
    *a1 = v31;
    *v30 = v3;
    return v30;
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x48u);
    *v27 = 2;
    result = v27 + 1;
    *a1 = (__int64)result;
  }
  return result;
}

