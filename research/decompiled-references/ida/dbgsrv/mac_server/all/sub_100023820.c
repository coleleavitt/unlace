/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023820
// Address: 0x0000000100023820

//----- (0000000100023820) ----------------------------------------------------
__int64 __fastcall sub_100023820(_QWORD *a1, const void *a2, int a3, char a4, char a5, __int64 a6, __int64 a7)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 i; // r12
  const char *v14; // rax
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r13
  const void *v19; // r15
  size_t v20; // rax
  size_t v21; // r14
  unsigned __int64 v22; // rbx
  void *v23; // rax
  void *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rbx
  size_t v28; // rax
  size_t v29; // r14
  unsigned __int64 v30; // r15
  void *v31; // rax
  _QWORD *v32; // rdi
  char *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  const char *v36; // rdx
  __int64 v37; // rcx
  _Unwind_Exception *v39; // rax
  unsigned __int64 v44; // [rsp+38h] [rbp-48h]
  __int64 v46; // [rsp+48h] [rbp-38h] BYREF

  v7 = a1;
  if ( a6 )
  {
    v44 = 1;
    if ( (a3 & 0x100) == 0 )
    {
      if ( a4 == 1 )
      {
        v8 = 16;
      }
      else if ( a4 == 7 )
      {
        v8 = 64;
      }
      else
      {
        if ( a4 != 2 )
        {
          if ( under_debugger == 1 )
            BUG();
          interr(0x703u);
          _Unwind_Resume(v39);
        }
        v8 = 32;
      }
      v44 = v8;
    }
    v10 = (void *)a1[9];
    v11 = a1[10];
    if ( a1[11] < (unsigned __int64)(v11 + 1) )
    {
      v10 = qvector_reserve((__int64)(a1 + 9), v10, v11 + 1, 0x18u);
      a1[9] = v10;
      v11 = a1[10];
    }
    v12 = (__int64)v10 + 24 * v11;
    *(_OWORD *)v12 = 0;
    *(_QWORD *)(v12 + 16) = 0;
    ++v7[10];
    v46 = 0;
    sub_100023B90(v12, v44, &v46);
    v7 = a1;
    for ( i = 0; i != v44; ++i )
    {
      if ( *(_QWORD *)(a6 + 8 * i) )
      {
        v15 = (char *)v7[3];
        v16 = v7[4];
        if ( v7[5] < (unsigned __int64)(v16 + 1) )
        {
          v15 = (char *)qvector_reserve((__int64)(a1 + 3), v15, v16 + 1, 0x18u);
          v7 = a1;
          a1[3] = v15;
          v16 = a1[4];
        }
        v17 = 3 * v16;
        *(_OWORD *)&v15[8 * v17] = 0;
        *(_QWORD *)&v15[8 * v17 + 16] = 0;
        ++v7[4];
        v18 = (__int64)&v15[8 * v17];
        v19 = *(const void **)(a6 + 8 * i);
        if ( v19 && (v20 = strlen(*(const char **)(a6 + 8 * i))) != 0 )
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = *(void **)v18;
          if ( *(_QWORD *)(v18 + 16) < v22 )
          {
            v23 = qvector_reserve(v18, *(void **)v18, v22, 1u);
            *(_QWORD *)v18 = v23;
          }
          *(_QWORD *)(v18 + 8) = v22;
          memmove(v23, v19, v21);
          *(_BYTE *)(*(_QWORD *)v18 + v21) = 0;
          v14 = _s1;
          v7 = a1;
          if ( *(_QWORD *)(v18 + 8) )
            v14 = *(const char **)v18;
        }
        else
        {
          *(_QWORD *)(v18 + 8) = 0;
          v14 = _s1;
        }
        *(_QWORD *)(*(_QWORD *)v12 + 8 * i) = v14;
      }
    }
    v9 = *(_QWORD *)v12;
  }
  else
  {
    v9 = 0;
  }
  v24 = (void *)v7[3];
  v25 = v7[4];
  if ( v7[5] >= (unsigned __int64)(v25 + 1) )
  {
    v26 = v7;
  }
  else
  {
    v24 = qvector_reserve((__int64)(v7 + 3), v24, v25 + 1, 0x18u);
    v26 = a1;
    a1[3] = v24;
    v25 = a1[4];
  }
  v27 = (__int64)v24 + 24 * v25;
  *(_OWORD *)v27 = 0;
  *(_QWORD *)(v27 + 16) = 0;
  ++v26[4];
  if ( a2 && (v28 = strlen((const char *)a2)) != 0 )
  {
    v29 = v28;
    v30 = v28 + 1;
    v31 = *(void **)v27;
    if ( *(_QWORD *)(v27 + 16) < v30 )
    {
      v31 = qvector_reserve(v27, *(void **)v27, v30, 1u);
      *(_QWORD *)v27 = v31;
    }
    *(_QWORD *)(v27 + 8) = v30;
    memmove(v31, a2, v29);
    *(_BYTE *)(*(_QWORD *)v27 + v29) = 0;
  }
  else
  {
    *(_QWORD *)(v27 + 8) = 0;
  }
  v32 = a1;
  v33 = (char *)*a1;
  v34 = a1[1];
  v35 = v34 + 1;
  if ( a1[2] < (unsigned __int64)(v34 + 1) )
  {
    v33 = (char *)qvector_reserve((__int64)a1, v33, v35, 0x20u);
    v32 = a1;
    *a1 = v33;
    v34 = a1[1];
    v35 = v34 + 1;
  }
  v32[1] = v35;
  if ( *(_QWORD *)(v27 + 8) )
    v36 = *(const char **)v27;
  else
    v36 = _s1;
  v37 = 32 * v34;
  *(_QWORD *)&v33[v37] = v36;
  *(_DWORD *)&v33[v37 + 8] = a3;
  v33[v37 + 13] = a4;
  v33[v37 + 12] = a5;
  *(_QWORD *)&v33[v37 + 16] = v9;
  *(_QWORD *)&v33[v37 + 24] = a7;
  return __stack_chk_guard;
}
// 100023B88: variable 'v39' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
