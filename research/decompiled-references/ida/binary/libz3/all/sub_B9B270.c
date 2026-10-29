__int64 __fastcall sub_B9B270(_QWORD *a1, int *a2)
{
  char **exception; // rbx
  int v4; // ebx
  _DWORD *v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r14d
  size_t v11; // rsi
  unsigned int *v12; // rax
  char *v13; // rdi
  char *v14; // rdx
  __int64 v15; // rsi
  _BYTE *v16; // rcx
  __int64 result; // rax
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // r12d
  int v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  char *v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *a2;
  v5 = (_DWORD *)*a1;
  v6 = *a2 + 0x80000000;
  if ( !*a1 )
  {
    LODWORD(v8) = v4 - 0x7FFFFFFF;
    if ( !(_DWORD)v8 )
      goto LABEL_10;
    LODWORD(v7) = 0;
    v24 = sub_186B270(0xAu);
    v9 = 2;
    v5 = (_DWORD *)(v24 + 8);
    *(_QWORD *)v24 = 2;
    *a1 = v24 + 8;
    if ( (unsigned int)v8 > 2 )
      goto LABEL_5;
    *(_DWORD *)(v24 + 4) = v8;
    v13 = (char *)(v24 + 8);
    v14 = (char *)v5 + (unsigned int)v8;
LABEL_9:
    memset(v13, 255, v14 - v13);
    v5 = (_DWORD *)*a1;
    goto LABEL_10;
  }
  v7 = (unsigned int)*(v5 - 1);
  if ( v6 < (unsigned int)v7 )
    goto LABEL_10;
  v8 = (unsigned int)(v4 - 0x7FFFFFFF);
  if ( (unsigned int)v7 >= (unsigned int)v8 )
  {
    *(v5 - 1) = v8;
    goto LABEL_10;
  }
  v9 = *(v5 - 2);
  if ( v9 >= (unsigned int)v8 )
  {
    *(v5 - 1) = v8;
    v13 = (char *)v5 + v7;
    v14 = (char *)v5 + v8;
    goto LABEL_9;
  }
  do
  {
LABEL_5:
    v10 = (3 * v9 + 1) >> 1;
    v11 = v10 + 8;
    if ( v9 + 8 >= (unsigned int)v11 || v9 >= v10 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_151CF2(v25);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v5 - 2, v11);
    v9 = v10;
    v5 = v12 + 2;
    *v12 = v10;
    *a1 = v12 + 2;
  }
  while ( v10 < (unsigned int)v8 );
  v12[1] = v8;
  v13 = (char *)v5 + (unsigned int)v7;
  v14 = (char *)v5 + (unsigned int)v8;
  if ( (_DWORD)v8 != (_DWORD)v7 )
    goto LABEL_9;
LABEL_10:
  v15 = v6;
  v16 = (char *)v5 + v6;
  result = (unsigned __int8)*v16;
  if ( (_BYTE)result == 0xFF )
  {
    v18 = (14 - v6) ^ (v6 >> 13);
    v19 = (3 - v6 - v18) ^ (v18 << 8);
    v20 = (v6 - v18 - v19) ^ (v19 >> 13);
    v21 = (v18 - v19 - v20) ^ (v20 >> 12);
    v22 = (v19 - v20 - v21) ^ (v21 << 16);
    v23 = (v20 - v21 - v22) ^ (v22 >> 5);
    *v16 = ((v23 - (v22 - v23))
          ^ (((v22 - v23 - ((v21 - v22 - v23) ^ (v23 >> 3))) ^ (((v21 - v22 - v23) ^ (v23 >> 3)) << 10)) >> 15))
         & 0x3F;
    return *(unsigned __int8 *)(*a1 + v15);
  }
  return result;
}

