__int64 __fastcall sub_B46500(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  char **v3; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  const void *v9; // rdi
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 *v14; // rbx
  __int64 *v15; // r15
  _DWORD *v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  unsigned int *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r15
  unsigned int v24; // eax
  __int64 result; // rax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r14d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-70h]
  int v41[2]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 448);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(unsigned int *)(a1 + 80);
  if ( (_DWORD)v7 == -1
    || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8672LL)) == 0
    || (unsigned int)v7 >= *(_DWORD *)(v8 - 4)
    || (v9 = *(const void **)(v8 + 8 * v7)) == nullptr )
  {
    BUG();
  }
  v10 = __dynamic_cast(
          v9,
          (const struct __class_type_info *)&`typeinfo for'smt::theory,
          (const struct __class_type_info *)&`typeinfo for'smt::theory_array,
          0);
  v11 = sub_B39350(a2[1], v10[2]);
  do
  {
    v12 = v11;
    v13 = v11;
    v11 = *(_DWORD *)(*((_QWORD *)v10 + 43) + 4LL * v11);
  }
  while ( v13 != v11 );
  v14 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)v10 + 32) + 8 * v12) + 8LL);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v15 != v14 )
    {
      v16 = *(_DWORD **)(a1 + 448);
      v17 = *v14;
      if ( v16 )
        goto LABEL_23;
      ++v14;
      v18 = sub_186B270(0x18u);
      v16 = (_DWORD *)(v18 + 8);
      *(_QWORD *)v18 = 2;
      *(_QWORD *)(a1 + 448) = v18 + 8;
      *(_QWORD *)(v18 + 8) = v17;
      for ( *(_DWORD *)(v18 + 4) = 1; v15 != v14; *(v16 - 1) = v28 )
      {
        v17 = *v14;
LABEL_23:
        v30 = *(v16 - 1);
        if ( v30 == *(v16 - 2) )
        {
          v31 = (3 * v30 + 1) >> 1;
          v32 = 8 * v31 + 8;
          if ( 8 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v41, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v41);
            sub_233E40((__int64)v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (unsigned int *)sub_186B300(v16 - 2, v32);
          v34 = v33[1];
          v16 = v33 + 2;
          *v33 = v31;
          *(_QWORD *)(a1 + 448) = v33 + 2;
          LODWORD(v33) = v34;
          v29 = &v16[2 * v34];
          v28 = (_DWORD)v33 + 1;
        }
        else
        {
          v27 = v30;
          v28 = v30 + 1;
          v29 = &v16[2 * v27];
        }
        ++v14;
        *v29 = v17;
      }
    }
  }
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)v41 = *a2;
  v21 = (unsigned int *)sub_15DCAD0(v20, (int)v41, 0);
  if ( v21 )
    ++v21[2];
  v22 = *(_QWORD *)(a1 + 448);
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v21);
  if ( v22 )
  {
    v24 = *(_DWORD *)(v22 - 4);
    if ( v24 == *(_DWORD *)(v22 - 8) )
    {
      v35 = (3 * v24 + 1) >> 1;
      v36 = 8 * v35 + 8;
      if ( 8 * v24 + 8 >= (unsigned int)v36 || v24 >= v35 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v41, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int *)sub_186B300((void *)(v22 - 8), v36);
      v38 = v37[1];
      *v37 = v35;
      *(_QWORD *)(a1 + 448) = v37 + 2;
      *(_QWORD *)&v37[2 * v38 + 2] = v23;
      v37[1] = v38 + 1;
      result = a1 + 448;
    }
    else
    {
      *(_QWORD *)(v22 + 8LL * v24) = v23;
      *(_DWORD *)(v22 - 4) = v24 + 1;
      result = a1 + 448;
    }
  }
  else
  {
    v39 = (_QWORD *)sub_186B270(0x18u);
    v39[1] = v23;
    *(_QWORD *)(a1 + 448) = v39 + 1;
    *v39 = 0x100000002LL;
    result = a1 + 448;
  }
  if ( v21[2]-- == 1 )
  {
    v40 = result;
    sub_15D7BC0(v19, v21);
    return v40;
  }
  return result;
}

