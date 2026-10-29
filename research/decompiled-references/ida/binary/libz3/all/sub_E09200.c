void __fastcall sub_E09200(__int64 a1, const __m128i *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  void *v5; // r13
  char **v6; // r12
  _QWORD *exception; // r12
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // esi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r10
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  unsigned int *v32; // rsi
  int v34; // eax
  unsigned int v35; // r13d
  unsigned int v36; // ecx
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 ***v41[11]; // [rsp+10h] [rbp-58h] BYREF

  sub_DFBCB0(a1);
  v40 = *(_QWORD *)(a1 + 296);
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  v13 = a2->m128i_i64[0];
  v14 = *(_QWORD *)(a1 + 696);
  v15 = *(unsigned int *)(a1 + 704);
  if ( a2->m128i_i64[0] )
  {
    if ( (a2->m128i_i64[0] & 7) == 1 )
      v16 = v13 >> 3;
    else
      LODWORD(v16) = *(_DWORD *)(v13 - 8);
  }
  else
  {
    LODWORD(v16) = -1640531495;
  }
  v17 = v15 - 1;
  v18 = 24 * v15;
  v19 = v14 + v18;
  v20 = 24LL * ((unsigned int)v16 & v17);
  v21 = v14 + v20;
  if ( v20 != v18 )
  {
    v22 = v14 + v20;
    do
    {
      v23 = *(_DWORD *)(v22 + 4);
      if ( v23 == 2 )
      {
        if ( (_DWORD)v16 == *(_DWORD *)v22 && *(_QWORD *)(v22 + 8) == v13 )
          goto LABEL_13;
      }
      else if ( !v23 )
      {
        goto LABEL_14;
      }
      v22 += 24;
    }
    while ( v19 != v22 );
  }
  if ( v14 == v21 )
    goto LABEL_14;
  while ( 1 )
  {
    v34 = *(_DWORD *)(v14 + 4);
    if ( v34 != 2 )
    {
      if ( !v34 )
        goto LABEL_14;
      goto LABEL_27;
    }
    if ( (_DWORD)v16 == *(_DWORD *)v14 && v13 == *(_QWORD *)(v14 + 8) )
      break;
LABEL_27:
    v14 += 24;
    if ( v21 == v14 )
      goto LABEL_14;
  }
  v22 = v14;
LABEL_13:
  v41[0] = *(__int64 ****)(v22 + 16);
  if ( sub_DF7310(v41, a3, a4) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "named expression already defined");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
LABEL_14:
  sub_15D1F10(a5);
  v24 = *(_DWORD *)(a1 + 632);
  v25 = *(_QWORD *)(a1 + 624);
  v41[0] = (__int64 ***)a2->m128i_i64[0];
  v26 = sub_DF6190(v25, v24, (unsigned __int64 *)v41);
  if ( v26 )
  {
    v41[0] = *(__int64 ****)(v26 + 16);
    if ( (unsigned __int8)sub_DF69D0((unsigned __int64 *)v41, a3, a4, v27) )
    {
      v5 = __cxa_allocate_exception(0x30u);
      sub_E0F430(v5, "invalid named expression, declaration already defined with this name ", a2);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
  sub_E07B50(a1, a2, a3, a4, a5);
  if ( !*(_BYTE *)(a1 + 257) )
  {
    v28 = *(_QWORD **)(a1 + 736);
    if ( v28 )
    {
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 == *((_DWORD *)v28 - 2) )
      {
        v35 = (3 * v29 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v29 + 8 >= v36 || v29 >= v35 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_DF63A0((__int64 *)v41, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v41);
          sub_233E40((__int64)v41);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v28 - 1, v36);
        v38 = v37[1];
        v28 = v37 + 2;
        *v37 = v35;
        *(_QWORD *)(a1 + 736) = v37 + 2;
        v32 = &v37[2 * v38 + 2];
        v31 = v38 + 1;
      }
      else
      {
        v30 = v29;
        v31 = v29 + 1;
        v32 = (unsigned int *)&v28[v30];
      }
    }
    else
    {
      v39 = (_QWORD *)sub_186B270(0x18u);
      *v39 = 2;
      v31 = 1;
      v28 = v39 + 1;
      *(_QWORD *)(a1 + 736) = v28;
      v32 = (unsigned int *)v28;
    }
    *(_QWORD *)v32 = a2->m128i_i64[0];
    *((_DWORD *)v28 - 1) = v31;
  }
  if ( (*(_DWORD *)(a5 + 8))-- == 1 )
    sub_15D7BC0(v40, a5);
}

