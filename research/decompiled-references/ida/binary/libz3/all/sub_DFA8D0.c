__int64 __fastcall sub_DFA8D0(__int64 ****a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char **v5; // r12
  char **exception; // rbx
  __int64 *v7; // r14
  __int64 v8; // r12
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 ***v12; // r13
  __int64 *v13; // r12
  _QWORD *v14; // rax
  unsigned int v15; // edx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 **v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 *v28; // rdx
  unsigned int v29; // r14d
  size_t v30; // rdi
  __int64 v31; // rax
  __int64 **v32; // r15
  _DWORD *v33; // r12
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // r8d
  __int64 **v37; // rax
  __int64 **v38; // rdi
  __int64 *v39; // rsi
  __int64 **v40; // r9
  __int64 *v41; // rdi
  __int64 ***v42; // rax
  _QWORD *v43; // rax
  __int64 **v44; // [rsp+0h] [rbp-68h]
  unsigned int v45; // [rsp+Ch] [rbp-5Ch]
  __int64 v46[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = (__int64 *)a4;
  v8 = a3;
  v10 = sub_DF7310(a1, a3, a4);
  result = 0;
  if ( !v10 )
  {
    if ( a5 )
      ++*(_DWORD *)(a5 + 8);
    v12 = *a1;
    if ( !*a1 )
    {
      v42 = (__int64 ***)sub_186B270(8u);
      *v42 = nullptr;
      v12 = v42;
      *a1 = v42;
    }
    if ( (_DWORD)v8 )
    {
      v13 = &v7[v8];
      v14 = (_QWORD *)sub_186B270(0x18u);
      v15 = 1;
      *v14 = 2;
      v16 = v14 + 1;
      v10 = (__int64)v16;
      while ( 1 )
      {
        v17 = *v7++;
        *v16 = v17;
        *(_DWORD *)(v10 - 4) = v15;
        if ( v13 == v7 )
          break;
        if ( *(_DWORD *)(v10 - 8) == v15 )
        {
          v19 = (3 * v15 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_DF63A0(v46, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (unsigned int *)sub_186B300((void *)(v10 - 8), v20);
          v10 = (__int64)(v21 + 2);
          *v21 = v19;
          v22 = v21[1];
          v23 = v22;
          v16 = (_QWORD *)(v10 + 8 * v22);
          v15 = v23 + 1;
        }
        else
        {
          v18 = v15++;
          v16 = (_QWORD *)(v10 + 8 * v18);
        }
      }
    }
    v24 = *v12;
    if ( *v12 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v29 = (3 * v25 + 1) >> 1;
        v45 = v29;
        v30 = 16 * v29 + 8;
        if ( 16 * v25 + 8 >= (unsigned int)v30 || v25 >= v29 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_DF63A0(v46, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v46);
          sub_233E40((__int64)v46);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = sub_186B270(v30);
        v32 = *v12;
        v33 = (_DWORD *)v31;
        v24 = (__int64 **)(v31 + 8);
        if ( *v12 )
        {
          v34 = *((unsigned int *)v32 - 1);
          v35 = v31 + 8;
          *(_DWORD *)(v31 + 4) = v34;
          v36 = v34;
          v37 = v32;
          v38 = &v32[2 * v34];
          if ( v32 != v38 )
          {
            do
            {
              v39 = *v37;
              *v37 = nullptr;
              v37 += 2;
              v35 += 16;
              *(_QWORD *)(v35 - 16) = v39;
              *(_QWORD *)(v35 - 8) = *(v37 - 1);
            }
            while ( v37 != v38 );
          }
          v40 = &v32[2 * v34];
          if ( v36 )
          {
            do
            {
              while ( *v32 )
              {
                v41 = *v32 - 1;
                v44 = v40;
                v32 += 2;
                sub_186B220(v41);
                v40 = v44;
                if ( v44 == v32 )
                  goto LABEL_26;
              }
              v32 += 2;
            }
            while ( v32 != v40 );
LABEL_26:
            v32 = *v12;
          }
          sub_186B220(v32 - 1);
          v28 = (__int64 *)&v24[2 * (unsigned int)v33[1]];
          v27 = v33[1] + 1;
        }
        else
        {
          *(_DWORD *)(v31 + 4) = 0;
          v28 = (__int64 *)(v31 + 8);
          v27 = 1;
        }
        *v12 = v24;
        *v33 = v45;
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v28 = (__int64 *)&v24[2 * v26];
      }
    }
    else
    {
      v43 = (_QWORD *)sub_186B270(0x28u);
      v24 = (__int64 **)(v43 + 1);
      *v43 = 2;
      v27 = 1;
      *v12 = v24;
      v28 = (__int64 *)v24;
    }
    *v28 = v10;
    v28[1] = a5;
    *((_DWORD *)v24 - 1) = v27;
    return 1;
  }
  return result;
}

