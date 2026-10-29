__int64 __fastcall sub_4F9300(_QWORD *a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edi
  int v8; // ebx
  __int64 v9; // r12
  _DWORD *v10; // rsi
  __int64 v11; // r11
  __int64 v12; // rdi
  _DWORD *v13; // r10
  _DWORD *v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // r13
  int *v17; // rdi
  int *v18; // rax
  int v19; // edx
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 *v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  char **exception; // rbx
  __int64 v33[9]; // [rsp+10h] [rbp-48h] BYREF

  LODWORD(result) = a2;
  v5 = a1[2];
  do
  {
    v6 = (unsigned int)result;
    v7 = result;
    result = *(unsigned int *)(v5 + 4LL * (unsigned int)result);
  }
  while ( v7 != (_DWORD)result );
  do
  {
    v8 = a3;
    v9 = 4LL * a3;
    v10 = (_DWORD *)(v5 + v9);
    a3 = *(_DWORD *)(v5 + v9);
  }
  while ( a3 != v8 );
  if ( v7 != v8 )
  {
    v11 = a1[3];
    v12 = 4LL * (unsigned int)result;
    v13 = (_DWORD *)(v11 + v9);
    v14 = (_DWORD *)(v11 + v12);
    if ( *(_DWORD *)(v11 + v9) >= *(_DWORD *)(v11 + 4 * v6) )
    {
      v10 = (_DWORD *)(v5 + v12);
      v14 = (_DWORD *)(v11 + v9);
      v8 = result;
      v13 = (_DWORD *)(v11 + v12);
      v26 = v9;
      LODWORD(result) = a3;
      v9 = v12;
      v12 = v26;
    }
    *v10 = result;
    *v14 += *v13;
    v15 = a1[4];
    v16 = (_QWORD *)a1[1];
    v17 = (int *)(v15 + v12);
    v18 = (int *)(v9 + v15);
    v19 = *v18;
    *v18 = *v17;
    *v17 = v19;
    v20 = sub_180C100(v16 + 2, 24);
    v21 = (_QWORD *)*v16;
    v22 = v20;
    *(_QWORD *)v20 = off_1C4F500;
    *(_QWORD *)(v20 + 8) = a1;
    *(_DWORD *)(v20 + 16) = v8;
    if ( v21 )
    {
      v23 = *((_DWORD *)v21 - 1);
      if ( v23 == *((_DWORD *)v21 - 2) )
      {
        v27 = (3 * v23 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v28 || v23 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v21 - 1, v28);
        v30 = v29[1];
        v21 = v29 + 2;
        *v16 = v29 + 2;
        *v29 = v27;
        LODWORD(v29) = v30;
        v25 = &v21[v30];
        result = (unsigned int)((_DWORD)v29 + 1);
      }
      else
      {
        v24 = v23;
        result = v23 + 1;
        v25 = &v21[v24];
      }
    }
    else
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v21 = v31 + 1;
      *v31 = 2;
      result = 1;
      *v16 = v21;
      v25 = v21;
    }
    *v25 = v22;
    *((_DWORD *)v21 - 1) = result;
  }
  return result;
}

