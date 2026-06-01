__int64 __fastcall sub_818B10(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned int v3; // ebx
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // r13
  char v9; // r15
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 *v19; // rbp
  __int64 *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int64 result; // rax
  __int64 *v27; // rbx
  __int64 *i; // rbp
  __int64 v29; // rax
  unsigned int v30; // r15d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+10h] [rbp-58h] BYREF
  __int64 v38; // [rsp+18h] [rbp-50h]
  __int64 v39; // [rsp+20h] [rbp-48h]

  v3 = a2;
  v4 = a2;
  do
  {
    v5 = v4;
    v6 = v4;
    v4 = *(_DWORD *)(a1[43] + 4LL * v4);
  }
  while ( v6 != v4 );
  v7 = a1[10];
  v8 = *(_QWORD *)(a1[23] + 8 * v5);
  v9 = *(_BYTE *)(v8 + 1);
  v10 = sub_180C100(v7 + 2144, 24);
  v13 = *(_QWORD **)(v7 + 2128);
  v14 = v10;
  *(_QWORD *)v10 = off_1C54EE8;
  *(_QWORD *)(v10 + 8) = v8 + 1;
  *(_BYTE *)(v10 + 16) = v9;
  if ( v13 )
  {
    v15 = *((_DWORD *)v13 - 1);
    if ( v15 == *((_DWORD *)v13 - 2) )
    {
      v30 = (3 * v15 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v31 || v15 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v37, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v37);
        sub_233E40((__int64)&v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v13 - 1, v31);
      v33 = v32[1];
      v13 = v32 + 2;
      *(_QWORD *)(v7 + 2128) = v32 + 2;
      *v32 = v30;
      LODWORD(v32) = v33;
      v18 = &v13[v33];
      v17 = (_DWORD)v32 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v13[v16];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x18u);
    v13 = v34 + 1;
    *v34 = 2;
    v17 = 1;
    *(_QWORD *)(v7 + 2128) = v13;
    v18 = v13;
  }
  *v18 = v14;
  v19 = *(__int64 **)(v8 + 8);
  *((_DWORD *)v13 - 1) = v17;
  *(_BYTE *)(v8 + 1) = 1;
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    while ( v20 != v19 )
    {
      v21 = *v19++;
      v37 = 3;
      v38 = v21;
      v39 = 0;
      ((void (__fastcall *)(_QWORD *, __int64 *, _QWORD *, __int64 *, __int64, __int64, __int64, __int64))sub_865240)(
        a1,
        &v37,
        v13,
        v18,
        v11,
        v12,
        v35,
        v36);
    }
  }
  v22 = a1[43];
  do
  {
    v23 = v3;
    v24 = v3;
    v3 = *(_DWORD *)(v22 + 4LL * v3);
  }
  while ( v24 != v3 );
  v25 = a1[23];
  result = *(_QWORD *)(v25 + 8 * v23);
  v27 = *(__int64 **)(result + 16);
  if ( v27 )
  {
    result = *((unsigned int *)v27 - 1);
    for ( i = &v27[result];
          i != v27;
          result = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64))sub_865240)(
                     a1,
                     &v37,
                     v25,
                     v22,
                     v11,
                     v12,
                     v35,
                     v36) )
    {
      v29 = *v27++;
      v37 = 3;
      v38 = v29;
      v39 = 0;
    }
  }
  return result;
}

