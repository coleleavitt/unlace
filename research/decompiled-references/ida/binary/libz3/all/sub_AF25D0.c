__int64 __fastcall sub_AF25D0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // r13
  _QWORD *v8; // r14
  __int64 v9; // rbp
  unsigned __int8 v10; // al
  _QWORD *v11; // rdx
  unsigned int v12; // esi
  int v13; // edi
  int v15; // ebp
  __int64 v16; // rax
  int *v17; // rax
  unsigned int v18; // ebx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(__int64 **)(a2 + 40);
  if ( !v4 )
    return 1;
  v5 = &v4[*((unsigned int *)v4 - 1)];
  if ( v4 == v5 )
    return 1;
  v8 = (_QWORD *)(a2 + 64);
  while ( 1 )
  {
    v9 = *v4;
    v10 = *(_BYTE *)(*v4 + 16);
    if ( !v10 )
    {
      v11 = *(_QWORD **)(a2 + 544);
      if ( v11 )
        *((_DWORD *)v11 - 1) = 0;
      v12 = *(_DWORD *)(v9 + 20);
      v13 = *(_DWORD *)(v9 + 24);
      if ( v13 == v12 )
        goto LABEL_12;
      if ( (unsigned __int8)sub_AF07B0(v8, v12, v13, *(_DWORD *)(a2 + 192), a2) )
        break;
    }
    if ( v5 == ++v4 )
      return 1;
  }
  v10 = *(_BYTE *)(v9 + 16);
  v11 = *(_QWORD **)(a2 + 544);
LABEL_12:
  v15 = (v10 ^ 1) + 2 * *(_DWORD *)v9;
  if ( v11 )
  {
    v16 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v11 - 2) )
    {
      v18 = (unsigned int)(3 * v16 + 1) >> 1;
      v19 = 4 * v18 + 8;
      if ( 4 * (int)v16 + 8 >= (unsigned int)v19 || (unsigned int)v16 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v23, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v11 - 1, v19);
      v11 = v20 + 2;
      *v20 = v18;
      v21 = v20[1];
      *(_QWORD *)(a2 + 544) = v11;
      v17 = (int *)v11 + v21;
    }
    else
    {
      v17 = (int *)v11 + v16;
    }
  }
  else
  {
    v22 = (_QWORD *)sub_186B270(0x10u);
    *v22 = 2;
    v11 = v22 + 1;
    *(_QWORD *)(a2 + 544) = v22 + 1;
    v17 = (int *)(v22 + 1);
  }
  *v17 = v15;
  ++*((_DWORD *)v11 - 1);
  sub_AF22A0(a1, a2);
  return 0xFFFFFFFFLL;
}

