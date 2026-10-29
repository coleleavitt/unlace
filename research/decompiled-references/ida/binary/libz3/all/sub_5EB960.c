__int64 __fastcall sub_5EB960(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v6; // r8
  int v7; // ecx
  unsigned int v8; // eax
  __int64 *v9; // rdx
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 *v13; // rcx
  __int64 v14; // r8
  int v15; // ecx
  unsigned int v16; // eax
  __int64 *v17; // rdx
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 *v21; // rcx
  __int64 v22; // rbp
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 result; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned int v31; // r12d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  _QWORD v36[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v37[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 352);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4) >> 1;
    if ( v7 )
    {
      v8 = *(_DWORD *)(v6 - 4) - 1;
      v9 = *(__int64 **)(a1 + 352);
      v10 = v8 - v7;
      do
      {
        v11 = v8;
        v12 = *v9;
        --v8;
        ++v9;
        v13 = (__int64 *)(v6 + 8 * v11);
        *(v9 - 1) = *v13;
        *v13 = v12;
      }
      while ( v10 != v8 );
    }
  }
  sub_157C750(v36, *(_QWORD *)(a1 + 24), a2, v6);
  v14 = *(_QWORD *)(a1 + 352);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 - 4) >> 1;
    if ( v15 )
    {
      v16 = *(_DWORD *)(v14 - 4) - 1;
      v17 = *(__int64 **)(a1 + 352);
      v18 = v16 - v15;
      do
      {
        v19 = v16;
        v20 = *v17;
        --v16;
        ++v17;
        v21 = (__int64 *)(v14 + 8 * v19);
        *(v17 - 1) = *v21;
        *v21 = v20;
      }
      while ( v16 != v18 );
    }
  }
  sub_14EA2A0(a1 + 176, v36[0], v36);
  v22 = v36[0];
  if ( v36[0] )
    ++*(_DWORD *)(v36[0] + 8LL);
  v23 = *(_QWORD **)(a3 + 8);
  if ( v23 )
  {
    v24 = *((_DWORD *)v23 - 1);
    if ( v24 == *((_DWORD *)v23 - 2) )
    {
      v31 = (3 * v24 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v24 + 8 >= (unsigned int)v32 || v24 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v37, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v23 - 1, v32);
      v34 = v33[1];
      v23 = v33 + 2;
      *v33 = v31;
      *(_QWORD *)(a3 + 8) = v33 + 2;
      LODWORD(v33) = v34;
      v27 = &v23[v34];
      result = (unsigned int)((_DWORD)v33 + 1);
    }
    else
    {
      v25 = v24;
      result = v24 + 1;
      v27 = &v23[v25];
    }
  }
  else
  {
    v35 = (_QWORD *)sub_186B270(0x18u);
    v23 = v35 + 1;
    *v35 = 2;
    result = 1;
    *(_QWORD *)(a3 + 8) = v23;
    v27 = v23;
  }
  *v27 = v22;
  v28 = v36[0];
  *((_DWORD *)v23 - 1) = result;
  if ( v28 )
  {
    v29 = v36[1];
    if ( (*(_DWORD *)(v28 + 8))-- == 1 )
      return sub_15D7BC0(v29, v28);
  }
  return result;
}

