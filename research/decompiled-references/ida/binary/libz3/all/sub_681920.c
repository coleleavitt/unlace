__int64 __fastcall sub_681920(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int **v8; // r13
  __int64 v9; // rax
  unsigned int **v10; // rbx
  __int64 v11; // rsi
  int v12; // eax
  _QWORD *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r15
  unsigned int v18; // eax
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // edx
  _QWORD *v29; // rax
  char **exception; // rbp
  __int64 v31; // rdx
  unsigned int v32; // [rsp+4h] [rbp-74h]
  __int64 v34; // [rsp+10h] [rbp-68h] BYREF
  __int64 v35[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)a1 = a3;
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  *(_DWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 8) = a4;
  v8 = (unsigned int **)(a4 + 8);
  v9 = 2LL * a4[6];
  v10 = (unsigned int **)&a4[v9 + 8];
  if ( v9 * 4 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
      v15 = sub_67B850(*(__int64 **)(a2 + 16), *v8);
      sub_1374250(&v34, v14, v15);
      v16 = *(_QWORD **)(a2 + 40);
      v17 = v34;
      if ( !v16 )
        break;
      v18 = *((_DWORD *)v16 - 1);
      if ( v18 == *((_DWORD *)v16 - 2) )
      {
        v19 = (3 * v18 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_107EF6(v35, "Overflow encountered when expanding vector", v31);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (3 * v18 + 1) >> 1;
        v21 = (unsigned int *)sub_186B300(v16 - 1, v20);
        v22 = v21[1];
        ++v8;
        *(_QWORD *)(a2 + 40) = v21 + 2;
        *v21 = v32;
        *(_QWORD *)&v21[2 * v22 + 2] = v17;
        v21[1] = v22 + 1;
        if ( v10 == v8 )
          goto LABEL_12;
      }
      else
      {
        v11 = v18;
        v12 = v18 + 1;
        v13 = &v16[v11];
LABEL_6:
        ++v8;
        *v13 = v17;
        *((_DWORD *)v16 - 1) = v12;
        if ( v10 == v8 )
          goto LABEL_12;
      }
    }
    v29 = (_QWORD *)sub_186B270(0x18u);
    v16 = v29 + 1;
    *v29 = 2;
    v12 = 1;
    *(_QWORD *)(a2 + 40) = v16;
    v13 = v16;
    goto LABEL_6;
  }
LABEL_12:
  v23 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
  v24 = sub_67B850(*(__int64 **)(a2 + 16), a4);
  sub_1374250(v35, v23, v24);
  v25 = *(_QWORD *)(a2 + 40);
  v26 = v35[0];
  if ( !v25 || (v27 = *(_DWORD *)(v25 - 4), v27 == *(_DWORD *)(v25 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a2 + 40));
    v25 = *(_QWORD *)(a2 + 40);
    v27 = *(_DWORD *)(v25 - 4);
  }
  *(_QWORD *)(v25 + 8LL * v27) = v26;
  *(_DWORD *)(v25 - 4) = v27 + 1;
  return a1;
}

