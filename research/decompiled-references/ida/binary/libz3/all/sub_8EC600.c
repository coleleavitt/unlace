__int64 __fastcall sub_8EC600(__int64 a1, __int64 a2)
{
  char **exception; // r12
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // r15
  _QWORD *v12; // rax
  __int64 *v13; // rbx
  _QWORD *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r15
  bool v17; // bl
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  unsigned int v24; // r8d
  size_t v25; // rsi
  unsigned int v26; // r13d
  unsigned int *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r12
  __int64 *i; // rbx
  __int64 v31; // rsi
  __int64 v33; // [rsp+0h] [rbp-98h]
  char v34[16]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+30h] [rbp-68h]
  void *v36[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v37[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a2;
  *(_BYTE *)(a1 + 10440) = 1;
  v5 = sub_180B150(a1, a2);
  sub_B758D0(a1, v5);
  if ( (_DWORD)a2 != 1 )
  {
    if ( (_DWORD)a2 )
      goto LABEL_5;
    goto LABEL_3;
  }
  if ( (unsigned __int8)sub_8E6FA0(a1) )
  {
LABEL_3:
    if ( *(_DWORD *)(a1 + 8632) == 1 && sub_8EACB0((_QWORD *)a1) )
    {
      v7 = qword_1C7EC50;
      *(_DWORD *)(a1 + 10308) = 0;
      *(_QWORD *)(a1 + 8984) = v7;
      goto LABEL_7;
    }
    v4 = 0;
LABEL_5:
    *(_DWORD *)(a1 + 8632) = -1;
    return v4;
  }
LABEL_7:
  *(_DWORD *)(a1 + 8632) = -1;
  sub_17FBD10(v36, "model_validate");
  if ( v36[1] != &byte_4 || *(_DWORD *)v36[0] != 1702195828 )
  {
    if ( v36[0] != v37 )
      operator delete(v36[0], v37[0] + 1LL);
    return 1;
  }
  if ( v36[0] != v37 )
    operator delete(v36[0], v37[0] + 1LL);
  sub_162A710(v34, *(_QWORD *)(a1 + 104));
  v8 = *(__int64 **)(v35 + 32);
  v33 = *(_QWORD *)(v35 + 8);
  v9 = 2LL * *(unsigned int *)(v35 + 40);
  v10 = &v8[v9];
  if ( v8 == &v8[v9] )
    goto LABEL_47;
  while ( (unsigned __int64)*v8 <= 1 )
  {
    v8 += 2;
    if ( v10 == v8 )
      goto LABEL_47;
  }
  if ( v8 == v10 )
  {
LABEL_47:
    v17 = *(_QWORD *)(a1 + 9312) != 0;
LABEL_28:
    if ( v17 )
    {
      v18 = *(__int64 **)(a1 + 8688);
      if ( v18 )
      {
        v19 = &v18[*((unsigned int *)v18 - 1)];
        while ( v19 != v18 )
        {
          v20 = *v18++;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 216LL))(v20, *(_QWORD *)(a1 + 9312));
        }
      }
    }
    return 1;
  }
  v11 = *v8;
  if ( *v8 )
    ++*(_DWORD *)(v11 + 8);
  v12 = (_QWORD *)sub_186B270(0x18u);
  v13 = v8 + 2;
  v12[1] = v11;
  v14 = v12 + 1;
  *v12 = 0x100000002LL;
  v15 = 1;
  if ( v10 == v13 )
    goto LABEL_40;
  while ( 1 )
  {
    v16 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
LABEL_25:
    v13 += 2;
    if ( v10 == v13 )
      goto LABEL_26;
  }
  if ( v10 != v13 )
  {
    ++*(_DWORD *)(v16 + 8);
    v21 = *((_DWORD *)v14 - 1);
    if ( v21 == *((_DWORD *)v14 - 2) )
    {
      v24 = (3 * v21 + 1) >> 1;
      v25 = 8 * v24 + 8;
      v26 = v24;
      if ( 8 * v21 + 8 >= (unsigned int)v25 || v21 >= v24 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0((__int64 *)v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v14 - 1, v25);
      v28 = v27[1];
      v14 = v27 + 2;
      *v27 = v26;
      LODWORD(v27) = v28;
      v23 = &v14[v28];
      v15 = (unsigned int)((_DWORD)v27 + 1);
    }
    else
    {
      v22 = v21;
      v15 = v21 + 1;
      v23 = &v14[v22];
    }
    *v23 = v16;
    *((_DWORD *)v14 - 1) = v15;
    goto LABEL_25;
  }
LABEL_26:
  if ( !(_DWORD)v15 )
  {
    v17 = *(_QWORD *)(a1 + 9312) != 0;
    sub_186B220(v14 - 1);
    goto LABEL_28;
  }
LABEL_40:
  v29 = (unsigned __int64)&v14[v15];
  for ( i = v14; (unsigned __int64)i < v29; ++i )
  {
    while ( 1 )
    {
      v31 = *i;
      if ( *i )
      {
        if ( (*(_DWORD *)(v31 + 8))-- == 1 )
          break;
      }
      if ( (unsigned __int64)++i >= v29 )
        goto LABEL_46;
    }
    sub_15D7BC0(v33, v31);
  }
LABEL_46:
  sub_186B220(v14 - 1);
  return 1;
}

