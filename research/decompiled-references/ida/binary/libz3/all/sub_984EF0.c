__int64 __fastcall sub_984EF0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned int *v4; // rax
  int v5; // edx
  int v6; // edi
  __int64 v7; // rcx
  int v8; // edx
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // r8d
  __int64 v13; // r9
  unsigned __int64 *v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int *v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int *v24; // rsi
  __int64 v25; // r15
  int v26; // r14d
  __int64 v27; // r13
  char v28; // cl
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int *v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int *v39; // rdx
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rcx
  unsigned int *v44; // rdx
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  unsigned int v47; // [rsp+Ch] [rbp-6Ch]
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(unsigned int **)(a1 + 344);
  if ( v4 )
  {
    v5 = *(v4 - 2);
    *(v4 - 1) = 0;
    if ( !v5 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v48, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v48);
      sub_233E40((__int64)v48);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
    v18 = (_QWORD *)sub_186B270(0x10u);
    *v18 = 2;
    v4 = (unsigned int *)(v18 + 1);
    *(_QWORD *)(a1 + 344) = v4;
  }
  v6 = *(v4 - 1);
  v7 = *(_QWORD *)(a1 + 336);
  *v4 = a2 >> 1;
  v8 = v6 + 1;
  *(v4 - 1) = v6 + 1;
  if ( v7 )
    v9 = *(_DWORD *)(v7 - 4);
  else
    v9 = 0;
  v47 = *(_DWORD *)(a1 + 96);
  if ( v6 == -1 )
    return 1;
  while ( 1 )
  {
    v10 = (unsigned int)(v8 - 1);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = v4[v10];
    *(v4 - 1) = v10;
    v13 = *(_QWORD *)(v11 + 8872);
    v14 = (unsigned __int64 *)(v13 + 16LL * v12);
    v15 = *v14;
    v16 = *v14 & 7;
    if ( (_DWORD)v16 == 2 )
    {
      if ( *(_DWORD *)(v11 + 9468) < (v14[1] & 0xFFFFFF) )
      {
        v19 = *(_QWORD *)(a1 + 336);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 - 4);
          if ( v9 < v20 )
          {
            v21 = (unsigned int *)(v19 + 4LL * v9);
            v22 = v19 + 4 * (v9 + (unsigned __int64)(v20 - 1 - v9)) + 4;
            do
            {
              v23 = *v21++;
              *(_BYTE *)(v13 + 16 * v23 + 11) &= ~1u;
            }
            while ( (unsigned int *)v22 != v21 );
          }
          *(_DWORD *)(v19 - 4) = v9;
        }
        goto LABEL_41;
      }
      goto LABEL_11;
    }
    if ( (unsigned int)v16 <= 2 )
      break;
    if ( (_DWORD)v16 == 3 )
    {
      if ( (*((_BYTE *)v14 + 11) & 2) != 0 || !(unsigned __int8)sub_984CA0(a1, v15 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v31 = *(_QWORD *)(a1 + 336);
        if ( !v31 )
          goto LABEL_41;
        v32 = *(_DWORD *)(v31 - 4);
        if ( v9 < v32 )
        {
          v33 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
          v34 = (unsigned int *)(v31 + 4LL * v9);
          v35 = v31 + 4 * (v9 + (unsigned __int64)(v32 - 1 - v9)) + 4;
          do
          {
            v36 = *v34++;
            *(_BYTE *)(v33 + 16 * v36 + 11) &= ~1u;
          }
          while ( v34 != (unsigned int *)v35 );
        }
        goto LABEL_40;
      }
      goto LABEL_10;
    }
LABEL_11:
    v8 = *(v4 - 1);
    if ( !v8 )
      return 1;
  }
  if ( (_DWORD)v16 )
  {
    if ( !(unsigned __int8)sub_983DC0(a1, v15 >> 3) )
    {
      v31 = *(_QWORD *)(a1 + 336);
      if ( v31 )
      {
        v42 = *(_DWORD *)(v31 - 4);
        if ( v9 < v42 )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
          v44 = (unsigned int *)(v31 + 4LL * v9);
          v45 = v31 + 4 * (v9 + (unsigned __int64)(v42 - 1 - v9)) + 4;
          do
          {
            v46 = *v44++;
            *(_BYTE *)(v43 + 16 * v46 + 11) &= ~1u;
          }
          while ( (unsigned int *)v45 != v44 );
        }
LABEL_40:
        *(_DWORD *)(v31 - 4) = v9;
        goto LABEL_41;
      }
      goto LABEL_41;
    }
    goto LABEL_10;
  }
  v24 = (unsigned int *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  v25 = *v24;
  v26 = v24[3] >> 1 == v12;
  v27 = 0;
  if ( !(_DWORD)v25 )
  {
LABEL_24:
    v28 = *((_BYTE *)v24 + 7);
    if ( (v28 & 0x40) != 0 )
    {
      v29 = (__int64)&v24[(v24[1] & 0xFFFFFF) + 2];
      if ( (v28 & 3u) - 2 < 2 )
        v29 = (__int64)&v24[(v24[1] & 0xFFFFFF) + 3];
      v30 = (__int64 *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*((_BYTE *)v24 + 7) & 0x20) != 0 )
        ++v30;
      if ( *v30 && !(unsigned __int8)sub_984CA0(a1, *v30) )
      {
        sub_982A90(a1, v9, v47);
        return 0;
      }
    }
LABEL_10:
    v4 = *(unsigned int **)(a1 + 344);
    if ( !v4 )
      return 1;
    goto LABEL_11;
  }
  while ( v26 == (_DWORD)v27 || (unsigned __int8)sub_983DC0(a1, v24[v27 + 2] ^ 1) )
  {
    if ( ++v27 == v25 )
      goto LABEL_24;
  }
  v31 = *(_QWORD *)(a1 + 336);
  if ( v31 )
  {
    v37 = *(_DWORD *)(v31 - 4);
    if ( v9 < v37 )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
      v39 = (unsigned int *)(v31 + 4LL * v9);
      v40 = v31 + 4 * (v9 + (unsigned __int64)(v37 - 1 - v9)) + 4;
      do
      {
        v41 = *v39++;
        *(_BYTE *)(v38 + 16 * v41 + 11) &= ~1u;
      }
      while ( (unsigned int *)v40 != v39 );
    }
    goto LABEL_40;
  }
LABEL_41:
  sub_9827B0(a1, v47);
  return 0;
}

