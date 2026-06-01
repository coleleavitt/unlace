__int64 __fastcall sub_B0F9C0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int v5; // r12d
  _QWORD *v6; // rdx
  _DWORD *v7; // rcx
  int v8; // r13d
  unsigned int v9; // r14d
  _QWORD *v10; // rax
  int *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // edx
  unsigned int v16; // r13d
  int v17; // r12d
  __int64 result; // rax
  int v19; // esi
  int v20; // eax
  __int64 v21; // rdi
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v27[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_DWORD *)a2;
  v6 = *(_QWORD **)(a1 + 704);
  v26 = *(_DWORD *)a2;
  if ( v6 )
    *((_DWORD *)v6 - 1) = 0;
  v7 = *(_DWORD **)(a2 + 8);
  if ( v7 && *(v7 - 1) )
  {
    v8 = *v7 ^ 1;
    if ( v6 )
    {
      v9 = 0;
      goto LABEL_10;
    }
    v9 = 0;
    v10 = (_QWORD *)sub_186B270(0x10u);
    v6 = v10 + 1;
    *v10 = 2;
    *(_QWORD *)(a1 + 704) = v10 + 1;
    v7 = *(_DWORD **)(a2 + 8);
    v11 = (int *)(v10 + 1);
LABEL_7:
    *v11 = v8;
    ++v9;
    ++*((_DWORD *)v6 - 1);
    if ( v7 )
    {
      while ( v9 < *(v7 - 1) )
      {
        v8 = v7[v9] ^ 1;
LABEL_10:
        v12 = *((unsigned int *)v6 - 1);
        if ( (_DWORD)v12 == *((_DWORD *)v6 - 2) )
        {
          v22 = (unsigned int)(3 * v12 + 1) >> 1;
          v23 = 4 * v22 + 8;
          if ( 4 * (int)v12 + 8 >= (unsigned int)v23 || (unsigned int)v12 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(v27, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v27);
            sub_233E40((__int64)v27);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(v6 - 1, v23);
          v6 = v24 + 2;
          *v24 = v22;
          v25 = v24[1];
          *(_QWORD *)(a1 + 704) = v6;
          v7 = *(_DWORD **)(a2 + 8);
          v11 = (int *)v6 + v25;
          goto LABEL_7;
        }
        ++v9;
        *((_DWORD *)v6 + v12) = v8;
        ++*((_DWORD *)v6 - 1);
      }
    }
  }
  sub_B0E5E0((unsigned int **)(a1 + 704), &v26);
  v13 = *(_QWORD *)(a1 + 704);
  v14 = *(_QWORD *)(a1 + 16);
  if ( v13 )
    v15 = *(_DWORD *)(v13 - 4);
  else
    v15 = 0;
  v16 = 0;
  v17 = v5 ^ 1;
  sub_B69FE0(v14, *(_DWORD *)(a1 + 8), v15, v13, 0, 0, 1);
  for ( result = *(_QWORD *)(a2 + 8); result; result = *(_QWORD *)(a2 + 8) )
  {
    if ( v16 >= *(_DWORD *)(result - 4) )
      break;
    LODWORD(v27[0]) = v17;
    v19 = *(_DWORD *)(a1 + 8);
    v20 = *(_DWORD *)(result + 4LL * v16);
    v21 = *(_QWORD *)(a1 + 16);
    ++v16;
    HIDWORD(v27[0]) = v20;
    sub_B69FE0(v21, v19, 2, (unsigned int)v27, 0, 0, 1);
  }
  return result;
}

