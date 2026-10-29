__int64 __fastcall sub_A2A070(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int *v5; // rbp
  unsigned int *v7; // r14
  unsigned int *v8; // rax
  _QWORD *v9; // r15
  unsigned int v10; // r13d
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r8d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 result; // rax
  const __m128i *v17; // rbp
  const __m128i *i; // r13
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  void *v24; // rdi
  const __m128i *v25; // rbx
  __int64 v26; // rbp
  __m128i **v27; // r12
  const __m128i *v28; // rbp
  const __m128i *v29; // rsi
  __int64 v30; // rax
  _QWORD *v31; // r14
  _QWORD *v32; // rdx
  unsigned int *v33; // rbx
  unsigned int *v34; // r15
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // ebp
  size_t v38; // rsi
  unsigned int *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  unsigned int *v42; // rcx
  char **exception; // rbp
  unsigned int v44; // [rsp+8h] [rbp-70h]
  __int64 v45[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(unsigned int **)(a1 + 120);
  if ( a4 )
  {
    if ( v5 )
    {
      v7 = &v5[*(v5 - 1)];
      while ( v7 != v5 )
      {
        v9 = *(_QWORD **)(a2 + 8);
        v10 = *v5;
        v11 = (_QWORD *)*v9;
        if ( *v9 )
        {
          v12 = *((unsigned int *)v11 - 1);
          if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
          {
            v13 = (unsigned int)(3 * v12 + 1) >> 1;
            v14 = 4 * v13 + 8;
            if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
              goto LABEL_39;
            v44 = (unsigned int)(3 * v12 + 1) >> 1;
            v15 = (unsigned int *)sub_186B300(v11 - 1, v14);
            v11 = v15 + 2;
            *v9 = v15 + 2;
            *v15 = v44;
            v8 = &v15[v15[1] + 2];
          }
          else
          {
            v8 = (unsigned int *)v11 + v12;
          }
        }
        else
        {
          v40 = (_QWORD *)sub_186B270(0x10u);
          v11 = v40 + 1;
          *v40 = 2;
          *v9 = v40 + 1;
          v8 = (unsigned int *)(v40 + 1);
        }
        *v8 = v10;
        ++v5;
        ++*((_DWORD *)v11 - 1);
        sub_98D840(v9 + 2, a3);
      }
    }
    result = a1;
    v17 = *(const __m128i **)(a1 + 128);
    if ( v17 )
    {
      for ( i = &v17[v17[-1].m128i_u32[3]]; i != v17; ++*(_DWORD *)(result - 4) )
      {
        v20 = *(_QWORD *)(a2 + 8);
        sub_98CA20((__m128i **)(v20 + 8), v17);
        v21 = *(_QWORD *)(v20 + 24);
        if ( !v21 || (v22 = *(unsigned int *)(v21 - 4), (_DWORD)v22 == *(_DWORD *)(v21 - 8)) )
        {
          sub_53D790((__int64 *)(v20 + 24));
          v21 = *(_QWORD *)(v20 + 24);
          v22 = *(unsigned int *)(v21 - 4);
        }
        v23 = 32 * v22 + v21;
        *(_QWORD *)v23 = 0;
        v24 = qword_1C7F2C0;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 1;
        *(_QWORD *)(v23 + 24) = 0;
        if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
        {
          sub_182C690(v24, v23, a3);
          if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
          {
LABEL_22:
            sub_182C690(v24, v23 + 16, a3 + 16);
            goto LABEL_17;
          }
        }
        else
        {
          *(_DWORD *)v23 = *(_DWORD *)a3;
          if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
            goto LABEL_22;
        }
        v19 = *(_DWORD *)(a3 + 16);
        *(_BYTE *)(v23 + 20) &= ~1u;
        *(_DWORD *)(v23 + 16) = v19;
LABEL_17:
        result = *(_QWORD *)(v20 + 24);
        ++v17;
      }
    }
  }
  else
  {
    if ( v5 )
    {
      v30 = *(v5 - 1);
      v31 = *(_QWORD **)(a2 + 8);
      if ( (_DWORD)v30 )
      {
        v32 = (_QWORD *)*v31;
        v33 = *(unsigned int **)(a1 + 120);
        v34 = &v5[v30];
        if ( *v31 )
          goto LABEL_33;
        v41 = (_QWORD *)sub_186B270(0x10u);
        v32 = v41 + 1;
        *v41 = 2;
        v42 = (unsigned int *)(v41 + 1);
        *v31 = v41 + 1;
        while ( 1 )
        {
          v35 = *v33++;
          *v42 = v35;
          ++*((_DWORD *)v32 - 1);
          if ( v34 == v33 )
            break;
LABEL_33:
          v36 = *((unsigned int *)v32 - 1);
          v42 = (unsigned int *)v32 + v36;
          if ( (_DWORD)v36 == *((_DWORD *)v32 - 2) )
          {
            v37 = (unsigned int)(3 * v36 + 1) >> 1;
            v38 = 4 * v37 + 8;
            if ( 4 * (int)v36 + 8 >= (unsigned int)v38 || (unsigned int)v36 >= v37 )
            {
LABEL_39:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_98B3B0(v45, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v45);
              sub_233E40((__int64)v45);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v39 = (unsigned int *)sub_186B300(v32 - 1, v38);
            v32 = v39 + 2;
            *v31 = v39 + 2;
            *v39 = v37;
            v42 = &v39[v39[1] + 2];
          }
        }
      }
    }
    result = a1;
    v25 = *(const __m128i **)(a1 + 128);
    if ( v25 )
    {
      v26 = v25[-1].m128i_u32[3];
      v27 = (__m128i **)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( (_DWORD)v26 )
      {
        v28 = &v25[v26];
        do
        {
          v29 = v25++;
          result = sub_98CA20(v27, v29);
        }
        while ( v25 != v28 );
      }
    }
  }
  return result;
}

