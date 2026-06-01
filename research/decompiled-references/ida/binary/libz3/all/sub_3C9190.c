__int64 __fastcall sub_3C9190(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rax
  int v7; // edi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rdi
  __int64 v17; // r12
  int *v18; // r12
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rbx
  unsigned int v23; // ebp
  _QWORD *v24; // rax
  unsigned int v25; // edx
  size_t v26; // rsi
  unsigned int v27; // r14d
  unsigned int *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r14
  char **exception; // rbp
  unsigned int v33; // [rsp+8h] [rbp-60h]
  unsigned int v34; // [rsp+Ch] [rbp-5Ch]
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(__int64 **)(a1 + 3032);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * *(unsigned int *)(a2 + 60)) + 16LL);
  v6 = *(unsigned int *)(a1 + 3040);
  v7 = *(_DWORD *)(v5 + 12);
  v8 = v6 - 1;
  v6 *= 16;
  v9 = (__int64 *)((char *)v4 + v6);
  v10 = 16LL * (v7 & v8);
  v11 = &v4[(unsigned __int64)v10 / 8];
  if ( v10 == v6 )
  {
LABEL_9:
    while ( v11 != v4 )
    {
      v14 = *v4;
      if ( (unsigned __int64)*v4 > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v7 && v5 == v14 )
        {
          v12 = v4;
          goto LABEL_18;
        }
      }
      else if ( !v14 )
      {
        break;
      }
      v4 += 2;
    }
LABEL_8:
    BUG();
  }
  v12 = &v4[(unsigned __int64)v10 / 8];
  while ( 1 )
  {
    v13 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
      break;
    if ( !v13 )
      goto LABEL_8;
LABEL_5:
    v12 += 2;
    if ( v9 == v12 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v13 + 12) != v7 || v5 != v13 )
    goto LABEL_5;
LABEL_18:
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 3024) + 8LL * *(unsigned int *)(v12[1] + 4LL * *(unsigned int *)(a2 + 72)));
  if ( v15 )
    ++*(_DWORD *)(v15 + 76);
  v16 = *(_QWORD **)(a1 + 3088);
  v34 = *(_DWORD *)(v15 + 52);
  v17 = v34 >> 5;
  if ( v16 )
  {
    v33 = *((_DWORD *)v16 - 1);
    if ( (unsigned int)v17 < v33 )
    {
      v18 = (int *)v16 + v17;
      v19 = *v18;
      v20 = 1 << v34;
      if ( ((1 << v34) & *v18) == 0 )
        goto LABEL_23;
      return sub_3BE360((__int64 *)v15);
    }
    v23 = v17 + 1;
  }
  else
  {
    v23 = v17 + 1;
    v24 = (_QWORD *)sub_186B270(0x10u);
    v16 = v24 + 1;
    *v24 = 2;
    *(_QWORD *)(a1 + 3088) = v24 + 1;
    v33 = 0;
  }
  while ( 1 )
  {
    v29 = *((_DWORD *)v16 - 2);
    if ( v29 >= v23 )
      break;
    v25 = (3 * v29 + 1) >> 1;
    v26 = 4 * v25 + 8;
    v27 = v25;
    if ( 4 * v29 + 8 >= (unsigned int)v26 || v29 >= v25 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_3BCB70(v35, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v35);
      sub_233E40((__int64)v35);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v28 = (unsigned int *)sub_186B300(v16 - 1, v26);
    v16 = v28 + 2;
    *v28 = v27;
    *(_QWORD *)(a1 + 3088) = v28 + 2;
  }
  *((_DWORD *)v16 - 1) = v23;
  v30 = 4LL * v23;
  v18 = (int *)v16 + v17;
  v31 = 4LL * v33;
  v20 = 1 << v34;
  if ( v31 != v30 )
    memset((char *)v16 + v31, 0, v30 - v31);
  v19 = *v18;
LABEL_23:
  *v18 = v19 | v20;
  std::__ostream_insert<char,std::char_traits<char>>();
  v21 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_3C8CD0(v15, v21);
  return sub_3BE360((__int64 *)v15);
}

