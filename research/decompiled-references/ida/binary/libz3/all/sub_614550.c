__int64 __fastcall sub_614550(__int64 a1, __int64 a2)
{
  char **exception; // r12
  unsigned int v3; // r15d
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 *v7; // r11
  __int64 v8; // r10
  __int64 v9; // r13
  __int64 v10; // rbp
  int v11; // r12d
  __int64 *v12; // rsi
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ebp
  _QWORD *v24; // rax
  __int64 v25; // rbp
  unsigned int v26; // r12d
  _QWORD *v27; // rbx
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // al
  __int64 *i; // rax
  __int64 v37; // rdx
  unsigned int v38; // [rsp+4h] [rbp-74h]
  unsigned __int8 v39; // [rsp+4h] [rbp-74h]
  __int64 v40; // [rsp+8h] [rbp-70h]
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a2 + 56);
  if ( v3 )
    return 0;
  v4 = *(unsigned int *)(a2 + 64);
  if ( (_DWORD)v4 != *(_DWORD *)(a2 + 68) )
    return 0;
  if ( !(_DWORD)v4 )
    goto LABEL_14;
  v6 = *(unsigned int *)(a1 + 64);
  v7 = *(__int64 **)(a1 + 56);
  v8 = a2;
  v9 = a2 + 8 * v4;
  v10 = 8 * v6;
  v11 = v6 - 1;
  v12 = &v7[v6];
  do
  {
    v13 = *(_QWORD *)((*(_QWORD *)(v8 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v14 = *(_DWORD *)(v13 + 12);
    v15 = 8LL * (v11 & v14);
    v16 = &v7[(unsigned __int64)v15 / 8];
    if ( v15 == v10 )
    {
LABEL_29:
      if ( v7 != v16 )
      {
        for ( i = v7; v16 != i; ++i )
        {
          v37 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v37 + 12) == v14 && v13 == v37 )
              goto LABEL_13;
          }
          else if ( !v37 )
          {
            return 0;
          }
        }
      }
      return 0;
    }
    v17 = &v7[(unsigned __int64)v15 / 8];
    while ( 1 )
    {
      v18 = *v17;
      if ( (unsigned __int64)*v17 > 1 )
        break;
      if ( !v18 )
        return 0;
LABEL_9:
      if ( v12 == ++v17 )
        goto LABEL_29;
    }
    if ( *(_DWORD *)(v18 + 12) != v14 || v13 != v18 )
      goto LABEL_9;
LABEL_13:
    v8 += 8;
  }
  while ( v8 != v9 );
LABEL_14:
  v20 = *(_QWORD *)(a2 + 40);
  v21 = *(unsigned int *)(v20 + 24);
  if ( (_DWORD)v21 )
  {
    v40 = v20 + 8 * v21;
    v22 = *(_QWORD *)(v20 + 32);
    if ( *(_WORD *)(v22 + 4) == 1 )
    {
      v23 = *(_DWORD *)(v22 + 16);
      LOBYTE(v38) = v23;
      v24 = (_QWORD *)sub_186B270(0x10u);
      v25 = v23 >> 5;
      *v24 = 2;
      v26 = v25 + 1;
      v27 = v24 + 1;
LABEL_20:
      while ( 1 )
      {
        v31 = *((_DWORD *)v27 - 2);
        if ( v31 >= v26 )
          break;
        v28 = (3 * v31 + 1) >> 1;
        v29 = 4 * v28 + 8;
        if ( 4 * v31 + 8 >= (unsigned int)v29 || v31 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v41, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v41);
          sub_233E40((__int64)v41);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v27 - 1, v29);
        *v30 = v28;
        v27 = v30 + 2;
      }
      *((_DWORD *)v27 - 1) = v26;
      v32 = 4LL * v3;
      v33 = 4LL * v26;
      if ( v32 != v33 )
        memset((char *)v27 + v32, 0, v33 - v32);
      while ( 1 )
      {
        v20 += 8;
        *((_DWORD *)v27 + v25) |= 1 << v38;
        if ( v20 == v40 )
        {
          v35 = 1;
          goto LABEL_28;
        }
        v34 = *(_QWORD *)(v20 + 32);
        if ( *(_WORD *)(v34 + 4) != 1 )
          break;
        v3 = *((_DWORD *)v27 - 1);
        v38 = *(_DWORD *)(v34 + 16);
        v25 = v38 >> 5;
        if ( (unsigned int)v25 >= v3 )
        {
          v26 = v25 + 1;
          goto LABEL_20;
        }
        if ( (*((_DWORD *)v27 + v25) & (1 << v38)) != 0 )
          goto LABEL_27;
      }
      if ( v27 )
      {
LABEL_27:
        v35 = 0;
LABEL_28:
        v39 = v35;
        sub_186B220(v27 - 1);
        return v39;
      }
    }
    return 0;
  }
  return 1;
}

