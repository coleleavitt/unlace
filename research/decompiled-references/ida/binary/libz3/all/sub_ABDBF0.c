void __fastcall sub_ABDBF0(__int64 a1, __int64 a2)
{
  char **exception; // r12
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r13
  _QWORD *v18; // rbx
  int i; // edx
  unsigned int v20; // edx
  __int64 *v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  unsigned int v25; // r10d
  size_t v26; // rsi
  unsigned int v27; // r15d
  unsigned int *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // [rsp+10h] [rbp-78h]
  __int64 v32; // [rsp+18h] [rbp-70h]
  __int64 v33; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-60h]
  __int64 v35[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 16);
  v31 = v6;
  v33 = v6;
  sub_B6E740(v7);
  v12 = sub_AB3F30(a1, (unsigned int *)a2, v8, v9, v10, v11);
  v13 = *(unsigned int *)(a2 + 24);
  v32 = v12;
  if ( (_DWORD)v13 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = (_QWORD *)sub_186B270(0x18u);
    *v15 = 2;
    v16 = v15 + 1;
    v17 = a2 + 8 * v13;
    v18 = v16;
    for ( i = 1; ; i = v30 + 1 )
    {
      v4 += 8;
      *v16 = v14;
      *((_DWORD *)v18 - 1) = i;
      if ( v4 == v17 )
        break;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v4 + 32);
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v20 = *((_DWORD *)v18 - 1);
        if ( v20 == *((_DWORD *)v18 - 2) )
          break;
        v4 += 8;
        v18[v20] = v14;
        *((_DWORD *)v18 - 1) = v20 + 1;
        if ( v4 == v17 )
          goto LABEL_10;
      }
      v25 = (3 * v20 + 1) >> 1;
      v26 = 8 * v25 + 8;
      v27 = v25;
      if ( 8 * v20 + 8 >= (unsigned int)v26 || v20 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v35, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(v18 - 1, v26);
      v18 = v28 + 2;
      *v28 = v27;
      v29 = v28[1];
      v30 = v29;
      v16 = &v18[v29];
    }
LABEL_10:
    v34 = v18;
    sub_ABDB30(a1, v32, (__int64)&v33);
    v21 = v18;
    v22 = (unsigned __int64)&v18[*((unsigned int *)v18 - 1)];
    if ( (unsigned __int64)v18 < v22 )
    {
      do
      {
        while ( 1 )
        {
          v23 = *v21;
          if ( *v21 )
          {
            if ( (*(_DWORD *)(v23 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v21 >= v22 )
            goto LABEL_16;
        }
        ++v21;
        sub_15D7BC0(v31, v23);
      }
      while ( (unsigned __int64)v21 < v22 );
    }
LABEL_16:
    sub_186B220(v18 - 1);
  }
  else
  {
    v34 = nullptr;
    sub_ABDB30(a1, v12, (__int64)&v33);
  }
}

