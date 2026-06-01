void __fastcall sub_AD0F60(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v7; // r15
  _QWORD *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 ***v12; // rax
  __int64 **v13; // rbx
  __int64 **i; // r15
  __int64 *v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned int v18; // r15d
  size_t v19; // rsi
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _OWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  char **exception; // rbx
  unsigned int v30; // [rsp+0h] [rbp-70h]
  __int64 v31; // [rsp+0h] [rbp-70h]
  __int64 v32[11]; // [rsp+18h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a1 + 16) != a3 )
    return;
  v7 = *(unsigned int *)(a1 + 28);
  v8 = (_QWORD *)*a4;
  v9 = v7 + 1;
  if ( !*a4 )
  {
    v7 = 0xFFFFFFFFLL;
    if ( !v9 )
      goto LABEL_4;
    v24 = (_QWORD *)sub_186B270(0x18u);
    v30 = 0;
    v8 = v24 + 1;
    *v24 = 2;
    *a4 = v24 + 1;
LABEL_19:
    while ( 1 )
    {
      v21 = *((_DWORD *)v8 - 2);
      if ( v21 >= v9 )
        break;
      v18 = (3 * v21 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v19 || v21 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v8 - 1, v19);
      v8 = v20 + 2;
      *v20 = v18;
      *a4 = v20 + 2;
    }
    *((_DWORD *)v8 - 1) = v9;
    v22 = 8LL * v9;
    v7 = *(unsigned int *)(a1 + 28);
    v23 = 8LL * v30;
    if ( v23 != v22 )
      memset(&v8[(unsigned __int64)v23 / 8], 0, v22 - v23);
    goto LABEL_4;
  }
  v30 = *((_DWORD *)v8 - 1);
  if ( v30 < v9 )
    goto LABEL_19;
LABEL_4:
  v31 = v8[v7];
  if ( !v31 )
  {
    v31 = sub_186B270(0x50u);
    *(_QWORD *)v31 = *(_QWORD *)(a5 + 104);
    v25 = sub_186B270(0x80u);
    *(_DWORD *)(v31 + 24) = 0;
    *(_QWORD *)v25 = 0;
    *(_DWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 16) = 0;
    *(_DWORD *)(v25 + 24) = 0;
    *(_QWORD *)(v25 + 32) = 0;
    *(_DWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 48) = 0;
    *(_DWORD *)(v25 + 56) = 0;
    *(_QWORD *)(v25 + 64) = 0;
    *(_DWORD *)(v25 + 72) = 0;
    *(_QWORD *)(v25 + 80) = 0;
    *(_DWORD *)(v25 + 88) = 0;
    *(_QWORD *)(v25 + 96) = 0;
    *(_DWORD *)(v25 + 104) = 0;
    *(_QWORD *)(v25 + 112) = 0;
    *(_DWORD *)(v25 + 120) = 0;
    *(_QWORD *)(v31 + 8) = v25;
    *(_QWORD *)(v31 + 16) = 8;
    v26 = (_OWORD *)sub_186B270(0x80u);
    *(_QWORD *)(v31 + 32) = v26;
    v27 = *(unsigned int *)(a1 + 28);
    *v26 = 0;
    v26[1] = 0;
    v26[2] = 0;
    v26[3] = 0;
    v26[4] = 0;
    v26[5] = 0;
    v26[6] = 0;
    v26[7] = 0;
    v28 = (_QWORD *)*a4;
    *(_QWORD *)(v31 + 40) = 8;
    *(_DWORD *)(v31 + 48) = 0;
    *(_QWORD *)(v31 + 64) = 0;
    *(_QWORD *)(v31 + 72) = 0;
    v28[v27] = v31;
  }
  v10 = *(_QWORD *)(a5 + 8696);
  v11 = **(_DWORD **)(a1 + 16) + 0x80000000;
  if ( v10 && (unsigned int)v11 < *(_DWORD *)(v10 - 4) )
    v12 = (__int64 ***)(v10 + 8 * v11);
  else
    v12 = (__int64 ***)(a5 + 8704);
  v13 = *v12;
  if ( *v12 )
  {
    for ( i = &v13[*((unsigned int *)v13 - 1)]; i != v13; ++v13 )
    {
      v15 = *v13;
      v16 = **v13;
      if ( !(unsigned int)sub_8E7030(a5)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a5 + 7488) + 56LL))(
             *(_QWORD *)(a5 + 7488),
             v16) )
      {
        v17 = v15[*(unsigned int *)(a1 + 24) + 14];
        sub_AD0E00(v31, *(__m128i **)v17, *(_DWORD *)(v17 + 36));
      }
    }
  }
}

