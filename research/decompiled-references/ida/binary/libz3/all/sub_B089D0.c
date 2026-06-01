__int64 __fastcall sub_B089D0(__int64 a1, unsigned int a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v5; // r12
  char v7; // bl
  _QWORD *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r12
  _QWORD *v13; // r13
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 result; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r14d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v24; // edi
  _OWORD *v25; // rax
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rax
  unsigned int v28; // ebx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v36[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a2 >> 1;
  v7 = a2;
  v8 = *(_QWORD **)(a1 + 64);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    v10 = (unsigned int)(v5 + 100);
    if ( (unsigned int)v5 < (unsigned int)v9 )
      goto LABEL_3;
  }
  else
  {
    v10 = (unsigned int)(v5 + 100);
    v9 = 0;
    v27 = (_QWORD *)sub_186B270(0x68u);
    v8 = v27 + 1;
    *v27 = 2;
    *(_QWORD *)(a1 + 64) = v27 + 1;
  }
  while ( 1 )
  {
    v24 = *((_DWORD *)v8 - 2);
    if ( v24 >= (unsigned int)v10 )
      break;
    v19 = 3 * v24 + 1;
    v20 = v19 & 0xFFFFFFFE;
    v21 = v19 >> 1;
    v22 = 16 * (v21 + v20) + 8;
    if ( 48 * v24 + 8 >= (unsigned int)v22 || v24 >= v21 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0(v36, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v36);
      sub_233E40((__int64)v36);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v23 = (unsigned int *)sub_186B300(v8 - 1, v22);
    v8 = v23 + 2;
    *v23 = v21;
    *(_QWORD *)(a1 + 64) = v23 + 2;
  }
  *((_DWORD *)v8 - 1) = v10;
  v25 = &v8[6 * v9];
  if ( 48 * v9 != 48 * v10 )
  {
    v26 = 0;
    do
    {
      ++v26;
      *v25 = 0;
      v25 += 3;
      *(v25 - 2) = 0;
      *(v25 - 1) = 0;
    }
    while ( v26 < ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(48 * v10 - 48 - 48 * v9) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 1 );
  }
LABEL_3:
  v11 = v7 & 1;
  v12 = 6 * v5;
  v13 = (_QWORD *)v8[v11 + v12];
  if ( !v13 )
  {
    v32 = (_QWORD *)sub_186B270(8u);
    v33 = *(_QWORD *)(a1 + 64) + v11 * 8;
    *v32 = 0;
    v13 = v32;
    *(_QWORD *)(v33 + v12 * 8) = v32;
    goto LABEL_21;
  }
  v14 = (_QWORD *)*v13;
  if ( !*v13 )
  {
LABEL_21:
    v34 = (_QWORD *)sub_186B270(0x18u);
    v14 = v34 + 1;
    *v34 = 2;
    result = 1;
    *v13 = v14;
    v18 = v14;
    goto LABEL_7;
  }
  v15 = *((_DWORD *)v14 - 1);
  if ( v15 == *((_DWORD *)v14 - 2) )
  {
    v28 = (3 * v15 + 1) >> 1;
    v29 = 8 * v28 + 8;
    if ( 8 * v15 + 8 >= (unsigned int)v29 || v15 >= v28 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0(v36, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v36);
      sub_233E40((__int64)v36);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v30 = (unsigned int *)sub_186B300(v14 - 1, v29);
    v31 = v30[1];
    v14 = v30 + 2;
    *v13 = v30 + 2;
    *v30 = v28;
    LODWORD(v30) = v31;
    v18 = &v14[v31];
    result = (unsigned int)((_DWORD)v30 + 1);
  }
  else
  {
    v16 = v15;
    result = v15 + 1;
    v18 = &v14[v16];
  }
LABEL_7:
  *v18 = a3;
  *((_DWORD *)v14 - 1) = result;
  return result;
}

