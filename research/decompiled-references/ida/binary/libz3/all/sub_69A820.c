__int64 __fastcall sub_69A820(__int64 a1)
{
  _QWORD *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  _BYTE *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 result; // rax
  _BYTE *v21; // rdx
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebp
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  char **exception; // rbp
  __int64 v33[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_786880(a1 + 4376);
  sub_11CB7C0(a1 + 96);
  v2 = *(_QWORD **)(a1 + 4712);
  ++*(_DWORD *)(a1 + 4548);
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 - 1);
    v4 = v2[v3 - 1];
    if ( v4 )
    {
      ++*(_DWORD *)(v4 + 8);
      v3 = *((_DWORD *)v2 - 1);
    }
    if ( v3 == *((_DWORD *)v2 - 2) )
    {
      v22 = (3 * v3 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v3 + 8 >= (unsigned int)v23 || v3 >= v22 )
        goto LABEL_34;
      v24 = (unsigned int *)sub_186B300(v2 - 1, v23);
      v25 = v24[1];
      v2 = v24 + 2;
      *v24 = v22;
      *(_QWORD *)(a1 + 4712) = v24 + 2;
      LODWORD(v24) = v25;
      v7 = &v2[v25];
      v6 = (_DWORD)v24 + 1;
    }
    else
    {
      v5 = v3;
      v6 = v3 + 1;
      v7 = &v2[v5];
    }
  }
  else
  {
    v4 = MEMORY[0x7FFFFFFF8];
    if ( MEMORY[0x7FFFFFFF8] )
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v30 = (_QWORD *)sub_186B270(0x18u);
    v2 = v30 + 1;
    *v30 = 2;
    v6 = 1;
    *(_QWORD *)(a1 + 4712) = v2;
    v7 = v2;
  }
  *v7 = v4;
  *((_DWORD *)v2 - 1) = v6;
  v8 = *(_QWORD *)(a1 + 4408);
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  v10 = *(_QWORD *)(a1 + 4432);
  if ( !v10 || (v11 = *(unsigned int *)(v10 - 4), (_DWORD)v11 == *(_DWORD *)(v10 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 4432));
    v10 = *(_QWORD *)(a1 + 4432);
    v11 = *(unsigned int *)(v10 - 4);
  }
  *(_DWORD *)(v10 + 4 * v11) = v9;
  ++*(_DWORD *)(v10 - 4);
  v12 = *(_QWORD *)(a1 + 4424);
  if ( v12 )
    v13 = *(_DWORD *)(v12 - 4);
  else
    v13 = 0;
  v14 = *(_QWORD *)(a1 + 4440);
  if ( !v14 || (v15 = *(unsigned int *)(v14 - 4), (_DWORD)v15 == *(_DWORD *)(v14 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 4440));
    v14 = *(_QWORD *)(a1 + 4440);
    v15 = *(unsigned int *)(v14 - 4);
  }
  *(_DWORD *)(v14 + 4 * v15) = v13;
  ++*(_DWORD *)(v14 - 4);
  sub_68D0F0((unsigned int **)(a1 + 4448), (unsigned int *)(a1 + 4456));
  v16 = *(_QWORD *)(a1 + 4528);
  if ( v16 )
    sub_FC17A0(v16);
  sub_1623DD0(a1 + 4480);
  v17 = *(_BYTE **)(a1 + 4368);
  if ( !v17 )
  {
    v31 = (_QWORD *)sub_186B270(0xAu);
    v17 = v31 + 1;
    *v31 = 2;
    result = 1;
    *(_QWORD *)(a1 + 4368) = v17;
    v21 = v17;
    goto LABEL_19;
  }
  v18 = *((_DWORD *)v17 - 1);
  if ( v18 == *((_DWORD *)v17 - 2) )
  {
    v26 = (3 * v18 + 1) >> 1;
    v27 = v26 + 8;
    if ( v18 + 8 < (unsigned int)v27 && v18 < v26 )
    {
      v28 = (unsigned int *)sub_186B300(v17 - 8, v27);
      v29 = v28[1];
      v17 = v28 + 2;
      *v28 = v26;
      *(_QWORD *)(a1 + 4368) = v28 + 2;
      LODWORD(v28) = v29;
      v21 = &v17[v29];
      result = (unsigned int)((_DWORD)v28 + 1);
      goto LABEL_19;
    }
LABEL_34:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_68CF80(v33, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v33);
    sub_233E40((__int64)v33);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v19 = v18;
  result = v18 + 1;
  v21 = &v17[v19];
LABEL_19:
  *v21 = *(_BYTE *)(a1 + 4360);
  *((_DWORD *)v17 - 1) = result;
  return result;
}

