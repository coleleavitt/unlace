unsigned int *__fastcall sub_6E1200(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // eax
  size_t v23; // rdi
  __int64 *v24; // rdi
  _DWORD *v25; // r8
  __int64 v26; // rbp
  __int64 v27; // rdx
  int v28; // r10d
  __int64 *v29; // rax
  __int64 *v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 *v33; // rbp
  __int64 *v34; // rbx
  __int64 *v35; // rdi
  char **exception; // rbx
  unsigned int v37; // [rsp+4h] [rbp-84h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+8h] [rbp-80h]
  _DWORD *v41; // [rsp+10h] [rbp-78h]
  _DWORD *v42; // [rsp+10h] [rbp-78h]
  __int64 v43; // [rsp+18h] [rbp-70h]
  __int64 v44[11]; // [rsp+30h] [rbp-58h] BYREF

  v12 = a1;
  v44[0] = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_6DE920((unsigned int **)(a1 + 8), v44);
  v44[0] = a3;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_6DE920((unsigned int **)(a1 + 48), v44);
  v13 = *(_QWORD *)(a1 + 32);
  if ( v13 )
  {
    LODWORD(v14) = *(_DWORD *)(v13 - 4);
    v15 = v13 + 16LL * (unsigned int)v14;
    if ( (_DWORD)v14 == *(_DWORD *)(v13 - 8) )
    {
      v37 = (unsigned int)(3 * v14 + 1) >> 1;
      v23 = 16 * v37 + 8;
      if ( 16 * (int)v14 + 8 >= (unsigned int)v23 || (unsigned int)v14 >= (unsigned int)(3 * v14 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v44, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v44);
        sub_233E40((__int64)v44);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = sub_186B270(v23);
      v24 = *(__int64 **)(v12 + 32);
      v25 = (_DWORD *)v14;
      v13 = v14 + 8;
      if ( v24 )
      {
        v26 = *((unsigned int *)v24 - 1);
        v27 = v14 + 8;
        *(_DWORD *)(v14 + 4) = v26;
        v28 = v26;
        v29 = v24;
        v30 = &v24[2 * v26];
        if ( v24 != v30 )
        {
          do
          {
            v31 = *v29;
            v29 += 2;
            v27 += 16;
            *(_QWORD *)(v27 - 16) = v31;
            v32 = *(v29 - 1);
            *(v29 - 1) = 0;
            *(_QWORD *)(v27 - 8) = v32;
          }
          while ( v30 != v29 );
        }
        v33 = &v24[2 * v26];
        if ( v28 )
        {
          v39 = v13;
          v41 = v25;
          v43 = v12;
          v34 = v24;
          do
          {
            v35 = v34;
            v34 += 2;
            sub_2334C0(v35);
          }
          while ( v34 != v33 );
          v12 = v43;
          v13 = v39;
          v25 = v41;
          v24 = *(__int64 **)(v43 + 32);
        }
        v42 = v25;
        v40 = v13;
        sub_186B220(v24 - 1);
        v25 = v42;
        v13 = v40;
        v14 = (unsigned int)v42[1];
        v15 = v40 + 16 * v14;
      }
      else
      {
        *(_DWORD *)(v14 + 4) = 0;
        v15 = v14 + 8;
        LODWORD(v14) = 0;
      }
      *(_QWORD *)(v12 + 32) = v13;
      *v25 = v37;
    }
  }
  else
  {
    v14 = sub_186B270(0x28u);
    v13 = v14 + 8;
    *(_QWORD *)v14 = 2;
    LODWORD(v14) = 0;
    *(_QWORD *)(a1 + 32) = v13;
    v15 = v13;
  }
  v16 = *a4;
  *(_QWORD *)(v15 + 8) = 0;
  v17 = a4[1];
  *(_QWORD *)v15 = v16;
  if ( v17 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      if ( v19 >= *(_DWORD *)(v17 - 4) )
        break;
      v20 = *(_QWORD *)(v17 + 8LL * v19);
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      if ( v18 )
      {
        v21 = *(_DWORD *)(v18 - 4);
        if ( v21 != *(_DWORD *)(v18 - 8) )
          continue;
      }
      v38 = v20;
      sub_23A6F0((unsigned int **)(v15 + 8));
      v18 = *(_QWORD *)(v15 + 8);
      v17 = a4[1];
      v20 = v38;
      v21 = *(_DWORD *)(v18 - 4);
      ++v19;
      *(_QWORD *)(v18 + 8LL * v21) = v20;
      *(_DWORD *)(v18 - 4) = v21 + 1;
    }
    while ( v17 );
    v13 = *(_QWORD *)(v12 + 32);
    LODWORD(v14) = *(_DWORD *)(v13 - 4);
  }
  *(_DWORD *)(v13 - 4) = v14 + 1;
  v44[0] = a5;
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  sub_6DE920((unsigned int **)(v12 + 64), v44);
  v44[0] = a6;
  if ( a6 )
    ++*(_DWORD *)(a6 + 8);
  sub_6DE920((unsigned int **)(v12 + 80), v44);
  v44[0] = a7;
  if ( a7 )
    ++*(_DWORD *)(a7 + 8);
  sub_6DE920((unsigned int **)(v12 + 96), v44);
  v44[0] = a8;
  if ( a8 )
    ++*(_DWORD *)(a8 + 8);
  return sub_6DE920((unsigned int **)(v12 + 112), v44);
}

