__int64 __fastcall sub_84A880(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  char **exception; // rbp
  _QWORD *v8; // rbp
  _QWORD *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 (*v13)(void); // rax
  unsigned int v14; // ebp
  __int64 v15; // r14
  __int64 i; // rax
  __int64 v17; // r14
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  _QWORD *v22; // rsi
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v27; // r9d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rax
  __int64 v33; // [rsp+10h] [rbp-88h]
  unsigned int v34; // [rsp+20h] [rbp-78h]
  unsigned __int8 v35; // [rsp+27h] [rbp-71h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = (_QWORD *)a4[1];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *a4;
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_8;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_8:
    v8 = (_QWORD *)a4[1];
    if ( v8 )
LABEL_9:
      *((_DWORD *)v8 - 1) = 0;
  }
  v13 = *(__int64 (**)(void))(*(_QWORD *)*a1 + 440LL);
  if ( (char *)v13 == (char *)sub_79F010 )
    v33 = *a1 + 1592LL;
  else
    v33 = v13();
  v14 = 0;
  sub_13744E0(a1[22]);
  v15 = a1[22] + 128LL;
  v36 = v15;
  v35 = sub_13608A0(v15);
  sub_1360B80(v15, 1);
  for ( i = *a2; *a2; i = *a2 )
  {
    if ( v14 >= *(_DWORD *)(i - 4) )
      break;
    v17 = **(_QWORD **)(*(_QWORD *)(v33 + 176) + 8LL * *(unsigned int *)(i + 4LL * v14));
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v18 = (_QWORD *)a4[1];
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v27 = (3 * v19 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v28 || v19 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v37, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = (3 * v19 + 1) >> 1;
        v29 = (unsigned int *)sub_186B300(v18 - 1, v28);
        v30 = v29[1];
        v18 = v29 + 2;
        a4[1] = (__int64)(v29 + 2);
        *v29 = v34;
        LODWORD(v29) = v30;
        v22 = &v18[v30];
        v21 = (_DWORD)v29 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v18[v20];
      }
    }
    else
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v18 = v31 + 1;
      *v31 = 2;
      v21 = 1;
      a4[1] = (__int64)v18;
      v22 = v18;
    }
    *v22 = v17;
    v23 = a1[22];
    *((_DWORD *)v18 - 1) = v21;
    sub_1374250(v37, v23, v18[v14]);
    sub_135F9B0(v23, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * v14) + 16LL), v37[0]);
    v24 = v37[0];
    if ( v37[0] )
    {
      v25 = v37[1];
      v12 = (*(_DWORD *)(v37[0] + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v25, v24);
    }
    ++v14;
  }
  return sub_1360B80(v36, v35);
}

