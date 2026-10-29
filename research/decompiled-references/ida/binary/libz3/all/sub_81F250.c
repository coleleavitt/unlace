__int64 __fastcall sub_81F250(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r13
  __int64 v8; // rdx
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rbp
  _DWORD *v18; // rbx
  _DWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r12d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(unsigned int *)(a2 + 4);
  v7 = a1 + 320;
  v8 = *(_QWORD *)(a1 + 336);
  v9 = *(_DWORD *)(a2 + 8);
  v10 = *(_DWORD *)(a2 + 4);
  do
  {
    v11 = v10;
    result = v10;
    v10 = *(_DWORD *)(v8 + 4LL * v10);
  }
  while ( (_DWORD)result != v10 );
  do
  {
    v13 = v9;
    v14 = v9;
    v9 = *(_DWORD *)(v8 + 4LL * v9);
  }
  while ( v14 != v9 );
  if ( (_DWORD)result != v9 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4 * v13) >= *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4 * v11) )
    {
      v26 = v5;
      v9 = v10;
      v5 = (unsigned int)v6;
      v10 = v14;
      v6 = v26;
    }
    sub_81EFB0(*(unsigned __int64 **)(a1 + 320), v10, v9, (unsigned int)v6, v5, v6);
    *(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL * v9) = v10;
    v15 = 4LL * v10;
    *(_DWORD *)(*(_QWORD *)(a1 + 344) + v15) += *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v9);
    v16 = *(_QWORD *)(a1 + 352);
    v17 = *(_QWORD **)(a1 + 328);
    v18 = (_DWORD *)(v16 + v15);
    v19 = (_DWORD *)(v16 + 4LL * v9);
    LODWORD(v16) = *v19;
    *v19 = *v18;
    *v18 = v16;
    v20 = sub_180C100(v17 + 2, 24);
    v21 = (_QWORD *)*v17;
    v22 = v20;
    *(_QWORD *)v20 = off_1C55090;
    *(_QWORD *)(v20 + 8) = v7;
    *(_DWORD *)(v20 + 16) = v9;
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
          sub_24ABB0(v32, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v21 - 1, v28);
        v30 = v29[1];
        v21 = v29 + 2;
        *v17 = v29 + 2;
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
      *v17 = v21;
      v25 = v21;
    }
    *v25 = v22;
    *((_DWORD *)v21 - 1) = result;
  }
  return result;
}

