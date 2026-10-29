__int64 __fastcall sub_818EE0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbx
  char **v4; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r15
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r14d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r15d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 i; // r13
  __m128 v37; // xmm0
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-68h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+10h] [rbp-58h] BYREF
  __m128 v43; // [rsp+18h] [rbp-50h]

  do
  {
    v6 = a2;
    v7 = a2;
    a2 = *(_DWORD *)(a1[43] + 4LL * a2);
  }
  while ( v7 != a2 );
  v8 = a1[10];
  v9 = *(_QWORD *)(a1[23] + 8 * v6);
  v10 = *(_QWORD **)(v9 + 16);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 == *((_DWORD *)v10 - 2) )
    {
      v31 = (3 * v11 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v32 || v11 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v42);
        sub_233E40((__int64)&v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v10 - 1, v32);
      v34 = v33[1];
      v10 = v33 + 2;
      *(_QWORD *)(v9 + 16) = v33 + 2;
      *v33 = v31;
      LODWORD(v33) = v34;
      v14 = &v10[v34];
      v13 = (_DWORD)v33 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[v12];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v10 = v38 + 1;
    *v38 = 2;
    v13 = 1;
    *(_QWORD *)(v9 + 16) = v10;
    v14 = v10;
  }
  *v14 = a3;
  *((_DWORD *)v10 - 1) = v13;
  v15 = (_QWORD *)sub_180C100(v8 + 2144, 16);
  v16 = *(_QWORD **)(v8 + 2128);
  v17 = v15;
  *v15 = off_1C54F38;
  v15[1] = v9 + 16;
  if ( v16 )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( v18 == *((_DWORD *)v16 - 2) )
    {
      v27 = (3 * v18 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v28 || v18 >= v27 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v42, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v42);
        sub_233E40((__int64)&v42);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v16 - 1, v28);
      v30 = v29[1];
      v16 = v29 + 2;
      *(_QWORD *)(v8 + 2128) = v29 + 2;
      *v29 = v27;
      LODWORD(v29) = v30;
      v21 = &v16[v30];
      v20 = (_DWORD)v29 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v16[v19];
    }
  }
  else
  {
    v39 = (_QWORD *)sub_186B270(0x18u);
    v16 = v39 + 1;
    *v39 = 2;
    v20 = 1;
    *(_QWORD *)(v8 + 2128) = v16;
    v21 = v16;
  }
  *v21 = v17;
  *((_DWORD *)v16 - 1) = v20;
  result = sub_7E4EB0((__int64)a1);
  if ( !*(_BYTE *)(result + 412) )
  {
    if ( *(_BYTE *)v9 )
    {
      v35 = *(_QWORD *)(v9 + 24);
      if ( v35 )
      {
        result = *(unsigned int *)(v35 - 4);
        for ( i = v35 + 8 * result;
              i != v35;
              result = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64))sub_865240)(
                         a1,
                         &v42,
                         v23,
                         v24,
                         v25,
                         v26,
                         v40,
                         v41) )
        {
          v35 += 8;
          v37 = _mm_loadh_ps((const double *)(v35 - 8));
          v42 = 1;
          v43 = v37;
        }
      }
    }
  }
  return result;
}

