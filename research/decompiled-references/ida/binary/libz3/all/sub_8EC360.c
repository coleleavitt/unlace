__int64 __fastcall sub_8EC360(__int64 a1)
{
  char **exception; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  _DWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 result; // rax
  __int64 *v19; // rbx
  __int64 *i; // rbp
  __int64 v21; // rdi
  unsigned int v22; // ebp
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 912LL) && !*(_BYTE *)(a1 + 8612) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  ++*(_DWORD *)(a1 + 9464);
  sub_180C250(a1 + 8400);
  v3 = *(_QWORD **)(a1 + 9480);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 == *((_DWORD *)v3 - 2) )
    {
      v22 = (unsigned int)(3 * v4 + 1) >> 1;
      v23 = 20 * v22 + 8;
      if ( 20 * (int)v4 + 8 >= (unsigned int)v23 || (unsigned int)v4 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v3 - 1, v23);
      v3 = v24 + 2;
      *v24 = v22;
      v25 = v24[1];
      *(_QWORD *)(a1 + 9480) = v3;
      v5 = (_QWORD *)((char *)v3 + 20 * v25);
    }
    else
    {
      v5 = (_QWORD *)((char *)v3 + 20 * v4);
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x30u);
    v3 = v26 + 1;
    *v26 = 2;
    *(_QWORD *)(a1 + 9480) = v26 + 1;
    v5 = v26 + 1;
  }
  *((_DWORD *)v5 + 4) = 0;
  v6 = *(__int64 **)(a1 + 7488);
  *(_OWORD *)v5 = 0;
  v7 = *((unsigned int *)v3 - 1);
  v8 = v7 + 1;
  v9 = (_DWORD *)v3 + 5 * v7;
  v10 = *v6;
  *((_DWORD *)v3 - 1) = v8;
  (*(void (__fastcall **)(__int64 *))(v10 + 80))(v6);
  v11 = *(_QWORD *)(a1 + 8920);
  if ( v11 )
  {
    *v9 = *(_DWORD *)(v11 - 4);
    v12 = *(_QWORD *)(a1 + 9456);
    if ( v12 )
      goto LABEL_9;
LABEL_24:
    v9[1] = 0;
    v13 = *(_QWORD *)(a1 + 8888);
    if ( v13 )
      goto LABEL_10;
    goto LABEL_25;
  }
  *v9 = 0;
  v12 = *(_QWORD *)(a1 + 9456);
  if ( !v12 )
    goto LABEL_24;
LABEL_9:
  v9[1] = *(_DWORD *)(v12 - 4);
  v13 = *(_QWORD *)(a1 + 8888);
  if ( v13 )
  {
LABEL_10:
    v14 = *(_DWORD *)(v13 - 4);
    goto LABEL_11;
  }
LABEL_25:
  v14 = 0;
LABEL_11:
  v9[2] = v14;
  v15 = *(_QWORD *)(a1 + 8600);
  if ( !v15 )
  {
    v9[3] = 0;
    v16 = *(_QWORD *)(a1 + 8912);
    if ( v16 )
      goto LABEL_13;
LABEL_22:
    v17 = 0;
    goto LABEL_14;
  }
  v9[3] = *(_DWORD *)(v15 - 4);
  v16 = *(_QWORD *)(a1 + 8912);
  if ( !v16 )
    goto LABEL_22;
LABEL_13:
  v17 = *(_DWORD *)(v16 - 4);
LABEL_14:
  v9[4] = v17;
  sub_9536B0(*(_QWORD *)(a1 + 7472));
  sub_B716B0(a1 + 8440);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8952) + 88LL))(*(_QWORD *)(a1 + 8952));
  result = sub_C0F080(a1 + 216);
  v19 = *(__int64 **)(a1 + 8688);
  if ( v19 )
  {
    result = *((unsigned int *)v19 - 1);
    for ( i = &v19[result]; i != v19; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 96LL))(v21) )
      v21 = *v19++;
  }
  return result;
}

