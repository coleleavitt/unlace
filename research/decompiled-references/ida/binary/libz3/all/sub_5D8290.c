__int64 __fastcall sub_5D8290(__int64 a1, __int64 a2)
{
  char **exception; // r12
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v6; // rbp
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // r12
  unsigned int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // r14d
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int v28; // r12d
  unsigned int *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // [rsp+10h] [rbp-78h]
  unsigned int v34; // [rsp+14h] [rbp-74h]
  __int64 v35; // [rsp+18h] [rbp-70h]
  __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a2 + 16);
  v6 = a2;
  v7 = *(__int64 **)(v3 + 2288);
  v8 = *(unsigned int *)(v3 + 2296);
  v9 = *(_DWORD *)(v4 + 12);
  v10 = v8 - 1;
  v8 *= 8;
  v11 = (__int64 *)((char *)v7 + v8);
  v12 = 8LL * (v9 & v10);
  v13 = &v7[(unsigned __int64)v12 / 8];
  if ( v12 == v8 )
  {
LABEL_11:
    if ( v7 != v13 )
    {
      while ( 1 )
      {
        v18 = *v7;
        if ( (unsigned __int64)*v7 > 1 )
        {
          if ( *(_DWORD *)(v18 + 12) == v9 && v4 == v18 )
            goto LABEL_19;
        }
        else if ( !v18 )
        {
          return 0;
        }
        if ( v13 == ++v7 )
          return 0;
      }
    }
    return 0;
  }
  v14 = &v7[(unsigned __int64)v12 / 8];
  while ( 1 )
  {
    v15 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
      break;
    if ( !v15 )
      return 0;
LABEL_6:
    if ( v11 == ++v14 )
      goto LABEL_11;
  }
  if ( *(_DWORD *)(v15 + 12) != v9 || v4 != v15 )
    goto LABEL_6;
LABEL_19:
  v19 = *(unsigned int *)(v6 + 24);
  if ( !(_DWORD)v19 )
    return 0;
  v20 = nullptr;
  v35 = v6 + 8 * v19;
  while ( 1 )
  {
    v21 = *(_QWORD *)(v6 + 32);
    v16 = sub_15D26C0(*(_QWORD *)(a1 + 32), v21);
    if ( (_BYTE)v16 )
      break;
    v33 = *(_DWORD *)(v21 + 16);
    v22 = v33 >> 5;
    if ( !v20 )
    {
      v24 = v22 + 1;
      v25 = (_QWORD *)sub_186B270(0x10u);
      v34 = 0;
      *v25 = 2;
      v20 = v25 + 1;
LABEL_31:
      while ( 1 )
      {
        v30 = *((_DWORD *)v20 - 2);
        if ( v30 >= v24 )
          break;
        v26 = (3 * v30 + 1) >> 1;
        v27 = 4 * v26 + 8;
        v28 = v26;
        if ( 4 * v30 + 8 >= (unsigned int)v27 || v30 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v20 - 1, v27);
        *v29 = v28;
        v20 = v29 + 2;
      }
      v23 = v33 >> 5;
      *((_DWORD *)v20 - 1) = v24;
      v31 = 4LL * v24;
      v32 = 4LL * v34;
      if ( v32 != v31 )
        memset((char *)v20 + v32, 0, v31 - v32);
      goto LABEL_34;
    }
    v34 = *((_DWORD *)v20 - 1);
    if ( v22 >= v34 )
    {
      v24 = v22 + 1;
      goto LABEL_31;
    }
    v23 = v22;
    if ( (*((_DWORD *)v20 + v22) & (1 << v33)) != 0 )
    {
      v16 = 1;
LABEL_26:
      sub_186B220(v20 - 1);
      return v16;
    }
LABEL_34:
    v6 += 8;
    *((_DWORD *)v20 + v23) |= 1 << v33;
    if ( v6 == v35 )
      goto LABEL_26;
  }
  if ( v20 )
    goto LABEL_26;
  return v16;
}

